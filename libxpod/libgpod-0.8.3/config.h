/* config.h.  Generated from config.h.in by configure.  */
/* config.h.in.  Generated from configure.ac by autoheader.  */

/* The normal alignment of `double', in bytes. */
#define ALIGNOF_DOUBLE 8

/* always defined to indicate that i18n is enabled */
#define ENABLE_NLS 1

/* Gettext package. */
#define GETTEXT_PACKAGE "libgpod"

/* Define to 1 if you have the `bind_textdomain_codeset' function. */
#define HAVE_BIND_TEXTDOMAIN_CODESET 1

/* Define to 1 if you have the `dcgettext' function. */
#define HAVE_DCGETTEXT 1

/* Define to 1 if you have the <dlfcn.h> header file. */
#define HAVE_DLFCN_H 1

/* Whether gdk-pixbuf is installed, ArtworkDB writing support will be disabled
   if it can't be found */
/* #undef HAVE_GDKPIXBUF */

/* Define if the GNU gettext() function is already present or preinstalled. */
#define HAVE_GETTEXT 1

/* Define to 1 if you have the `g_checksum_reset' function. */
#define HAVE_G_CHECKSUM_RESET 1

/* Define to 1 if you have the `g_int64_equal' function. */
#define HAVE_G_INT64_EQUAL 1

/* Define to 1 if you have the `g_int64_hash' function. */
#define HAVE_G_INT64_HASH 1

/* Define to 1 if you have the `g_mapped_file_unref' function. */
#define HAVE_G_MAPPED_FILE_UNREF 1

/* Define if you have HAL support */
/* #undef HAVE_HAL */

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define if your <locale.h> file defines LC_MESSAGES. */
#define HAVE_LC_MESSAGES 1

/* Define if you have libimobiledevice support */
/* #undef HAVE_LIBIMOBILEDEVICE */

/* Define to 1 if libimobiledevice-1.1.5 found */
/* #undef HAVE_LIBIMOBILEDEVICE_1_1_5 */

/* Whether libusb is installed */
/* #undef HAVE_LIBUSB */

/* Whether libxml is installed, it's used to parse SysInfoExtended */
#define HAVE_LIBXML 1

/* Define to 1 if you have the <locale.h> header file. */
#define HAVE_LOCALE_H 1

/* Define to 1 if you have the `localtime_r' function. */
#define HAVE_LOCALTIME_R 1

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Whether pygobject is installed, Python API will lack GdkPixbuf support
   without PyGOBJECT */
/* #undef HAVE_PYGOBJECT */

/* Define if you have sgutils support */
/* #undef HAVE_SGUTILS */

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if `tm_gmtoff' is a member of `struct tm'. */
#define HAVE_STRUCT_TM_TM_GMTOFF 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Whether TagLib is installed, it's only used in a test program */
/* #undef HAVE_TAGLIB */

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Whether zlib is installed, it's used for compressed iTunesCDB */
#define HAVE_ZLIB 1

/* Define to the sub-directory in which libtool stores uninstalled libraries.
   */
#define LT_OBJDIR ".libs/"

/* Define to 1 if your C compiler doesn't accept -c and -o together. */
/* #undef NO_MINUS_C_MINUS_O */

/* Name of package */
#define PACKAGE "libgpod"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT ""

/* Define to the full name of this package. */
#define PACKAGE_NAME "libgpod"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "libgpod 0.8.3"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "libgpod"

/* Define to the home page for this package. */
#define PACKAGE_URL ""

/* Define to the version of this package. */
#define PACKAGE_VERSION "0.8.3"

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Directory where HAL/udev will create a sub-directory to mount iPods */
#define TMPMOUNTDIR "/tmp/"

/* Enable extensions on AIX 3, Interix.  */
#ifndef _ALL_SOURCE
# define _ALL_SOURCE 1
#endif
/* Enable GNU extensions on systems that have them.  */
#ifndef _GNU_SOURCE
# define _GNU_SOURCE 1
#endif
/* Enable threading extensions on Solaris.  */
#ifndef _POSIX_PTHREAD_SEMANTICS
# define _POSIX_PTHREAD_SEMANTICS 1
#endif
/* Enable extensions on HP NonStop.  */
#ifndef _TANDEM_SOURCE
# define _TANDEM_SOURCE 1
#endif
/* Enable general extensions on Solaris.  */
#ifndef __EXTENSIONS__
# define __EXTENSIONS__ 1
#endif


/* Version number of package */
#define VERSION "0.8.3"

/* Define to 1 if on MINIX. */
/* #undef _MINIX */

/* Define to 2 if the system does not provide POSIX.1 features except with
   this defined. */
/* #undef _POSIX_1_SOURCE */

/* Define to 1 if you need to in order for `stat' and other things to work. */
/* #undef _POSIX_SOURCE */
