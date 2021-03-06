#ifndef _config_h_
#define _config_h_

/****************************************************************************
 * Architecture and OS flags
 *
 * Given a SPEC_CPU_OS_ARCH flag (specified by the user), provide
 * a SPEC_CPU_OS flag and a SPEC_CPU_ARCH flag.  Also define
 * SPEC_CPU_LITTLEENDIAN or SPEC_CPU_BIGENDIAN as appropriate.
 * For systems with only one data model (e.g. 64-bit Windows), also set
 * the data model flag, which is one of
 * SPEC_CPU_ILP32
 * SPEC_CPU_ILP64
 * SPEC_CPU_LP64
 * SPEC_CPU_P64
 ****************************************************************************/

/* For reference, here are the list of pre-defined arch/os flags that
 * 400.perlbench expects to see.  Please define only one.  Some (*BSD)
 * have not been tested/ported at all.
 *
 * SPEC_CPU_AIX		IBM AIX on PowerPC hardware
 * SPEC_CPU_BSD_X64 	*BSD on AMD64-compatible hardware in 64-bit mode
 * SPEC_CPU_BSD_IA32 	*BSD on Intel x86 hardware
 * SPEC_CPU_BSD_IA64 	*BSD on Intel IA-64 hardwar
 * SPEC_CPU_BSD_SPARC	*BSD on Sun SPARC hardware 
 * SPEC_CPU_BSD_PPC        	*BSD on PowerPC hardware
 * SPEC_CPU_BSD_ALPHA	*BSD on Compaq Alpha hardwa 
 * SPEC_CPU_BSD_MIPS 	*BSD on MIPS hardware     
 * SPEC_CPU_HPUX_IA64	HP-UX on Intel IA-64 hardware
 * SPEC_CPU_HPUX_HPPA	HP-UX on HPPA hardware
 * SPEC_CPU_IRIX		SGI IRIX on MIPS hardware
 * SPEC_CPU_LINUX_X64	Linux (glibc 2.1+) on AMD64-compatible hardware in 64-bit mode
 * SPEC_CPU_LINUX_IA32	Linux (glibc 2.1+) on Intel x86 hardware
 * SPEC_CPU_LINUX_IA64	Linux (glibc 2.1+) on Intel IA-64 hardware
 * SPEC_CPU_LINUX_SPARC	Linux (glibc 2.1+) on Sun SPARC hardware
 * SPEC_CPU_LINUX_PPC	Linux (glibc 2.1+) on PowerPC hardware
 * SPEC_CPU_LINUX_ALPHA	Linux (glibc 2.1+) on Compaq Alpha hardware
 * SPEC_CPU_LINUX_MIPS	Linux (glibc 2.1+) on MIPS hardware
 * SPEC_CPU_MACOSX_PPC		Apple Mac OS X on PowerPC hardware
 * SPEC_CPU_MACOSX_IA32		Apple Mac OS X on Intel x86 hardware
 * SPEC_CPU_RELIANT_MIPS	Reliant UNIX on MIPS hardware
 * SPEC_CPU_SOLARIS_SPARC 	Sun Solaris running on SPARC hardware
 * SPEC_CPU_SOLARIS_IA32	Sun Solaris running on Intel x86 hardware
 * SPEC_CPU_SOLARIS_X64 	Sun Solaris running on AMD64-compatible hardware
 * SPEC_CPU_TRU64		Compaq Tru64 Unix on Alpha hardware
 * SPEC_CPU_WIN32		Microsoft Windows NT/2000/XP on x86 hardware
 * SPEC_CPU_WIN64		Microsoft Windows NT/2000/XP on IA-64 hardware
 * SPEC_CPU_WIN64_X64  Microsoft Windows NT/2000/XP on AMD64-compatible hardware
 *
 * Almost every word in the above section is someone's trademark
 */

/* per-OS flags, for OSes that run on multiple architectures */

#if defined(SPEC_CPU_LINUX_IA32) || defined(SPEC_CPU_LINUX_IA64) || \
    defined(SPEC_CPU_LINUX_SPARC) || defined(SPEC_CPU_LINUX_PPC) || \
    defined(SPEC_CPU_LINUX_ALPHA) || defined(SPEC_CPU_LINUX_MIPS) || \
    defined(SPEC_CPU_LINUX_X64)
# define SPEC_CPU_LINUX
#endif

#if defined(SPEC_CPU_BSD_IA32) || defined(SPEC_CPU_BSD_IA64) || \
    defined(SPEC_CPU_BSD_SPARC) || defined(SPEC_CPU_BSD_PPC) || \
    defined(SPEC_CPU_BSD_ALPHA) || defined(SPEC_CPU_BSD_MIPS) || \
    defined(SPEC_CPU_BSD_X64)
# define SPEC_CPU_BSD
#endif

#if defined(SPEC_CPU_SOLARIS_SPARC) || \
    defined(SPEC_CPU_SOLARIS_IA32) || \
    defined(SPEC_CPU_SOLARIS_X64)
# define SPEC_CPU_SOLARIS
#endif

#if defined(SPEC_CPU_HPUX_IA64) || defined(SPEC_CPU_HPUX_HPPA)
# define SPEC_CPU_HPUX
#endif

#if defined(SPEC_CPU_LINUX_X64) || defined (SPEC_CPU_BSD_X64) || \
    defined(SPEC_CPU_WIN64_X64) || defined (SPEC_CPU_SOLARIS_X64)
# define SPEC_CPU_X64
#endif

#if defined(SPEC_CPU_RELIANT_MIPS)
# define SPEC_CPU_RELIANT
#endif

#if defined(SPEC_CPU_MACOSX_PPC) || \
    defined(SPEC_CPU_MACOSX_IA32)
# define SPEC_CPU_MACOSX
#endif

#if defined(SPEC_CPU_WIN32) || defined(SPEC_CPU_WIN64)
  /* This should be defined in Makefile.defaults.
   * But just in case it isn't...
   */
# if !defined(SPEC_CPU_WINDOWS)
#  define SPEC_CPU_WINDOWS
# endif
#endif

#if defined(SPEC_CPU_WINDOWS) && !defined(WIN32) && !defined(SPEC_CPU_NO_WIN32)
  /* Refugee from src/Makefile */
# define WIN32
#endif

/* per-architecture flags, for architectures that run multiple OSes */

#if defined(SPEC_CPU_LINUX_MIPS) || defined(SPEC_CPU_IRIX) || \
    defined(SPEC_CPU_BSD_MIPS) || defined(SPEC_CPU_RELIANT_MIPS)
# define SPEC_CPU_MIPS
#endif

#if defined(SPEC_CPU_LINUX_PPC) || defined(SPEC_CPU_AIX) || \
    defined(SPEC_CPU_MACOSX_PPC) || defined(SPEC_CPU_BSD_PPC)
# define SPEC_CPU_PPC
#endif

#if defined(SPEC_CPU_LINUX_IA32) || defined(SPEC_CPU_WIN32) || \
    defined(SPEC_CPU_BSD_IA32) || defined(SPEC_CPU_SOLARIS_IA32) || \
    defined(SPEC_CPU_MACOSX_IA32)
# define SPEC_CPU_IA32
#endif

#if defined(SPEC_CPU_LINUX_ALPHA) || defined(SPEC_CPU_TRU64) || \
    defined(SPEC_CPU_BSD_ALPHA)
# define SPEC_CPU_ALPHA
#endif

#if defined(SPEC_CPU_LINUX_SPARC) || defined(SPEC_CPU_SOLARIS_SPARC) ||\
    defined(SPEC_CPU_BSD_SPARC)
# define SPEC_CPU_SPARC
#endif

#if defined(SPEC_CPU_LINUX_IA64) || \
    defined(SPEC_CPU_BSD_IA64) || \
    (defined(SPEC_CPU_WIN64) && !defined(SPEC_CPU_WIN64_X64))
# define SPEC_CPU_IA64LE
# define SPEC_CPU_IA64
#endif

#if defined(SPEC_CPU_HPUX_IA64)
# define SPEC_CPU_IA64BE
# define SPEC_CPU_IA64
#endif

#if defined(SPEC_CPU_HPUX_HPPA)
# define SPEC_CPU_HPPA
#endif

#if defined(SPEC_CPU_PPC) || defined(SPEC_CPU_SPARC) || \
    defined(SPEC_CPU_HPPA) || defined(SPEC_CPU_IA64BE) || \
    defined(SPEC_CPU_MIPS)
# define SPEC_CPU_BIGENDIAN
#else
# define SPEC_CPU_LITTLEENDIAN
# if !defined(MYSWAP)
#  define MYSWAP
# endif
#endif

/* For clarity, each compilation environment data model will have its own
 * section.
 */

#if defined(SPEC_CPU_LP64)
/****************************************************************************
 * LP64 defines
 ****************************************************************************/
# if defined(SPEC_CPU_BIGENDIAN)
#   define BYTEORDER 0x87654321
# else
#   define BYTEORDER 0x12345678
# endif
# define INTSIZE 4
# define LONGSIZE 8
# define SHORTSIZE 2
# define DOUBLESIZE 8
# define PTRSIZE 8
# define Size_t_size 8
# define QUADKIND QUAD_IS_LONG
# define Quad_t long
# define Uquad_t unsigned long
# if !defined(SPEC_INT32_T)
#  define SPEC_INT32_T   unsigned int
# endif
# define	IVTYPE		long
# define	IVSIZE		8
# define	UVTYPE		unsigned long
# define	UVSIZE		8
# define	I8TYPE		signed char
# define	I8SIZE		1
# define	U8TYPE		unsigned char
# define	U8SIZE		1
# define	I16TYPE		short
# define	I16SIZE		2
# define	U16TYPE		unsigned short
# define	U16SIZE		2
# define	I32TYPE		int
# define	I32SIZE		4
# define	U32TYPE		unsigned int
# define	U32SIZE		4
# define	I64TYPE		long
# define	I64SIZE		8
# define	U64TYPE		unsigned long
# define	U64SIZE		8
# define	NVTYPE		double
# define	NVSIZE		8
# if defined(SPEC_CPU_RELIANT_MIPS) || defined(SPEC_CPU_TRU64)
#  define USE_64_BIT_INT
# endif

#elif defined(SPEC_CPU_ILP64)
/****************************************************************************
 * ILP64 defines
 ****************************************************************************/
# if defined(SPEC_CPU_BIGENDIAN)
#   define BYTEORDER 0x87654321
# else
#   define BYTEORDER 0x12345678
# endif
# define INTSIZE 8
# define LONGSIZE 8
# define SHORTSIZE 2
# define DOUBLESIZE 8
# define PTRSIZE 8
# define Size_t_size 8
# define QUADKIND QUAD_IS_INT
# define Quad_t int
# define Uquad_t unsigned int
# if !defined(SPEC_INT32_T)
#  error You must have a type that is exactly 32 bits wide!
# endif
# define	IVTYPE		int
# define	IVSIZE		8
# define	UVTYPE		unsigned int
# define	UVSIZE		8
# define	I8TYPE		signed char
# define	I8SIZE		1
# define	U8TYPE		unsigned char
# define	U8SIZE		1
# define	I16TYPE		short
# define	I16SIZE		2
# define	U16TYPE		unsigned short
# define	U16SIZE		2
# define	I32TYPE		int
# define	I32SIZE		8
# define	U32TYPE		unsigned int
# define	U32SIZE		8
# define	I64TYPE		long
# define	I64SIZE		8
# define	U64TYPE		unsigned long
# define	U64SIZE		8
# define	NVTYPE		double
# define	NVSIZE		8

#elif defined(SPEC_CPU_WIN64) || defined(SPEC_CPU_WIN64_X64)
/****************************************************************************
 * 64-bit Windows defines.  Technically, Win64 is a P64 model, but the Perl
 * port to this platform is more IP64.
 ****************************************************************************/
# define WIN64
# define CONSERVATIVE
# if defined(SPEC_CPU_BIGENDIAN)
#   define BYTEORDER 0x87654321
# else
#   define BYTEORDER 0x12345678
# endif
# define INTSIZE 4
# define LONGSIZE 4
# define SHORTSIZE 2
# define DOUBLESIZE 8
# define PTRSIZE 8
# define SSize_t __int64
# define Size_t_size 8
# define HAS_QUAD
# define USE_64_BIT_INT
# define QUADKIND QUAD_IS_INT64_T
# define Quad_t __int64
# define Uquad_t unsigned __int64
# define Off_t __int64
# define LSEEKSIZE 8
# define Off_t_size 8
# if !defined(SPEC_INT32_T)
#  define SPEC_INT32_T   unsigned long
# endif
# define	IVTYPE		__int64
# define	IVSIZE		8
# define	UVTYPE		unsigned __int64
# define	UVSIZE		8
# define	I8TYPE		signed char
# define	I8SIZE		1
# define	U8TYPE		unsigned char
# define	U8SIZE		1
# define	I16TYPE		short
# define	I16SIZE		2
# define	U16TYPE		unsigned short
# define	U16SIZE		2
# define	I32TYPE		long
# define	I32SIZE		4
# define	U32TYPE		unsigned long
# define	U32SIZE		4
# define	I64TYPE		__int64
# define	U64TYPE		unsigned __int64
# define	I64SIZE		8
# define	U64SIZE		8
# define	NVTYPE		double
# define	NVSIZE		8
# define	IVdf		"I64d"
# define	UVuf		"I64u"
# define	UVof		"I64o"
# define	UVxf		"I64x"
# define	UVXf		"I64X"
# if defined(SPEC_CPU_WINDOWS) && !defined(SPEC_CPU_NO_STAT64)
#  define Stat_t struct _stat64
# endif /* SPEC_CPU_WINDOWS && !SPEC_CPU_NO_STAT64 */

#elif defined(SPEC_CPU_P64)
/****************************************************************************
 * P64 defines
 ****************************************************************************/
# if defined(SPEC_CPU_BIGENDIAN)
#   define BYTEORDER 0x4321
# else
#   define BYTEORDER 0x1234
# endif
# define INTSIZE 4
# define LONGSIZE 4
# define SHORTSIZE 2
# define DOUBLESIZE 8
# define PTRSIZE 8
# define Size_t_size 8
# define QUADKIND QUAD_IS_INT64_T
# define Quad_t int64_t
# define Uquad_t uint64_t
# if !defined(SPEC_INT32_T)
#  define SPEC_INT32_T   unsigned long
# endif
# define	IVTYPE		long
# define	IVSIZE		4
# define	UVTYPE		unsigned long
# define	UVSIZE		4
# define	I8TYPE		signed char
# define	I8SIZE		1
# define	U8TYPE		unsigned char
# define	U8SIZE		1
# define	I16TYPE		short
# define	I16SIZE		2
# define	U16TYPE		unsigned short
# define	U16SIZE		2
# define	I32TYPE		long
# define	I32SIZE		4
# define	U32TYPE		unsigned long
# define	U32SIZE		4
# if defined(SPEC_CPU_WINDOWS)
#  define	I64TYPE		__int64
#  define	U64TYPE		unsigned __int64
#  if !defined(SPEC_CPU_NO_STAT64)
#   define Stat_t struct _stat64
#  endif /* !SPEC_CPU_NO_STAT64 */
# else
#  define	I64TYPE		long long
#  define	U64TYPE		unsigned long long
# endif
# define	I64SIZE		8
# define	U64SIZE		8
# define	NVTYPE		double
# define	NVSIZE		8

#elif !defined(SPEC_CPU_GOOFY_DATAMODEL)
/****************************************************************************
 * ILP32 defines
 ****************************************************************************/
# if defined(SPEC_CPU_BIGENDIAN)
#   define BYTEORDER 0x4321
# else
#   define BYTEORDER 0x1234
# endif
# define INTSIZE 4
# define LONGSIZE 4
# define SHORTSIZE 2
# define DOUBLESIZE 8
# define PTRSIZE 4
# define Size_t_size 4
# define QUADKIND QUAD_IS_LONG_LONG
# define Quad_t long long
# define Uquad_t unsigned long long
# if !defined(SPEC_INT32_T)
#  define SPEC_INT32_T   unsigned long
# endif
# define	IVTYPE		long
# define	IVSIZE		4
# define	UVTYPE		unsigned long
# define	UVSIZE		4
# define	I8TYPE		signed char
# define	I8SIZE		1
# define	U8TYPE		unsigned char
# define	U8SIZE		1
# define	I16TYPE		short
# define	I16SIZE		2
# define	U16TYPE		unsigned short
# define	U16SIZE		2
# define	I32TYPE		long
# define	I32SIZE		4
# define	U32TYPE		unsigned long
# define	U32SIZE		4
# define	I64TYPE		long long
# define	I64SIZE		8
# define	U64TYPE		unsigned long long
# define	U64SIZE		8
# define	NVTYPE		double
# define	NVSIZE		8
#endif /* ILP32 */

/* Stuff everyone needs */

/****************************************************************************
 * Various system tweaks
 ****************************************************************************/
# if defined(SPEC_CPU_LINUX_IA32)
#  define MEM_ALIGNBYTES 4
# else
#  define MEM_ALIGNBYTES 8
# endif

#if defined(SPEC_CPU_AIX)
#  define I_SYS_PARAM
#endif

#if defined(SPEC_CPU_SOLARIS) || defined(SPEC_CPU_WINDOWS) || \
    defined(SPEC_CPU_IRIX)
# if !defined(SPEC_CPU_NO_I_FCNTL)
#  define I_FCNTL
# endif
#elif !defined(SPEC_CPU_NO_I_SYS_FILE)
# define I_SYS_FILE
#endif

#if !defined(SPEC_CPU_NO_DIRNAMLEN)
# if defined(SPEC_CPU_MACOSX) || defined(SPEC_CPU_TRU64) || \
     defined(SPEC_CPU_HPUX) || defined(SPEC_CPU_AIX) || \
     defined(SPEC_CPU_WINDOWS)
#  define DIRNAMLEN
# endif
#endif
#if !defined(Direntry_t)
# if !defined(SPEC_CPU_WINDOWS)
#  define Direntry_t struct dirent
# else
#  define Direntry_t struct direct
# endif
#endif

#if !defined(SPEC_CPU_NO_I_TIME)
# if defined(SPEC_CPU_AIX) || defined(SPEC_CPU_LINUX) || \
     defined(SPEC_CPU_WINDOWS)
#  define I_TIME
# endif
#endif

#if !defined(SPEC_CPU_NO_CASTI32)
# if defined(SPEC_CPU_AIX) || defined(SPEC_CPU_LINUX_PPC) || \
     defined(SPEC_CPU_MACOSX) || defined(SPEC_CPU_SPARC)
#  define CASTI32
# endif
#endif

#if !defined(SPEC_CPU_AIX) && !defined(SPEC_CPU_NO_CASTNEGFLOAT) && \
    !defined(SPEC_CPU_LINUX_IA64)
# define CASTNEGFLOAT
#endif

#if !defined(CASTFLAGS)
# if defined(SPEC_CPU_AIX) || defined(SPEC_CPU_LINUX_IA64)
#  define CASTFLAGS 1
# else
#  define CASTFLAGS 0
# endif
#endif

#if !defined(LONG_DOUBLESIZE)
# if defined(SPEC_CPU_LINUX_ALPHA) || defined(SPEC_CPU_PPC) || \
     defined(SPEC_CPU_LINUX_SPARC)
#  define LONG_DOUBLESIZE 8
# elif defined(SPEC_CPU_WINDOWS)
#  define LONG_DOUBLESIZE 10
# elif defined(SPEC_CPU_LINUX_IA32)
#  define LONG_DOUBLESIZE 12
# else
#  define LONG_DOUBLESIZE 16
# endif
#endif

#if !defined(SPEC_CPU_HPUX) && !defined(SPEC_CPU_SOLARIS) && \
    !defined(SPEC_CPU_NO_FFLUSH_NULL)
# define FFLUSH_NULL
#endif

#if !defined(STDCHAR)
# if defined(SPEC_CPU_AIX) || defined(SPEC_CPU_TRU64) || \
     defined(SPEC_CPU_HPUX) || defined(SPEC_CPU_SOLARIS) || \
     defined(SPEC_CPU_IRIX)
#  define STDCHAR unsigned char
# else
#  define STDCHAR signed char
# endif
#endif

#if !defined(SPEC_CPU_WINDOWS) && !defined(SPEC_CPU_NO_HAS_QUAD)
# define HAS_QUAD
#endif

#if !defined(SPEC_CPU_WINDOWS) && !defined(SPEC_CPU_NO_HAS_FORK)
# define HAS_FORK
#endif

#if !defined(SPEC_CPU_NO_NEED_VA_COPY) && \
    (defined(SPEC_CPU_X64) || defined(SPEC_CPU_PPC))
# define NEED_VA_COPY
#endif

#if !defined(SPEC_CPU_WINDOWS)
# define SH_PATH "/bin/sh"
#else
# define SH_PATH "cmd /x /c"
#endif

#if !defined(SPEC_CPU_NO_HAS_DUP2)
# if defined(SPEC_CPU_MACOSX) || defined(SPEC_CPU_WINDOWS)
#  define HAS_DUP2
# endif
#endif

/* Handle the gconvert mess */
#if !defined(Gconvert)
# if defined(SPEC_CPU_TRU64) || defined(SPEC_CPU_MACOSX) || \
     defined(SPEC_CPU_WINDOWS)
#  define Gconvert(x,n,t,b) sprintf((b),"%.*g",(n),(x))
# elif defined(SPEC_CPU_SOLARIS)
#  define Gconvert(x,n,t,b) gconvert((x),(n),(t),(b))
# else
#  define Gconvert(x,n,t,b) gcvt((x),(n),(b))
# endif
#endif

/* This shouldn't matter, since we shouldn't be messing with UIDs and GIDs.
 * Still, better safe than sorry...  Reinhold's compiler might bite me again.
 */
#if !defined(Uid_t_sign)
# if defined(SPEC_CPU_HPUX) || defined(SPEC_CPU_IRIX) || \
     defined(SPEC_CPU_MIPS) || defined(SPEC_CPU_WINDOWS)
#  define Uid_t_sign -1
# else
#  define Uid_t_sign 1
# endif
#endif
#if !defined(Gid_t_sign)
# if defined(SPEC_CPU_HPUX) || defined(SPEC_CPU_IRIX) || \
     defined(SPEC_CPU_MIPS) || defined(SPEC_CPU_WINDOWS)
#  define Gid_t_sign -1
# else
#  define Gid_t_sign 1
# endif
#endif

#if !defined(SPEC_CPU_NO_NV_PRESERVES_UV) && \
     !(defined(SPEC_CPU_AIX) && defined(SPEC_CPU_LP64)) && \
     !defined(SPEC_CPU_ALPHA) && \
     !defined(SPEC_CPU_WIN64) && \
     !defined(SPEC_CPU_WIN64_X64) && \
     !(defined(SPEC_CPU_IRIX) && defined(SPEC_CPU_LP64)) && \
     !defined(SPEC_CPU_X64) && \
     !defined(SPEC_CPU_LINUX_IA64)
# define NV_PRESERVES_UV
#endif

#if !defined(NV_PRESERVES_UV_BITS)
# if defined(SPEC_CPU_ALPHA) || \
     defined(SPEC_CPU_WIN64) || \
     defined(SPEC_CPU_WIN64_X64) || \
     defined(SPEC_CPU_LINUX_IA64) || \
     (defined(SPEC_CPU_AIX) && defined(SPEC_CPU_LP64)) || \
     (defined(SPEC_CPU_WINDOWS) && defined(SPEC_CPU_P64)) || \
     (defined(SPEC_CPU_IRIX) && defined(SPEC_CPU_LP64)) 
#  define NV_PRESERVES_UV_BITS	53
# else
#  define NV_PRESERVES_UV_BITS	32
# endif
#endif

#if !defined(SELECT_MIN_BITS)
# if defined(SPEC_CPU_AIX)
#   define SELECT_MIN_BITS 1
# elif defined(SPEC_CPU_LINUX_ALPHA) || \
       defined(SPEC_CPU_LINUX_X64) ||\
       defined(SPEC_CPU_LINUX_IA64)
#   define SELECT_MIN_BITS 64
# else
#   define SELECT_MIN_BITS 32
# endif
#endif

/* This really shouldn't matter, either, since we won't be doing anything
 * with sockets.  But just in case I don't excise all the sockets code,
 * here it is:
 */
#if !defined(Sock_size_t)
# if defined(SPEC_CPU_LINUX)
#  define Sock_size_t socklen_t
# else
#  define Sock_size_t int
# endif
#endif

/* Ugh... the formatting mess!  Still, in the interest of validation, this
 * may be important.
 */
#if !defined(PERL_PRIfldbl)
# if defined(SPEC_CPU_LINUX_ALPHA) || defined(SPEC_CPU_PPC) || \
     defined(SPEC_CPU_LINUX_SPARC) || defined(SPEC_CPU_WINDOWS)
#  define PERL_PRIfldbl "f"
# else
#  define PERL_PRIfldbl "Lf"
# endif
#endif
#if !defined(PERL_PRIgldbl)
# if defined(SPEC_CPU_LINUX_ALPHA) || defined(SPEC_CPU_PPC) || \
     defined(SPEC_CPU_LINUX_SPARC) || defined(SPEC_CPU_WINDOWS)
#  define PERL_PRIgldbl "g"
# else
#  define PERL_PRIgldbl "Lg"
# endif
#endif
#if !defined(PERL_PRIeldbl)
# if defined(SPEC_CPU_LINUX_ALPHA) || defined(SPEC_CPU_PPC) || \
     defined(SPEC_CPU_LINUX_SPARC) || defined(SPEC_CPU_WINDOWS)
#  define PERL_PRIeldbl "e"
# else
#  define PERL_PRIeldbl "Le"
# endif
#endif
#if !defined(PERL_SCNfldbl)
# if defined(SPEC_CPU_LINUX_ALPHA) || defined(SPEC_CPU_PPC) || \
     defined(SPEC_CPU_LINUX_SPARC)
#  define PERL_SCNfldbl "f"
# elif !defined(SPEC_CPU_WINDOWS)
#  define PERL_SCNfldbl "Lf"
# endif
#endif

#if !defined(IVdf)
# define IVdf "ld"
#endif
#if !defined(UVuf)
# define UVuf "lu"
#endif
#if !defined(UVof)
# define UVof "lo"
#endif
#if !defined(UVxf)
# define UVxf "lx"
#endif
#if !defined(UVXf)
#  define UVXf "lX"
#endif
#if !defined(NVef)
#  define NVef "e"
#endif
#if !defined(NVff)
#  define NVff "f"
#endif
#if !defined(NVgf)
#  define NVgf "g"
#endif

/* Evidently SpamAssassin likes to make directories.  Lots and lots of
 * directories.  Defining HAS_MKDIR will keep Perl from doing a popen to
 * run 'mkdir'.
 */
#if !defined(SPEC_CPU_NO_HAS_MKDIR)
#  define HAS_MKDIR
#endif

/* Stuff that Windows doesn't have */
#if !defined(SPEC_CPU_WINDOWS)

# if !defined(SPEC_CPU_SOLARIS) && !defined(SPEC_CPU_NO_HAS_SIGSETJMP)
#  define HAS_SIGSETJMP
# endif

# if !defined(SPEC_CPU_NO_I_SYS_IOCTL)
#  define I_SYS_IOCTL
# endif

# if !defined(SPEC_CPU_NO_I_UNISTD)
#  define I_UNISTD
# endif

# if !defined(SPEC_CPU_NO_I_INTTYPES)
#  define I_INTTYPES
# endif

# if !defined(SPEC_CPU_NO_HAS_LONG_LONG)
#  define HAS_LONG_LONG
# endif

# if !defined(SPEC_CPU_NO_HAS_INT64_T)
#  define HAS_INT64_T
# endif

# if !defined(SPEC_CPU_NO_HAS_FCNTL)
#  define HAS_FCNTL
# endif

# if !defined(SPEC_CPU_NO_I_SYS_TIME)
#  define I_SYS_TIME
# endif

# if !defined(SPEC_CPU_NO_I_SYS_TIMES)
#  define I_SYS_TIMES
# endif

# if !defined(SPEC_CPU_NO_I_SYS_WAIT)
#  define I_SYS_WAIT
# endif

# if !defined(SPEC_CPU_NO_HAS_TRUNCATE)
#  define HAS_TRUNCATE
# endif

#endif /* !SPEC_CPU_WINDOWS */

#if !defined(SSize_t)
# if defined(SPEC_CPU_WINDOWS)
#  define SSize_t int
# else
#  define SSize_t ssize_t
# endif
#endif

#if !defined(Pid_t)
# if defined(SPEC_CPU_WINDOWS)
#  define Pid_t int
# else
#  define Pid_t pid_t
# endif
#endif

#if !defined(Select_fd_set_t)
# if defined(SPEC_CPU_WINDOWS)
#  define Select_fd_set_t 	Perl_fd_set *
# else
#  define Select_fd_set_t 	fd_set *
# endif
#endif

#if !defined(LSEEKSIZE)
#  define LSEEKSIZE 8
#endif
#if !defined(Off_t_size)
#  define Off_t_size 8
#endif

#if defined(SPEC_CPU) && !defined(SPEC_CPU_WINDOWS)
 /* Select definitions from unixish.h */
# ifndef PERL_SYS_INIT
#  define PERL_SYS_INIT(c,v) PERL_FPU_INIT MALLOC_INIT
# endif
# if !defined(BIT_BUCKET)
#  define BIT_BUCKET "/dev/null"
# endif
# if !defined(Stat)
# define Stat(fname,bufptr) stat((fname),(bufptr))
# endif
# if !defined(SPEC_CPU_NO_I_ARPA_INET)
#  define I_ARPA_INET
# endif
 /* End inclusion from unixish.h */
#elif defined(SPEC_CPU_WINDOWS)
 /* Select definitions from dosish.h */
# ifndef PERL_SYS_INIT
#  define PERL_SYS_INIT(c,v) Perl_win32_init(c,v)
# endif
# ifndef PERL_SYS_TERM
#  define PERL_SYS_TERM()		OP_REFCNT_TERM; MALLOC_TERM
# endif
# if !defined(BIT_BUCKET)
#  define BIT_BUCKET "nul"
# endif
# if !defined(SPEC_CPU_NO_USE_STAT_RDEV)
#  define USE_STAT_RDEV
# if !defined(Off_t)
#  define Off_t __int64
# endif
# endif
 /* End inclusion from dosish.h */
#endif

/* Grrr...stdio optimizations
 * Normally these would just be turned off, but since some platforms
 * REQUIRE them, it's best that everyone have them.
 */
#if defined(SPEC_CPU_SOLARIS) && defined(SPEC_CPU_LP64)
# define SPEC_CPU_NO_USE_STDIO_PTR
# define SPEC_CPU_NO_USE_STDIO_BASE
#endif

#if !defined(SPEC_CPU_NO_USE_STDIO_PTR)
# define USE_STDIO_PTR

# if !defined(FILE_ptr)
#  if defined(SPEC_CPU_LINUX)
#   define FILE_ptr(fp) ((fp)->_IO_read_ptr)
#  elif defined(SPEC_CPU_TRU64) || defined(SPEC_CPU_HPUX) || \
       defined(SPEC_CPU_IRIX) || defined(SPEC_CPU_AIX) || \
       defined(SPEC_CPU_SOLARIS)
#   define FILE_ptr(fp) ((fp)->_ptr)
#  elif defined(SPEC_CPU_MACOSX)
#   define FILE_ptr(fp) ((fp)->_p)
#  else
#   undef USE_STDIO_PTR
#  endif
# endif
# if !defined(FILE_cnt)
#  if defined(SPEC_CPU_LINUX)
#   define FILE_cnt(fp) ((fp)->_IO_read_end - (fp)->_IO_read_ptr)
#  elif defined(SPEC_CPU_TRU64) || defined(SPEC_CPU_HPUX) || \
       defined(SPEC_CPU_IRIX) || defined(SPEC_CPU_AIX) || \
       defined(SPEC_CPU_SOLARIS)
#   define FILE_cnt(fp) ((fp)->_cnt)
#  elif defined(SPEC_CPU_MACOSX)
#   define FILE_cnt(fp) ((fp)->_r)
#  else
#   undef USE_STDIO_PTR
#  endif
# endif
#endif

#if !defined(SPEC_CPU_NO_USE_STDIO_BASE)
# define USE_STDIO_BASE

# if !defined(FILE_base)
#  if defined(SPEC_CPU_LINUX)
#   define FILE_base(fp) ((fp)->_IO_read_base)
#  elif defined(SPEC_CPU_TR64) || defined(SPEC_CPU_HPUX) || \
       defined(SPEC_CPU_IRIX) || defined(SPEC_CPU_AIX) || \
       defined(SPEC_CPU_SOLARIS)
#   define FILE_base(fp) ((fp)->_base)
#  elif defined(SPEC_CPU_MACOSX)
#   define FILE_base(fp) ((fp)->_ub._base ? (fp)->_ub._base : (fp)->_bf._base)
#  else
#   undef USE_STDIO_BASE
#  endif
# endif
# if !defined(FILE_bufsiz)
#  if defined(SPEC_CPU_LINUX)
#   define FILE_bufsiz(fp) ((fp)->_IO_read_end - (fp)->_IO_read_base)
#  elif defined(SPEC_CPU_TRU64) || defined(SPEC_CPU_HPUX) || \
       defined(SPEC_CPU_IRIX) || defined(SPEC_CPU_AIX) || \
       defined(SPEC_CPU_SOLARIS)
#   define FILE_bufsiz(fp) ((fp)->_cnt + (fp)->_ptr - (fp)->_base)
#  elif defined(SPEC_CPU_MACOSX)
#   define FILE_bufsiz(fp) ((fp)->_ub._base ? (fp)->_ub._size : (fp)->_bf._size)
#  else
#   undef USE_STDIO_BASE
#  endif
# endif
#endif

/* EVERYONE uses SPEC's random number generator! */
#define Drand01()		spec_rand()
#define Rand_seed_t		int
#define seedDrand01(x)		spec_srand((Rand_seed_t)x)
#define RANDBITS		31

/* NOBODY gets randomized hash keys! */
#define PERL_HASH_SEED 0

/****************************************************************************
 * This section includes general defines (and undefs) to help in not utilizing
 * parts of the OS that we don't want to benchmark, as well as specifying the
 * bits of the compilation environment (like ANSI compliance) that SPEC
 * requires.
 * All of the symbols here have an explanatory section farther down in the
 * file.
 ****************************************************************************/

#if defined(SPEC_CPU)
/* Things to never use */
# undef USE_DYNAMIC_LOADING
# undef HAS_CRYPT
# undef HASATTRIBUTE
# undef HAS_CHOWN
# undef HAS_CHROOT
# undef PERL_BINCOMPAT_5005
# undef HAS_PHOSTNAME
# undef HAS_CSH
# undef PERL_MALLOC_WRAP
# if !defined(SPEC_CPU_REALLY_USE_LOCALE)
#  define NO_LOCALE
# endif

/* Things everyone has, needs, or can do (probably ANSI; I don't know) */
# if !defined(SPEC_CPU_NO_HASCONST)
#  define HASCONST
# endif
# if !defined(SPEC_CPU_NO_CAN_PROTOTYPE)
#  define CAN_PROTOTYPE
# endif
# if !defined(SPEC_CPU_NO_HAS_ISNAN)
#  define HAS_ISNAN
# endif
# if !defined(SPEC_CPU_NO_HAS_MEMCHR)
#  define HAS_MEMCHR
# endif
# if !defined(SPEC_CPU_NO_HAS_MEMCMP)
#  define HAS_MEMCMP
# endif
# if !defined(SPEC_CPU_NO_HAS_SANE_MEMCMP)
#  define HAS_SANE_MEMCMP
# endif
# if !defined(SPEC_CPU_NO_HAS_MEMCPY)
#  define HAS_MEMCPY
# endif
# if !defined(SPEC_CPU_NO_HAS_MEMMOVE)
#  define HAS_MEMMOVE
# endif
# if !defined(SPEC_CPU_NO_HAS_MEMSET)
#  define HAS_MEMSET
# endif
# if !defined(SPEC_CPU_NO_EOF_NONBLOCK)
#  define EOF_NONBLOCK
# endif
# if !defined(SPEC_CPU_NO_HAS_SELECT)
#  define HAS_SELECT
# endif
# if !defined(SPEC_CPU_NO_HAS_STRCHR)
#  define HAS_STRCHR
# endif
# if !defined(SPEC_CPU_NO_HAS_STRCOLL)
#  define HAS_STRCOLL
# endif
# if !defined(SPEC_CPU_NO_HAS_STRTOD)
#  define HAS_STRTOD
# endif
# if !defined(SPEC_CPU_NO_HAS_STRTOL)
#  define HAS_STRTOL
# endif
# if !defined(SPEC_CPU_NO_HAS_STRXFRM)
#  define HAS_STRXFRM
# endif
# if !defined(SPEC_CPU_NO_HAS_SYSTEM)
#  define HAS_SYSTEM
# endif
# if !defined(SPEC_CPU_NO_HASVOLATILE)
#  define HASVOLATILE
# endif
# if !defined(SPEC_CPU_NO_HAS_VPRINTF)
#  define HAS_VPRINTF
# endif
# if !defined(VOIDUSED)
#  define VOIDUSED 15
# endif
# if !defined(VOIDFLAGS)
#  define VOIDFLAGS 15
# endif
# if !defined(SPEC_CPU_NO_HAS_DBL_DIG)
#  define HAS_DBL_DIG
# endif
# if !defined(SPEC_CPU_NO_HAS_LDBL_DIG)
#  define HAS_LDBL_DIG
# endif
# if !defined(SPEC_CPU_NO_HAS_LONG_DOUBLE)
#  define HAS_LONG_DOUBLE
# endif
# if defined(HAS_LONG_LONG) && !defined(LONGLONGSIZE)
#  define LONGLONGSIZE 8
# endif
# if !defined(SPEC_CPU_NO_FLEXFILENAMES)
#  define FLEXFILENAMES
# endif
# if !defined(SPEC_CPU_NO_U32_ALIGNMENT_REQUIRED)
#  define U32_ALIGNMENT_REQUIRED
# endif
# if !defined(SPEC_CPU_NO_I_UTIME)
#  define I_UTIME
# endif
# if !defined(SPEC_CPU_NO_I_DIRENT)
#  define I_DIRENT
# endif
# if !defined(SPEC_CPU_NO_I_FLOAT)
#  define I_FLOAT
# endif
# if !defined(SPEC_CPU_NO_I_LIMITS)
#  define I_LIMITS
# endif
# if !defined(SPEC_CPU_NO_I_MATH)
#  define I_MATH
# endif
# if !defined(SPEC_CPU_NO_I_SYS_STAT)
#  define I_SYS_STAT
# endif
# if !defined(SPEC_CPU_NO_I_STDARG)
#  define I_STDARG
# endif
# if !defined(SPEC_CPU_NO_I_STDLIB)
#  define I_STDLIB
# endif
# if !defined(SPEC_CPU_NO_I_STRING)
#  define I_STRING
# endif
# if !defined(SPEC_CPU_NO_STRUCT_COPY)
#  define USE_STRUCT_COPY
# endif
# if !defined(SPEC_CPU_NO_HAS_RMDIR)
#  define HAS_RMDIR
# endif
# if !defined(SPEC_CPU_NO_HAS_GETTIMEOFDAY)
#  define HAS_GETTIMEOFDAY
# endif

/* Stuff that's the same in unixish.h and dosish.h */
# if !defined(fwrite1)
#  define fwrite1 fwrite
# endif
# if !defined(Fstat)
# define Fstat(fd,bufptr)   fstat((fd),(bufptr))
# endif
# if !defined(Fflush)
# define Fflush(fp)         fflush(fp)
# endif
# if !defined(Mkdir)
# define Mkdir(path,mode)   mkdir((path),(mode))
# endif
# if !defined(Stat_t)
#  define Stat_t struct stat
# endif
# if !defined(SPEC_CPU_NO_dXSUB_SYS)
#  define dXSUB_SYS
# endif
# ifndef PERL_SYS_TERM
#  define PERL_SYS_TERM()		OP_REFCNT_TERM; MALLOC_TERM
# endif
# if !defined(SPEC_CPU_NO_HAS_IOCTL)
#  define HAS_IOCTL
# endif
# if !defined(SPEC_CPU_NO_HAS_WAIT)
#  define HAS_WAIT
# endif
# if !defined(SPEC_CPU_NO_HAS_WAITPID)
#  define HAS_WAITPID
# endif
/* End common stuff from unixish.h and dosish.h */

/* Safe, but overrideable defaults */
# if !defined(Strerror)
#  define Strerror(e) strerror(e)
# endif
# if !defined(Time_t)
#  define Time_t time_t
# endif
# if !defined(Signal_t)
#  define Signal_t void
# endif
# if !defined(Fpos_t)
#  define Fpos_t fpos_t
# endif
# if !defined(Off_t)
#  define Off_t off_t
# endif
# if !defined(Malloc_t)
#  define Malloc_t void *
# endif
# if !defined(Free_t)
#  define Free_t void
# endif
# if !defined(Mode_t)
#  define Mode_t mode_t
# endif
# if !defined(Size_t)
#  define Size_t size_t
# endif
# if !defined(VAL_O_NONBLOCK)
#  define VAL_O_NONBLOCK O_NONBLOCK
# endif
# if !defined(VAL_EAGAIN)
#  define VAL_EAGAIN EAGAIN
# endif
# if !defined(RD_NODATA)
#  define RD_NODATA -1
# endif
# if !defined(Uid_t_size)
#  define Uid_t_size 4
# endif
# if !defined(Uid_t)
#  define Uid_t uid_t
# endif
# if !defined(Gid_t_size)
#  define Gid_t_size 4
# endif
# if !defined(Gid_t)
#  define Gid_t gid_t
# endif

/* SPECification */
# define OSNAME		"SPEC CPU"
# define OSVERS		"2005"
# define	USE_PERLIO
# define	INCOMPLETE_TAINTS

/* Generificiation :) */
# define LOC_SED		""
# define CSH		""
/* It's a good thing we never use this; it wouldn't work anyway :) */
# define STARTPERL	"#!./perlbench"
# define PHOSTNAME	""
# define ARCHLIB		""
# define ARCHLIB_EXP	""
# define ARCHNAME	"spec-cpu"
# define BIN		""
# define BIN_EXP		""
# define INSTALL_PREFIX		""
# define INSTALL_PREFIX_EXP	""
# define PRIVLIB		""
# define PRIVLIB_EXP	""
# define SITEARCH	""
# define SITEARCH_EXP	""
# define SITELIB		""
# define SITELIB_EXP	""
# define SITELIB_STEM	""
# define SIG_NAME "ZERO", "HUP", "INT", "QUIT", "ILL", "TRAP", "ABRT", "BUS", "FPE", "KILL", "USR1", "SEGV", "USR2", "PIPE", "ALRM", "TERM", 0
# define SIG_NUM  0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 0
# if !defined(SIG_SIZE)
#  define SIG_SIZE	16
# endif
# define PERL_INC_VERSION_LIST 0
#endif /* SPEC_CPU */

/*****************************************************************************/
/*****************************************************************************/
/*****************************************************************************/
/*****************************************************************************/
/*****************************************************************************/
/*****************************************************************************/
/*
 * This file was produced by running the config_h.SH script, which
 * gets its values from config.sh-ia32-rh6.2linux, which is generally produced by
 * running Configure.
 *
 * Feel free to modify any of this as the need arises.  Note, however,
 * that running config_h.SH again will wipe out any changes you've made.
 * For a more permanent change edit config.sh-ia32-rh6.2linux and rerun config_h.SH.
 *
 * $Id: Config_h.U,v 3.0.1.5 1997/02/28 14:57:43 ram Exp $
 */

/*
 * Package name      : perl5
 * Source directory  : .
 * Configuration time: Wed Nov 14 11:50:12 CST 2001
 * Configured by     : cloyce
 * Target system     : linux chimpzilla.spec.org 2.4.13-ac7 #8 smp mon nov 12 13:06:36 cst 2001 i686 unknown
 */

/* LOC_SED:
 *	This symbol holds the complete pathname to the sed program.
 */

/* HAS_ALARM:
 *	This symbol, if defined, indicates that the alarm routine is
 *	available.
 */
/* #define HAS_ALARM		/ **/

/* HASATTRIBUTE:
 *	This symbol indicates the C compiler can check for function attributes,
 *	such as printf formats. This is normally only supported by GNU cc.
 */
#undef HASATTRIBUTE 	/**/
#ifndef HASATTRIBUTE
#define __attribute__(_arg_)
#endif

/* HAS_BCMP:
 *	This symbol is defined if the bcmp() routine is available to
 *	compare blocks of memory.
 */
/* #define HAS_BCMP	/ **/

/* HAS_BCOPY:
 *	This symbol is defined if the bcopy() routine is available to
 *	copy blocks of memory.
 */
/* #define HAS_BCOPY	/ **/

/* HAS_BZERO:
 *	This symbol is defined if the bzero() routine is available to
 *	set a memory block to 0.
 */
/* #define HAS_BZERO	/ **/

/* HAS_CHOWN:
 *	This symbol, if defined, indicates that the chown routine is
 *	available.
 */
/* #define HAS_CHOWN		/ **/

/* HAS_CHROOT:
 *	This symbol, if defined, indicates that the chroot routine is
 *	available.
 */
/* #define HAS_CHROOT		/ **/

/* HAS_CHSIZE:
 *	This symbol, if defined, indicates that the chsize routine is available
 *	to truncate files.  You might need a -lx to get this routine.
 */
/*#define	HAS_CHSIZE		/ **/

/* HASCONST:
 *	This symbol, if defined, indicates that this C compiler knows about
 *	the const type. There is no need to actually test for that symbol
 *	within your programs. The mere use of the "const" keyword will
 *	trigger the necessary tests.
 */
#ifndef HASCONST
# define const
#endif

/* HAS_CUSERID:
 *	This symbol, if defined, indicates that the cuserid routine is
 *	available to get character login names.
 */
/* #define HAS_CUSERID		/ **/

/* HAS_DBL_DIG:
 *	This symbol, if defined, indicates that this system's <float.h>
 *	or <limits.h> defines the symbol DBL_DIG, which is the number
 *	of significant digits in a double precision number.  If this
 *	symbol is not defined, a guess of 15 is usually pretty good.
 */
/* #define HAS_DBL_DIG 	/ * */

/* HAS_DIFFTIME:
 *	This symbol, if defined, indicates that the difftime routine is
 *	available.
 */
/* #define HAS_DIFFTIME		/ **/

/* HAS_DLERROR:
 *	This symbol, if defined, indicates that the dlerror routine is
 *	available to return a string describing the last error that
 *	occurred from a call to dlopen(), dlclose() or dlsym().
 */
/* #define HAS_DLERROR	/ **/

/* HAS_DUP2:
 *	This symbol, if defined, indicates that the dup2 routine is
 *	available to duplicate file descriptors.
 */
/* #define HAS_DUP2	/ **/

/* HAS_FCHMOD:
 *	This symbol, if defined, indicates that the fchmod routine is available
 *	to change mode of opened files.  If unavailable, use chmod().
 */
/* #define HAS_FCHMOD		/ **/

/* HAS_FCHOWN:
 *	This symbol, if defined, indicates that the fchown routine is available
 *	to change ownership of opened files.  If unavailable, use chown().
 */
/* #define HAS_FCHOWN		/ **/

/* HAS_FCNTL:
 *	This symbol, if defined, indicates to the C program that
 *	the fcntl() function exists.
 */
/* #define HAS_FCNTL		/ **/

/* HAS_FGETPOS:
 *	This symbol, if defined, indicates that the fgetpos routine is
 *	available to get the file position indicator, similar to ftell().
 */
/* #define HAS_FGETPOS	/ **/

/* HAS_FLOCK:
 *	This symbol, if defined, indicates that the flock routine is
 *	available to do file locking.
 */
/* #define HAS_FLOCK		/ **/

/* HAS_FORK:
 *	This symbol, if defined, indicates that the fork routine is
 *	available.
 */
/* #define HAS_FORK		/ **/

/* HAS_FSETPOS:
 *	This symbol, if defined, indicates that the fsetpos routine is
 *	available to set the file position indicator, similar to fseek().
 */
/* #define HAS_FSETPOS	/ **/

/* HAS_GETTIMEOFDAY:
 *	This symbol, if defined, indicates that the gettimeofday() system
 *	call is available for a sub-second accuracy clock. Usually, the file
 *	<sys/resource.h> needs to be included (see I_SYS_RESOURCE).
 *	The type "Timeval" should be used to refer to "struct timeval".
 */
/* #define HAS_GETTIMEOFDAY	/ **/
#ifdef HAS_GETTIMEOFDAY
# ifndef Timeval
#  define Timeval struct timeval	/* Structure used by gettimeofday() */
# endif
#endif

/* HAS_GETGROUPS:
 *	This symbol, if defined, indicates that the getgroups() routine is
 *	available to get the list of process groups.  If unavailable, multiple
 *	groups are probably not supported.
 */
/* #define HAS_GETGROUPS		/ **/

/* HAS_GETLOGIN:
 *	This symbol, if defined, indicates that the getlogin routine is
 *	available to get the login name.
 */
/* #define HAS_GETLOGIN		/ **/

/* HAS_GETPGID:
 *	This symbol, if defined, indicates to the C program that
 *	the getpgid(pid) function is available to get the
 *	process group id.
 */
/* #define HAS_GETPGID		/ **/

/* HAS_GETPGRP2:
 *	This symbol, if defined, indicates that the getpgrp2() (as in DG/UX)
 *	routine is available to get the current process group.
 */
/*#define HAS_GETPGRP2		/ **/

/* HAS_GETPPID:
 *	This symbol, if defined, indicates that the getppid routine is
 *	available to get the parent process ID.
 */
/*#define HAS_GETPPID		/ **/

/* HAS_GETPRIORITY:
 *	This symbol, if defined, indicates that the getpriority routine is
 *	available to get a process's priority.
 */
/*#define HAS_GETPRIORITY		/ **/

/* HAS_INET_ATON:
 *	This symbol, if defined, indicates to the C program that the
 *	inet_aton() function is available to parse IP address "dotted-quad"
 *	strings.
 */
/*#define HAS_INET_ATON		/ **/

/* HAS_KILLPG:
 *	This symbol, if defined, indicates that the killpg routine is available
 *	to kill process groups.  If unavailable, you probably should use kill
 *	with a negative process number.
 */
/*#define HAS_KILLPG	/ **/

/* HAS_LINK:
 *	This symbol, if defined, indicates that the link routine is
 *	available to create hard links.
 */
/*#define HAS_LINK	/ **/

/* HAS_LOCALECONV:
 *	This symbol, if defined, indicates that the localeconv routine is
 *	available for numeric and monetary formatting conventions.
 */
/*#define HAS_LOCALECONV	/ **/

/* HAS_LOCKF:
 *	This symbol, if defined, indicates that the lockf routine is
 *	available to do file locking.
 */
/*#define HAS_LOCKF		/ **/

/* HAS_LSTAT:
 *	This symbol, if defined, indicates that the lstat routine is
 *	available to do file stats on symbolic links.
 */
/*#define HAS_LSTAT		/ **/

/* HAS_MBLEN:
 *	This symbol, if defined, indicates that the mblen routine is available
 *	to find the number of bytes in a multibye character.
 */
/*#define HAS_MBLEN		/ **/

/* HAS_MBSTOWCS:
 *	This symbol, if defined, indicates that the mbstowcs routine is
 *	available to covert a multibyte string into a wide character string.
 */
/*#define	HAS_MBSTOWCS		/ **/

/* HAS_MBTOWC:
 *	This symbol, if defined, indicates that the mbtowc routine is available
 *	to covert a multibyte to a wide character.
 */
/*#define HAS_MBTOWC		/ **/

/* HAS_MEMCMP:
 *	This symbol, if defined, indicates that the memcmp routine is available
 *	to compare blocks of memory.
 */
/*#define HAS_MEMCMP	/ **/

/* HAS_MEMCPY:
 *	This symbol, if defined, indicates that the memcpy routine is available
 *	to copy blocks of memory.
 */
/*#define HAS_MEMCPY	/ **/

/* HAS_MEMMOVE:
 *	This symbol, if defined, indicates that the memmove routine is available
 *	to copy potentially overlapping blocks of memory. This should be used
 *	only when HAS_SAFE_BCOPY is not defined. If neither is there, roll your
 *	own version.
 */
/*#define HAS_MEMMOVE	/ **/

/* HAS_MEMSET:
 *	This symbol, if defined, indicates that the memset routine is available
 *	to set blocks of memory.
 */
/*#define HAS_MEMSET	/ **/

/* HAS_MKDIR:
 *	This symbol, if defined, indicates that the mkdir routine is available
 *	to create directories.  Otherwise you should fork off a new process to
 *	exec /bin/mkdir.
 */
/*#define HAS_MKDIR		/ **/

/* HAS_MKFIFO:
 *	This symbol, if defined, indicates that the mkfifo routine is
 *	available to create FIFOs. Otherwise, mknod should be able to
 *	do it for you. However, if mkfifo is there, mknod might require
 *	super-user privileges which mkfifo will not.
 */
/*#define HAS_MKFIFO		/ **/

/* HAS_MKTIME:
 *	This symbol, if defined, indicates that the mktime routine is
 *	available.
 */
/*#define HAS_MKTIME		/ **/

/* HAS_MSYNC:
 *	This symbol, if defined, indicates that the msync system call is
 *	available to synchronize a mapped file.
 */
/*#define HAS_MSYNC		/ **/

/* HAS_MUNMAP:
 *	This symbol, if defined, indicates that the munmap system call is
 *	available to unmap a region, usually mapped by mmap().
 */
/*#define HAS_MUNMAP		/ **/

/* HAS_NICE:
 *	This symbol, if defined, indicates that the nice routine is
 *	available.
 */
/*#define HAS_NICE		/ **/

/* HAS_PATHCONF:
 *	This symbol, if defined, indicates that pathconf() is available
 *	to determine file-system related limits and options associated
 *	with a given filename.
 */
/* HAS_FPATHCONF:
 *	This symbol, if defined, indicates that pathconf() is available
 *	to determine file-system related limits and options associated
 *	with a given open file descriptor.
 */
/*#define HAS_PATHCONF		/ **/
/*#define HAS_FPATHCONF		/ **/

/* HAS_PAUSE:
 *	This symbol, if defined, indicates that the pause routine is
 *	available to suspend a process until a signal is received.
 */
/*#define HAS_PAUSE		/ **/

/* HAS_PIPE:
 *	This symbol, if defined, indicates that the pipe routine is
 *	available to create an inter-process channel.
 */
/*#define HAS_PIPE		/ **/

/* HAS_POLL:
 *	This symbol, if defined, indicates that the poll routine is
 *	available to poll active file descriptors. You may safely
 *	include <poll.h> when this symbol is defined.
 */
/*#define HAS_POLL		/ **/

/* HAS_READDIR:
 *	This symbol, if defined, indicates that the readdir routine is
 *	available to read directory entries. You may have to include
 *	<dirent.h>. See I_DIRENT.
 */
/*#define HAS_READDIR		/ **/

/* HAS_SEEKDIR:
 *	This symbol, if defined, indicates that the seekdir routine is
 *	available. You may have to include <dirent.h>. See I_DIRENT.
 */
/*#define HAS_SEEKDIR		/ **/

/* HAS_TELLDIR:
 *	This symbol, if defined, indicates that the telldir routine is
 *	available. You may have to include <dirent.h>. See I_DIRENT.
 */
/*#define HAS_TELLDIR		/ **/

/* HAS_REWINDDIR:
 *	This symbol, if defined, indicates that the rewinddir routine is
 *	available. You may have to include <dirent.h>. See I_DIRENT.
 */
/*#define HAS_REWINDDIR		/ **/

/* HAS_READLINK:
 *	This symbol, if defined, indicates that the readlink routine is
 *	available to read the value of a symbolic link.
 */
/*#define HAS_READLINK		/ **/

/* HAS_RENAME:
 *	This symbol, if defined, indicates that the rename routine is available
 *	to rename files.  Otherwise you should do the unlink(), link(), unlink()
 *	trick.
 */
/*#define HAS_RENAME	/ **/

/* HAS_RMDIR:
 *	This symbol, if defined, indicates that the rmdir routine is
 *	available to remove directories. Otherwise you should fork off a
 *	new process to exec /bin/rmdir.
 */
/*#define HAS_RMDIR		/ **/

/* HAS_SELECT:
 *	This symbol, if defined, indicates that the select routine is
 *	available to select active file descriptors. If the timeout field
 *	is used, <sys/time.h> may need to be included.
 */
/*#define HAS_SELECT	/ **/

/* HAS_SETEGID:
 *	This symbol, if defined, indicates that the setegid routine is available
 *	to change the effective gid of the current program.
 */
/*#define HAS_SETEGID		/ **/

/* HAS_SETEUID:
 *	This symbol, if defined, indicates that the seteuid routine is available
 *	to change the effective uid of the current program.
 */
/*#define HAS_SETEUID		/ **/

/* HAS_SETLINEBUF:
 *	This symbol, if defined, indicates that the setlinebuf routine is
 *	available to change stderr or stdout from block-buffered or unbuffered
 *	to a line-buffered mode.
 */
/*#define HAS_SETLINEBUF		/ **/

/* HAS_SETLOCALE:
 *	This symbol, if defined, indicates that the setlocale routine is
 *	available to handle locale-specific ctype implementations.
 */
/*#define HAS_SETLOCALE	/ **/

/* HAS_SETPGID:
 *	This symbol, if defined, indicates that the setpgid(pid, gpid)
 *	routine is available to set process group ID.
 */
/*#define HAS_SETPGID	/ **/

/* HAS_SETPGRP2:
 *	This symbol, if defined, indicates that the setpgrp2() (as in DG/UX)
 *	routine is available to set the current process group.
 */
/*#define HAS_SETPGRP2		/ **/

/* HAS_SETPRIORITY:
 *	This symbol, if defined, indicates that the setpriority routine is
 *	available to set a process's priority.
 */
/*#define HAS_SETPRIORITY		/ **/

/* HAS_SETREGID:
 *	This symbol, if defined, indicates that the setregid routine is
 *	available to change the real and effective gid of the current
 *	process.
 */
/* HAS_SETRESGID:
 *	This symbol, if defined, indicates that the setresgid routine is
 *	available to change the real, effective and saved gid of the current
 *	process.
 */
/*#define HAS_SETREGID		/ **/
/*#define HAS_SETRESGID		/ **/

/* HAS_SETREUID:
 *	This symbol, if defined, indicates that the setreuid routine is
 *	available to change the real and effective uid of the current
 *	process.
 */
/* HAS_SETRESUID:
 *	This symbol, if defined, indicates that the setresuid routine is
 *	available to change the real, effective and saved uid of the current
 *	process.
 */
/*#define HAS_SETREUID		/ **/
/*#define HAS_SETRESUID		/ **/

/* HAS_SETRGID:
 *	This symbol, if defined, indicates that the setrgid routine is available
 *	to change the real gid of the current program.
 */
/*#define HAS_SETRGID		/ **/

/* HAS_SETRUID:
 *	This symbol, if defined, indicates that the setruid routine is available
 *	to change the real uid of the current program.
 */
/*#define HAS_SETRUID		/ **/

/* HAS_SETSID:
 *	This symbol, if defined, indicates that the setsid routine is
 *	available to set the process group ID.
 */
/*#define HAS_SETSID	/ **/

/* HAS_STRCHR:
 *	This symbol is defined to indicate that the strchr()/strrchr()
 *	functions are available for string searching. If not, try the
 *	index()/rindex() pair.
 */
/* HAS_INDEX:
 *	This symbol is defined to indicate that the index()/rindex()
 *	functions are available for string searching.
 */
/*#define HAS_STRCHR	/ **/
/*#define HAS_INDEX	/ **/

/* HAS_STRCOLL:
 *	This symbol, if defined, indicates that the strcoll routine is
 *	available to compare strings using collating information.
 */
/*#define HAS_STRCOLL	/ **/

/* USE_STRUCT_COPY:
 *	This symbol, if defined, indicates that this C compiler knows how
 *	to copy structures.  If undefined, you'll need to use a block copy
 *	routine of some sort instead.
 */
/*#define	USE_STRUCT_COPY	/ **/

/* HAS_STRTOD:
 *	This symbol, if defined, indicates that the strtod routine is
 *	available to provide better numeric string conversion than atof().
 */
/*#define HAS_STRTOD	/ **/

/* HAS_STRTOL:
 *	This symbol, if defined, indicates that the strtol routine is available
 *	to provide better numeric string conversion than atoi() and friends.
 */
/*#define HAS_STRTOL	/ **/

/* HAS_STRXFRM:
 *	This symbol, if defined, indicates that the strxfrm() routine is
 *	available to transform strings.
 */
/*#define HAS_STRXFRM	/ **/

/* HAS_SYMLINK:
 *	This symbol, if defined, indicates that the symlink routine is available
 *	to create symbolic links.
 */
/*#define HAS_SYMLINK	/ **/

/* HAS_SYSCALL:
 *	This symbol, if defined, indicates that the syscall routine is
 *	available to call arbitrary system calls. If undefined, that's tough.
 */
/*#define HAS_SYSCALL	/ **/

/* HAS_SYSCONF:
 *	This symbol, if defined, indicates that sysconf() is available
 *	to determine system related limits and options.
 */
/*#define HAS_SYSCONF	/ **/

/* HAS_SYSTEM:
 *	This symbol, if defined, indicates that the system routine is
 *	available to issue a shell command.
 */
/*#define HAS_SYSTEM	/ **/

/* HAS_TCGETPGRP:
 *	This symbol, if defined, indicates that the tcgetpgrp routine is
 *	available to get foreground process group ID.
 */
/*#define HAS_TCGETPGRP		/ **/

/* HAS_TCSETPGRP:
 *	This symbol, if defined, indicates that the tcsetpgrp routine is
 *	available to set foreground process group ID.
 */
/*#define HAS_TCSETPGRP		/ **/

/* HAS_TRUNCATE:
 *	This symbol, if defined, indicates that the truncate routine is
 *	available to truncate files.
 */
/*#define HAS_TRUNCATE	/ **/

/* HAS_TZNAME:
 *	This symbol, if defined, indicates that the tzname[] array is
 *	available to access timezone names.
 */
/*#define HAS_TZNAME		/ **/

/* HAS_UMASK:
 *	This symbol, if defined, indicates that the umask routine is
 *	available to set and get the value of the file creation mask.
 */
/*#define HAS_UMASK		/ **/

/* HAS_USLEEP:
 *	This symbol, if defined, indicates that the usleep routine is
 *	available to let the process sleep on a sub-second accuracy.
 */
/*#define HAS_USLEEP		/ **/

/* HASVOLATILE:
 *	This symbol, if defined, indicates that this C compiler knows about
 *	the volatile declaration.
 */
/*#define	HASVOLATILE	/ **/
#ifndef HASVOLATILE
#define volatile
#endif

/* HAS_WAIT4:
 *	This symbol, if defined, indicates that wait4() exists.
 */
/*#define HAS_WAIT4	/ **/

/* HAS_WAITPID:
 *	This symbol, if defined, indicates that the waitpid routine is
 *	available to wait for child process.
 */
/*#define HAS_WAITPID	/ **/

/* HAS_WCSTOMBS:
 *	This symbol, if defined, indicates that the wcstombs routine is
 *	available to convert wide character strings to multibyte strings.
 */
/*#define HAS_WCSTOMBS	/ **/

/* HAS_WCTOMB:
 *	This symbol, if defined, indicates that the wctomb routine is available
 *	to covert a wide character to a multibyte.
 */
/*#define HAS_WCTOMB		/ **/

/* I_ARPA_INET:
 *	This symbol, if defined, indicates to the C program that it should
 *	include <arpa/inet.h> to get inet_addr and friends declarations.
 */
/*#define	I_ARPA_INET		/ **/

/* I_DBM:
 *	This symbol, if defined, indicates that <dbm.h> exists and should
 *	be included.
 */
/* I_RPCSVC_DBM:
 *	This symbol, if defined, indicates that <rpcsvc/dbm.h> exists and
 *	should be included.
 */
/*#define I_DBM	/ **/
/*#define I_RPCSVC_DBM	/ **/

/* I_DIRENT:
 *	This symbol, if defined, indicates to the C program that it should
 *	include <dirent.h>. Using this symbol also triggers the definition
 *	of the Direntry_t define which ends up being 'struct dirent' or
 *	'struct direct' depending on the availability of <dirent.h>.
 */
/* DIRNAMLEN:
 *	This symbol, if defined, indicates to the C program that the length
 *	of directory entry names is provided by a d_namlen field.  Otherwise
 *	you need to do strlen() on the d_name field.
 */
/* Direntry_t:
 *	This symbol is set to 'struct direct' or 'struct dirent' depending on
 *	whether dirent is available or not. You should use this pseudo type to
 *	portably declare your directory entries.
 */
/*#define I_DIRENT / **/
/*#undef DIRNAMLEN / **/
/*#define Direntry_t struct dirent / **/

/* I_DLFCN:
 *	This symbol, if defined, indicates that <dlfcn.h> exists and should
 *	be included.
 */
/*#define I_DLFCN		/ **/

/* I_FCNTL:
 *	This manifest constant tells the C program to include <fcntl.h>.
 */
/*#define I_FCNTL / **/

/* I_FLOAT:
 *	This symbol, if defined, indicates to the C program that it should
 *	include <float.h> to get definition of symbols like DBL_MAX or
 *	DBL_MIN, i.e. machine dependent floating point values.
 */
/*#define I_FLOAT / **/

/* I_LIMITS:
 *	This symbol, if defined, indicates to the C program that it should
 *	include <limits.h> to get definition of symbols like WORD_BIT or
 *	LONG_MAX, i.e. machine dependant limitations.
 */
/*#define I_LIMITS / **/

/* I_LOCALE:
 *	This symbol, if defined, indicates to the C program that it should
 *	include <locale.h>.
 */
/*#define	I_LOCALE		/ **/

/* I_MATH:
 *	This symbol, if defined, indicates to the C program that it should
 *	include <math.h>.
 */
/*#define I_MATH / **/

/* LIBM_LIB_VERSION:
 *    This symbol, if defined, indicates that libm exports _LIB_VERSION
 *    and that math.h defines the enum to manipulate it.
 */
/*#define LIBM_LIB_VERSION         / **/

/* I_MEMORY:
 *	This symbol, if defined, indicates to the C program that it should
 *	include <memory.h>.
 */
/*#define I_MEMORY		/ **/

/* I_NET_ERRNO:
 *	This symbol, if defined, indicates that <net/errno.h> exists and
 *	should be included.
 */
/*#define I_NET_ERRNO		/ **/

/* I_NETINET_IN:
 *	This symbol, if defined, indicates to the C program that it should
 *	include <netinet/in.h>. Otherwise, you may try <sys/in.h>.
 */
/*#define I_NETINET_IN	/ **/

/* I_SFIO:
 *	This symbol, if defined, indicates to the C program that it should
 *	include <sfio.h>.
 */
/*#define	I_SFIO		/ **/

/* I_STDDEF:
 *	This symbol, if defined, indicates that <stddef.h> exists and should
 *	be included.
 */
/*#define I_STDDEF	/ **/

/* I_STDLIB:
 *	This symbol, if defined, indicates that <stdlib.h> exists and should
 *	be included.
 */
/*#define I_STDLIB		/ **/

/* I_STRING:
 *	This symbol, if defined, indicates to the C program that it should
 *	include <string.h> (USG systems) instead of <strings.h> (BSD systems).
 */
/*#define I_STRING		/ **/

/* I_SYS_DIR:
 *	This symbol, if defined, indicates to the C program that it should
 *	include <sys/dir.h>.
 */
/*#define I_SYS_DIR		/ **/

/* I_SYS_FILE:
 *	This symbol, if defined, indicates to the C program that it should
 *	include <sys/file.h> to get definition of R_OK and friends.
 */
/*#define I_SYS_FILE		/ **/

/* I_SYS_IOCTL:
 *	This symbol, if defined, indicates that <sys/ioctl.h> exists and should
 *	be included. Otherwise, include <sgtty.h> or <termio.h>.
 */
/* I_SYS_SOCKIO:
 *	This symbol, if defined, indicates the <sys/sockio.h> should be included
 *	to get socket ioctl options, like SIOCATMARK.
 */
/*#define	I_SYS_IOCTL		/ **/
/*#define I_SYS_SOCKIO	/ **/

/* I_SYS_NDIR:
 *	This symbol, if defined, indicates to the C program that it should
 *	include <sys/ndir.h>.
 */
/*#define I_SYS_NDIR	/ **/

/* I_SYS_PARAM:
 *	This symbol, if defined, indicates to the C program that it should
 *	include <sys/param.h>.
 */
/*#define I_SYS_PARAM		/ **/

/* I_SYS_RESOURCE:
 *	This symbol, if defined, indicates to the C program that it should
 *	include <sys/resource.h>.
 */
/*#define I_SYS_RESOURCE		/ **/

/* I_SYS_SELECT:
 *	This symbol, if defined, indicates to the C program that it should
 *	include <sys/select.h> in order to get definition of struct timeval.
 */
/*#define I_SYS_SELECT	/ **/

/* I_SYS_STAT:
 *	This symbol, if defined, indicates to the C program that it should
 *	include <sys/stat.h>.
 */
/*#define	I_SYS_STAT / **/

/* I_SYS_TIMES:
 *	This symbol, if defined, indicates to the C program that it should
 *	include <sys/times.h>.
 */
/*#define	I_SYS_TIMES		/ **/

/* I_SYS_TYPES:
 *	This symbol, if defined, indicates to the C program that it should
 *	include <sys/types.h>.
 */
/*#define	I_SYS_TYPES		/ **/

/* I_SYS_UN:
 *	This symbol, if defined, indicates to the C program that it should
 *	include <sys/un.h> to get UNIX domain socket definitions.
 */
/*#define I_SYS_UN		/ **/

/* I_SYS_WAIT:
 *	This symbol, if defined, indicates to the C program that it should
 *	include <sys/wait.h>.
 */
/*#define I_SYS_WAIT	/ **/

/* I_TERMIO:
 *	This symbol, if defined, indicates that the program should include
 *	<termio.h> rather than <sgtty.h>.  There are also differences in
 *	the ioctl() calls that depend on the value of this symbol.
 */
/* I_TERMIOS:
 *	This symbol, if defined, indicates that the program should include
 *	the POSIX termios.h rather than sgtty.h or termio.h.
 *	There are also differences in the ioctl() calls that depend on the
 *	value of this symbol.
 */
/* I_SGTTY:
 *	This symbol, if defined, indicates that the program should include
 *	<sgtty.h> rather than <termio.h>.  There are also differences in
 *	the ioctl() calls that depend on the value of this symbol.
 */
/*#define I_TERMIO		/ **/
/*#define I_TERMIOS		/ **/
/*#define I_SGTTY		/ **/

/* I_UNISTD:
 *	This symbol, if defined, indicates to the C program that it should
 *	include <unistd.h>.
 */
/*#define I_UNISTD		/ **/

/* I_UTIME:
 *	This symbol, if defined, indicates to the C program that it should
 *	include <utime.h>.
 */
/*#define I_UTIME		/ **/

/* I_VALUES:
 *	This symbol, if defined, indicates to the C program that it should
 *	include <values.h> to get definition of symbols like MINFLOAT or
 *	MAXLONG, i.e. machine dependant limitations.  Probably, you
 *	should use <limits.h> instead, if it is available.
 */
/*#define I_VALUES		/ **/

/* I_VFORK:
 *	This symbol, if defined, indicates to the C program that it should
 *	include vfork.h.
 */
/*#define I_VFORK	/ **/

/* INTSIZE:
 *	This symbol contains the value of sizeof(int) so that the C
 *	preprocessor can make decisions based on it.
 */
/* LONGSIZE:
 *	This symbol contains the value of sizeof(long) so that the C
 *	preprocessor can make decisions based on it.
 */
/* SHORTSIZE:
 *	This symbol contains the value of sizeof(short) so that the C
 *	preprocessor can make decisions based on it.
 */
/*#define INTSIZE 4		/ **/
/*#define LONGSIZE 4		/ **/
/*#define SHORTSIZE 2		/ **/

/* MULTIARCH:
 *	This symbol, if defined, signifies that the build
 *	process will produce some binary files that are going to be
 *	used in a cross-platform environment.  This is the case for
 *	example with the NeXT "fat" binaries that contain executables
 *	for several CPUs.
 */
/*#define MULTIARCH		/ **/

/* HAS_QUAD:
 *	This symbol, if defined, tells that there's a 64-bit integer type,
 *	Quad_t, and its unsigned counterpar, Uquad_t. QUADKIND will be one
 *	of QUAD_IS_INT, QUAD_IS_LONG, QUAD_IS_LONG_LONG, or QUAD_IS_INT64_T.
 */
/*#define HAS_QUAD	/ **/
#ifdef HAS_QUAD
/*#   define Quad_t long long	/ **/
/*#   define Uquad_t unsigned long long	/ **/
/*#   define QUADKIND 3	/ **/
#   define QUAD_IS_INT	1
#   define QUAD_IS_LONG	2
#   define QUAD_IS_LONG_LONG	3
#   define QUAD_IS_INT64_T	4
#endif

/* HAS_ACCESSX:
 *	This symbol, if defined, indicates that the accessx routine is
 *	available to do extended access checks.
 */
/*#define HAS_ACCESSX		/ **/

/* HAS_EACCESS:
 *	This symbol, if defined, indicates that the eaccess routine is
 *	available to do extended access checks.
 */
/*#define HAS_EACCESS		/ **/

/* I_SYS_ACCESS:
 *     This symbol, if defined, indicates to the C program that it should
 *     include <sys/access.h>.
 */
/*#define   I_SYS_ACCESS                / **/

/* I_SYS_SECURITY:
 *     This symbol, if defined, indicates to the C program that it should
 *     include <sys/security.h>.
 */
/*#define   I_SYS_SECURITY	/ **/

/* OSNAME:
 *	This symbol contains the name of the operating system, as determined
 *	by Configure.  You shouldn't rely on it too much; the specific
 *	feature tests from Configure are generally more reliable.
 */
/* OSVERS:
 *	This symbol contains the version of the operating system, as determined
 *	by Configure.  You shouldn't rely on it too much; the specific
 *	feature tests from Configure are generally more reliable.
 */
/*#define OSNAME "darwin"		/ **/
/*#define OSVERS "7.8.0"		/ **/

/* MEM_ALIGNBYTES:
 *	This symbol contains the number of bytes required to align a
 *	double, or a long double when applicable. Usual values are 2,
 *	4 and 8. The default is eight, for safety.
 */
#if !defined(MEM_ALIGNBYTES)
# if defined(USE_CROSS_COMPILE) || defined(MULTIARCH)
#  define MEM_ALIGNBYTES 8
# else
#  define MEM_ALIGNBYTES 4
# endif
#endif

/* ARCHLIB:
 *	This variable, if defined, holds the name of the directory in
 *	which the user wants to put architecture-dependent public
 *	library files for perl5.  It is most often a local directory
 *	such as /usr/local/lib.  Programs using this variable must be
 *	prepared to deal with filename expansion.  If ARCHLIB is the
 *	same as PRIVLIB, it is not defined, since presumably the
 *	program already searches PRIVLIB.
 */
/* ARCHLIB_EXP:
 *	This symbol contains the ~name expanded version of ARCHLIB, to be used
 *	in programs that are not prepared to deal with ~ expansion at run-time.
 */
/*#define ARCHLIB "/usr/local/lib/perl5/5.7.2/i686-linux"		/ **/
/*#define ARCHLIB_EXP "/usr/local/lib/perl5/5.7.2/i686-linux"		/ **/

/* ARCHNAME:
 *	This symbol holds a string representing the architecture name.
 *	It may be used to construct an architecture-dependant pathname
 *	where library files may be held under a private library, for
 *	instance.
 */
/*#define ARCHNAME "i686-linux"		/ **/

/* HAS_ATOLF:
 *	This symbol, if defined, indicates that the atolf routine is
 *	available to convert strings into long doubles.
 */
/*#define HAS_ATOLF		/ **/

/* HAS_ATOLL:
 *	This symbol, if defined, indicates that the atoll routine is
 *	available to convert strings into long longs.
 */
/*#define HAS_ATOLL		/ **/

/* BIN:
 *	This symbol holds the path of the bin directory where the package will
 *	be installed. Program must be prepared to deal with ~name substitution.
 */
/* BIN_EXP:
 *	This symbol is the filename expanded version of the BIN symbol, for
 *	programs that do not want to deal with that at run-time.
 */
/*#define BIN "/usr/local/bin"	/ **/
/*#define BIN_EXP "/usr/local/bin"	/ **/

/* PERL_BINCOMPAT_5005:
 *	This symbol, if defined, indicates that this version of Perl should be
 *	binary-compatible with Perl 5.005.  This is impossible for builds
 *	that use features like threads and multiplicity it is always
 *	for those versions.
 */
/*#define PERL_BINCOMPAT_5005			/ **/

/* BYTEORDER:
 *	This symbol holds the hexadecimal constant defined in byteorder,
 *	i.e. 0x1234 or 0x4321, etc...
 *	If the compiler supports cross-compiling or multiple-architecture
 *	binaries (eg. on NeXT systems), use compiler-defined macros to
 *	determine the byte order.
 *	On NeXT 3.2 (and greater), you can build "Fat" Multiple Architecture
 *	Binaries (MAB) on either big endian or little endian machines.
 *	The endian-ness is available at compile-time.  This only matters
 *	for perl, where the config.h can be generated and installed on
 *	one system, and used by a different architecture to build an
 *	extension.  Older versions of NeXT that might not have
 *	defined either *_ENDIAN__ were all on Motorola 680x0 series,
 *	so the default case (for NeXT) is big endian to catch them.
 *	This might matter for NeXT 3.0.
 */
#if !defined(SPEC_CPU)
#if defined(USE_CROSS_COMPILE) || defined(MULTIARCH)
#  ifdef __LITTLE_ENDIAN__
#    if LONGSIZE == 4
#      define BYTEORDER 0x1234
#    else
#      if LONGSIZE == 8
#        define BYTEORDER 0x12345678
#      endif
#    endif
#  else
#    ifdef __BIG_ENDIAN__
#      if LONGSIZE == 4
#        define BYTEORDER 0x4321
#      else
#        if LONGSIZE == 8
#          define BYTEORDER 0x87654321
#        endif
#      endif
#    endif
#  endif
#  if !defined(BYTEORDER) && (defined(NeXT) || defined(__NeXT__))
#    define BYTEORDER 0x4321
#  endif
#else
#define BYTEORDER 0x1234	/* large digits for MSB */
#endif /* NeXT */
#endif /* SPEC_CPU */

/* CAT2:
 *	This macro catenates 2 tokens together.
 */
/* STRINGIFY:
 *	This macro surrounds its token with double quotes.
 */
#define PeRl_CaTiFy(a, b)	a ## b
#define PeRl_StGiFy(a)	#a
/* the additional level of indirection enables these macros to be
 * used as arguments to other macros.  See K&R 2nd ed., page 231. */
#define CAT2(a,b)	PeRl_CaTiFy(a,b)
#define StGiFy(a)	PeRl_StGiFy(a)
#define STRINGIFY(a)	PeRl_StGiFy(a)

/* CPPSTDIN:
 *	This symbol contains the first part of the string which will invoke
 *	the C preprocessor on the standard input and produce to standard
 *	output.	 Typical value of "cc -E" or "/lib/cpp", but it can also
 *	call a wrapper. See CPPRUN.
 */
/* CPPMINUS:
 *	This symbol contains the second part of the string which will invoke
 *	the C preprocessor on the standard input and produce to standard
 *	output.  This symbol will have the value "-" if CPPSTDIN needs a minus
 *	to specify standard input, otherwise the value is "".
 */
/* CPPRUN:
 *	This symbol contains the string which will invoke a C preprocessor on
 *	the standard input and produce to standard output. It needs to end
 *	with CPPLAST, after all other preprocessor flags have been specified.
 *	The main difference with CPPSTDIN is that this program will never be a
 *	pointer to a shell wrapper, i.e. it will be empty if no preprocessor is
 *	available directly to the user. Note that it may well be different from
 *	the preprocessor used to compile the C program.
 */
/* CPPLAST:
 *	This symbol is intended to be used along with CPPRUN in the same manner
 *	symbol CPPMINUS is used with CPPSTDIN. It contains either "-" or "".
 */
/*#define CPPSTDIN "cc -E"	/ **/
/*#define CPPMINUS "-"	/ **/
/*#define CPPRUN "cc -E"	/ **/
/*#define CPPLAST "-"	/ **/

/* HAS__FWALK:
 *	This symbol, if defined, indicates that the _fwalk system call is
 *	available to apply a function to all the file handles.
 */
/*#define HAS__FWALK		/ **/

/* HAS_ACCESS:
 *	This manifest constant lets the C program know that the access()
 *	system call is available to check for accessibility using real UID/GID.
 *	(always present on UNIX.)
 */
/*#define HAS_ACCESS		/ **/

/* HAS_ASCTIME_R:
 *     This symbol, if defined, indicates that the asctime_r routine
 *     is available to asctime re-entrantly.
 */
/* ASCTIME_R_PROTO:
 *     This symbol encodes the prototype of asctime_r.
 *     It is zero if d_asctime_r is undef, and one of the
 *     REENTRANT_PROTO_T_ABC macros of reentr.h if d_asctime_r
 *     is defined.
 */
/*#define HAS_ASCTIME_R           / **/
/*#define ASCTIME_R_PROTO 0         / **/

/* CASTI32:
 *	This symbol is defined if the C compiler can cast negative
 *	or large floating point numbers to 32-bit ints.
 */
/*#define	CASTI32		/ **/

/* CASTNEGFLOAT:
 *	This symbol is defined if the C compiler can cast negative
 *	numbers to unsigned longs, ints and shorts.
 */
/* CASTFLAGS:
 *	This symbol contains flags that say what difficulties the compiler
 *	has casting odd floating values to unsigned long:
 *		0 = ok
 *		1 = couldn't cast < 0
 *		2 = couldn't cast >= 0x80000000
 *		4 = couldn't cast in argument expression list
 */
/*#define	CASTNEGFLOAT		/ **/
/*#define CASTFLAGS 0		/ **/

/* HAS_CLASS:
 *     This symbol, if defined, indicates that the class routine is
 *     available to classify doubles.  Available for example in AIX.
 *     The returned values are defined in <float.h> and are:
 *
 *     FP_PLUS_NORM    Positive normalized, nonzero
 *     FP_MINUS_NORM   Negative normalized, nonzero
 *     FP_PLUS_DENORM  Positive denormalized, nonzero
 *     FP_MINUS_DENORM Negative denormalized, nonzero
 *     FP_PLUS_ZERO    +0.0
 *     FP_MINUS_ZERO   -0.0
 *     FP_PLUS_INF     +INF
 *     FP_MINUS_INF    -INF
 *     FP_NANS         Signaling Not a Number (NaNS)
 *     FP_NANQ         Quiet Not a Number (NaNQ)
 */
/*#undef HAS_CLASS            / **/

/* VOID_CLOSEDIR:
 *	This symbol, if defined, indicates that the closedir() routine
 *	does not return a value.
 */
/*#define VOID_CLOSEDIR		/ **/

/* HAS_STRUCT_CMSGHDR:
 *	This symbol, if defined, indicates that the struct cmsghdr
 *	is supported.
 */
/*#define HAS_STRUCT_CMSGHDR	/ **/

/* HAS_CSH:
 *	This symbol, if defined, indicates that the C-shell exists.
 */
/* CSH:
 *	This symbol, if defined, contains the full pathname of csh.
 */
/*#define HAS_CSH		/ **/
#ifdef HAS_CSH
#define CSH "/bin/csh"	/**/
#endif

/* DLSYM_NEEDS_UNDERSCORE:
 *	This symbol, if defined, indicates that we need to prepend an
 *	underscore to the symbol name before calling dlsym().  This only
 *	makes sense if you *have* dlsym, which we will presume is the
 *	case if you're using dl_dlopen.xs.
 */
/*#define 	DLSYM_NEEDS_UNDERSCORE 	/ **/

/* HAS_DRAND48_PROTO:
 *	This symbol, if defined, indicates that the system provides
 *	a prototype for the drand48() function.  Otherwise, it is up
 *	to the program to supply one.  A good guess is
 *		extern double drand48(void);
 */
/*#define	HAS_DRAND48_PROTO	/ **/

/* HAS_ENDGRENT:
 *	This symbol, if defined, indicates that the getgrent routine is
 *	available for finalizing sequential access of the group database.
 */
/*#define HAS_ENDGRENT		/ **/

/* HAS_ENDHOSTENT:
 *	This symbol, if defined, indicates that the endhostent() routine is
 *	available to close whatever was being used for host queries.
 */
/*#define HAS_ENDHOSTENT		/ **/

/* HAS_ENDNETENT:
 *	This symbol, if defined, indicates that the endnetent() routine is
 *	available to close whatever was being used for network queries.
 */
/*#define HAS_ENDNETENT		/ **/

/* HAS_ENDPROTOENT:
 *	This symbol, if defined, indicates that the endprotoent() routine is
 *	available to close whatever was being used for protocol queries.
 */
/*#define HAS_ENDPROTOENT		/ **/

/* HAS_ENDPWENT:
 *	This symbol, if defined, indicates that the getgrent routine is
 *	available for finalizing sequential access of the passwd database.
 */
/*#define HAS_ENDPWENT		/ **/

/* HAS_ENDSERVENT:
 *	This symbol, if defined, indicates that the endservent() routine is
 *	available to close whatever was being used for service queries.
 */
/*#define HAS_ENDSERVENT		/ **/

/* HAS_FCHDIR:
 *	This symbol, if defined, indicates that the fchdir routine is
 *	available to change directory using a file descriptor.
 */
/*#define HAS_FCHDIR		/ **/

/* FCNTL_CAN_LOCK:
 *	This symbol, if defined, indicates that fcntl() can be used
 *	for file locking.  Normally on Unix systems this is defined.
 *	It may be undefined on VMS.
 */
/*#define FCNTL_CAN_LOCK		/ **/

/* HAS_FD_SET:
 *	This symbol, when defined, indicates presence of the fd_set typedef
 *	in <sys/types.h>
 */
/*#define HAS_FD_SET	/ **/

/* HAS_FINITE:
 *     This symbol, if defined, indicates that the finite routine is
 *     available to check whether a double is finite (non-infinity non-NaN).
 */
/*#undef HAS_FINITE          / **/

/* HAS_FINITEL:
 *     This symbol, if defined, indicates that the finitel routine is
 *     available to check whether a long double is finite
 *     (non-infinity non-NaN).
 */
/*#undef HAS_FINITEL                / **/

/* FLEXFILENAMES:
 *	This symbol, if defined, indicates that the system supports filenames
 *	longer than 14 characters.
 */
/*#define	FLEXFILENAMES		/ **/

/* HAS_FP_CLASS:
 *     This symbol, if defined, indicates that the fp_class routine is
 *     available to classify doubles.  Available for example in Digital UNIX.
 *     The returned values are defined in <math.h> and are:
 *
 *     FP_SNAN           Signaling NaN (Not-a-Number)
 *     FP_QNAN           Quiet NaN (Not-a-Number)
 *     FP_POS_INF        +infinity
 *     FP_NEG_INF        -infinity
 *     FP_POS_NORM       Positive normalized
 *     FP_NEG_NORM       Negative normalized
 *     FP_POS_DENORM     Positive denormalized
 *     FP_NEG_DENORM     Negative denormalized
 *     FP_POS_ZERO       +0.0 (positive zero)
 *     FP_NEG_ZERO       -0.0 (negative zero)
 */
/*#undef HAS_FP_CLASS              / **/

/* HAS_FPCLASS:
 *     This symbol, if defined, indicates that the fpclass routine is
 *     available to classify doubles.  Available for example in Solaris/SVR4.
 *     The returned values are defined in <ieeefp.h> and are:
 *
 *     FP_SNAN         signaling NaN
 *     FP_QNAN         quiet NaN
 *     FP_NINF         negative infinity
 *     FP_PINF         positive infinity
 *     FP_NDENORM      negative denormalized non-zero
 *     FP_PDENORM      positive denormalized non-zero
 *     FP_NZERO        negative zero
 *     FP_PZERO        positive zero
 *     FP_NNORM        negative normalized non-zero
 *     FP_PNORM        positive normalized non-zero
 */
/*#undef HAS_FPCLASS                / **/

/* HAS_FPCLASSIFY:
 *     This symbol, if defined, indicates that the fpclassify routine is
 *     available to classify doubles.  Available for example in HP-UX.
 *     The returned values are defined in <math.h> and are
 *
 *           FP_NORMAL     Normalized
 *           FP_ZERO       Zero
 *           FP_INFINITE   Infinity
 *           FP_SUBNORMAL  Denormalized
 *           FP_NAN        NaN
 *
 */
/*#undef HAS_FPCLASSIFY          / **/

/* HAS_FPOS64_T:
 *	This symbol will be defined if the C compiler supports fpos64_t.
 */
/*#define	HAS_FPOS64_T    	/ **/

/* HAS_FREXPL:
 *	This symbol, if defined, indicates that the frexpl routine is
 *	available to break a long double floating-point number into
 *	a normalized fraction and an integral power of 2.
 */
/*#define HAS_FREXPL		/ **/

/* HAS_STRUCT_FS_DATA:
 *	This symbol, if defined, indicates that the struct fs_data
 *	to do statfs() is supported.
 */
/*#define HAS_STRUCT_FS_DATA	/ **/

/* HAS_FSEEKO:
 *	This symbol, if defined, indicates that the fseeko routine is
 *	available to fseek beyond 32 bits (useful for ILP32 hosts).
 */
/*#define HAS_FSEEKO		/ **/

/* HAS_FSTATFS:
 *	This symbol, if defined, indicates that the fstatfs routine is
 *	available to stat filesystems by file descriptors.
 */
/*#define HAS_FSTATFS		/ **/

/* HAS_FSYNC:
 *	This symbol, if defined, indicates that the fsync routine is
 *	available to write a file's modified data and attributes to
 *	permanent storage.
 */
/*#define HAS_FSYNC		/ **/

/* HAS_FTELLO:
 *	This symbol, if defined, indicates that the ftello routine is
 *	available to ftell beyond 32 bits (useful for ILP32 hosts).
 */
/*#define HAS_FTELLO		/ **/

/* Gconvert:
 *	This preprocessor macro is defined to convert a floating point
 *	number to a string without a trailing decimal point.  This
 *	emulates the behavior of sprintf("%g"), but is sometimes much more
 *	efficient.  If gconvert() is not available, but gcvt() drops the
 *	trailing decimal point, then gcvt() is used.  If all else fails,
 *	a macro using sprintf("%g") is used. Arguments for the Gconvert
 *	macro are: value, number of digits, whether trailing zeros should
 *	be retained, and the output buffer.
 *	The usual values are:
 *		d_Gconvert='gconvert((x),(n),(t),(b))'
 *		d_Gconvert='gcvt((x),(n),(b))'
 *		d_Gconvert='sprintf((b),"%.*g",(n),(x))'
 *	The last two assume trailing zeros should not be kept.
 */
/*#define Gconvert(x,n,t,b) gcvt((x),(n),(b)) / **/

/* HAS_GETCWD:
 *	This symbol, if defined, indicates that the getcwd routine is
 *	available to get the current working directory.
 */
/*#define HAS_GETCWD		/ **/

/* HAS_GETESPWNAM:
 *	This symbol, if defined, indicates that the getespwnam system call is
 *	available to retrieve enchanced (shadow) password entries by name.
 */
/*#define HAS_GETESPWNAM		/ **/

/* HAS_GETFSSTAT:
 *	This symbol, if defined, indicates that the getfsstat routine is
 *	available to stat filesystems in bulk.
 */
/*#define HAS_GETFSSTAT		/ **/

/* HAS_GETGRENT:
 *	This symbol, if defined, indicates that the getgrent routine is
 *	available for sequential access of the group database.
 */
/*#define HAS_GETGRENT		/ **/

/* HAS_GETHOSTBYADDR:
 *	This symbol, if defined, indicates that the gethostbyaddr() routine is
 *	available to look up hosts by their IP addresses.
 */
/*#define HAS_GETHOSTBYADDR		/ **/

/* HAS_GETHOSTBYNAME:
 *	This symbol, if defined, indicates that the gethostbyname() routine is
 *	available to look up host names in some data base or other.
 */
/*#define HAS_GETHOSTBYNAME		/ **/

/* HAS_GETHOSTENT:
 *	This symbol, if defined, indicates that the gethostent() routine is
 *	available to look up host names in some data base or another.
 */
/*#define HAS_GETHOSTENT		/ **/

/* HAS_GETHOSTNAME:
 *	This symbol, if defined, indicates that the C program may use the
 *	gethostname() routine to derive the host name.  See also HAS_UNAME
 *	and PHOSTNAME.
 */
/* HAS_UNAME:
 *	This symbol, if defined, indicates that the C program may use the
 *	uname() routine to derive the host name.  See also HAS_GETHOSTNAME
 *	and PHOSTNAME.
 */
/* PHOSTNAME:
 *	This symbol, if defined, indicates the command to feed to the
 *	popen() routine to derive the host name.  See also HAS_GETHOSTNAME
 *	and HAS_UNAME.	Note that the command uses a fully qualified path,
 *	so that it is safe even if used by a process with super-user
 *	privileges.
 */
/* HAS_PHOSTNAME:
 *	This symbol, if defined, indicates that the C program may use the
 *	contents of PHOSTNAME as a command to feed to the popen() routine
 *	to derive the host name.
 */
/*#define HAS_GETHOSTNAME	/ **/
/*#define HAS_UNAME		/ **/
/*#define HAS_PHOSTNAME	/ **/
#ifdef HAS_PHOSTNAME
#define PHOSTNAME "/bin/hostname"	/* How to get the host name */
#endif

/* HAS_GETHOST_PROTOS:
 *	This symbol, if defined, indicates that <netdb.h> includes
 *	prototypes for gethostent(), gethostbyname(), and
 *	gethostbyaddr().  Otherwise, it is up to the program to guess
 *	them.  See netdbtype.U for probing for various Netdb_xxx_t types.
 */
/*#define	HAS_GETHOST_PROTOS	/ **/

/* HAS_GETITIMER:
 *	This symbol, if defined, indicates that the getitimer routine is
 *	available to return interval timers.
 */
/*#define HAS_GETITIMER		/ **/

/* HAS_GETMNT:
 *	This symbol, if defined, indicates that the getmnt routine is
 *	available to get filesystem mount info by filename.
 */
/*#define HAS_GETMNT		/ **/

/* HAS_GETMNTENT:
 *	This symbol, if defined, indicates that the getmntent routine is
 *	available to iterate through mounted file systems to get their info.
 */
/*#define HAS_GETMNTENT		/ **/

/* HAS_GETNETBYADDR:
 *	This symbol, if defined, indicates that the getnetbyaddr() routine is
 *	available to look up networks by their IP addresses.
 */
/*#define HAS_GETNETBYADDR		/ **/

/* HAS_GETNETBYNAME:
 *	This symbol, if defined, indicates that the getnetbyname() routine is
 *	available to look up networks by their names.
 */
/*#define HAS_GETNETBYNAME		/ **/

/* HAS_GETNETENT:
 *	This symbol, if defined, indicates that the getnetent() routine is
 *	available to look up network names in some data base or another.
 */
/*#define HAS_GETNETENT		/ **/

/* HAS_GETNET_PROTOS:
 *	This symbol, if defined, indicates that <netdb.h> includes
 *	prototypes for getnetent(), getnetbyname(), and
 *	getnetbyaddr().  Otherwise, it is up to the program to guess
 *	them.  See netdbtype.U for probing for various Netdb_xxx_t types.
 */
/*#define	HAS_GETNET_PROTOS	/ **/

/* HAS_GETPAGESIZE:
 *	This symbol, if defined, indicates that the getpagesize system call
 *	is available to get system page size, which is the granularity of
 *	many memory management calls.
 */
/*#define HAS_GETPAGESIZE		/ **/

/* HAS_GETPROTOENT:
 *	This symbol, if defined, indicates that the getprotoent() routine is
 *	available to look up protocols in some data base or another.
 */
/*#define HAS_GETPROTOENT		/ **/

/* HAS_GETPGRP:
 *	This symbol, if defined, indicates that the getpgrp routine is
 *	available to get the current process group.
 */
/* USE_BSD_GETPGRP:
 *	This symbol, if defined, indicates that getpgrp needs one
 *	arguments whereas USG one needs none.
 */
/*#define HAS_GETPGRP		/ **/
/*#define USE_BSD_GETPGRP	/ **/

/* HAS_GETPROTOBYNAME:
 *	This symbol, if defined, indicates that the getprotobyname()
 *	routine is available to look up protocols by their name.
 */
/* HAS_GETPROTOBYNUMBER:
 *	This symbol, if defined, indicates that the getprotobynumber()
 *	routine is available to look up protocols by their number.
 */
/*#define HAS_GETPROTOBYNAME		/ **/
/*#define HAS_GETPROTOBYNUMBER		/ **/

/* HAS_GETPROTO_PROTOS:
 *	This symbol, if defined, indicates that <netdb.h> includes
 *	prototypes for getprotoent(), getprotobyname(), and
 *	getprotobyaddr().  Otherwise, it is up to the program to guess
 *	them.  See netdbtype.U for probing for various Netdb_xxx_t types.
 */
/*#define	HAS_GETPROTO_PROTOS	/ **/

/* HAS_GETPRPWNAM:
 *	This symbol, if defined, indicates that the getprpwnam system call is
 *	available to retrieve protected (shadow) password entries by name.
 */
/*#define HAS_GETPRPWNAM		/ **/

/* HAS_GETPWENT:
 *	This symbol, if defined, indicates that the getpwent routine is
 *	available for sequential access of the passwd database.
 *	If this is not available, the older getpw() function may be available.
 */
/*#define HAS_GETPWENT		/ **/

/* HAS_GETSERVENT:
 *	This symbol, if defined, indicates that the getservent() routine is
 *	available to look up network services in some data base or another.
 */
/*#define HAS_GETSERVENT		/ **/

/* HAS_GETSERV_PROTOS:
 *	This symbol, if defined, indicates that <netdb.h> includes
 *	prototypes for getservent(), getservbyname(), and
 *	getservbyaddr().  Otherwise, it is up to the program to guess
 *	them.  See netdbtype.U for probing for various Netdb_xxx_t types.
 */
/*#define	HAS_GETSERV_PROTOS	/ **/

/* HAS_GETSPNAM:
 *	This symbol, if defined, indicates that the getspnam system call is
 *	available to retrieve SysV shadow password entries by name.
 */
/*#define HAS_GETSPNAM		/ **/

/* HAS_GETSERVBYNAME:
 *	This symbol, if defined, indicates that the getservbyname()
 *	routine is available to look up services by their name.
 */
/* HAS_GETSERVBYPORT:
 *	This symbol, if defined, indicates that the getservbyport()
 *	routine is available to look up services by their port.
 */
/*#define HAS_GETSERVBYNAME		/ **/
/*#define HAS_GETSERVBYPORT		/ **/

/* HAS_GNULIBC:
 *	This symbol, if defined, indicates to the C program that
 *	the GNU C library is being used.
 */
/*#define HAS_GNULIBC  	/ **/
#if defined(HAS_GNULIBC) && !defined(_GNU_SOURCE)
#   define _GNU_SOURCE
#endif
/* HAS_HASMNTOPT:
 *	This symbol, if defined, indicates that the hasmntopt routine is
 *	available to query the mount options of file systems.
 */
/*#define HAS_HASMNTOPT		/ **/

/* HAS_HTONL:
 *	This symbol, if defined, indicates that the htonl() routine (and
 *	friends htons() ntohl() ntohs()) are available to do network
 *	order byte swapping.
 */
/* HAS_HTONS:
 *	This symbol, if defined, indicates that the htons() routine (and
 *	friends htonl() ntohl() ntohs()) are available to do network
 *	order byte swapping.
 */
/* HAS_NTOHL:
 *	This symbol, if defined, indicates that the ntohl() routine (and
 *	friends htonl() htons() ntohs()) are available to do network
 *	order byte swapping.
 */
/* HAS_NTOHS:
 *	This symbol, if defined, indicates that the ntohs() routine (and
 *	friends htonl() htons() ntohl()) are available to do network
 *	order byte swapping.
 */
/*#define HAS_HTONL		/ **/
/*#define HAS_HTONS		/ **/
/*#define HAS_NTOHL		/ **/
/*#define HAS_NTOHS		/ **/

/* HAS_ICONV:
 *	This symbol, if defined, indicates that the iconv routine is
 *	available to do character set conversions.
 */
/*#define HAS_ICONV		/ **/

/* HAS_INT64_T:
 *     This symbol will defined if the C compiler supports int64_t.
 *     Usually the <inttypes.h> needs to be included, but sometimes
 *	<sys/types.h> is enough.
 */
/*#define     HAS_INT64_T               / **/

/* HAS_ISASCII:
 *	This manifest constant lets the C program know that isascii
 *	is available.
 */
/*#define HAS_ISASCII		/ **/

/* HAS_ISFINITE:
 *     This symbol, if defined, indicates that the isfinite routine is
 *     available to check whether a double is finite (non-infinity non-NaN).
 */
/*#undef HAS_ISFINITE              / **/

/* HAS_ISINF:
 *     This symbol, if defined, indicates that the isinf routine is
 *     available to check whether a double is an infinity.
 */
/*#undef HAS_ISINF            / **/

/* HAS_ISNAN:
 *	This symbol, if defined, indicates that the isnan routine is
 *	available to check whether a double is a NaN.
 */
/*#define HAS_ISNAN		/ **/

/* HAS_ISNANL:
 *	This symbol, if defined, indicates that the isnanl routine is
 *	available to check whether a long double is a NaN.
 */
/*#define HAS_ISNANL		/ **/

/* HAS_LCHOWN:
 *	This symbol, if defined, indicates that the lchown routine is
 *	available to operate on a symbolic link (instead of following the
 *	link).
 */
/*#define HAS_LCHOWN		/ **/

/* HAS_LDBL_DIG:
 *	This symbol, if defined, indicates that this system's <float.h>
 *	or <limits.h> defines the symbol LDBL_DIG, which is the number
 *	of significant digits in a long double precision number. Unlike
 *	for DBL_DIG, there's no good guess for LDBL_DIG if it is undefined.
 */
/*#define HAS_LDBL_DIG 	/ **/

/* HAS_LONG_DOUBLE:
 *	This symbol will be defined if the C compiler supports long
 *	doubles.
 */
/* LONG_DOUBLESIZE:
 *	This symbol contains the size of a long double, so that the
 *	C preprocessor can make decisions based on it.  It is only
 *	defined if the system supports long doubles.
 */
/*#define HAS_LONG_DOUBLE		/ **/
#ifdef HAS_LONG_DOUBLE
/*#define LONG_DOUBLESIZE 12		/ **/
#endif

/* HAS_LONG_LONG:
 *	This symbol will be defined if the C compiler supports long long.
 */
/* LONGLONGSIZE:
 *	This symbol contains the size of a long long, so that the
 *	C preprocessor can make decisions based on it.  It is only
 *	defined if the system supports long long.
 */
/*#define HAS_LONG_LONG		/ **/
#ifdef HAS_LONG_LONG
/*#define LONGLONGSIZE 8		/ **/
#endif

/* HAS_LSEEK_PROTO:
 *	This symbol, if defined, indicates that the system provides
 *	a prototype for the lseek() function.  Otherwise, it is up
 *	to the program to supply one.  A good guess is
 *		extern off_t lseek(int, off_t, int);
 */
/*#define	HAS_LSEEK_PROTO	/ **/

/* HAS_MADVISE:
 *	This symbol, if defined, indicates that the madvise system call is
 *	available to map a file into memory.
 */
/*#define HAS_MADVISE		/ **/

/* HAS_MEMCHR:
 *	This symbol, if defined, indicates that the memchr routine is available
 *	to locate characters within a C string.
 */
/*#define HAS_MEMCHR	/ **/

/* HAS_MKDTEMP:
 *	This symbol, if defined, indicates that the mkdtemp routine is
 *	available to exclusively create a uniquely named temporary directory.
 */
/*#define HAS_MKDTEMP		/ **/

/* HAS_MKSTEMP:
 *	This symbol, if defined, indicates that the mkstemp routine is
 *	available to exclusively create and open a uniquely named
 *	temporary file.
 */
/*#define HAS_MKSTEMP		/ **/

/* HAS_MKSTEMPS:
 *	This symbol, if defined, indicates that the mkstemps routine is
 *	available to excluslvely create and open a uniquely named
 *	(with a suffix) temporary file.
 */
/*#define HAS_MKSTEMPS		/ **/

/* HAS_MMAP:
 *	This symbol, if defined, indicates that the mmap system call is
 *	available to map a file into memory.
 */
/* Mmap_t:
 *	This symbol holds the return type of the mmap() system call
 *	(and simultaneously the type of the first argument).
 *	Usually set to 'void *' or 'cadd_t'.
 */
/*#define HAS_MMAP		/ **/
/*#define Mmap_t void *	/ **/

/* HAS_MODFL:
 *	This symbol, if defined, indicates that the modfl routine is
 *	available to split a long double x into a fractional part f and
 *	an integer part i such that |f| < 1.0 and (f + i) = x.
 */
/* HAS_MODFL_POW32_BUG:
 *	This symbol, if defined, indicates that the modfl routine is
 *	broken for long doubles >= pow(2, 32).
 *	For example from 4294967303.150000 one would get 4294967302.000000
 *	and 1.150000.  The bug has been seen in certain versions of glibc,
 *	release 2.2.2 is known to be okay.
 */
/*#define HAS_MODFL		/ **/
/*#define HAS_MODFL_POW32_BUG		/ **/

/* HAS_MPROTECT:
 *	This symbol, if defined, indicates that the mprotect system call is
 *	available to modify the access protection of a memory mapped file.
 */
/*#define HAS_MPROTECT		/ **/

/* HAS_MSG:
 *	This symbol, if defined, indicates that the entire msg*(2) library is
 *	supported (IPC mechanism based on message queues).
 */
/*#define HAS_MSG		/ **/

/* HAS_STRUCT_MSGHDR:
 *	This symbol, if defined, indicates that the struct msghdr
 *	is supported.
 */
/*#define HAS_STRUCT_MSGHDR	/ **/

/* HAS_OFF64_T:
 *	This symbol will be defined if the C compiler supports off64_t.
 */
/*#define	HAS_OFF64_T    		/ **/

/* HAS_OPEN3:
 *	This manifest constant lets the C program know that the three
 *	argument form of open(2) is available.
 */
/*#define HAS_OPEN3		/ **/

/* OLD_PTHREAD_CREATE_JOINABLE:
 *	This symbol, if defined, indicates how to create pthread
 *	in joinable (aka undetached) state.  NOTE: not defined
 *	if pthread.h already has defined PTHREAD_CREATE_JOINABLE
 *	(the new version of the constant).
 *	If defined, known values are PTHREAD_CREATE_UNDETACHED
 *	and __UNDETACHED.
 */
/*#define OLD_PTHREAD_CREATE_JOINABLE  / **/

/* HAS_PTHREAD_YIELD:
 *	This symbol, if defined, indicates that the pthread_yield
 *	routine is available to yield the execution of the current
 *	thread.	 sched_yield is preferable to pthread_yield.
 */
/* SCHED_YIELD:
 *	This symbol defines the way to yield the execution of
 *	the current thread.  Known ways are sched_yield,
 *	pthread_yield, and pthread_yield with NULL.
 */
/* HAS_SCHED_YIELD:
 *	This symbol, if defined, indicates that the sched_yield
 *	routine is available to yield the execution of the current
 *	thread.	 sched_yield is preferable to pthread_yield.
 */
/*#define HAS_PTHREAD_YIELD	/ **/
/*#define SCHED_YIELD	sched_yield()	/ **/
/*#define HAS_SCHED_YIELD	/ **/

/* HAS_READV:
 *	This symbol, if defined, indicates that the readv routine is
 *	available to do gather reads.  You will also need <sys/uio.h>
 *	and there I_SYSUIO.
 */
/*#define HAS_READV		/ **/

/* HAS_RECVMSG:
 *	This symbol, if defined, indicates that the recvmsg routine is
 *	available to send structured socket messages.
 */
/*#define HAS_RECVMSG		/ **/

/* HAS_SAFE_BCOPY:
 *	This symbol, if defined, indicates that the bcopy routine is available
 *	to copy potentially overlapping memory blocks. Normally, you should
 *	probably use memmove() or memcpy(). If neither is defined, roll your
 *	own version.
 */
/*#define HAS_SAFE_BCOPY	/ **/

/* HAS_SAFE_MEMCPY:
 *	This symbol, if defined, indicates that the memcpy routine is available
 *	to copy potentially overlapping memory blocks.  If you need to
 *	copy overlapping memory blocks, you should check HAS_MEMMOVE and
 *	use memmove() instead, if available.
 */
/*#define HAS_SAFE_MEMCPY	/ **/

/* HAS_SANE_MEMCMP:
 *	This symbol, if defined, indicates that the memcmp routine is available
 *	and can be used to compare relative magnitudes of chars with their high
 *	bits set.  If it is not defined, roll your own version.
 */
/*#define HAS_SANE_MEMCMP	/ **/

/* HAS_SBRK_PROTO:
 *	This symbol, if defined, indicates that the system provides
 *	a prototype for the sbrk() function.  Otherwise, it is up
 *	to the program to supply one.  Good guesses are
 *		extern void* sbrk(int);
 *		extern void* sbrk(size_t);
 */
/*#define	HAS_SBRK_PROTO	/ **/

/* HAS_SEM:
 *	This symbol, if defined, indicates that the entire sem*(2) library is
 *	supported.
 */
/*#define HAS_SEM		/ **/

/* HAS_SENDMSG:
 *	This symbol, if defined, indicates that the sendmsg routine is
 *	available to send structured socket messages.
 */
/*#define HAS_SENDMSG		/ **/

/* HAS_SETGRENT:
 *	This symbol, if defined, indicates that the setgrent routine is
 *	available for initializing sequential access of the group database.
 */
/*#define HAS_SETGRENT		/ **/

/* HAS_SETGROUPS:
 *	This symbol, if defined, indicates that the setgroups() routine is
 *	available to set the list of process groups.  If unavailable, multiple
 *	groups are probably not supported.
 */
/*#define HAS_SETGROUPS		/ **/

/* HAS_SETHOSTENT:
 *	This symbol, if defined, indicates that the sethostent() routine is
 *	available.
 */
/*#define HAS_SETHOSTENT		/ **/

/* HAS_SETITIMER:
 *	This symbol, if defined, indicates that the setitimer routine is
 *	available to set interval timers.
 */
/*#define HAS_SETITIMER		/ **/

/* HAS_SETNETENT:
 *	This symbol, if defined, indicates that the setnetent() routine is
 *	available.
 */
/*#define HAS_SETNETENT		/ **/

/* HAS_SETPROTOENT:
 *	This symbol, if defined, indicates that the setprotoent() routine is
 *	available.
 */
/*#define HAS_SETPROTOENT		/ **/

/* HAS_SETPGRP:
 *	This symbol, if defined, indicates that the setpgrp routine is
 *	available to set the current process group.
 */
/* USE_BSD_SETPGRP:
 *	This symbol, if defined, indicates that setpgrp needs two
 *	arguments whereas USG one needs none.  See also HAS_SETPGID
 *	for a POSIX interface.
 */
/*#define HAS_SETPGRP		/ **/
/*#define USE_BSD_SETPGRP	/ **/

/* HAS_SETPROCTITLE:
 *	This symbol, if defined, indicates that the setproctitle routine is
 *	available to set process title.
 */
/*#define HAS_SETPROCTITLE		/ **/

/* HAS_SETPWENT:
 *	This symbol, if defined, indicates that the setpwent routine is
 *	available for initializing sequential access of the passwd database.
 */
/*#define HAS_SETPWENT		/ **/

/* HAS_SETSERVENT:
 *	This symbol, if defined, indicates that the setservent() routine is
 *	available.
 */
/*#define HAS_SETSERVENT		/ **/

/* HAS_SETVBUF:
 *	This symbol, if defined, indicates that the setvbuf routine is
 *	available to change buffering on an open stdio stream.
 *	to a line-buffered mode.
 */
/*#define HAS_SETVBUF		/ **/

/* USE_SFIO:
 *	This symbol, if defined, indicates that sfio should
 *	be used.
 */
/*#define	USE_SFIO		/ **/

/* HAS_SHM:
 *	This symbol, if defined, indicates that the entire shm*(2) library is
 *	supported.
 */
/*#define HAS_SHM		/ **/

/* HAS_SIGACTION:
 *	This symbol, if defined, indicates that Vr4's sigaction() routine
 *	is available.
 */
/*#define HAS_SIGACTION	/ **/

/* HAS_SIGSETJMP:
 *	This variable indicates to the C program that the sigsetjmp()
 *	routine is available to save the calling process's registers
 *	and stack environment for later use by siglongjmp(), and
 *	to optionally save the process's signal mask.  See
 *	Sigjmp_buf, Sigsetjmp, and Siglongjmp.
 */
/* Sigjmp_buf:
 *	This is the buffer type to be used with Sigsetjmp and Siglongjmp.
 */
/* Sigsetjmp:
 *	This macro is used in the same way as sigsetjmp(), but will invoke
 *	traditional setjmp() if sigsetjmp isn't available.
 *	See HAS_SIGSETJMP.
 */
/* Siglongjmp:
 *	This macro is used in the same way as siglongjmp(), but will invoke
 *	traditional longjmp() if siglongjmp isn't available.
 *	See HAS_SIGSETJMP.
 */
/*#define HAS_SIGSETJMP	/ **/
#ifdef HAS_SIGSETJMP
#define Sigjmp_buf sigjmp_buf
#define Sigsetjmp(buf,save_mask) sigsetjmp((buf),(save_mask))
#define Siglongjmp(buf,retval) siglongjmp((buf),(retval))
#else
#define Sigjmp_buf jmp_buf
#define Sigsetjmp(buf,save_mask) setjmp((buf))
#define Siglongjmp(buf,retval) longjmp((buf),(retval))
#endif

/* HAS_SOCKET:
 *	This symbol, if defined, indicates that the BSD socket interface is
 *	supported.
 */
/* HAS_SOCKETPAIR:
 *	This symbol, if defined, indicates that the BSD socketpair() call is
 *	supported.
 */
/* HAS_MSG_CTRUNC:
 *	This symbol, if defined, indicates that the MSG_CTRUNC is supported.
 *	Checking just with #ifdef might not be enough because this symbol
 *	has been known to be an enum.
 */
/* HAS_MSG_DONTROUTE:
 *	This symbol, if defined, indicates that the MSG_DONTROUTE is supported.
 *	Checking just with #ifdef might not be enough because this symbol
 *	has been known to be an enum.
 */
/* HAS_MSG_OOB:
 *	This symbol, if defined, indicates that the MSG_OOB is supported.
 *	Checking just with #ifdef might not be enough because this symbol
 *	has been known to be an enum.
 */
/* HAS_MSG_PEEK:
 *	This symbol, if defined, indicates that the MSG_PEEK is supported.
 *	Checking just with #ifdef might not be enough because this symbol
 *	has been known to be an enum.
 */
/* HAS_MSG_PROXY:
 *	This symbol, if defined, indicates that the MSG_PROXY is supported.
 *	Checking just with #ifdef might not be enough because this symbol
 *	has been known to be an enum.
 */
/* HAS_SCM_RIGHTS:
 *	This symbol, if defined, indicates that the SCM_RIGHTS is supported.
 *	Checking just with #ifdef might not be enough because this symbol
 *	has been known to be an enum.
 */
/*#define	HAS_SOCKET		/ **/
/*#define	HAS_SOCKETPAIR	/ **/
/*#define	HAS_MSG_CTRUNC	/ **/
/*#define	HAS_MSG_DONTROUTE	/ **/
/*#define	HAS_MSG_OOB	/ **/
/*#define	HAS_MSG_PEEK	/ **/
/*#define	HAS_MSG_PROXY	/ **/
/*#define	HAS_SCM_RIGHTS	/ **/

/* HAS_SOCKS5_INIT:
 *	This symbol, if defined, indicates that the socks5_init routine is
 *	available to initialize SOCKS 5.
 */
/*#define HAS_SOCKS5_INIT		/ **/

/* HAS_SQRTL:
 *	This symbol, if defined, indicates that the sqrtl routine is
 *	available to do long double square roots.
 */
/*#define HAS_SQRTL		/ **/

/* USE_STAT_BLOCKS:
 *	This symbol is defined if this system has a stat structure declaring
 *	st_blksize and st_blocks.
 */
#ifndef USE_STAT_BLOCKS
/*#define USE_STAT_BLOCKS 	/ **/
#endif

/* HAS_STRUCT_STATFS_F_FLAGS:
 *	This symbol, if defined, indicates that the struct statfs
 *	does have the f_flags member containing the mount flags of
 *	the filesystem containing the file.
 *	This kind of struct statfs is coming from <sys/mount.h> (BSD 4.3),
 *	not from <sys/statfs.h> (SYSV).  Older BSDs (like Ultrix) do not
 *	have statfs() and struct statfs, they have ustat() and getmnt()
 *	with struct ustat and struct fs_data.
 */
/*#define HAS_STRUCT_STATFS_F_FLAGS		/ **/

/* HAS_STRUCT_STATFS:
 *	This symbol, if defined, indicates that the struct statfs
 *	to do statfs() is supported.
 */
/*#define HAS_STRUCT_STATFS	/ **/

/* HAS_FSTATVFS:
 *	This symbol, if defined, indicates that the fstatvfs routine is
 *	available to stat filesystems by file descriptors.
 */
/*#define HAS_FSTATVFS		/ **/

/* USE_STDIO_PTR:
 *	This symbol is defined if the _ptr and _cnt fields (or similar)
 *	of the stdio FILE structure can be used to access the stdio buffer
 *	for a file handle.  If this is defined, then the FILE_ptr(fp)
 *	and FILE_cnt(fp) macros will also be defined and should be used
 *	to access these fields.
 */
/* FILE_ptr:
 *	This macro is used to access the _ptr field (or equivalent) of the
 *	FILE structure pointed to by its argument. This macro will always be
 *	defined if USE_STDIO_PTR is defined.
 */
/* STDIO_PTR_LVALUE:
 *	This symbol is defined if the FILE_ptr macro can be used as an
 *	lvalue.
 */
/* FILE_cnt:
 *	This macro is used to access the _cnt field (or equivalent) of the
 *	FILE structure pointed to by its argument. This macro will always be
 *	defined if USE_STDIO_PTR is defined.
 */
/* STDIO_CNT_LVALUE:
 *	This symbol is defined if the FILE_cnt macro can be used as an
 *	lvalue.
 */
/* STDIO_PTR_LVAL_SETS_CNT:
 *	This symbol is defined if using the FILE_ptr macro as an lvalue
 *	to increase the pointer by n has the side effect of decreasing the
 *	value of File_cnt(fp) by n.
 */
/* STDIO_PTR_LVAL_NOCHANGE_CNT:
 *	This symbol is defined if using the FILE_ptr macro as an lvalue
 *	to increase the pointer by n leaves File_cnt(fp) unchanged.
 */
#if !defined(SPEC_CPU)
/*#define USE_STDIO_PTR 	/ **/
#ifdef USE_STDIO_PTR
#define FILE_ptr(fp)	((fp)->_IO_read_ptr)
/*#define STDIO_PTR_LVALUE 		/ **/
#define FILE_cnt(fp)	((fp)->_IO_read_end - (fp)->_IO_read_ptr)
/*#define STDIO_CNT_LVALUE 		/ **/
/*#define STDIO_PTR_LVAL_SETS_CNT	/ **/
/*#define STDIO_PTR_LVAL_NOCHANGE_CNT	/ **/
#endif
#endif /*!SPEC_CPU*/

/* USE_STDIO_BASE:
 *	This symbol is defined if the _base field (or similar) of the
 *	stdio FILE structure can be used to access the stdio buffer for
 *	a file handle.  If this is defined, then the FILE_base(fp) macro
 *	will also be defined and should be used to access this field.
 *	Also, the FILE_bufsiz(fp) macro will be defined and should be used
 *	to determine the number of bytes in the buffer.  USE_STDIO_BASE
 *	will never be defined unless USE_STDIO_PTR is.
 */
/* FILE_base:
 *	This macro is used to access the _base field (or equivalent) of the
 *	FILE structure pointed to by its argument. This macro will always be
 *	defined if USE_STDIO_BASE is defined.
 */
/* FILE_bufsiz:
 *	This macro is used to determine the number of bytes in the I/O
 *	buffer pointed to by _base field (or equivalent) of the FILE
 *	structure pointed to its argument. This macro will always be defined
 *	if USE_STDIO_BASE is defined.
 */
/*#define USE_STDIO_BASE 	/ **/
#if !defined(SPEC_CPU)
#ifdef USE_STDIO_BASE
#define FILE_base(fp)	((fp)->_IO_read_base)
#define FILE_bufsiz(fp)	((fp)->_IO_read_end - (fp)->_IO_read_base)
#endif
#endif /*!SPEC_CPU*/

/* HAS_STRERROR:
 *	This symbol, if defined, indicates that the strerror routine is
 *	available to translate error numbers to strings. See the writeup
 *	of Strerror() in this file before you try to define your own.
 */
/* HAS_SYS_ERRLIST:
 *	This symbol, if defined, indicates that the sys_errlist array is
 *	available to translate error numbers to strings. The extern int
 *	sys_nerr gives the size of that table.
 */
/* Strerror:
 *	This preprocessor symbol is defined as a macro if strerror() is
 *	not available to translate error numbers to strings but sys_errlist[]
 *	array is there.
 */
/*#define HAS_STRERROR		/ **/
/*#define HAS_SYS_ERRLIST	/ **/
/*#define Strerror(e) strerror(e) / **/

/* HAS_STRTOLD:
 *	This symbol, if defined, indicates that the strtold routine is
 *	available to convert strings to long doubles.
 */
/*#define HAS_STRTOLD		/ **/

/* HAS_STRTOLL:
 *	This symbol, if defined, indicates that the strtoll routine is
 *	available to convert strings to long longs.
 */
/*#define HAS_STRTOLL		/ **/

/* HAS_STRTOQ:
 *	This symbol, if defined, indicates that the strtoq routine is
 *	available to convert strings to long longs (quads).
 */
/*#define HAS_STRTOQ		/ **/

/* HAS_STRTOUL:
 *	This symbol, if defined, indicates that the strtoul routine is
 *	available to provide conversion of strings to unsigned long.
 */
/*#define HAS_STRTOUL	/ **/

/* HAS_STRTOULL:
 *	This symbol, if defined, indicates that the strtoull routine is
 *	available to convert strings to unsigned long longs.
 */
/*#define HAS_STRTOULL		/ **/

/* HAS_STRTOUQ:
 *	This symbol, if defined, indicates that the strtouq routine is
 *	available to convert strings to unsigned long longs (quads).
 */
/*#define HAS_STRTOUQ		/ **/

/* HAS_TELLDIR_PROTO:
 *	This symbol, if defined, indicates that the system provides
 *	a prototype for the telldir() function.  Otherwise, it is up
 *	to the program to supply one.  A good guess is
 *		extern long telldir(DIR*);
 */
/*#define	HAS_TELLDIR_PROTO	/ **/

/* Time_t:
 *	This symbol holds the type returned by time(). It can be long,
 *	or time_t on BSD sites (in which case <sys/types.h> should be
 *	included).
 */
/*#define Time_t time_t		/ * Time type */

/* HAS_TIMES:
 *	This symbol, if defined, indicates that the times() routine exists.
 *	Note that this became obsolete on some systems (SUNOS), which now
 * use getrusage(). It may be necessary to include <sys/times.h>.
 */
/*#define HAS_TIMES		/ **/

/* HAS_UALARM:
 *	This symbol, if defined, indicates that the ualarm routine is
 *	available to do alarms with microsecond granularity.
 */
/*#define HAS_UALARM		/ **/

/* HAS_UNION_SEMUN:
 *	This symbol, if defined, indicates that the union semun is
 *	defined by including <sys/sem.h>.  If not, the user code
 *	probably needs to define it as:
 *	union semun {
 *	    int val;
 *	    struct semid_ds *buf;
 *	    unsigned short *array;
 *	}
 */
/* USE_SEMCTL_SEMUN:
 *	This symbol, if defined, indicates that union semun is
 *	used for semctl IPC_STAT.
 */
/* USE_SEMCTL_SEMID_DS:
 *	This symbol, if defined, indicates that struct semid_ds * is
 *	used for semctl IPC_STAT.
 */
/*#define HAS_UNION_SEMUN	/ **/
/*#define USE_SEMCTL_SEMUN	/ **/
/*#define USE_SEMCTL_SEMID_DS	/ **/

/* HAS_UNORDERED:
 *     This symbol, if defined, indicates that the unordered routine is
 *     available to check whether two doubles are unordered
 *     (effectively: whether either of them is NaN)
 */
/*#undef HAS_UNORDERED            / **/

/* HAS_USTAT:
 *	This symbol, if defined, indicates that the ustat system call is
 *	available to query file system statistics by dev_t.
 */
/*#define HAS_USTAT		/ **/

/* HAS_VFORK:
 *	This symbol, if defined, indicates that vfork() exists.
 */
/*#define HAS_VFORK	/ **/

/* Signal_t:
 *	This symbol's value is either "void" or "int", corresponding to the
 *	appropriate return type of a signal handler.  Thus, you can declare
 *	a signal handler using "Signal_t (*handler)()", and define the
 *	handler using "Signal_t handler(sig)".
 */
/*#define Signal_t void	/ * Signal handler's return type */

/* HAS_VPRINTF:
 *	This symbol, if defined, indicates that the vprintf routine is available
 *	to printf with a pointer to an argument list.  If unavailable, you
 *	may need to write your own, probably in terms of _doprnt().
 */
/* USE_CHAR_VSPRINTF:
 *	This symbol is defined if this system has vsprintf() returning type
 *	(char*).  The trend seems to be to declare it as "int vsprintf()".  It
 *	is up to the package author to declare vsprintf correctly based on the
 *	symbol.
 */
/*#define HAS_VPRINTF	/ **/
/*#define USE_CHAR_VSPRINTF 	/ **/

/* HAS_WRITEV:
 *	This symbol, if defined, indicates that the writev routine is
 *	available to do scatter writes.
 */
/*#define HAS_WRITEV		/ **/

/* USE_DYNAMIC_LOADING:
 *	This symbol, if defined, indicates that dynamic loading of
 *	some sort is available.
 */
/*#define USE_DYNAMIC_LOADING		/ **/

/* DOUBLESIZE:
 *	This symbol contains the size of a double, so that the C preprocessor
 *	can make decisions based on it.
 */
/*#define DOUBLESIZE 8		/ **/

/* EBCDIC:
 *     This symbol, if defined, indicates that this system uses
 *	EBCDIC encoding.
 */
/*#define	EBCDIC 		/ **/

/* FFLUSH_NULL:
 *	This symbol, if defined, tells that fflush(NULL) does flush
 *	all pending stdio output.
 */
/* FFLUSH_ALL:
 *	This symbol, if defined, tells that to flush
 *	all pending stdio output one must loop through all
 *	the stdio file handles stored in an array and fflush them.
 *	Note that if fflushNULL is defined, fflushall will not
 *	even be probed for and will be left undefined.
 */
/*#define	FFLUSH_NULL 		/ **/
/*#define	FFLUSH_ALL 		/ **/

/* Fpos_t:
 *	This symbol holds the type used to declare file positions in libc.
 *	It can be fpos_t, long, uint, etc... It may be necessary to include
 *	<sys/types.h> to get any typedef'ed information.
 */
/*#define Fpos_t fpos_t		/ * File position type */

/* Gid_t_f:
 *	This symbol defines the format string used for printing a Gid_t.
 */
/*#define	Gid_t_f		"lu"		/ **/

/* Gid_t_sign:
 *	This symbol holds the signedess of a Gid_t.
 *	1 for unsigned, -1 for signed.
 */
/*#define Gid_t_sign	1		/ * GID sign */

/* Gid_t_size:
 *	This symbol holds the size of a Gid_t in bytes.
 */
/*#define Gid_t_size 4		/ * GID size */

/* Gid_t:
 *	This symbol holds the return type of getgid() and the type of
 *	argument to setrgid() and related functions.  Typically,
 *	it is the type of group ids in the kernel. It can be int, ushort,
 *	gid_t, etc... It may be necessary to include <sys/types.h> to get
 *	any typedef'ed information.
 */
/*#define Gid_t gid_t		/ * Type for getgid(), etc... */

/* Groups_t:
 *	This symbol holds the type used for the second argument to
 *	getgroups() and setgroups().  Usually, this is the same as
 *	gidtype (gid_t) , but sometimes it isn't.
 *	It can be int, ushort, gid_t, etc...
 *	It may be necessary to include <sys/types.h> to get any
 *	typedef'ed information.  This is only required if you have
 *	getgroups() or setgroups()..
 */
#if defined(HAS_GETGROUPS) || defined(HAS_SETGROUPS)
/*#define Groups_t gid_t	/ * Type for 2nd arg to [sg]etgroups() */
#endif

/* DB_Prefix_t:
 *	This symbol contains the type of the prefix structure element
 *	in the <db.h> header file.  In older versions of DB, it was
 *	int, while in newer ones it is u_int32_t.
 */
/* DB_Hash_t:
 *	This symbol contains the type of the prefix structure element
 *	in the <db.h> header file.  In older versions of DB, it was
 *	int, while in newer ones it is size_t.
 */
/* DB_VERSION_MAJOR_CFG:
 *	This symbol, if defined, defines the major version number of
 *	Berkeley DB found in the <db.h> header when Perl was configured.
 */
/* DB_VERSION_MINOR_CFG:
 *	This symbol, if defined, defines the minor version number of
 *	Berkeley DB found in the <db.h> header when Perl was configured.
 *	For DB version 1 this is always 0.
 */
/* DB_VERSION_PATCH_CFG:
 *	This symbol, if defined, defines the patch version number of
 *	Berkeley DB found in the <db.h> header when Perl was configured.
 *	For DB version 1 this is always 0.
 */
/*#define DB_Hash_t	u_int32_t		/ **/
/*#define DB_Prefix_t	size_t  	/ **/
/*#define DB_VERSION_MAJOR_CFG	2  	/ **/
/*#define DB_VERSION_MINOR_CFG	4  	/ **/
/*#define DB_VERSION_PATCH_CFG	14  	/ **/

/* I_FP_CLASS:
 *     This symbol, if defined, indicates that <fp_class.h> exists and
 *     should be included.
 */
/*#undef   I_FP_CLASS              / **/

/* I_GRP:
 *	This symbol, if defined, indicates to the C program that it should
 *	include <grp.h>.
 */
/* GRPASSWD:
 *	This symbol, if defined, indicates to the C program that struct group
 *	in <grp.h> contains gr_passwd.
 */
/*#define I_GRP		/ **/
/*#define GRPASSWD	/ **/

/* I_ICONV:
 *	This symbol, if defined, indicates that <iconv.h> exists and
 *	should be included.
 */
/*#define	I_ICONV		/ **/

/* I_IEEEFP:
 *	This symbol, if defined, indicates that <ieeefp.h> exists and
 *	should be included.
 */
/*#define	I_IEEEFP		/ **/

/* I_INTTYPES:
 *     This symbol, if defined, indicates to the C program that it should
 *     include <inttypes.h>.
 */
/*#define   I_INTTYPES                / **/

/* I_LIBUTIL:
 *	This symbol, if defined, indicates that <libutil.h> exists and
 *	should be included.
 */
/*#define	I_LIBUTIL		/ **/

/* I_MACH_CTHREADS:
 *     This symbol, if defined, indicates to the C program that it should
 *     include <mach/cthreads.h>.
 */
/*#define   I_MACH_CTHREADS	/ **/

/* I_MNTENT:
 *	This symbol, if defined, indicates that <mntent.h> exists and
 *	should be included.
 */
/*#define	I_MNTENT		/ **/

/* I_NETDB:
 *	This symbol, if defined, indicates that <netdb.h> exists and
 *	should be included.
 */
/*#define I_NETDB		/ **/

/* I_NETINET_TCP:
 *     This symbol, if defined, indicates to the C program that it should
 *     include <netinet/tcp.h>.
 */
/*#define   I_NETINET_TCP                / **/

/* I_POLL:
 *	This symbol, if defined, indicates that <poll.h> exists and
 *	should be included.
 */
/*#define	I_POLL		/ **/

/* I_PROT:
 *	This symbol, if defined, indicates that <prot.h> exists and
 *	should be included.
 */
/*#define	I_PROT		/ **/

/* I_PTHREAD:
 *     This symbol, if defined, indicates to the C program that it should
 *     include <pthread.h>.
 */
/*#define   I_PTHREAD	/ **/

/* I_PWD:
 *	This symbol, if defined, indicates to the C program that it should
 *	include <pwd.h>.
 */
/* PWQUOTA:
 *	This symbol, if defined, indicates to the C program that struct passwd
 *	contains pw_quota.
 */
/* PWAGE:
 *	This symbol, if defined, indicates to the C program that struct passwd
 *	contains pw_age.
 */
/* PWCHANGE:
 *	This symbol, if defined, indicates to the C program that struct passwd
 *	contains pw_change.
 */
/* PWCLASS:
 *	This symbol, if defined, indicates to the C program that struct passwd
 *	contains pw_class.
 */
/* PWEXPIRE:
 *	This symbol, if defined, indicates to the C program that struct passwd
 *	contains pw_expire.
 */
/* PWCOMMENT:
 *	This symbol, if defined, indicates to the C program that struct passwd
 *	contains pw_comment.
 */
/* PWGECOS:
 *	This symbol, if defined, indicates to the C program that struct passwd
 *	contains pw_gecos.
 */
/* PWPASSWD:
 *	This symbol, if defined, indicates to the C program that struct passwd
 *	contains pw_passwd.
 */
/*#define I_PWD		/ **/
/*#define PWQUOTA	/ **/
/*#define PWAGE	/ **/
/*#define PWCHANGE	/ **/
/*#define PWCLASS	/ **/
/*#define PWEXPIRE	/ **/
/*#define PWCOMMENT	/ **/
/*#define PWGECOS	/ **/
/*#define PWPASSWD	/ **/

/* I_SHADOW:
 *	This symbol, if defined, indicates that <shadow.h> exists and
 *	should be included.
 */
/*#define	I_SHADOW		/ **/

/* I_SOCKS:
 *	This symbol, if defined, indicates that <socks.h> exists and
 *	should be included.
 */
/*#define	I_SOCKS		/ **/

/* I_SUNMATH:
 *	This symbol, if defined, indicates that <sunmath.h> exists and
 *	should be included.
 */
/*#define	I_SUNMATH		/ **/

/* I_SYSLOG:
 *	This symbol, if defined, indicates that <syslog.h> exists and
 *	should be included.
 */
/*#define	I_SYSLOG		/ **/

/* I_SYSMODE:
 *	This symbol, if defined, indicates that <sys/mode.h> exists and
 *	should be included.
 */
/*#define	I_SYSMODE		/ **/

/* I_SYS_MOUNT:
 *	This symbol, if defined, indicates that <sys/mount.h> exists and
 *	should be included.
 */
/*#define	I_SYS_MOUNT		/ **/

/* I_SYS_STATFS:
 *	This symbol, if defined, indicates that <sys/statfs.h> exists.
 */
/*#define	I_SYS_STATFS		/ **/

/* I_SYS_STATVFS:
 *	This symbol, if defined, indicates that <sys/statvfs.h> exists and
 *	should be included.
 */
/*#define	I_SYS_STATVFS		/ **/

/* I_SYSUIO:
 *	This symbol, if defined, indicates that <sys/uio.h> exists and
 *	should be included.
 */
/*#define	I_SYSUIO		/ **/

/* I_SYSUTSNAME:
 *	This symbol, if defined, indicates that <sys/utsname.h> exists and
 *	should be included.
 */
/*#define	I_SYSUTSNAME		/ **/

/* I_SYS_VFS:
 *	This symbol, if defined, indicates that <sys/vfs.h> exists and
 *	should be included.
 */
/*#define	I_SYS_VFS		/ **/

/* I_TIME:
 *	This symbol, if defined, indicates to the C program that it should
 *	include <time.h>.
 */
/* I_SYS_TIME:
 *	This symbol, if defined, indicates to the C program that it should
 *	include <sys/time.h>.
 */
/* I_SYS_TIME_KERNEL:
 *	This symbol, if defined, indicates to the C program that it should
 *	include <sys/time.h> with KERNEL defined.
 */
/*#define I_TIME / **/
/*#define I_SYS_TIME		/ **/
/*#define I_SYS_TIME_KERNEL		/ **/

/* I_USTAT:
 *	This symbol, if defined, indicates that <ustat.h> exists and
 *	should be included.
 */
/*#define	I_USTAT		/ **/

/* PERL_INC_VERSION_LIST:
 *	This variable specifies the list of subdirectories in over
 *	which perl.c:incpush() and lib/lib.pm will automatically
 *	search when adding directories to @INC, in a format suitable
 *	for a C initialization string.  See the inc_version_list entry
 *	in Porting/Glossary for more details.
 */
/*#define PERL_INC_VERSION_LIST 0		/ **/

/* INSTALL_USR_BIN_PERL:
 *	This symbol, if defined, indicates that Perl is to be installed
 * 	also as /usr/bin/perl.
 */
/*#define INSTALL_USR_BIN_PERL	/ **/

/* PERL_PRIfldbl:
 *	This symbol, if defined, contains the string used by stdio to
 *	format long doubles (format 'f') for output.
 */
/* PERL_PRIgldbl:
 *	This symbol, if defined, contains the string used by stdio to
 *	format long doubles (format 'g') for output.
 */
/* PERL_PRIeldbl:
 *	This symbol, if defined, contains the string used by stdio to
 *	format long doubles (format 'e') for output.
 */
/* PERL_SCNfldbl:
 *	This symbol, if defined, contains the string used by stdio to
 *	format long doubles (format 'f') for input.
 */
/*#define PERL_PRIfldbl	"Lf"	/ **/
/*#define PERL_PRIgldbl	"Lg"	/ **/
/*#define PERL_PRIeldbl	"Le"	/ **/
/*#define PERL_SCNfldbl	"Lf"	/ **/

/* Off_t:
 *	This symbol holds the type used to declare offsets in the kernel.
 *	It can be int, long, off_t, etc... It may be necessary to include
 *	<sys/types.h> to get any typedef'ed information.
 */
/* LSEEKSIZE:
 *	This symbol holds the number of bytes used by the Off_t.
 */
/* Off_t_size:
 *	This symbol holds the number of bytes used by the Off_t.
 */
/*#define Off_t off_t		/ * <offset> type */
/*#define LSEEKSIZE 8		/ * <offset> size */
/*#define Off_t_size 8	/ * <offset> size */

/* Free_t:
 *	This variable contains the return type of free().  It is usually
 * void, but occasionally int.
 */
/* Malloc_t:
 *	This symbol is the type of pointer returned by malloc and realloc.
 */
/*#define Malloc_t void * / **/
/*#define Free_t void / **/

/* MYMALLOC:
 *	This symbol, if defined, indicates that we're using our own malloc.
 */
/*#undef MYMALLOC / **/

/* PERL_MALLOC_WRAP:
 *     This symbol, if defined, indicates that we'd like malloc wrap checks.
 */
/*#undef PERL_MALLOC_WRAP  / **/

/* Mode_t:
 *	This symbol holds the type used to declare file modes
 *	for systems calls.  It is usually mode_t, but may be
 *	int or unsigned short.  It may be necessary to include <sys/types.h>
 *	to get any typedef'ed information.
 */
/*#define Mode_t mode_t	 / * file mode parameter for system calls */

/* VAL_O_NONBLOCK:
 *	This symbol is to be used during open() or fcntl(F_SETFL) to turn on
 *	non-blocking I/O for the file descriptor. Note that there is no way
 *	back, i.e. you cannot turn it blocking again this way. If you wish to
 *	alternatively switch between blocking and non-blocking, use the
 *	ioctl(FIOSNBIO) call instead, but that is not supported by all devices.
 */
/* VAL_EAGAIN:
 *	This symbol holds the errno error code set by read() when no data was
 *	present on the non-blocking file descriptor.
 */
/* RD_NODATA:
 *	This symbol holds the return code from read() when no data is present
 *	on the non-blocking file descriptor. Be careful! If EOF_NONBLOCK is
 *	not defined, then you can't distinguish between no data and EOF by
 *	issuing a read(). You'll have to find another way to tell for sure!
 */
/* EOF_NONBLOCK:
 *	This symbol, if defined, indicates to the C program that a read() on
 *	a non-blocking file descriptor will return 0 on EOF, and not the value
 *	held in RD_NODATA (-1 usually, in that case!).
 */
/*#define VAL_O_NONBLOCK O_NONBLOCK	/ **/
/*#define VAL_EAGAIN EAGAIN	/ **/
/*#define RD_NODATA -1	/ **/
/*#define EOF_NONBLOCK	/ **/

/* NEED_VA_COPY:
 *	This symbol, if defined, indicates that the system stores
 *	the variable argument list datatype, va_list, in a format
 *	that cannot be copied by simple assignment, so that some
 *	other means must be used when copying is required.
 *	As such systems vary in their provision (or non-provision)
 *	of copying mechanisms, handy.h defines a platform-
 *	independent macro, Perl_va_copy(src, dst), to do the job.
 */
/*#define	NEED_VA_COPY		/ **/

/* Netdb_host_t:
 *	This symbol holds the type used for the 1st argument
 *	to gethostbyaddr().
 */
/* Netdb_hlen_t:
 *	This symbol holds the type used for the 2nd argument
 *	to gethostbyaddr().
 */
/* Netdb_name_t:
 *	This symbol holds the type used for the argument to
 *	gethostbyname().
 */
/* Netdb_net_t:
 *	This symbol holds the type used for the 1st argument to
 *	getnetbyaddr().
 */
/*#define Netdb_host_t		const char * / **/
/*#define Netdb_hlen_t		size_t / **/
/*#define Netdb_name_t		const char * / **/
/*#define Netdb_net_t		unsigned long / **/

/* PERL_OTHERLIBDIRS:
 *	This variable contains a colon-separated set of paths for the perl
 *	binary to search for additional library files or modules.
 *	These directories will be tacked to the end of @INC.
 *	Perl will automatically search below each path for version-
 *	and architecture-specific directories.  See PERL_INC_VERSION_LIST
 *	for more details.
 */
/*#define PERL_OTHERLIBDIRS " "		/ **/

/* IVTYPE:
 *	This symbol defines the C type used for Perl's IV.
 */
/* UVTYPE:
 *	This symbol defines the C type used for Perl's UV.
 */
/* I8TYPE:
 *	This symbol defines the C type used for Perl's I8.
 */
/* U8TYPE:
 *	This symbol defines the C type used for Perl's U8.
 */
/* I16TYPE:
 *	This symbol defines the C type used for Perl's I16.
 */
/* U16TYPE:
 *	This symbol defines the C type used for Perl's U16.
 */
/* I32TYPE:
 *	This symbol defines the C type used for Perl's I32.
 */
/* U32TYPE:
 *	This symbol defines the C type used for Perl's U32.
 */
/* I64TYPE:
 *	This symbol defines the C type used for Perl's I64.
 */
/* U64TYPE:
 *	This symbol defines the C type used for Perl's U64.
 */
/* NVTYPE:
 *	This symbol defines the C type used for Perl's NV.
 */
/* IVSIZE:
 *	This symbol contains the sizeof(IV).
 */
/* UVSIZE:
 *	This symbol contains the sizeof(UV).
 */
/* I8SIZE:
 *	This symbol contains the sizeof(I8).
 */
/* U8SIZE:
 *	This symbol contains the sizeof(U8).
 */
/* I16SIZE:
 *	This symbol contains the sizeof(I16).
 */
/* U16SIZE:
 *	This symbol contains the sizeof(U16).
 */
/* I32SIZE:
 *	This symbol contains the sizeof(I32).
 */
/* U32SIZE:
 *	This symbol contains the sizeof(U32).
 */
/* I64SIZE:
 *	This symbol contains the sizeof(I64).
 */
/* U64SIZE:
 *	This symbol contains the sizeof(U64).
 */
/* NVSIZE:
 *	This symbol contains the sizeof(NV).
 */
/* NV_PRESERVES_UV:
 *	This symbol, if defined, indicates that a variable of type NVTYPE
 *	can preserve all the bits of a variable of type UVTYPE.
 */
/* NV_PRESERVES_UV_BITS:
 *	This symbol contains the number of bits a variable of type NVTYPE
 *	can preserve of a variable of type UVTYPE.
 */
/*#define	IVTYPE		long		/ **/
/*#define	UVTYPE		unsigned long		/ **/
/*#define	I8TYPE		char		/ **/
/*#define	U8TYPE		unsigned char		/ **/
/*#define	I16TYPE		short	/ **/
/*#define	U16TYPE		unsigned short	/ **/
/*#define	I32TYPE		long	/ **/
/*#define	U32TYPE		unsigned long	/ **/
#ifdef HAS_QUAD
/*#define	I64TYPE		long long	/ **/
/*#define	U64TYPE		unsigned long long	/ **/
#endif
/*#define	NVTYPE		double		/ **/
/*#define	IVSIZE		4		/ **/
/*#define	UVSIZE		4		/ **/
/*#define	I8SIZE		1		/ **/
/*#define	U8SIZE		1		/ **/
/*#define	I16SIZE		2	/ **/
/*#define	U16SIZE		2	/ **/
/*#define	I32SIZE		4	/ **/
/*#define	U32SIZE		4	/ **/
#ifdef HAS_QUAD
/*#define	I64SIZE		8	/ **/
/*#define	U64SIZE		8	/ **/
#endif
/*#define	NVSIZE		8		/ **/
/*#define	NV_PRESERVES_UV	/ **/
/*#define	NV_PRESERVES_UV_BITS	32	/ **/

/* IVdf:
 *	This symbol defines the format string used for printing a Perl IV
 *	as a signed decimal integer.
 */
/* UVuf:
 *	This symbol defines the format string used for printing a Perl UV
 *	as an unsigned decimal integer.
 */
/* UVof:
 *	This symbol defines the format string used for printing a Perl UV
 *	as an unsigned octal integer.
 */
/* UVxf:
 *	This symbol defines the format string used for printing a Perl UV
 *	as an unsigned hexadecimal integer in lowercase abcdef.
 */
/* UVXf:
 *	This symbol defines the format string used for printing a Perl UV
 *	as an unsigned hexadecimal integer in uppercase ABCDEF.
 */
/* NVef:
 *	This symbol defines the format string used for printing a Perl NV
 *	using %e-ish floating point format.
 */
/* NVff:
 *	This symbol defines the format string used for printing a Perl NV
 *	using %f-ish floating point format.
 */
/* NVgf:
 *	This symbol defines the format string used for printing a Perl NV
 *	using %g-ish floating point format.
 */
/*#define	IVdf		"ld"		/ **/
/*#define	UVuf		"lu"		/ **/
/*#define	UVof		"lo"		/ **/
/*#define	UVxf		"lx"		/ **/
/*#define	UVXf		"lX"		/ **/
/*#define	NVef		"e"		/ **/
/*#define	NVff		"f"		/ **/
/*#define	NVgf		"g"		/ **/

/* Pid_t:
 *	This symbol holds the type used to declare process ids in the kernel.
 *	It can be int, uint, pid_t, etc... It may be necessary to include
 *	<sys/types.h> to get any typedef'ed information.
 */
/*#define Pid_t pid_t		/ * PID type */

/* INSTALL_PREFIX:
 *     This symbol contains the "root" of installation tree for this package.
 *     The program should be prepared to do ~ expansion.
 */
/* INSTALL_PREFIX_EXP:
 *     This symbol contains the "root" of installation tree for this package
 *     to be used in programs that are not prepared to deal with ~ expansion
 *     at run-time.
 */
/*#define INSTALL_PREFIX "/usr/local"            / **/
/*#define INSTALL_PREFIX_EXP "/usr/local"        / **/

/* PRIVLIB:
 *	This symbol contains the name of the private library for this package.
 *	The library is private in the sense that it needn't be in anyone's
 *	execution path, but it should be accessible by the world.  The program
 *	should be prepared to do ~ expansion.
 */
/* PRIVLIB_EXP:
 *	This symbol contains the ~name expanded version of PRIVLIB, to be used
 *	in programs that are not prepared to deal with ~ expansion at run-time.
 */
/*#define PRIVLIB "/usr/local/lib/perl5/5.7.2"		/ **/
/*#define PRIVLIB_EXP "/usr/local/lib/perl5/5.7.2"		/ **/

/* PTRSIZE:
 *	This symbol contains the size of a pointer, so that the C preprocessor
 *	can make decisions based on it.  It will be sizeof(void *) if
 *	the compiler supports (void *); otherwise it will be
 *	sizeof(char *).
 */
/*#define PTRSIZE 4		/ **/

/* Drand01:
 *	This macro is to be used to generate uniformly distributed
 *	random numbers over the range [0., 1.[.  You may have to supply
 *	an 'extern double drand48();' in your program since SunOS 4.1.3
 *	doesn't provide you with anything relevant in its headers.
 *	See HAS_DRAND48_PROTO.
 */
/* Rand_seed_t:
 *	This symbol defines the type of the argument of the
 *	random seed function.
 */
/* seedDrand01:
 *	This symbol defines the macro to be used in seeding the
 *	random number generator (see Drand01).
 */
/* RANDBITS:
 *	This symbol indicates how many bits are produced by the
 *	function used to generate normalized random numbers.
 *	Values include 15, 16, 31, and 48.
 */
/*#define Drand01()		drand48()		/ **/
/*#define Rand_seed_t		long		/ **/
/*#define seedDrand01(x)	srand48((Rand_seed_t)x)	/ **/
/*#define RANDBITS		48		/ **/

/* SELECT_MIN_BITS:
 *	This symbol holds the minimum number of bits operated by select.
 *	That is, if you do select(n, ...), how many bits at least will be
 *	cleared in the masks if some activity is detected.  Usually this
 *	is either n or 32*ceil(n/32), especially many little-endians do
 *	the latter.  This is only useful if you have select(), naturally.
 */
/*#define SELECT_MIN_BITS 	32	/ **/

/* Select_fd_set_t:
 *	This symbol holds the type used for the 2nd, 3rd, and 4th
 *	arguments to select.  Usually, this is 'fd_set *', if HAS_FD_SET
 *	is defined, and 'int *' otherwise.  This is only useful if you
 *	have select(), of course.
 */
/*#define Select_fd_set_t 	fd_set *	/ **/

/* SIG_NAME:
 *	This symbol contains a list of signal names in order of
 *	signal number. This is intended
 *	to be used as a static array initialization, like this:
 *		char *sig_name[] = { SIG_NAME };
 *	The signals in the list are separated with commas, and each signal
 *	is surrounded by double quotes. There is no leading SIG in the signal
 *	name, i.e. SIGQUIT is known as "QUIT".
 *	Gaps in the signal numbers (up to NSIG) are filled in with NUMnn,
 *	etc., where nn is the actual signal number (e.g. NUM37).
 *	The signal number for sig_name[i] is stored in sig_num[i].
 *	The last element is 0 to terminate the list with a NULL.  This
 *	corresponds to the 0 at the end of the sig_num list.
 */
/* SIG_NUM:
 *	This symbol contains a list of signal numbers, in the same order as the
 *	SIG_NAME list. It is suitable for static array initialization, as in:
 *		int sig_num[] = { SIG_NUM };
 *	The signals in the list are separated with commas, and the indices
 *	within that list and the SIG_NAME list match, so it's easy to compute
 *	the signal name from a number or vice versa at the price of a small
 *	dynamic linear lookup.
 *	Duplicates are allowed, but are moved to the end of the list.
 *	The signal number corresponding to sig_name[i] is sig_number[i].
 *	if (i < NSIG) then sig_number[i] == i.
 *	The last element is 0, corresponding to the 0 at the end of
 *	the sig_name list.
 */
/* SIG_SIZE:
 *	This variable contains the number of elements of the sig_name
 *	and sig_num arrays, excluding the final NULL entry.
 */
/*#define SIG_NAME "ZERO", "HUP", "INT", "QUIT", "ILL", "TRAP", "ABRT", "BUS", "FPE", "KILL", "USR1", "SEGV", "USR2", "PIPE", "ALRM", "TERM", "STKFLT", "CHLD", "CONT", "STOP", "TSTP", "TTIN", "TTOU", "URG", "XCPU", "XFSZ", "VTALRM", "PROF", "WINCH", "IO", "PWR", "SYS", "RTMIN", "NUM33", "NUM34", "NUM35", "NUM36", "NUM37", "NUM38", "NUM39", "NUM40", "NUM41", "NUM42", "NUM43", "NUM44", "NUM45", "NUM46", "NUM47", "NUM48", "NUM49", "NUM50", "NUM51", "NUM52", "NUM53", "NUM54", "NUM55", "NUM56", "NUM57", "NUM58", "NUM59", "NUM60", "NUM61", "NUM62", "RTMAX", "IOT", "CLD", "POLL", "UNUSED", 0		/ **/
/*#define SIG_NUM  0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 6, 17, 29, 31, 0		/ **/
/*#define SIG_SIZE 68			/ **/

/* SITEARCH:
 *	This symbol contains the name of the private library for this package.
 *	The library is private in the sense that it needn't be in anyone's
 *	execution path, but it should be accessible by the world.  The program
 *	should be prepared to do ~ expansion.
 *	The standard distribution will put nothing in this directory.
 *	After perl has been installed, users may install their own local
 *	architecture-dependent modules in this directory with
 *		MakeMaker Makefile.PL
 *	or equivalent.  See INSTALL for details.
 */
/* SITEARCH_EXP:
 *	This symbol contains the ~name expanded version of SITEARCH, to be used
 *	in programs that are not prepared to deal with ~ expansion at run-time.
 */
/*#define SITEARCH "/usr/local/lib/perl5/site_perl/5.7.2/i686-linux"		/ **/
/*#define SITEARCH_EXP "/usr/local/lib/perl5/site_perl/5.7.2/i686-linux"		/ **/

/* SITELIB:
 *	This symbol contains the name of the private library for this package.
 *	The library is private in the sense that it needn't be in anyone's
 *	execution path, but it should be accessible by the world.  The program
 *	should be prepared to do ~ expansion.
 *	The standard distribution will put nothing in this directory.
 *	After perl has been installed, users may install their own local
 *	architecture-independent modules in this directory with
 *		MakeMaker Makefile.PL
 *	or equivalent.  See INSTALL for details.
 */
/* SITELIB_EXP:
 *	This symbol contains the ~name expanded version of SITELIB, to be used
 *	in programs that are not prepared to deal with ~ expansion at run-time.
 */
/* SITELIB_STEM:
 *	This define is SITELIB_EXP with any trailing version-specific component
 *	removed.  The elements in inc_version_list (inc_version_list.U) can
 *	be tacked onto this variable to generate a list of directories to search.
 */
/*#define SITELIB "/usr/local/lib/perl5/site_perl/5.7.2"		/ **/
/*#define SITELIB_EXP "/usr/local/lib/perl5/site_perl/5.7.2"		/ **/
/*#define SITELIB_STEM "/usr/local/lib/perl5/site_perl"		/ **/

/* Size_t_size:
 *	This symbol holds the size of a Size_t in bytes.
 */
/*#define Size_t_size 4	/ **/

/* Size_t:
 *	This symbol holds the type used to declare length parameters
 *	for string functions.  It is usually size_t, but may be
 *	unsigned long, int, etc.  It may be necessary to include
 *	<sys/types.h> to get any typedef'ed information.
 */
/*#define Size_t size_t	 / * length paramater for string functions */

/* Sock_size_t:
 *	This symbol holds the type used for the size argument of
 *	various socket calls (just the base type, not the pointer-to).
 */
/*#define Sock_size_t		socklen_t / **/

/* SSize_t:
 *	This symbol holds the type used by functions that return
 *	a count of bytes or an error condition.  It must be a signed type.
 *	It is usually ssize_t, but may be long or int, etc.
 *	It may be necessary to include <sys/types.h> or <unistd.h>
 *	to get any typedef'ed information.
 *	We will pick a type such that sizeof(SSize_t) == sizeof(Size_t).
 */
/*#define SSize_t ssize_t	 / * signed count of bytes */

/* STARTPERL:
 *	This variable contains the string to put in front of a perl
 *	script to make sure (one hopes) that it runs with perl and not
 *	some shell.
 */
/*#define STARTPERL "#!/spec/cpu2006/benchspec/CPU2006/400.perlbench/exe/perlbench"		/ **/

/* STDCHAR:
 *	This symbol is defined to be the type of char used in stdio.h.
 *	It has the values "unsigned char" or "char".
 */
/*#define STDCHAR char	/ **/

/* HAS_STDIO_STREAM_ARRAY:
 *	This symbol, if defined, tells that there is an array
 *	holding the stdio streams.
 */
/* STDIO_STREAM_ARRAY:
 *	This symbol tells the name of the array holding the stdio streams.
 *	Usual values include _iob, __iob, and __sF.
 */
/*#define	HAS_STDIO_STREAM_ARRAY	/ **/
#define STDIO_STREAM_ARRAY

/* Uid_t_f:
 *	This symbol defines the format string used for printing a Uid_t.
 */
/*#define	Uid_t_f		"lu"		/ **/

/* Uid_t_sign:
 *	This symbol holds the signedess of a Uid_t.
 *	1 for unsigned, -1 for signed.
 */
/*#define Uid_t_sign	1		/ * UID sign */

/* Uid_t_size:
 *	This symbol holds the size of a Uid_t in bytes.
 */
/*#define Uid_t_size 4		/ * UID size */

/* Uid_t:
 *	This symbol holds the type used to declare user ids in the kernel.
 *	It can be int, ushort, uid_t, etc... It may be necessary to include
 *	<sys/types.h> to get any typedef'ed information.
 */
/*#define Uid_t uid_t		/ * UID type */

/* USE_64_BIT_INT:
 *	This symbol, if defined, indicates that 64-bit integers should
 *	be used when available.  If not defined, the native integers
 *	will be employed (be they 32 or 64 bits).  The minimal possible
 *	64-bitness is used, just enough to get 64-bit integers into Perl.
 *	This may mean using for example "long longs", while your memory
 *	may still be limited to 2 gigabytes.
 */
/* USE_64_BIT_ALL:
 *	This symbol, if defined, indicates that 64-bit integers should
 *	be used when available.  If not defined, the native integers
 *	will be used (be they 32 or 64 bits).  The maximal possible
 *	64-bitness is employed: LP64 or ILP64, meaning that you will
 *	be able to use more than 2 gigabytes of memory.  This mode is
 *	even more binary incompatible than USE_64_BIT_INT. You may not
 *	be able to run the resulting executable in a 32-bit CPU at all or
 *	you may need at least to reboot your OS to 64-bit mode.
 */
#ifndef USE_64_BIT_INT
/*#define	USE_64_BIT_INT		/ **/
#endif

#ifndef USE_64_BIT_ALL
/*#define	USE_64_BIT_ALL		/ **/
#endif

/* USE_LARGE_FILES:
 *	This symbol, if defined, indicates that large file support
 *	should be used when available.
 */
#ifndef USE_LARGE_FILES
/*#define	USE_LARGE_FILES		/ **/
#endif

/* USE_LONG_DOUBLE:
 *	This symbol, if defined, indicates that long doubles should
 *	be used when available.
 */
#ifndef USE_LONG_DOUBLE
/*#define	USE_LONG_DOUBLE		/ **/
#endif

/* USE_MORE_BITS:
 *	This symbol, if defined, indicates that 64-bit interfaces and
 *	long doubles should be used when available.
 */
#ifndef USE_MORE_BITS
/*#define	USE_MORE_BITS		/ **/
#endif

/* MULTIPLICITY:
 *	This symbol, if defined, indicates that Perl should
 *	be built to use multiplicity.
 */
#ifndef MULTIPLICITY
/*#define	MULTIPLICITY		/ **/
#endif

/* USE_PERLIO:
 *	This symbol, if defined, indicates that the PerlIO abstraction should
 *	be used throughout.  If not defined, stdio should be
 *	used in a fully backward compatible manner.
 */
#ifndef USE_PERLIO
/*#define	USE_PERLIO		/ **/
#endif

/* USE_SOCKS:
 *	This symbol, if defined, indicates that Perl should
 *	be built to use socks.
 */
#ifndef USE_SOCKS
/*#define	USE_SOCKS		/ **/
#endif

/* USE_ITHREADS:
 *	This symbol, if defined, indicates that Perl should be built to
 *	use the interpreter-based threading implementation.
 */
/* USE_5005THREADS:
 *	This symbol, if defined, indicates that Perl should be built to
 *	use the 5.005-based threading implementation.
 */
/* OLD_PTHREADS_API:
 *	This symbol, if defined, indicates that Perl should
 *	be built to use the old draft POSIX threads API.
 */
/* USE_REENTRANT_API:
 *	This symbol, if defined, indicates that Perl should
 *	try to use the various _r versions of library functions.
 *	This is extremely experimental.
 */
/*#define	USE_5005THREADS		/ **/
/*#define	USE_ITHREADS		/ **/
#if defined(USE_5005THREADS) && !defined(USE_ITHREADS)
#define		USE_THREADS		/* until src is revised*/
#endif
/*#define	OLD_PTHREADS_API		/ **/
/*#define	USE_REENTRANT_API	/ **/

/* PERL_VENDORARCH:
 *	If defined, this symbol contains the name of a private library.
 *	The library is private in the sense that it needn't be in anyone's
 *	execution path, but it should be accessible by the world.
 *	It may have a ~ on the front.
 *	The standard distribution will put nothing in this directory.
 *	Vendors who distribute perl may wish to place their own
 *	architecture-dependent modules and extensions in this directory with
 *		MakeMaker Makefile.PL INSTALLDIRS=vendor
 *	or equivalent.  See INSTALL for details.
 */
/* PERL_VENDORARCH_EXP:
 *	This symbol contains the ~name expanded version of PERL_VENDORARCH, to be used
 *	in programs that are not prepared to deal with ~ expansion at run-time.
 */
/*#define PERL_VENDORARCH ""		/ **/
/*#define PERL_VENDORARCH_EXP ""		/ **/

/* PERL_VENDORLIB_EXP:
 *	This symbol contains the ~name expanded version of VENDORLIB, to be used
 *	in programs that are not prepared to deal with ~ expansion at run-time.
 */
/* PERL_VENDORLIB_STEM:
 *	This define is PERL_VENDORLIB_EXP with any trailing version-specific component
 *	removed.  The elements in inc_version_list (inc_version_list.U) can
 *	be tacked onto this variable to generate a list of directories to search.
 */
/*#define PERL_VENDORLIB_EXP ""		/ **/
/*#define PERL_VENDORLIB_STEM ""		/ **/

/* VOIDFLAGS:
 *	This symbol indicates how much support of the void type is given by this
 *	compiler.  What various bits mean:
 *
 *	    1 = supports declaration of void
 *	    2 = supports arrays of pointers to functions returning void
 *	    4 = supports comparisons between pointers to void functions and
 *		    addresses of void functions
 *	    8 = suports declaration of generic void pointers
 *
 *	The package designer should define VOIDUSED to indicate the requirements
 *	of the package.  This can be done either by #defining VOIDUSED before
 *	including config.h, or by defining defvoidused in Myinit.U.  If the
 *	latter approach is taken, only those flags will be tested.  If the
 *	level of void support necessary is not present, defines void to int.
 */
#if !defined(SPEC_CPU)
#ifndef VOIDUSED
#define VOIDUSED 15
#endif
#define VOIDFLAGS 15
#if (VOIDFLAGS & VOIDUSED) != VOIDUSED
#define void int		/* is void to be avoided? */
#define M_VOID			/* Xenix strikes again */
#endif
#endif /* SPEC_CPU */

/* HAS_CRYPT:
 *	This symbol, if defined, indicates that the crypt routine is available
 *	to encrypt passwords and the like.
 */
/* #define HAS_CRYPT		/ **/

/* CRYPT_R_PROTO:
 *     This symbol encodes the prototype of crypt_r.
 *     It is zero if d_crypt_r is undef, and one of the
 *     REENTRANT_PROTO_T_ABC macros of reentr.h if d_crypt_r
 *     is defined.
 */
/*#define HAS_CRYPT_R		/ **/

/* SETUID_SCRIPTS_ARE_SECURE_NOW:
 *	This symbol, if defined, indicates that the bug that prevents
 *	setuid scripts from being secure is not present in this kernel.
 */
/* DOSUID:
 *	This symbol, if defined, indicates that the C program should
 *	check the script that it is executing for setuid/setgid bits, and
 *	attempt to emulate setuid/setgid on systems that have disabled
 *	setuid #! scripts because the kernel can't do it securely.
 *	It is up to the package designer to make sure that this emulation
 *	is done securely.  Among other things, it should do an fstat on
 *	the script it just opened to make sure it really is a setuid/setgid
 *	script, it should make sure the arguments passed correspond exactly
 *	to the argument on the #! line, and it should not trust any
 *	subprocesses to which it must pass the filename rather than the
 *	file descriptor of the script to be executed.
 */
#undef SETUID_SCRIPTS_ARE_SECURE_NOW
#undef DOSUID

/* Shmat_t:
 *	This symbol holds the return type of the shmat() system call.
 *	Usually set to 'void *' or 'char *'.
 */
/* HAS_SHMAT_PROTOTYPE:
 *	This symbol, if defined, indicates that the sys/shm.h includes
 *	a prototype for shmat().  Otherwise, it is up to the program to
 *	guess one.  Shmat_t shmat _((int, Shmat_t, int)) is a good guess,
 *	but not always right so it should be emitted by the program only
 *	when HAS_SHMAT_PROTOTYPE is not defined to avoid conflicting defs.
 */
/*#define Shmat_t void *	/ **/
/*#define HAS_SHMAT_PROTOTYPE	/ **/

/* I_NDBM:
 *	This symbol, if defined, indicates that <ndbm.h> exists and should
 *	be included.
 */
/*#define I_NDBM	/ **/

/* I_STDARG:
 *     This symbol, if defined, indicates that <stdarg.h> exists and should
 *     be included.
 */
/*#define I_STDARG / **/
/*#define I_VARARGS / **/

/* CAN_PROTOTYPE:
 *	If defined, this macro indicates that the C compiler can handle
 *	function prototypes.
 */
/* _:
 *	This macro is used to declare function parameters for folks who want
 *	to make declarations with prototypes using a different style than
 *	the above macros.  Use double parentheses.  For example:
 *
 *		int main _((int argc, char *argv[]));
 */
/*#define	CAN_PROTOTYPE	/ **/
#ifdef CAN_PROTOTYPE
#define	_(args) args
#else
#define	_(args) ()
#endif

/* SH_PATH:
 *	This symbol contains the full pathname to the shell used on this
 *	on this system to execute Bourne shell scripts.  Usually, this will be
 *	/bin/sh, though it's possible that some systems will have /bin/ksh,
 *	/bin/pdksh, /bin/ash, /bin/bash, or even something such as
 *	D:/bin/sh.exe.
 */
/*#define SH_PATH "/bin/sh"  / **/

/* USE_CROSS_COMPILE:
 *	This symbol, if defined, indicates that Perl is being cross-compiled.
 */
/* PERL_TARGETARCH:
 *	This symbol, if defined, indicates the target architecture
 *	Perl has been cross-compiled to.  Undefined if not a cross-compile.
 */
#undef	USE_CROSS_COMPILE
#undef	PERL_TARGETARCH

/* HAS_DBMINIT_PROTO:
 *	This symbol, if defined, indicates that the system provides
 *	a prototype for the dbminit() function.  Otherwise, it is up
 *	to the program to supply one.  A good guess is
 *		extern int dbminit(char *);
 */
/*#define	HAS_DBMINIT_PROTO	/ **/
 
/* HAS_DIRFD:
 *     This manifest constant lets the C program know that dirfd
 *     is available.
 */
/*#undef HAS_DIRFD            / **/

/* HAS_FLOCK_PROTO:
 *	This symbol, if defined, indicates that the system provides
 *	a prototype for the flock() function.  Otherwise, it is up
 *	to the program to supply one.  A good guess is
 *		extern int flock(int, int);
 */
/*#define	HAS_FLOCK_PROTO	/ **/

/* HAS_FPCLASSL:
 *     This symbol, if defined, indicates that the fpclassl routine is
 *     available to classify long doubles.  Available for example in IRIX.
 *     The returned values are defined in <ieeefp.h> and are:
 *
 *     FP_SNAN         signaling NaN
 *     FP_QNAN         quiet NaN
 *     FP_NINF         negative infinity
 *     FP_PINF         positive infinity
 *     FP_NDENORM      negative denormalized non-zero
 *     FP_PDENORM      positive denormalized non-zero
 *     FP_NZERO        negative zero
 *     FP_PZERO        positive zero
 *     FP_NNORM        negative normalized non-zero
 *     FP_PNORM        positive normalized non-zero
 */
/*#undef HAS_FPCLASSL              / **/

/* HAS_NL_LANGINFO:
 *	This symbol, if defined, indicates that the nl_langinfo routine is
 *	available to return local data.  You will also need <langinfo.h>
 *	and therefore I_LANGINFO.
 */
/*#define HAS_NL_LANGINFO		/ **/

/* HAS_PROCSELFEXE:
 *     This symbol is defined if PROCSELFEXE_PATH is a symlink
 *     to the absolute pathname of the executing program.
 */
/* PROCSELFEXE_PATH:
 *     If HAS_PROCSELFEXE is defined this symbol is the filename
 *     of the symbolic link pointing to the absolute pathname of
 *     the executing program.
 */
/*#undef HAS_PROCSELFEXE        / **/
#if defined(HAS_PROCSELFEXE) && !defined(PROCSELFEXE_PATH)
#define PROCSELFEXE_PATH       "/proc/self/exe"    /**/
#endif

/* HAS_SIGPROCMASK:
 *	This symbol, if defined, indicates that the sigprocmask
 *	system call is available to examine or change the signal mask
 *	of the calling process.
 */
/*#define HAS_SIGPROCMASK		/ **/

/* HAS_SOCKATMARK:
 *	This symbol, if defined, indicates that the sockatmark routine is
 *	available to test whether a socket is at the out-of-band mark.
 */
/*#define HAS_SOCKATMARK		/ **/

/* HAS_SOCKATMARK_PROTO:
 *	This symbol, if defined, indicates that the system provides
 *	a prototype for the sockatmark() function.  Otherwise, it is up
 *	to the program to supply one.  A good guess is
 *		extern int sockatmark(int);
 */
/*#define	HAS_SOCKATMARK_PROTO	/ **/

/* HAS_SETRESGID_PROTO:
 *	This symbol, if defined, indicates that the system provides
 *	a prototype for the setresgid() function.  Otherwise, it is up
 *	to the program to supply one.  Good guesses are
 *		extern int setresgid(uid_t ruid, uid_t euid, uid_t suid);
 */
/*#define	HAS_SETRESGID_PROTO	/ **/

/* HAS_SETRESUID_PROTO:
 *	This symbol, if defined, indicates that the system provides
 *	a prototype for the setresuid() function.  Otherwise, it is up
 *	to the program to supply one.  Good guesses are
 *		extern int setresuid(uid_t ruid, uid_t euid, uid_t suid);
 */
/*#define	HAS_SETRESUID_PROTO	/ **/

/* HAS_STRFTIME:
 *	This symbol, if defined, indicates that the strftime routine is
 *	available to do time formatting.
 */
/*#define HAS_STRFTIME		/ **/

/* HAS_SYSCALL_PROTO:
 *	This symbol, if defined, indicates that the system provides
 *	a prototype for the syscall() function.  Otherwise, it is up
 *	to the program to supply one.  Good guesses are
 *		extern int syscall(int,  ...);
 *		extern int syscall(long, ...);
 */
/*#define	HAS_SYSCALL_PROTO	/ **/

/* U32_ALIGNMENT_REQUIRED:
 *	This symbol, if defined, indicates that you must access
 *	character data through U32-aligned pointers.
 */
/*#define U32_ALIGNMENT_REQUIRED	/ **/

/* HAS_USLEEP_PROTO:
 *	This symbol, if defined, indicates that the system provides
 *	a prototype for the usleep() function.  Otherwise, it is up
 *	to the program to supply one.  A good guess is
 *		extern int usleep(useconds_t);
 */
/*#define	HAS_USLEEP_PROTO	/ **/

/* I_FP:
 *     This symbol, if defined, indicates that <fp.h> exists and
 *     should be included.
 */
/*#undef I_FP            / **/

/* I_LANGINFO:
 *	This symbol, if defined, indicates that <langinfo.h> exists and
 *	should be included.
 */
/*#define	I_LANGINFO		/ **/

/* HAS_PTHREAD_ATFORK:
 *	This symbol, if defined, indicates that the pthread_atfork routine
 *	is available setup fork handlers.
 */
/*#define HAS_PTHREAD_ATFORK		/ **/

#endif
