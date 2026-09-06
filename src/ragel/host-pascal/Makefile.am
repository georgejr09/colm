if INSTALL_RAGEL
bin_PROGRAMS = ragel-pascal
data_DATA = out-pascal.lm
else
noinst_PROGRAMS = ragel-pascal
endif

AUTOMAKE_OPTIONS = nostdinc

ragel_pascal_CPPFLAGS = -I$(top_srcdir)/src/aapl -I$(top_srcdir)/src/ragel \
	$(LIBFSM_CPPFLAGS) $(LIBCOLM_CPPFLAGS)

dist_ragel_pascal_SOURCES = main.cc rlhc.c

nodist_ragel_pascal_SOURCES = \
	rlparse.c rlreduce.cc

ragel_pascal_LDADD = $(LIBFSM_LA) $(LIBCOLM_LA) ../libragel.la 

BUILT_SOURCES = rlparse.c rlreduce.cc rlhc.c

CLEANFILES = rlparse.pack rlparse.c rlreduce.cc rlhc.c

EXTRA_DIST = rlparse.lm out-pascal.lm

LM_DEPS = ../ragel.lm ../rlreduce.lm

rlparse.pack: rlparse.lm $(COLM) $(COLM_WRAP) $(LM_DEPS)
	$(COLM_WRAP) -c -I$(top_srcdir)/src/ragel -b rlparsePascal -o $@ -p rlparse.c -m rlreduce.cc $<

rlparse.c: rlparse.pack
	$(COLM_WRAP) -o $@ $<

rlreduce.cc: rlparse.pack
	$(COLM_WRAP) -o $@ $<

rlhc.c: $(COLM_SHARE)/rlhc-pascal.lm $(COLM_SHARE)/ril.lm $(COLM) $(COLM_WRAP)
	$(COLM) -c -I $(COLM_SHARE) -b rlhcPascal -o $@ $<
