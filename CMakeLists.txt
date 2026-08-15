#
# CMake build for the colm suite (colm, libfsm, ragel).
#
# This is an alternative to the autotools build. It reads the package version
# information out of configure.ac so that there is a single place where the
# version numbers are maintained.
#

cmake_minimum_required(VERSION 3.16)

#
# An in-source build would collide with the files the autotools build leaves
# behind (config.h, version.h, Makefile, ...). Require a separate build tree.
#
if(CMAKE_SOURCE_DIR STREQUAL CMAKE_BINARY_DIR)
	message(FATAL_ERROR
		"In-source builds are not supported. Run cmake from a separate "
		"build directory, eg: cmake -S . -B build")
endif()

#
# Pull the version information out of configure.ac.
#
file(READ "${CMAKE_CURRENT_LIST_DIR}/configure.ac" _configure_ac)

# AC_INIT([colm-suite],[0.15.0-pre.1])
set(_ac_init_re "AC_INIT\\(\\[?([A-Za-z0-9_.+-]+)\\]?,[ \t]*\\[?([A-Za-z0-9_.+-]+)\\]?")
if(NOT _configure_ac MATCHES "${_ac_init_re}")
	message(FATAL_ERROR "could not read AC_INIT from configure.ac")
endif()
set(COLM_PACKAGE "${CMAKE_MATCH_1}")
set(COLM_VERSION "${CMAKE_MATCH_2}")

# The full version can carry a pre-release suffix. project() wants digits only.
string(REGEX MATCH "^[0-9]+(\\.[0-9]+)*" COLM_VERSION_NUMERIC "${COLM_VERSION}")

if(NOT _configure_ac MATCHES "[\r\n]PUBDATE=\"([^\"]*)\"")
	message(FATAL_ERROR "could not read PUBDATE from configure.ac")
endif()
set(COLM_PUBDATE "${CMAKE_MATCH_1}")

if(NOT _configure_ac MATCHES "RAGEL_VERSION=\"([^\"]*)\"")
	message(FATAL_ERROR "could not read RAGEL_VERSION from configure.ac")
endif()
set(RAGEL_VERSION "${CMAKE_MATCH_1}")
string(REGEX MATCH "^[0-9]+(\\.[0-9]+)*" RAGEL_VERSION_NUMERIC "${RAGEL_VERSION}")

if(NOT _configure_ac MATCHES "RAGEL_PUBDATE=\"([^\"]*)\"")
	message(FATAL_ERROR "could not read RAGEL_PUBDATE from configure.ac")
endif()
set(RAGEL_PUBDATE "${CMAKE_MATCH_1}")

project(colm-suite
	VERSION ${COLM_VERSION_NUMERIC}
	LANGUAGES C CXX)

message(STATUS "colm ${COLM_VERSION} (${COLM_PUBDATE}), "
	"ragel ${RAGEL_VERSION} (${RAGEL_PUBDATE})")

#
# Options.
#
option(COLM_MAKE_INSTALL
	"Generate install rules for the colm suite" ON)

option(COLM_BUILD_EXAMPLES
	"Build the ragel examples" OFF)

if(WIN32)
	set(_default_build_standalone ON)
else()
	set(_default_build_standalone OFF)
endif()

option(BUILD_STANDALONE
	"Make the executables as standalone as possible"
	${_default_build_standalone})

#
# All executables land in one directory. The ragel driver locates the
# host-language backends (ragel-c, ragel-go, ...) relative to its own argv[0],
# so they must be siblings.
#
if(NOT DEFINED CMAKE_RUNTIME_OUTPUT_DIRECTORY)
	set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}/bin")
endif()

if(NOT CMAKE_POSITION_INDEPENDENT_CODE)
	set(CMAKE_POSITION_INDEPENDENT_CODE ON)
endif()

set(CMAKE_C_STANDARD 99)
set(CMAKE_CXX_STANDARD 11)

include(GNUInstallDirs)

#
# When the libraries are installed outside the system library path the
# executables need an rpath to find them, the way libtool arranges it for the
# autotools build.
#
list(FIND CMAKE_PLATFORM_IMPLICIT_LINK_DIRECTORIES
	"${CMAKE_INSTALL_FULL_LIBDIR}" _libdir_is_system)
if(_libdir_is_system EQUAL -1)
	set(CMAKE_INSTALL_RPATH "${CMAKE_INSTALL_FULL_LIBDIR}")
endif()

#
# Configuration checks. These mirror the ones performed by configure.ac and
# feed src/config.h.cmake.in and src/defs.h.cmake.in.
#
include(CheckTypeSize)
check_type_size("int" SIZEOF_INT)
check_type_size("long" SIZEOF_LONG)
check_type_size("unsigned long" SIZEOF_UNSIGNED_LONG)
check_type_size("unsigned long long" SIZEOF_UNSIGNED_LONG_LONG)
check_type_size("void *" SIZEOF_VOID_P)

include(CheckIncludeFile)
check_include_file(sys/mman.h HAVE_SYS_MMAN_H)
check_include_file(sys/wait.h HAVE_SYS_WAIT_H)
check_include_file(unistd.h HAVE_UNISTD_H)

include(CheckSymbolExists)
check_symbol_exists(fopencookie "stdio.h" HAVE_FOPENCOOKIE)

if("${CMAKE_BUILD_TYPE}" MATCHES "[Dd][Ee][Bb]")
	set(DEBUG 1)
endif()

# Kept for the benefit of the generated headers.
set(VERSION "${COLM_VERSION}")
set(PUBDATE "${COLM_PUBDATE}")

# Definitions needed by src/main.cc when it drives the C compiler.
set(common_COMPILE_DEFINITIONS
	PREFIX="${CMAKE_INSTALL_PREFIX}"
	INCLUDEDIR="${CMAKE_INSTALL_FULL_INCLUDEDIR}"
	LIBDIR="${CMAKE_INSTALL_FULL_LIBDIR}")

add_subdirectory(src)

if(COLM_BUILD_EXAMPLES)
	add_subdirectory(examples)
endif()

if(COLM_MAKE_INSTALL)
	# dist_doc_DATA in Makefile.am
	install(FILES colm.vim ragel.vim
		DESTINATION "${CMAKE_INSTALL_DOCDIR}")
endif()
