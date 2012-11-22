/*---------------------------------------------------------------------------
 * This is mklib version 7.3.1 for C6000 compiler  
 * run-time support library                                                  
 *---------------------------------------------------------------------------*/

/*---------------------------------------------------------------------------
 * This source code is automatically generated.  You should not need to      
 * modify it if you have not added files to the compiler RTS library.        
 *---------------------------------------------------------------------------*/

/*--------------------------------------------------------------------------- 
 * This source code is specific to compiler RTS library version 7.3.1.  
 * It uses a Makefile which understands which files belong in each version of
 * the library, and what extra options are needed for each variant of the RTS.
 * The Makefile uses 'make' variables to activate major feature clusters.
 * This source code and the Makefile share knowledge of these groups.  The
 * format of the Makefile, as well as the implementation of this source code,
 * is subject to change without notice.
 *---------------------------------------------------------------------------*/ 

#include <stdio.h>
#include <assert.h>
#include <string>
#include <sstream>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>

using namespace std;

const char *isa = "C6000";
const char *version = "7.3.1";
int         buildmodel = 2011;
const char *c_dir_name = "C6X_C_DIR";

#define MAX_PREDICATE 9

struct library_t { 
    const char *name;
    const char *predicates[MAX_PREDICATE+1];
};

typedef struct library_t library_t;

library_t LIBRARIES[] = {
    { "rts67plus.lib", { "C67P","C6000","NOT_VENC_ASM" } },
    { "rtstesla_le_elf40_eh.lib", { "C_MEMCPY","EXCEPTIONS","EABI","C6XABI","TESLA","EABI_TDEH","ELF40","NOT_VENC_ASM" } },
    { "rts6700_eh.lib", { "C6700","FULL_PORTABLE_EH","EXCEPTIONS","NOT_VENC_ASM","C6000" } },
    { "rts67pluse_eh.lib", { "FULL_PORTABLE_EH","C67P","BIG_ENDIAN","EXCEPTIONS","NOT_VENC_ASM","C6000" } },
    { "rts6200_eh.lib", { "FULL_PORTABLE_EH","EXCEPTIONS","NOT_VENC_ASM","C6000" } },
    { "rts6200_elf40_eh.lib", { "C6XABI","EABI_TDEH","ELF40","EXCEPTIONS","NOT_VENC_ASM","C6000","EABI" } },
    { "rts64plus_elf40.lib", { "C6XABI","C64P","ELF40","NOT_VENC_ASM","C6000","EABI" } },
    { "rts64plus_elf40_eh.lib", { "EXCEPTIONS","EABI","C6XABI","EABI_TDEH","C64P","ELF40","NOT_VENC_ASM","C6000" } },
    { "rts6400e_elf40.lib", { "C6XABI","C6400","BIG_ENDIAN","ELF40","NOT_VENC_ASM","C6000","EABI" } },
    { "rts6700e_eh.lib", { "C6700","FULL_PORTABLE_EH","BIG_ENDIAN","EXCEPTIONS","NOT_VENC_ASM","C6000" } },
    { "rts6600e_coff.lib", { "COFFABI","BIG_ENDIAN","C6600","NOT_VENC_ASM","C6000" } },
    { "rtstesla_le_elf_eh.lib", { "C6XABI","TESLA","EABI_TDEH","C_MEMCPY","EXCEPTIONS","NOT_VENC_ASM","EABI" } },
    { "rts6600_elf40.lib", { "C6XABI","ELF40","C6600","NOT_VENC_ASM","C6000","EABI" } },
    { "rts6200e.lib", { "BIG_ENDIAN","C6000","NOT_VENC_ASM" } },
    { "rts64pluse_elf_no_parallel_loads_eh.lib", { "BIG_ENDIAN","EXCEPTIONS","EABI","NO_PARALLEL_LOADS","C6XABI","EABI_TDEH","C64P","C6000","NOT_VENC_ASM" } },
    { "rtstesla_be_elf.lib", { "C6XABI","TESLA","BIG_ENDIAN","C_MEMCPY","NOT_VENC_ASM","EABI" } },
    { "rts6400e_elf.lib", { "C6XABI","C6400","BIG_ENDIAN","NOT_VENC_ASM","C6000","EABI" } },
    { "rts6200e_elf40.lib", { "C6XABI","BIG_ENDIAN","ELF40","NOT_VENC_ASM","C6000","EABI" } },
    { "rts6740e_elf_eh.lib", { "BIG_ENDIAN","EXCEPTIONS","EABI","C6740","C6XABI","EABI_TDEH","NOT_VENC_ASM","C6000" } },
    { "rts64plus_elf_no_parallel_loads_eh.lib", { "EXCEPTIONS","EABI","NO_PARALLEL_LOADS","C6XABI","EABI_TDEH","C64P","NOT_VENC_ASM","C6000" } },
    { "rts6400_elf_eh.lib", { "C6XABI","C6400","EABI_TDEH","EXCEPTIONS","NOT_VENC_ASM","C6000","EABI" } },
    { "rts67plus_elf40.lib", { "C6XABI","C67P","ELF40","NOT_VENC_ASM","C6000","EABI" } },
    { "rts64pluse_eh.lib", { "FULL_PORTABLE_EH","BIG_ENDIAN","C64P","EXCEPTIONS","NOT_VENC_ASM","C6000" } },
    { "rts64pluse_elf_eh.lib", { "BIG_ENDIAN","EXCEPTIONS","EABI","C6XABI","EABI_TDEH","C64P","NOT_VENC_ASM","C6000" } },
    { "rts6200v_eh.lib", { "FULL_PORTABLE_EH","VENC","NOASM_RTS","C_MEMCPY","EXCEPTIONS" } },
    { "rts6600_coff_eh.lib", { "FULL_PORTABLE_EH","COFFABI","C6600","EXCEPTIONS","NOT_VENC_ASM","C6000" } },
    { "rts6200e_eh.lib", { "FULL_PORTABLE_EH","BIG_ENDIAN","EXCEPTIONS","NOT_VENC_ASM","C6000" } },
    { "rts67pluse_elf40_eh.lib", { "C67P","BIG_ENDIAN","EXCEPTIONS","EABI","C6XABI","EABI_TDEH","ELF40","C6000","NOT_VENC_ASM" } },
    { "rts6740e.lib", { "BIG_ENDIAN","C6000","NOT_VENC_ASM","C6740" } },
    { "rtstesla_le_coff.lib", { "TESLA","COFFABI","C_MEMCPY","NOT_VENC_ASM" } },
    { "rts67plus_eh.lib", { "FULL_PORTABLE_EH","C67P","EXCEPTIONS","NOT_VENC_ASM","C6000" } },
    { "rts6600e_elf40.lib", { "C6XABI","BIG_ENDIAN","ELF40","C6600","NOT_VENC_ASM","C6000","EABI" } },
    { "rts6700.lib", { "C6700","C6000","NOT_VENC_ASM" } },
    { "rtstesla_le_elf40.lib", { "C6XABI","TESLA","C_MEMCPY","ELF40","NOT_VENC_ASM","EABI" } },
    { "rts67pluse.lib", { "C67P","BIG_ENDIAN","NOT_VENC_ASM","C6000" } },
    { "rts67pluse_elf_eh.lib", { "C67P","BIG_ENDIAN","EXCEPTIONS","EABI","C6XABI","EABI_TDEH","NOT_VENC_ASM","C6000" } },
    { "rtscgemv_eh.lib", { "FULL_PORTABLE_EH","VENC","NOASM_RTS","C_MEMCPY","EXCEPTIONS","CGEM" } },
    { "rts6400_eh.lib", { "FULL_PORTABLE_EH","C6400","EXCEPTIONS","NOT_VENC_ASM","C6000" } },
    { "rts6200v.lib", { "VENC","NOASM_RTS","C_MEMCPY" } },
    { "rts6700e_elf40.lib", { "C6700","C6XABI","BIG_ENDIAN","ELF40","NOT_VENC_ASM","C6000","EABI" } },
    { "rts6400.lib", { "C6400","C6000","NOT_VENC_ASM" } },
    { "rts64pluse.lib", { "BIG_ENDIAN","C64P","NOT_VENC_ASM","C6000" } },
    { "rtstesla_be_coff_eh.lib", { "FULL_PORTABLE_EH","TESLA","COFFABI","BIG_ENDIAN","C_MEMCPY","EXCEPTIONS","NOT_VENC_ASM" } },
    { "rts6400e_elf_eh.lib", { "C6400","BIG_ENDIAN","EXCEPTIONS","EABI","C6XABI","EABI_TDEH","NOT_VENC_ASM","C6000" } },
    { "rts6200e_elf40_eh.lib", { "BIG_ENDIAN","EXCEPTIONS","EABI","C6XABI","EABI_TDEH","ELF40","NOT_VENC_ASM","C6000" } },
    { "rts6600e_coff_eh.lib", { "FULL_PORTABLE_EH","COFFABI","BIG_ENDIAN","C6600","EXCEPTIONS","NOT_VENC_ASM","C6000" } },
    { "rts6740_elf40_eh.lib", { "EXCEPTIONS","EABI","C6740","C6XABI","EABI_TDEH","ELF40","NOT_VENC_ASM","C6000" } },
    { "rts6400_elf40.lib", { "C6XABI","C6400","ELF40","NOT_VENC_ASM","C6000","EABI" } },
    { "rts6400e.lib", { "C6400","BIG_ENDIAN","NOT_VENC_ASM","C6000" } },
    { "rts6740_elf.lib", { "C6XABI","C6000","NOT_VENC_ASM","EABI","C6740" } },
    { "rts64pluse_elf40.lib", { "C6XABI","BIG_ENDIAN","C64P","ELF40","NOT_VENC_ASM","C6000","EABI" } },
    { "rtstesla_be_elf40.lib", { "C6XABI","TESLA","BIG_ENDIAN","C_MEMCPY","ELF40","NOT_VENC_ASM","EABI" } },
    { "rts67pluse_elf.lib", { "C6XABI","C67P","BIG_ENDIAN","NOT_VENC_ASM","C6000","EABI" } },
    { "rtstesla_be_coff.lib", { "TESLA","COFFABI","BIG_ENDIAN","C_MEMCPY","NOT_VENC_ASM" } },
    { "rts64plus_eh.lib", { "FULL_PORTABLE_EH","C64P","EXCEPTIONS","NOT_VENC_ASM","C6000" } },
    { "rts6740_elf40.lib", { "C6XABI","ELF40","NOT_VENC_ASM","C6000","EABI","C6740" } },
    { "rts64plus_elf_eh.lib", { "C6XABI","EABI_TDEH","C64P","EXCEPTIONS","NOT_VENC_ASM","C6000","EABI" } },
    { "rts6740e_eh.lib", { "FULL_PORTABLE_EH","BIG_ENDIAN","EXCEPTIONS","NOT_VENC_ASM","C6000","C6740" } },
    { "rts6740e_elf40_eh.lib", { "BIG_ENDIAN","EXCEPTIONS","EABI","C6740","C6XABI","EABI_TDEH","ELF40","C6000","NOT_VENC_ASM" } },
    { "rts6400_elf.lib", { "C6XABI","C6400","NOT_VENC_ASM","C6000","EABI" } },
    { "rtstesla_le_elf.lib", { "C6XABI","TESLA","C_MEMCPY","NOT_VENC_ASM","EABI" } },
    { "rts64pluse_elf40_eh.lib", { "BIG_ENDIAN","EXCEPTIONS","EABI","C6XABI","EABI_TDEH","C64P","ELF40","C6000","NOT_VENC_ASM" } },
    { "rts64plusv.lib", { "VENC","NOASM_RTS","C64P","C_MEMCPY" } },
    { "rtscgemv.lib", { "VENC","NOASM_RTS","C_MEMCPY","CGEM" } },
    { "rts64plus.lib", { "C64P","C6000","NOT_VENC_ASM" } },
    { "rts67plus_elf40_eh.lib", { "C67P","EXCEPTIONS","EABI","C6XABI","EABI_TDEH","ELF40","NOT_VENC_ASM","C6000" } },
    { "rts64pluse_elf_no_parallel_loads.lib", { "C6XABI","BIG_ENDIAN","C64P","NOT_VENC_ASM","C6000","NO_PARALLEL_LOADS","EABI" } },
    { "rts6740e_elf.lib", { "C6XABI","BIG_ENDIAN","NOT_VENC_ASM","C6000","EABI","C6740" } },
    { "rts6600_elf_eh.lib", { "C6XABI","EABI_TDEH","C6600","EXCEPTIONS","NOT_VENC_ASM","C6000","EABI" } },
    { "rts6700e_elf.lib", { "C6700","C6XABI","BIG_ENDIAN","NOT_VENC_ASM","C6000","EABI" } },
    { "rts6200e_elf_eh.lib", { "C6XABI","BIG_ENDIAN","EABI_TDEH","EXCEPTIONS","NOT_VENC_ASM","C6000","EABI" } },
    { "rts6740.lib", { "C6000","NOT_VENC_ASM","C6740" } },
    { "rts67plus_elf_eh.lib", { "C6XABI","C67P","EABI_TDEH","EXCEPTIONS","NOT_VENC_ASM","C6000","EABI" } },
    { "rts6200_elf.lib", { "C6XABI","C6000","NOT_VENC_ASM","EABI" } },
    { "rts67plus_elf.lib", { "C6XABI","C67P","NOT_VENC_ASM","C6000","EABI" } },
    { "rts6600_elf40_eh.lib", { "C6600","EXCEPTIONS","EABI","C6XABI","EABI_TDEH","ELF40","NOT_VENC_ASM","C6000" } },
    { "rtstesla_be_elf_eh.lib", { "BIG_ENDIAN","C_MEMCPY","EXCEPTIONS","EABI","C6XABI","TESLA","EABI_TDEH","NOT_VENC_ASM" } },
    { "rtstesla_be_elf40_eh.lib", { "BIG_ENDIAN","C_MEMCPY","EXCEPTIONS","EABI","C6XABI","TESLA","EABI_TDEH","ELF40","NOT_VENC_ASM" } },
    { "rts6400e_eh.lib", { "FULL_PORTABLE_EH","C6400","BIG_ENDIAN","EXCEPTIONS","NOT_VENC_ASM","C6000" } },
    { "rts6400e_elf40_eh.lib", { "C6400","BIG_ENDIAN","EXCEPTIONS","EABI","C6XABI","EABI_TDEH","ELF40","C6000","NOT_VENC_ASM" } },
    { "rts64plusv_eh.lib", { "FULL_PORTABLE_EH","VENC","NOASM_RTS","C64P","C_MEMCPY","EXCEPTIONS" } },
    { "rts64pluse_elf.lib", { "C6XABI","BIG_ENDIAN","C64P","NOT_VENC_ASM","C6000","EABI" } },
    { "rts67pluse_elf40.lib", { "C6XABI","C67P","BIG_ENDIAN","ELF40","NOT_VENC_ASM","C6000","EABI" } },
    { "rts6740e_elf40.lib", { "C6XABI","BIG_ENDIAN","ELF40","NOT_VENC_ASM","C6000","EABI","C6740" } },
    { "rts6700_elf40_eh.lib", { "C6700","EXCEPTIONS","EABI","C6XABI","EABI_TDEH","ELF40","NOT_VENC_ASM","C6000" } },
    { "rtstesla_le_coff_eh.lib", { "FULL_PORTABLE_EH","TESLA","COFFABI","C_MEMCPY","EXCEPTIONS","NOT_VENC_ASM" } },
    { "rts6200.lib", { "C6000","NOT_VENC_ASM" } },
    { "rts6600_coff.lib", { "COFFABI","C6600","NOT_VENC_ASM","C6000" } },
    { "rts6700e_elf_eh.lib", { "C6700","BIG_ENDIAN","EXCEPTIONS","EABI","C6XABI","EABI_TDEH","NOT_VENC_ASM","C6000" } },
    { "rts6700e_elf40_eh.lib", { "C6700","BIG_ENDIAN","EXCEPTIONS","EABI","C6XABI","EABI_TDEH","ELF40","C6000","NOT_VENC_ASM" } },
    { "rts6700e.lib", { "C6700","BIG_ENDIAN","NOT_VENC_ASM","C6000" } },
    { "rts64plus_elf.lib", { "C6XABI","C64P","NOT_VENC_ASM","C6000","EABI" } },
    { "rts6600e_elf.lib", { "C6XABI","BIG_ENDIAN","C6600","NOT_VENC_ASM","C6000","EABI" } },
    { "rts6700_elf_eh.lib", { "C6700","C6XABI","EABI_TDEH","EXCEPTIONS","NOT_VENC_ASM","C6000","EABI" } },
    { "rts64plus_elf_no_parallel_loads.lib", { "C6XABI","C64P","NOT_VENC_ASM","C6000","NO_PARALLEL_LOADS","EABI" } },
    { "rts6600e_elf_eh.lib", { "BIG_ENDIAN","C6600","EXCEPTIONS","EABI","C6XABI","EABI_TDEH","NOT_VENC_ASM","C6000" } },
    { "rts6740_elf_eh.lib", { "C6XABI","EABI_TDEH","EXCEPTIONS","NOT_VENC_ASM","C6000","EABI","C6740" } },
    { "rts6600e_elf40_eh.lib", { "BIG_ENDIAN","C6600","EXCEPTIONS","EABI","C6XABI","EABI_TDEH","ELF40","C6000","NOT_VENC_ASM" } },
    { "rts6200_elf_eh.lib", { "C6XABI","EABI_TDEH","EXCEPTIONS","NOT_VENC_ASM","C6000","EABI" } },
    { "rts6200_elf40.lib", { "C6XABI","ELF40","NOT_VENC_ASM","C6000","EABI" } },
    { "rts6400_elf40_eh.lib", { "C6400","EXCEPTIONS","EABI","C6XABI","EABI_TDEH","ELF40","NOT_VENC_ASM","C6000" } },
    { "rts6740_eh.lib", { "FULL_PORTABLE_EH","EXCEPTIONS","NOT_VENC_ASM","C6000","C6740" } },
    { "rts6700_elf.lib", { "C6700","C6XABI","NOT_VENC_ASM","C6000","EABI" } },
    { "rts6600_elf.lib", { "C6XABI","C6600","NOT_VENC_ASM","C6000","EABI" } },
    { "rts6200e_elf.lib", { "C6XABI","BIG_ENDIAN","NOT_VENC_ASM","C6000","EABI" } },
    { "rts6700_elf40.lib", { "C6700","C6XABI","ELF40","NOT_VENC_ASM","C6000","EABI" } },
};

const char *DEFAULT_OPTIONS = " -o -oe -k -ps -pdsw225 -q";

library_t *find_library(const string &pattern)
{
    for (size_t i = 0; i < (sizeof LIBRARIES / sizeof *LIBRARIES); i++)
        if (!pattern.compare(LIBRARIES[i].name)) return &LIBRARIES[i];

    return NULL;
}

string pattern;
string index_library_path;

string name;
bool all = false;

string options;
string extra_options;
string internal_options;

string install_to;
string compiler_bin_dir;

FILE *logfile;
string logfile_name;
string tmpdir;

string gmake = "gmake";
int parallel;

bool quiet = false;
bool dryrun = false;
bool verbose = false;

void list_libraries()
{
    for (size_t i = 0; i < (sizeof LIBRARIES / sizeof *LIBRARIES); i++)
        printf("%s ", LIBRARIES[i].name);
    printf("\n");
}

void usage()
{
    printf("Usage: mklib [--pattern=rts6200.lib --index=libc.a ..]\n\n");
    printf("This is mklib version %s for %s compiler run-time support libraries.\n\n", version, isa);

    printf("mklib is used to build a compiler RTS library from source; it is specific to\n"
           "compiler RTS library version %s.\n\n", version);

    printf("    --index=FILENAME\n\n"
           "                        The index library (libc.a) for this release.  Used to\n"
           "                        find a template library for custom builds, and to find\n"
           "                        the source files (rtssrc.zip).  REQUIRED.\n\n");

    printf("    --pattern=FILENAME\n\n"
           "                        Pattern for building a library.  If neither\n"
           "                        --extra_options nor --options are specified, the\n"
           "                        library will be the standard library with the standard\n"
           "                        options for that library.  If either --extra_options\n"
           "                        or --options are specified, the library is a custom\n"
           "                        library with custom options.  REQUIRED unless --all is\n"
           "                        used.\n\n");

    printf("    --all\n\n"
           "                        Build all standard libraries at once.\n\n");

    printf("    --install_to=DIRECTORY\n\n"
           "                        The directory into which to write the library.  For a\n"
           "                        standard library, this defaults to the same directory\n"
           "                        as the index library (libc.a).  For a custom library,\n"
           "                        this option is REQUIRED.\n\n");

    printf("    --compiler_bin_dir=DIRECTORY\n\n"
           "                        The directory where the compiler executables are.\n"
           "                        When invoking mklib directly, the executables should\n"
           "                        be in the PATH, but if they are not, this option must\n"
	   "                        be used to tell mklib where they are.  This option is\n"
	   "                        primarily for use when mklib is invoked by the linker.\n\n");

    printf("    --name=FILENAME\n\n"
           "                        File name for the library with no directory part.\n"
           "                        Only useful for custom libraries.\n\n");

    printf("    --options='STR'\n\n"
           "                        Options to use when building the library.  The default\n"
           "                        options (see below) are REPLACED by this string.  If\n"
           "                        this option is used, the library will be a custom\n"
           "                        library.\n\n");

    printf("    --extra_options='STR'\n\n"
           "                        Options to use when building the library.  The default\n"
           "                        options (see below) are also used.  If this option is\n"
           "                        used, the library will be a custom library.\n\n");

    printf("    --list_libraries\n\n"
           "                        List the libraries this script is capable of building\n"
           "                        and exit.  ordinary system-specific directory.\n\n");

    printf("    --log=FILENAME\n\n"
           "                        Save the build log as FILENAME\n\n");

    printf("    --tmpdir=DIRECTORY\n\n"
           "                        Use DIRECTORY for scratch space instead of the\n"
           "                        ordinary system-specific directory.\n\n");

    printf("    --gmake=FILENAME    Gmake-compatible program to invoke instead of \"gmake\"\n"
           "    --parallel=N        Compile N files at once (\"gmake -j N\")\n\n");

    printf("    --query=FILENAME    Does this script know how to build FILENAME?\n\n");

    printf("    --help|h	    Display this help\n"
	   "    --quiet|q	    Operate silently\n"
	   "    --verbose|v	    Extra information to debug this executable\n");

    printf("Examples:\n\n");

    printf("    To build all standard libraries and place them in the compiler's\n"
           "    library directory:\n\n");

    printf("    mklib --all --index=$C_DIR/lib\n\n");

    printf("    To build one standard library and place it in the compiler's library\n"
           "    directory:\n\n");

    printf("    mklib --pattern=rts6200.lib --index=$C_DIR/lib\n\n");

    printf("    To build a custom library that is just like rts6200.lib, but has symbolic\n"
           "    debugging support enabled:\n\n");

    printf("    mklib --pattern=rts6200.lib --extra_options=\"-g\" --index=$C_DIR/lib --install_to=$Project/Debug --name=rts6200_debug.lib\n\n");

    printf("Default options: [%s]\n\n", DEFAULT_OPTIONS);

    printf("Standard library names: "); 
    list_libraries();

    exit(1);
}

/*===========================================================================*/
/* System-specific functions                                                 */
/*===========================================================================*/

#include <getopt.h>

#ifdef unix

string directory_part(const string &pathname)
{
    string::size_type pos = pathname.find_last_of('/');
    if (pos == string::npos) return ".";
    else return pathname.substr(0, pos);
}

const string splice(const string &dir, const string &base)
{
    return dir + '/' + base;
}

const string path_delim(void) 
{
    return ":";
}

bool path_is_absolute(const string &pathname)
{
    return !pathname.empty() && pathname[0] == '/';
}

#include <sys/stat.h>
#include <sys/types.h>

bool make_directory(const string &pathname)
{
    return mkdir(pathname.c_str(), 0775) == 0;
}

bool set_working_directory(const string &pathname)
{
    return chdir(pathname.c_str()) == 0;
}

void discover_tmpdir(void)
{
    char *dir = getenv("TMPDIR"); /* POSIX */
    tmpdir = dir ? dir : "/tmp";
}

const string getcwd_or_die(void);

const string absolute_path(const string &pathname)
{
    if (path_is_absolute(pathname)) return pathname;
    const string pwd = getcwd_or_die();
    if (pathname.compare(".") == 0) return pwd;
    else return splice(pwd, pathname);
}

#elif _WIN32

#include <windows.h> // For GetFullPathName, GetShortPathName
#include <unistd.h> // for mkdir, chdir

string directory_part(const string &pathname)
{
    char drive[MAX_PATH];
    char dir  [MAX_PATH];
    char fname[MAX_PATH];
    char ext  [MAX_PATH];

    char outdir[MAX_PATH];

    _splitpath(pathname.c_str(), drive, dir, fname, ext);
    _makepath(outdir, drive, dir, "", "");

    if (strlen(outdir) == 0) return ".";
    return outdir;
}

bool path_is_absolute(const string &pathname)
{
    return directory_part(pathname) != ".";
}

const string splice(const string &dir, const string &base)
{
    return dir + '\\' + base;
}

const string path_delim(void) 
{
    return ";";
}

bool make_directory(const string &pathname)
{
    return mkdir(pathname.c_str()) == 0;
}

bool set_working_directory(const string &pathname)
{
    return chdir(pathname.c_str()) == 0;
}

void discover_tmpdir(void)
{
    char *dir = getenv("TEMP"); /* Windows standard */
    if (!dir) dir = getenv("TMP"); /* Old DOS variant */

    if (!dir) 
    {
        fprintf(stderr, ">> ERROR: mklib: environment variable TEMP not set\n");
        exit(1);
    }

    tmpdir = dir;
}

#include <cctype>
#include <algorithm>

const string downcase(const string uppercase)
{
    string result(uppercase);
    std::transform(result.begin(), result.end(), result.begin(),
                   ::tolower);
    return result;
}

const string upcase(const string lowercase)
{
    string result(lowercase);
    std::transform(result.begin(), result.end(), result.begin(),
                   ::toupper);
    return result;
}

/*---------------------------------------------------------------------------*/
/* Return the absolute path to a file.  If the file is not already an        */
/* absolute path, it will be considered relative to the current directory.   */
/* In addition, this will cook the path so that it is palatable to gmake     */
/*---------------------------------------------------------------------------*/
const string absolute_path(const string &pathname)
{
    /* First get the absolute path name. */

    const char *orig = pathname.c_str();

    char full_path[MAX_PATH];
    size_t full_sz = GetFullPathName(orig, MAX_PATH, full_path, NULL);

    if (full_sz == 0 || full_sz > MAX_PATH)
    {
        fprintf(stderr, ">> ERROR: mklib: could not get a full pathname for %s\n", orig);
        exit(1);
    }

    string result;

    /*-----------------------------------------------------------------------*/
    /* Now convert it to "short" form.  We do this so that we don't have to  */
    /* worry about spaces in filenames, which are a special problem for gmake*/
    /*-----------------------------------------------------------------------*/
    /* If the value of tmpdir contains both a colon (it will if it is of the */
    /* form C:\whatever) and a space, gmake will fail with "multiple target  */
    /* patterns" because gmake uses colons to separate parts of patterns.    */
    /* Use the 8.3 "short" pathname to avoid this problem.                   */
    /*-----------------------------------------------------------------------*/
    char short_path[MAX_PATH];
    size_t short_sz = GetShortPathName(full_path, short_path, MAX_PATH);

    if (short_sz == 0 || short_sz > MAX_PATH)
    {
        /*-------------------------------------------------------------------*/
        /* If the file does not exist, GetShortPathName will fail.  This is  */
        /* not particularly a problem unless we're going to pass the         */
        /* pathname to gmake.  Make sure to create directories, files,       */
        /* etc. before calling this function.  The only one we can't do this */
        /* for is the temporary library pathname.  Don't give an error if we */
        /* can't get the short path name.                                    */
        /*-------------------------------------------------------------------*/
        result = full_path;
    }
    else result = short_path;

    /*-----------------------------------------------------------------------*/
    /* Now replace all backslashes with forward slashes.  gmake can't handle */
    /* backslashes in all contexts, but Windows API functions can handle     */
    /* forward shashes, so just use those.                                   */
    /*-----------------------------------------------------------------------*/
    for (size_t i=0; i < result.size(); i++)
       if (result[i] == '\\') result[i] = '/';

    /*-----------------------------------------------------------------------*/
    /* Downcase the file extension here because gmake 3.81 emits a bizarre   */
    /* error message (probably indicating NULL dereference) if any part of   */
    /* the filename part of the pathname has an uppercase character.  The    */
    /* case on the directory part does not matter.                           */
    /*-----------------------------------------------------------------------*/
    return downcase(result);
}

/*---------------------------------------------------------------------------*/
/* mkdtemp not provided in the cross-compiler we use (win32_g++-4.1.1)       */
/*---------------------------------------------------------------------------*/
const char *mkdtemp(char pattern[])
{
    /* The pattern MUST end with six X's */

    char *start;
    if ((start = strstr(pattern, "XXXXXX")) == NULL || *(start+6) != '\0')
    {
        errno = EINVAL;
        return NULL;
    }

    /*-----------------------------------------------------------------------*/
    /* This algorithm is weak, but better than nothing.  We don't expect     */
    /* expect much danger from collisions (fingers crossed).  Hopefully      */
    /* we'll get a real version of mkdtemp eventually.                       */
    /*-----------------------------------------------------------------------*/
    srand(time(NULL));

    for (int attempt = 0; attempt < TMP_MAX; attempt++)
    {
        for (int i=0; i < 6; i++)
        {
            const char *chars = 
                "abcdefghijklmnopqrstuvwxyz"
                "ABCDEFGHIJKLMNOPQRSTUVWXYZ" 
                "0123456789";
            size_t nchars = strlen(chars);
            int r = rand();
            unsigned p = (long long)r * nchars / (RAND_MAX+1);
            assert(p < nchars);
            start[i] = chars[p];
        }

        if (make_directory(pattern)) return pattern;
    }

    /*-----------------------------------------------------------------------*/
    /* Could not create a unique temp directory.                             */
    /*-----------------------------------------------------------------------*/
    return NULL;
}
#endif

/*===========================================================================*/
/* Not-quite-so-system-specific functions                                    */
/*===========================================================================*/

const string absolute_directory_part(const string &pathname)
{
    return directory_part(absolute_path(pathname));
}

const string getcwd_or_die(void)
{
    char pwd[PATH_MAX];

    if (getcwd(pwd, PATH_MAX) == NULL)
    {
        const char *problem = strerror(errno);
        fprintf(stderr, ">> ERROR: mklib: could not discover current directory: %s\n", problem);
        exit(1);
    }

    return pwd;
}

string make_temp_directory_or_die(void)
{
    string tmp_dir_pattern(splice(tmpdir, "TI_MKLIBXXXXXX"));
    char *buf = new char[tmp_dir_pattern.length() + 1];
    strcpy(buf, tmp_dir_pattern.c_str());
    if (mkdtemp(buf))
    {
        string result(buf);
        delete [] buf;
        return result;
    }
    else
    {
        const char *problem = strerror(errno);
        if (logfile) fprintf(logfile, ">> ERROR: mklib: Could not create temp directory in %s: %s\n", tmpdir.c_str(), problem);
        fprintf(stderr, ">> ERROR: mklib: Could not create temp directory in %s: %s\n", tmpdir.c_str(), problem);
        exit(1);
    }
}

#include <dirent.h>

void remove_directory_recursive(const string &path) 
{
    const char *cpath = path.c_str();

    DIR *dp = opendir(cpath);

    if (dp == NULL)
    {
        if (errno == ENOTDIR)
        {
            if (remove(cpath))
            {
                const char *problem = strerror(errno);
                if (logfile) fprintf(logfile, ">> ERROR: mklib: could not remove %s: %s\n", cpath, problem);
                fprintf(stderr, ">> ERROR: mklib: could not remove %s: %s\n", cpath, problem);
                exit(1);
            }
            return;
        }
        else
        {
            const char *problem = strerror(errno);
            if (logfile) fprintf(logfile, ">> ERROR: mklib: could not open directory %s for deleting: %s\n", cpath, problem);
            fprintf(stderr, ">> ERROR: mklib: could not open directory %s for deleting: %s\n", cpath, problem);
            exit(1);
        }
    }
 
    struct dirent *entry;

    while((entry = readdir(dp)))
    {
        if (strcmp(entry->d_name, ".") &&
            strcmp(entry->d_name, ".."))
        {
            remove_directory_recursive(splice(path, entry->d_name));
        }
    }

    if (rmdir(cpath))
    {
        const char *problem = strerror(errno);
        if (logfile) fprintf(logfile, ">> ERROR: mklib: could not remove %s: %s\n", cpath, problem);
        fprintf(stderr, ">> ERROR: mklib: could not remove %s: %s\n", cpath, problem);
        exit(1);
    }
 
    closedir(dp);
}    

void make_directory_or_die(const string &pathname)
{
    if (!make_directory(pathname))
    {
        const char *problem = strerror(errno);
        if (logfile) fprintf(logfile, ">> ERROR: mklib: Could not create directory %s: %s\n", pathname.c_str(), problem);
        fprintf(stderr, ">> ERROR: mklib: Could not create directory %s: %s\n", pathname.c_str(), problem);
        exit(1);
    }
}

void set_working_directory_or_die(const string &pathname)
{
    if (!set_working_directory(pathname))
    {
        const char *problem = strerror(errno);
        if (logfile) fprintf(logfile, ">> ERROR: mklib: Could not set working directory directory %s: %s\n", pathname.c_str(), problem);
        fprintf(stderr, ">> ERROR: mklib: Could not set working directory directory %s: %s\n", pathname.c_str(), problem);
        exit(1);
    }
}

string filename_extension(const string &pathname)
{
    string::size_type pos = pathname.find_last_of('.');
    if (pos == string::npos) return "";
    else return pathname.substr(pos+1);
}

bool file_exists(const string &pathname)
{
    FILE *f = fopen(pathname.c_str(), "r");
    if (f) { fclose(f); return true; } 
    else return false;
}

/*===========================================================================*/
/*===========================================================================*/

/*---------------------------------------------------------------------------*/
/* Split a PATH, PATHEXT, or C_DIR on ';' or ':' as appropriate              */
/*---------------------------------------------------------------------------*/
#include <vector>
const vector<string> tokenize(const string &input, const string &delim)
{
    vector<string> result;

    vector<string>::size_type begin = 0;
    vector<string>::size_type end = input.find_first_of(delim, begin);

    while (end != string::npos || begin != string::npos)
    {
        result.push_back(input.substr(begin, end - begin));
        begin = input.find_first_not_of(delim, end);
        end = input.find_first_of(delim, begin);
    }
    
    return result;
}

/*---------------------------------------------------------------------------*/
/* Double quote a string which will be passed through system() in case the   */
/* string has space characters.  On Windows, we always use the "short"       */
/* pathname, which never has spaces, but there could still be spaces in the  */
/* pathname on Unix.                                                         */
/*---------------------------------------------------------------------------*/
const string quote(const string &quotee)
{
    return string("\"") + quotee + "\"";
}

/*---------------------------------------------------------------------------*/
/* Move or copy the file to a new location.                                  */
/*---------------------------------------------------------------------------*/
void copy_or_die(const string &src_name, const string &dst_name)
{
    const char *src = src_name.c_str();
    const char *dst = dst_name.c_str();

    if (rename(src, dst))
    {
        /*-------------------------------------------------------------------*/
        /* If the rename fails (probably due to cross-filesystem move), the  */
        /* original file is untouched, as well as the original destination,  */
        /* if it exists.  Copy it instead.                                   */
        /*-------------------------------------------------------------------*/
        FILE *in = fopen(src, "rb");

        if (!in)
        {
            const char *problem = strerror(errno);
            if (logfile) fprintf(logfile, ">> ERROR: mklib: could not open %s for reading: %s\n", src, problem);
            fprintf(stderr, ">> ERROR: mklib: could not open %s for reading: %s\n", src, problem);
            exit(1);
        }

        FILE *out = fopen(dst, "wb");
            
        if (!out)
        {
            const char *problem = strerror(errno);
            if (logfile) fprintf(logfile, ">> ERROR: mklib: could not open %s for writing: %s\n", dst, problem);
            fprintf(stderr, ">> ERROR: mklib: could not open %s for writing: %s\n", dst, problem);
            exit(1);
        }

        char buf[BUFSIZ];

        size_t nread, nwritten;

        while (!feof(in) && !ferror(in))
        {
            nread = fread(buf, 1, sizeof(buf), in); 

            if (nread < sizeof(buf) && ferror(in))
            {
                const char *problem = strerror(errno);
                if (logfile) fprintf(logfile, ">> ERROR: mklib: fread error on %s: %s\n", src, problem);
                fprintf(stderr, ">> ERROR: mklib: fread error on %s: %s\n", src, problem);
                exit(1);
            }

            if (nread)
            {
                nwritten = fwrite(buf, 1, nread, out);

                if (nwritten < nread && ferror(out))
                {
                    const char *problem = strerror(errno);
                    if (logfile) fprintf(logfile, ">> ERROR: mklib: fwrite error on %s: %s\n", dst, problem);
                    fprintf(stderr, ">> ERROR: mklib: fwrite error on %s: %s\n", dst, problem);
                    exit(1);
                }
            }
        }

        fclose(in);
        fclose(out);
    }
}

/*===========================================================================*/
/* Helper program search                                                     */
/*===========================================================================*/

/*---------------------------------------------------------------------------*/
/* When invoked from CCS, we don't need the compiler tools in the path,      */
/* because CCS invokes the compiler (e.g. cl6x) with an absolute path.  When */
/* executed this way, the compiler executes the linker with an absolute path */
/* (if the linker exists in the same directory as the compiler shell).  The  */
/* linker knows the absolute path to mklib, because it was found through     */
/* <TRG>_C_DIR.  The linker invokes mklib using an absolute path, passing it */
/* the absolute path to the compiler as a parameter.  Now, mklib requires    */
/* unzip (InfoZIP unzip 5.51 or later), gmake, and sh; these might not be in */
/* the user's path, so we need to try to find them.  We will use a heuristic */
/* to try to get them from CCS.                                              */
/*---------------------------------------------------------------------------*/
/* We will not modify PATH; instead, we will invoke the tools with an        */
/* absolute pathname.                                                        */
/*---------------------------------------------------------------------------*/
/* For CCS 5.1 and later, the environment variable CCS_UTILS_DIR points to a */
/* subdirectory in the installed CCS product.  It contains two directories:  */
/*                                                                           */
/*  %CCS_UTILS_DIR%\cygwin (contains unzip.exe and sh.exe)                   */
/*  %CCS_UTILS_DIR%\bin (contains gmake.exe)                                 */
/*---------------------------------------------------------------------------*/
/* For CCS 4.x and 5.0, if the XDC tools are installed, and the              */
/* environment variable XDCTOOLS is set, it points to the installed XDC      */
/* product.  It contains two directories:                                    */
/*                                                                           */
/*  %XDCTOOLS% (contains gmake.exe)                                          */
/*  %XDCTOOLS%\bin (contains unzip.exe and sh.exe)                           */
/*---------------------------------------------------------------------------*/

const string do_nothing_args(const string name)
{
    if (name.compare("unzip") == 0) return "-v";
    if (name.compare("gmake") == 0) return "--version";
    if (name.compare("sh") == 0) return "-c true";
    assert(0 && "Invalid argument to do_nothing_args");
}

#if _WIN32
/*---------------------------------------------------------------------------*/
/* Return the absolute pathname of a program.  If directory is given, search */
/* that directory; otherwise, search the user's PATH.                        */
/*---------------------------------------------------------------------------*/
bool find_program_search_path(const char *directory,
                              const string program, 
                              string &fullpath)
{
    /*-----------------------------------------------------------------------*/
    /* The Windows function SearchPath searches for an executable in the     */
    /* given diretctory, or if the given directory is NULL, in the user's    */
    /* PATH.  However, it is quite cantanerkous, and doesn't seem to match   */
    /* up with its documentation.  It doesn't seem to iterate over PATHEXT.  */
    /* For some reason it doesn't write to the output buffer if it is of     */
    /* exactly the right size.  In fact, for one test case, the buffer had   */
    /* to be at least 9 bytes larger than needed before SearchPath actually  */
    /* wrote to it.  I don't know how to tell from the return value whether  */
    /* it successfully wrote or not, and I don't know if I can rely on       */
    /* GetError or that the output buffer is no longer an empty string.  For */
    /* that reason, only give it one chance, with MAX_PATH.                  */
    /*-----------------------------------------------------------------------*/
    static const char *PATHEXT = getenv("PATHEXT");

    if (!PATHEXT) PATHEXT = ".EXE";

    vector<string> exts(tokenize(PATHEXT, path_delim()));

    char realname[MAX_PATH];

    for (size_t i = 0; i < exts.size(); i++)
    {
        const string &ext = exts[i];
    
        size_t sz = SearchPath(directory, program.c_str(), ext.c_str(),
                               MAX_PATH, realname, NULL);
        
        if (sz > 0 && sz < MAX_PATH)
        {
            assert(strlen(realname) == sz);
            fullpath = absolute_path(realname);
            return true;
        }
    }
    return false;
}
#else
bool find_program_search_path(const char *directory,
                              const string program,
                              string &fullpath)
{
    if (directory)
    {
        string pathname(splice(directory, program));
        if (file_exists(pathname)) 
        {
            fullpath = pathname;
            return true;
        }
    }
    else
    {
        static const char *PATH = getenv("PATH");
        if (PATH)
        {
            vector<string> paths(tokenize(PATH, path_delim()));
            for (size_t i = 0; i < paths.size(); i++)
                if (find_program_search_path(paths[i].c_str(),
                                             program,
                                             fullpath))
                    return true;
        }
    }
    return false;
}
#endif

/*---------------------------------------------------------------------------*/
/* Find the program and return the absolute pathname.                        */
/*---------------------------------------------------------------------------*/
bool find_program(const string program, string &abs_path)
{
    static const char *CCS_UTILS_DIR = getenv("CCS_UTILS_DIR");
    static const char *XDCROOT       = getenv("XDCROOT");

    /*=======================================================================*/
    /* If the program is already an absolute pathname (the user specified an */
    /* absolute pathname with --gmake), just use that.                       */
    /*=======================================================================*/
    if (path_is_absolute(program))
    {
	abs_path = absolute_path(program);
	return true;
    }

    /*=======================================================================*/
    /* Search the user's PATH to find the program.  This means we are giving */
    /* the user's chosen PATH preference, and the user had better have the   */
    /* right version available (e.g. InfoZIP 5.51 or better).                */
    /*=======================================================================*/
    if (find_program_search_path(NULL, program, abs_path)) return true;

    /*=======================================================================*/
    /* Try certain pre-defined CCS-installed directories.                    */
    /*=======================================================================*/
    for (int pass = 0; pass < 4; pass++)
    {
        string root;

        switch(pass)
        {
            /*---------------------------------------------------------------*/
            /* In CCS 5.1 or later, the environment variable CCS_UTILS_DIR   */
            /* indicates the appropriate executables have been installed as  */
            /* part of core CCS.                                             */
            /*---------------------------------------------------------------*/
            case 0: 
            {
                if (!CCS_UTILS_DIR) continue;
                root = splice(CCS_UTILS_DIR, "cygwin");
                break;
            }
            case 1: 
            {
                if (!CCS_UTILS_DIR) continue;
                root = splice(CCS_UTILS_DIR, "bin");
                break;
            }
            /*---------------------------------------------------------------*/
            /* In CCS 4.x, if the environment variable XDCROOT is set, the   */
            /* user chose to install XDC as part of the CCS installation.    */
            /*---------------------------------------------------------------*/
            case 2: 
            {
                if (!XDCROOT) continue;
                root = XDCROOT;
                break;
            }
            case 3: 
            {
                if (!XDCROOT) continue;
                root = splice(XDCROOT, "bin");
                break;
            }
        }

        if (find_program_search_path(root.c_str(), program, abs_path))
	    return true;
    }

    return false;
}

/*---------------------------------------------------------------------------*/
/* Find the program and return the absolute pathname.                        */
/*---------------------------------------------------------------------------*/
const string find_program_or_die(const string program)
{
    string fullpath;

    if (find_program(program, fullpath)) return fullpath;

    /*-----------------------------------------------------------------------*/
    /* If the program is "gmake", and it wasn't found, look for "make" and   */
    /* hope that it is GNU make.                                             */
    /*-----------------------------------------------------------------------*/
    if (program == "gmake" && find_program("make", fullpath)) return fullpath;

    /*-----------------------------------------------------------------------*/
    /* Nowhere to be found.                                                  */
    /*-----------------------------------------------------------------------*/
    const char *msg = ">> ERROR: mklib: could not find program \"%s\", required for building libraries.  Modify the PATH environment variable to contain a directory containing this program.\n";
    if (logfile) fprintf(logfile, msg, program.c_str());
    fprintf(stderr, msg, program.c_str());
    exit(1);
}

/*===========================================================================*/
/* Library building functions                                                */
/*===========================================================================*/

/*---------------------------------------------------------------------------*/
/* Return a string with a series of make variable assignments representing   */
/* the "true" predicates for a particular library (e.g. "C6XABI=1 C6000=1    */
/* NOT_VENC_ASM=1 EABI=1").                                                  */
/*---------------------------------------------------------------------------*/
const string predicate_string(const string &pattern)
{
    library_t *lib = find_library(pattern);

    assert(lib);

    string result;

    for (int i = 0; lib->predicates[i]; i++)
        result += string(lib->predicates[i]) + "=1 ";

    return result;
}

/*---------------------------------------------------------------------------*/
/* Format an int as a string.                                                */
/*---------------------------------------------------------------------------*/
const string itoa(int ncpus)
{
    stringstream result;
    result << ncpus;
    return result.str();
}

/*---------------------------------------------------------------------------*/
/* Build just one library with the specified name in the specified directory */
/*---------------------------------------------------------------------------*/
void build_one_library(const string &index_library_dir,
                       const string &pattern, 
                       const string &name, 
                       const string &dst_dir)
{
    if (find_library(pattern) == NULL)
    {
        if (logfile) fprintf(logfile, ">> ERROR: mklib: Unrecognized standard library name %s\n", pattern.c_str());
	fprintf(stderr, ">> ERROR: mklib: Unrecognized standard library name %s\n", pattern.c_str());
        exit(1);
    }

    if (verbose || dryrun) printf("Building %s from pattern %s\n",
                                  splice(dst_dir.c_str(), name.c_str()).c_str(), pattern.c_str());
    if (logfile) fprintf(logfile, "Building %s from pattern %s\n",
                                  splice(dst_dir.c_str(), name.c_str()).c_str(), pattern.c_str());

    /*-----------------------------------------------------------------------*/
    /* Check if the destination library already exists.  If so, error        */
    /*-----------------------------------------------------------------------*/
    string library_pathname = splice(dst_dir, name);

    if (file_exists(library_pathname))
    {
        if (logfile) fprintf(logfile, ">> ERROR: mklib: destination library %s already exists\n", library_pathname.c_str());
	fprintf(stderr, ">> ERROR: mklib: destination library %s already exists\n", library_pathname.c_str());
        exit(1);
    }

    /*-----------------------------------------------------------------------*/
    /* Before the expensive build starts, check whether we can write to the  */
    /* destination directory.                                                */
    /*-----------------------------------------------------------------------*/
    FILE *tst = fopen(library_pathname.c_str(), "w");

    if (tst)
    {
        fclose(tst);
        remove(library_pathname.c_str());
    }
    else
    {
        const char *problem = strerror(errno);
        if (logfile) fprintf(logfile, ">> ERROR: mklib: could not open %s for writing: %s\n", library_pathname.c_str(), problem);
	fprintf(stderr, ">> ERROR: mklib: could not open %s for writing: %s\n", library_pathname.c_str(), problem);
        exit(1);
    }

    /*-----------------------------------------------------------------------*/
    /* Create the scratch area and subdirectories We will build the library  */
    /* in a scratch area and only move it to the final directory when the    */
    /* library is completely built.                                          */
    /*-----------------------------------------------------------------------*/
    string scratch_dir;

    if (dryrun)
    {
	scratch_dir = splice(tmpdir, "TI_MKLIBXXXXXX");
    }
    else
    {
        scratch_dir = absolute_path(make_temp_directory_or_die());
    }

    if (verbose) printf("Work directory : %s\n", scratch_dir.c_str());

    if (verbose || dryrun) printf("mkdir %s\n", scratch_dir.c_str());
    if (logfile) fprintf(logfile, "mkdir %s\n", scratch_dir.c_str());
    
    string src_dir = splice(scratch_dir, "SRC");
    if (verbose || dryrun) printf("mkdir %s\n", src_dir.c_str());
    if (logfile) fprintf(logfile, "mkdir %s\n", src_dir.c_str());
    if (!dryrun) make_directory_or_die(src_dir);
    src_dir = absolute_path(src_dir);
    
    string obj_dir = splice(scratch_dir, "OBJ");
    if (verbose || dryrun) printf("mkdir %s\n", obj_dir.c_str());
    if (logfile) fprintf(logfile, "mkdir %s\n", obj_dir.c_str());
    if (!dryrun) make_directory_or_die(obj_dir);
    obj_dir = absolute_path(obj_dir);
    
    /*-----------------------------------------------------------------------*/
    /* Remember the current working directory so we can chdir out of the     */
    /* scratch directory.  We need to do this before deleting it, because    */
    /* otherwise the directory is in use and can't be deleted.               */
    /*-----------------------------------------------------------------------*/
    const string old_cwd = getcwd_or_die();

    /*-----------------------------------------------------------------------*/
    /* Change to the scratch directory                                       */
    /*-----------------------------------------------------------------------*/
    if (verbose || dryrun) printf("cd %s\n", src_dir.c_str());
    if (logfile) fprintf(logfile, "cd %s\n", src_dir.c_str());
    if (!dryrun) set_working_directory_or_die(src_dir.c_str());

    /*-----------------------------------------------------------------------*/
    /* Unpack the source                                                     */
    /*-----------------------------------------------------------------------*/
    string archive_pathname = absolute_path(splice(index_library_dir, 
                                                   "rtssrc.zip"));

    /*-----------------------------------------------------------------------*/
    /* It is still possible that this program will be in a directory with a  */
    /* space in it, but Windows system() for some reason doesn't work if the */
    /* executable is quoted.  Windows can handle the space anyway, and       */
    /* there's unlikely to be a space on Unix, so we don't quote it.         */
    /*-----------------------------------------------------------------------*/
    string unzip_cmd = find_program_or_die("unzip");

    unzip_cmd += (quiet ? " -qq" : "");
    unzip_cmd += " -a ";
    unzip_cmd += string(" ") + quote(archive_pathname);

    if (verbose || dryrun) printf("%s\n", unzip_cmd.c_str());
    if (logfile) fprintf(logfile, "%s\n", unzip_cmd.c_str());

    if (!dryrun)
    {
        fflush(stderr);
        fflush(stdout);
	if (system(unzip_cmd.c_str()))
	{
	    if (logfile) fprintf(logfile, ">> ERROR: mklib: could not unpack rtssrc.zip\n");
	    fprintf(stderr, ">> ERROR: mklib: could not unpack rtssrc.zip\n");
            exit(1);
	}
    }

    /*-----------------------------------------------------------------------*/
    /* Invoke the gmake with the appropriate variables set.                  */
    /*-----------------------------------------------------------------------*/
    int ncpus = parallel;

    if (!ncpus)
    {
        const char *np = getenv("NUMBER_OF_PROCESSORS");
        if (np) ncpus = strtol(np, NULL, 10);
        else    ncpus = 1;
    }

    string tmp_lib_name = absolute_path(splice(scratch_dir, name));

    /*-----------------------------------------------------------------------*/
    /* It is still possible that this program will be in a directory with a  */
    /* space in it, but Windows system() for some reason doesn't work if the */
    /* executable is quoted.  Windows can handle the space anyway, and       */
    /* there's unlikely to be a space on Unix, so we don't quote it.         */
    /*-----------------------------------------------------------------------*/
    string gmake_cmd = find_program_or_die("gmake");

    gmake_cmd += string(" SHELL=") + quote(find_program_or_die("sh"));
    gmake_cmd += string(" -j ") + itoa(ncpus);
    gmake_cmd += " library";
    gmake_cmd += (string(" EXTRA_FLAGS=") + 
                  quote(extra_options + " " + internal_options));

    gmake_cmd += string(" INC=") + quote(src_dir);
    gmake_cmd += string(" OBJ=") + quote(obj_dir);
    gmake_cmd += string(" LIB=") + quote(tmp_lib_name);
    gmake_cmd += string(" ") + predicate_string(pattern);

    if (!options.empty())
        gmake_cmd += string(" STANDARD_OPTIONS=") + quote(options);

    if (!compiler_bin_dir.empty()) 
        gmake_cmd += string(" CGT_BIN=") + quote(compiler_bin_dir);

    if (quiet) 
        gmake_cmd += " --quiet";

    if (verbose || dryrun) printf("%s\n", gmake_cmd.c_str());
    if (logfile) fprintf(logfile, "%s\n", gmake_cmd.c_str());
    if (!dryrun)
    {
        fflush(stderr);
        fflush(stdout);
	if (system(gmake_cmd.c_str()))
	{
            if (logfile) fprintf(logfile, ">> ERROR: mklib: gmake error during %s build\n", name.c_str());
            fprintf(stderr, ">> ERROR: mklib: gmake error during %s build\n", name.c_str());
	    exit(1);
	}
    }

    if (!file_exists(tmp_lib_name))
    {
        if (logfile) fprintf(logfile, ">> ERROR: mklib: failed to build %s\n", tmp_lib_name.c_str());
        fprintf(stderr, ">> ERROR: mklib: failed to build %s\n", tmp_lib_name.c_str());
        exit(1);
    }
    
    /*-----------------------------------------------------------------------*/
    /* Now move it to the final destination.                                 */
    /*-----------------------------------------------------------------------*/
    string dst_name = splice(dst_dir, name);
    string cp_cmd = string("cp ") + tmp_lib_name + " " + dst_name;

    if (verbose || dryrun) printf("%s\n", cp_cmd.c_str());
    if (logfile) fprintf(logfile, "%s\n", cp_cmd.c_str());
    if (!dryrun) copy_or_die(tmp_lib_name, dst_name);

    /*-----------------------------------------------------------------------*/
    /* Clean up the temp directory.  First vacate it so we can delete it.    */
    /*-----------------------------------------------------------------------*/
    if (!dryrun)
    {
       set_working_directory_or_die(old_cwd);
       remove_directory_recursive(scratch_dir.c_str());
    }
}

/*---------------------------------------------------------------------------*/
/* Parse the user's command-line options.                                    */
/*---------------------------------------------------------------------------*/
void process_args(int argc, char *argv[])
{
    static struct option long_options[] = {
        { "pattern", 1, 0, 0 },
        { "index", 1, 0, 0 },

        { "name", 1, 0, 0 },
        { "all", 0, 0, 0 },

        { "options", 1, 0, 0 },
        { "extra_options", 1, 0, 0 },
        { "internal_options", 1, 0, 0 },

        { "install_to", 1, 0, 0 },
        { "compiler_bin_dir", 1, 0, 0 },

        { "list_libraries", 0, 0, 0 },

        { "log", 1, 0, 0 },
        { "tmpdir", 1, 0, 0 },

        { "gmake", 1, 0, 0 },
        { "parallel", 1, 0, 0 },

        { "buildmodel", 0, 0, 0 },
        { "query", 1, 0, 0 },

        { "help", 0, 0, 'h' },
        { "quiet", 0, 0, 'q' },
        { "dryrun", 0, 0, 0 },
        { "verbose", 0, 0, 'v' },
        { 0, 0, 0, 0 }
    };

    while (1)
    {
        int idx = 0;
        int c = getopt_long (argc, argv, "hqv", long_options, &idx);

        if (c == -1)
        {
            break; /* done */
        }

        switch(c)
        {
            case 0: /* long option */
            {
                if (!strcmp("pattern", long_options[idx].name))
                {
                    pattern = optarg;
                }
                else if (!strcmp("index", long_options[idx].name))
                {
                    index_library_path = optarg;
                }
                else if (!strcmp("name", long_options[idx].name))
                {
                    name = optarg;
                }
                else if (!strcmp("all", long_options[idx].name))
                {
                    all = true;
                }
                else if (!strcmp("options", long_options[idx].name))
                {
                    options = optarg;
                }
                else if (!strcmp("extra_options", long_options[idx].name))
                {
                    extra_options = optarg;
                }
                else if (!strcmp("internal_options", long_options[idx].name))
                {
                    internal_options = optarg;
                }
                else if (!strcmp("install_to", long_options[idx].name))
                {
                    install_to = optarg;
                }
                else if (!strcmp("compiler_bin_dir", long_options[idx].name))
                {
                    compiler_bin_dir = optarg;
                }
                else if (!strcmp("list_libraries", long_options[idx].name))
                {
                    list_libraries();
                    exit(0);
                }
                else if (!strcmp("log", long_options[idx].name))
                {
                    logfile_name = optarg;
                }
                else if (!strcmp("tmpdir", long_options[idx].name))
                {
                    tmpdir = optarg;
                }
                else if (!strcmp("gmake", long_options[idx].name))
                {
                    gmake = optarg;
                }
                else if (!strcmp("parallel", long_options[idx].name))
                {
                    parallel = strtol(optarg, NULL, 10);
                }
                else if (!strcmp("buildmodel", long_options[idx].name))
                {
                    printf("%d\n", buildmodel);
                    exit(0);
                }
                else if (!strcmp("query", long_options[idx].name))
                {
                    exit(find_library(optarg) == NULL);
                }
                else if (!strcmp("dryrun", long_options[idx].name))
                {
                    dryrun = true;
                }
                else
                {
                    printf("panic\n");
                    exit(1);
                }
                break;
            }
                
            case '?': 
            case 'h': usage(); break;

            case 'q': quiet = true; break;
            case 'v': verbose = true; break;

            default: 
            {
                printf("Unknown return from getopt_long: %x\n", c);
            }
        }
    }
}

/*---------------------------------------------------------------------------*/
/* Perform sanity checks on user arguments, figure out missing information,  */
/* and make all paths absolute                                               */
/*---------------------------------------------------------------------------*/
void sanity_checks(int argc, char *argv[])
{
    /*-----------------------------------------------------------------------*/
    /* We must know the directory containing mklib, libc.a, and rtssrc.zip.  */
    /*-----------------------------------------------------------------------*/
    if (index_library_path.empty())
    {
        /*-------------------------------------------------------------------*/
        /* If the user didn't specify --index, first look in C_DIR for an    */
        /* appropriate libc.a.                                               */
        /*-------------------------------------------------------------------*/
        const char *path = getenv(c_dir_name);

        if (path == NULL) path = getenv("C_DIR");

        if (path)
        {
            vector<string> compiler_path(tokenize(path, ";"));
            for (size_t i = 0; i < compiler_path.size(); i++)
            {
                string candidate = splice(compiler_path[i], "libc.a");

                if (file_exists(candidate))
                {
                    if (verbose) printf("Option --index not specified, using %s\n", candidate.c_str());
                    index_library_path = candidate;
                    break;
                }
            }
        }

        /*-------------------------------------------------------------------*/
        /* If that didn't work, attempt to use dirname($0)/libc.a            */
        /*-------------------------------------------------------------------*/
        if (index_library_path.empty())
        {
            string dir = absolute_directory_part(argv[0]);
            string candidate = splice(dir, "libc.a");

            if (file_exists(candidate))
            {
                index_library_path = candidate;
                if (verbose) printf("Option --index not specified, using %s\n", candidate.c_str());
            }

        }

        if (index_library_path.empty())
        {
            fprintf(stderr, ">> ERROR: mklib: option --index is required\n");
            exit(1);
        }
    }

    /*-----------------------------------------------------------------------*/
    /* Check for invalid option combinations                                 */
    /*-----------------------------------------------------------------------*/
    if (pattern.empty() && !all)
    {
        fprintf(stderr, ">> ERROR: mklib: option --pattern or --all is required\n");
        exit(1);
    }

    if (!all && find_library(pattern) == NULL)
    {
        if (logfile) fprintf(logfile, ">> ERROR: mklib: Unrecognized standard library name %s\n", pattern.c_str());
	fprintf(stderr, ">> ERROR: mklib: Unrecognized standard library name %s\n", pattern.c_str());
        exit(1);
    }

    bool standard = (options.empty() && extra_options.empty());

    if (!standard && all)
    {
        fprintf(stderr, ">> ERROR: mklib: cannot use --options or --extra_options with --all\n");
        exit(1);
    }

    if (!name.empty() && all)
    {
        fprintf(stderr, ">> ERROR: mklib: cannot use --name with --all\n");
        exit(1);
    }

    /*-----------------------------------------------------------------------*/
    /* The archiver will automatically add ".lib" when creating a library.   */
    /* If the user specifies a name with a file extension, this program will */
    /* get confused                                                          */
    /*-----------------------------------------------------------------------*/
    if (!name.empty())
    {
        string extension = filename_extension(name);
        if (extension.empty())
        {
            fprintf(stderr, ">> ERROR: mklib: --name must specify a library name with a file extension (e.g. .lib or .a).\n");
            exit(1);
        }
    }

    /*-----------------------------------------------------------------------*/
    /* Make sure all paths are absolute (don't have to be canonical).        */
    /*-----------------------------------------------------------------------*/
    if (!tmpdir.empty())
        tmpdir = absolute_path(tmpdir);

    if (!install_to.empty())
        install_to = absolute_path(install_to);

    if (!compiler_bin_dir.empty())
        compiler_bin_dir = absolute_path(compiler_bin_dir);

    if (!index_library_path.empty())
        index_library_path = absolute_path(index_library_path);

    /*-----------------------------------------------------------------------*/
    /* Make sure we know where to create temporary files.                    */
    /*-----------------------------------------------------------------------*/
    if (tmpdir.empty()) discover_tmpdir();

#if _WIN32
    /*-----------------------------------------------------------------------*/
    /* Ensure we have a "short form" pathname                                */
    /*-----------------------------------------------------------------------*/
    tmpdir = absolute_path(tmpdir);
#endif
}

/*---------------------------------------------------------------------------*/
/* Stuff happens                                                             */
/*---------------------------------------------------------------------------*/
int main(int argc, char *argv[])
{
    process_args(argc, argv);
    sanity_checks(argc, argv);

    if (!logfile_name.empty()) logfile = fopen(logfile_name.c_str(), "w");

    /*-----------------------------------------------------------------------*/
    /* By default, a standard library is installed in the same directory     */
    /* libc.a is in, but the user can override this with the --install_to    */
    /* option.                                                               */
    /*-----------------------------------------------------------------------*/
    const string index_library_dir = directory_part(index_library_path);

    int standard = (options.empty() && extra_options.empty());

    if (install_to.empty() && standard) install_to = index_library_dir;

    /*-----------------------------------------------------------------------*/
    /* For --all, the user is not allowed to specify the names of the        */
    /* libraries.  The name for each library will be the pattern name.       */
    /* Otherwise, if the user doesn't specify --name, also default to        */
    /* --pattern.                                                            */
    /*-----------------------------------------------------------------------*/
    if (all || name.empty())
    {
	name = pattern;
    }

    if (all)
    {
        for (size_t i = 0; i < (sizeof LIBRARIES / sizeof *LIBRARIES); i++)
            build_one_library(index_library_dir, 
                              LIBRARIES[i].name, 
                              LIBRARIES[i].name, 
                              install_to);
    }
    else
    {
        build_one_library(index_library_dir,
                          pattern, name, install_to);
    }
}