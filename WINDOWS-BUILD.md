# Building colm + ragel on Windows

This documents how to build the Colm Suite (colm, libfsm, ragel) on Windows,
and the gotchas that make it non-trivial. The upstream CI is Linux-only, and
the bootstrap chain (the Colm VM compiling its own `.lm` grammars) crashes on
native Windows.

## TL;DR — the working recipe

1. Install **MSYS2** (the POSIX environment where the autotools build works).
2. Install the toolchain: `pacman -S --needed base-devel mingw-w64-ucrt-x86_64-toolchain autoconf automake libtool`
3. Build with the upstream-blessed autotools path:
   ```bash
   export PATH=/ucrt64/bin:$PATH   # gcc/g++ live here, NOT on default PATH
   ./autogen.sh
   ./configure
   make -j4
   ```
4. **Skip the fragile bootstrap** by supplying pre-generated parser files
   (see "The bootstrap crash" below).

## The bootstrap crash (root cause)

`bootstrap1 -c ... colm.lm` (and `colm` compiling any `.lm`) crashes with an
access violation (`0xC0000005`). The crash is in the Colm VM:

```
SIGSEGV in colm_tree_upref()
  <- colm_vlist_detach_head()
  <- colm_execute_code()
  <- colm_execute()
  <- colm_run_program()
  <- LoadInit::go()
```

`colm_tree_upref()` dereferences an invalid `tree_t*` (freed/corrupted memory).
It is ASLR-dependent — gdb masks it by default (run gdb with
`set disable-randomization off` to reproduce). It is **not** a stack overflow,
**not** CRLF line endings, **not** optimization level, and **not** UCRT-vs-MSVCRT.

The community workaround (see `PolarGoose/Ragel-for-Windows`, upstream issue
`adrian-thurston/colm-suite#196`) is to **pre-generate the bootstrap parsers on
Linux/WSL and check them in**, so the Colm VM never runs on Windows.

## Pre-generated files to supply

Copy these from a prior working build (or generate on Linux) into the tree:

- `src/gen/`: `parse1.c parse2.c parse3.c if1.h if1.cc if2.h if2.cc if3.h if3.cc`
  and `bootstrap1.pack bootstrap2.pack bootstrap3.pack`
- `src/ragel/`: `parse.c parse.pack rlreduce.cc parsedata.cc parsedata.h parsetree.cc parsetree.h`

Then defeat make's dependency ordering with future timestamps:

```bash
touch -t 203001010000 src/gen/*.pack src/ragel/parse.pack
touch -t 203101010000 src/gen/parse*.c src/gen/if*.h src/gen/if*.cc \
                      src/ragel/parse.c src/ragel/rlreduce.cc
```

## Gotchas

### `colm-wrap` "tar: Not found in archive" / empty `.pack` stub
- **Symptom:** `make` fails at `./colm-wrap -o gen/if1.h gen/bootstrap1.pack`
  with `tar: gen/if1.h.pack: Not found in archive`. The `.pack` is 10240 bytes
  and `file` reports `data` (not `POSIX tar archive`).
- **Cause:** `make` ran the crashing `bootstrap1`/`colm`, producing an empty
  `.pack` stub. The `.pack` is an intermediate tar archive; the real
  pre-generated `.c/.h/.cc` files are what matter.
- **Fix:** re-copy the valid `.pack` files, then set future timestamps.
- **Lesson:** `.pack` files are clobbered to empty stubs on **every** failed
  `make`. Order matters: re-copy valid `.pack` **after** any failed `make`,
  **then** `touch` future timestamps.

### `make` keeps re-running the bootstrap (timestamp ordering)
- **Symptom:** even with pre-generated files present, `make` re-runs
  `bootstrap1 -c ... colm.lm` and crashes again.
- **Cause:** `make` compares mtimes; the freshly relinked `bootstrap1.exe` is
  newer than `bootstrap2.pack`, so `make` thinks the pack is stale.
- **Fix:** future timestamps (above) on both the `.pack` and the extracted
  `.c/.h/.cc` files, in dependency order.
- **Lesson:** future timestamps are the robust way to defeat make's dependency
  ordering for a "skip the codegen step" workaround.

### libtool wrapper vs real binary
- **Symptom:** `src/colm.exe` is tiny (~34 KB) and `--version` prints nothing
  or crashes with `0xC0000139` (DLL not found).
- **Cause:** the top-level `.exe` is a libtool wrapper; the real binary is in
  `.libs/`.
- **Fix:** use `src/.libs/colm.exe` and `src/ragel/.libs/ragel.exe`, with the
  DLL dirs + MSYS2 `/ucrt64/bin` on PATH.
- **Lesson:** with libtool builds, look in `.libs/` for the real executable,
  and run `objdump -p <exe> | grep 'DLL Name'` to enumerate runtime DLL deps.

### git CRLF line endings
- **Symptom:** `core.autocrlf=true` (system gitconfig) converts LF→CRLF on
  checkout; the Colm lexer does not treat CR as whitespace, so the first token
  fails to lex ("parse error" at the start of every `.lm`).
- **Fix:** add a `.gitattributes` pinning `*.lm text eol=lf` (and other text
  extensions), set `git config core.autocrlf false` locally, then delete and
  re-checkout the files (git skips rewriting files it thinks are unchanged).

## Result

`colm.exe` (0.15.0) and `ragel.exe` (7.1.0) build and run. The host-language
backends (host-ruby, host-c, host-go, …) each need their own pre-generated
`rlparse.c`/`rlreduce.cc` and are optional for the core binaries.
