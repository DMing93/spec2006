/*******************************************************
 * C file translated from WHIRL Sat Dec  8 10:39:05 2012
 *******************************************************/

/* Include file-level type and variable decls */
#include "bzlib.w2c.h"


extern __inline _IEEE64 strtod(
  const _INT8 * restrict __nptr,
  _INT8 ** restrict __endptr)
{
  
  register _IEEE64 __comma_preg;
  
  __comma_preg = __strtod_internal(__nptr, __endptr, (_INT32) 0U);
  return __comma_preg;
} /* strtod */


extern __inline _INT64 strtol(
  const _INT8 * restrict __nptr,
  _INT8 ** restrict __endptr,
  _INT32 __base)
{
  
  register _INT64 __comma_preg;
  
  __comma_preg = __strtol_internal(__nptr, __endptr, __base, (_INT32) 0U);
  return __comma_preg;
} /* strtol */


extern __inline _UINT64 strtoul(
  const _INT8 * restrict __nptr,
  _INT8 ** restrict __endptr,
  _INT32 __base)
{
  
  register _UINT64 __comma_preg;
  
  __comma_preg = __strtoul_internal(__nptr, __endptr, __base, (_INT32) 0U);
  return __comma_preg;
} /* strtoul */


extern __inline _INT64 strtoq(
  const _INT8 * restrict __nptr,
  _INT8 ** restrict __endptr,
  _INT32 __base)
{
  
  register _INT64 __comma_preg;
  
  __comma_preg = __strtoll_internal(__nptr, __endptr, __base, (_INT32) 0U);
  return __comma_preg;
} /* strtoq */


extern __inline _UINT64 strtouq(
  const _INT8 * restrict __nptr,
  _INT8 ** restrict __endptr,
  _INT32 __base)
{
  
  register _UINT64 __comma_preg;
  
  __comma_preg = __strtoull_internal(__nptr, __endptr, __base, (_INT32) 0U);
  return __comma_preg;
} /* strtouq */


extern __inline _INT64 strtoll(
  const _INT8 * restrict __nptr,
  _INT8 ** restrict __endptr,
  _INT32 __base)
{
  
  register _INT64 __comma_preg;
  
  __comma_preg = __strtoll_internal(__nptr, __endptr, __base, (_INT32) 0U);
  return __comma_preg;
} /* strtoll */


extern __inline _UINT64 strtoull(
  const _INT8 * restrict __nptr,
  _INT8 ** restrict __endptr,
  _INT32 __base)
{
  
  register _UINT64 __comma_preg;
  
  __comma_preg = __strtoull_internal(__nptr, __endptr, __base, (_INT32) 0U);
  return __comma_preg;
} /* strtoull */


extern __inline _IEEE64 atof(
  const _INT8 * __nptr)
{
  
  register _IEEE64 __comma_preg;
  
  __comma_preg = __strtod_internal(__nptr, (_INT8 **) 0U, (_INT32) 0U);
  return __comma_preg;
} /* atof */


extern __inline _INT32 atoi(
  const _INT8 * __nptr)
{
  
  register _INT64 __comma_preg;
  
  __comma_preg = __strtol_internal(__nptr, (_INT8 **) 0U, (_INT32) 10U, (_INT32) 0U);
  return(_INT32)(__comma_preg);
} /* atoi */


extern __inline _INT64 atol(
  const _INT8 * __nptr)
{
  
  register _INT64 __comma_preg;
  
  __comma_preg = __strtol_internal(__nptr, (_INT8 **) 0U, (_INT32) 10U, (_INT32) 0U);
  return __comma_preg;
} /* atol */


extern __inline _INT64 atoll(
  const _INT8 * __nptr)
{
  
  register _INT64 __comma_preg;
  
  __comma_preg = __strtoll_internal(__nptr, (_INT8 **) 0U, (_INT32) 10U, (_INT32) 0U);
  return __comma_preg;
} /* atoll */


extern __inline _UINT32 gnu_dev_major(
  _UINT64 __dev)
{
  
  
  return((_UINT32)(_U8LSHR(__dev, (_UINT64)(8U))) & 4095U) | ((_UINT32)(_U8LSHR(__dev, (_UINT64)(32U))) & 4294963200U);
} /* gnu_dev_major */


extern __inline _UINT32 gnu_dev_minor(
  _UINT64 __dev)
{
  
  
  return((_UINT32)(__dev) & 255U) | ((_UINT32)(_U8LSHR(__dev, (_UINT64)(12U))) & 4294967040U);
} /* gnu_dev_minor */


extern __inline _UINT64 gnu_dev_makedev(
  _UINT32 __major,
  _UINT32 __minor)
{
  
  
  return((_UINT64)((__minor & 255U) | _U4SHL(__major & 4095U, 8U)) | _U8SHL((_UINT64)(__minor) & (_UINT64)(4294967040U), (_UINT64)(12U))) | _U8SHL((_UINT64)(__major) & (_UINT64)(4294963200U), (_UINT64)(32U));
} /* gnu_dev_makedev */


extern __inline _INT32 vprintf(
  const _INT8 * restrict __fmt,
  struct __va_list_tag * __arg)
{
  
  register _INT32 __comma_preg;
  
  __comma_preg = vfprintf(stdout, __fmt, __arg);
  return __comma_preg;
} /* vprintf */


extern __inline _INT32 getchar()
{
  
  register _INT32 __comma_preg;
  
  __comma_preg = _IO_getc(stdin);
  return __comma_preg;
} /* getchar */


extern __inline _INT32 fgetc_unlocked(
  struct _IO_FILE * __fp)
{
  
  register _INT32 __comma_preg;
  register _INT32 __cselect_preg;
  register _UINT64 preg_preg;
  
  if((_INT64)((_INT64) EXPECT((_UINT64)((__fp) -> _IO_read_ptr) >= (_UINT64)((__fp) -> _IO_read_end), (_INT64) 0U)) != (_INT64)(0U))
  {
    __comma_preg = __uflow(__fp);
    __cselect_preg = __comma_preg;
  }
  else
  {
    preg_preg = (_UINT64)((__fp) -> _IO_read_ptr);
    (__fp) -> _IO_read_ptr = (_INT8 *) preg_preg + 1U;
    __cselect_preg = (_INT32) * (_UINT8 *)((_INT8 *) preg_preg);
  }
  return __cselect_preg;
} /* fgetc_unlocked */


extern __inline _INT32 getc_unlocked(
  struct _IO_FILE * __fp)
{
  
  register _INT32 __comma_preg;
  register _INT32 __cselect_preg;
  register _UINT64 preg_preg;
  
  if((_INT64)((_INT64) EXPECT((_UINT64)((__fp) -> _IO_read_ptr) >= (_UINT64)((__fp) -> _IO_read_end), (_INT64) 0U)) != (_INT64)(0U))
  {
    __comma_preg = __uflow(__fp);
    __cselect_preg = __comma_preg;
  }
  else
  {
    preg_preg = (_UINT64)((__fp) -> _IO_read_ptr);
    (__fp) -> _IO_read_ptr = (_INT8 *) preg_preg + 1U;
    __cselect_preg = (_INT32) * (_UINT8 *)((_INT8 *) preg_preg);
  }
  return __cselect_preg;
} /* getc_unlocked */


extern __inline _INT32 getchar_unlocked()
{
  
  register _INT32 __comma_preg;
  register _INT32 __cselect_preg;
  register _UINT64 preg_preg;
  
  if((_INT64)((_INT64) EXPECT((_UINT64)((stdin) -> _IO_read_ptr) >= (_UINT64)((stdin) -> _IO_read_end), (_INT64) 0U)) != (_INT64)(0U))
  {
    __comma_preg = __uflow(stdin);
    __cselect_preg = __comma_preg;
  }
  else
  {
    preg_preg = (_UINT64)((stdin) -> _IO_read_ptr);
    (stdin) -> _IO_read_ptr = (_INT8 *) preg_preg + 1U;
    __cselect_preg = (_INT32) * (_UINT8 *)((_INT8 *) preg_preg);
  }
  return __cselect_preg;
} /* getchar_unlocked */


extern __inline _INT32 putchar(
  _INT32 __c)
{
  
  register _INT32 __comma_preg;
  
  __comma_preg = _IO_putc(__c, stdout);
  return __comma_preg;
} /* putchar */


extern __inline _INT32 fputc_unlocked(
  _INT32 __c,
  struct _IO_FILE * __stream)
{
  
  register _INT32 __comma_preg;
  register _INT32 __cselect_preg;
  register _UINT64 preg_preg;
  
  if((_INT64)((_INT64) EXPECT((_UINT64)((__stream) -> _IO_write_ptr) >= (_UINT64)((__stream) -> _IO_write_end), (_INT64) 0U)) != (_INT64)(0U))
  {
    __comma_preg = __overflow(__stream, (_INT32)(_UINT8)(__c));
    __cselect_preg = __comma_preg;
  }
  else
  {
    preg_preg = (_UINT64)((__stream) -> _IO_write_ptr);
    (__stream) -> _IO_write_ptr = (_INT8 *) preg_preg + 1U;
    * (_INT8 *) preg_preg = __c;
    __cselect_preg = (_UINT8)((_INT8)(__c));
  }
  return __cselect_preg;
} /* fputc_unlocked */


extern __inline _INT32 putc_unlocked(
  _INT32 __c,
  struct _IO_FILE * __stream)
{
  
  register _INT32 __comma_preg;
  register _INT32 __cselect_preg;
  register _UINT64 preg_preg;
  
  if((_INT64)((_INT64) EXPECT((_UINT64)((__stream) -> _IO_write_ptr) >= (_UINT64)((__stream) -> _IO_write_end), (_INT64) 0U)) != (_INT64)(0U))
  {
    __comma_preg = __overflow(__stream, (_INT32)(_UINT8)(__c));
    __cselect_preg = __comma_preg;
  }
  else
  {
    preg_preg = (_UINT64)((__stream) -> _IO_write_ptr);
    (__stream) -> _IO_write_ptr = (_INT8 *) preg_preg + 1U;
    * (_INT8 *) preg_preg = __c;
    __cselect_preg = (_UINT8)((_INT8)(__c));
  }
  return __cselect_preg;
} /* putc_unlocked */


extern __inline _INT32 putchar_unlocked(
  _INT32 __c)
{
  
  register _INT32 __comma_preg;
  register _INT32 __cselect_preg;
  register _UINT64 preg_preg;
  
  if((_INT64)((_INT64) EXPECT((_UINT64)((stdout) -> _IO_write_ptr) >= (_UINT64)((stdout) -> _IO_write_end), (_INT64) 0U)) != (_INT64)(0U))
  {
    __comma_preg = __overflow(stdout, (_INT32)(_UINT8)(__c));
    __cselect_preg = __comma_preg;
  }
  else
  {
    preg_preg = (_UINT64)((stdout) -> _IO_write_ptr);
    (stdout) -> _IO_write_ptr = (_INT8 *) preg_preg + 1U;
    * (_INT8 *) preg_preg = __c;
    __cselect_preg = (_UINT8)((_INT8)(__c));
  }
  return __cselect_preg;
} /* putchar_unlocked */


extern __inline _INT32 feof_unlocked(
  struct _IO_FILE * __stream)
{
  
  
  return((__stream) -> _flags & (_INT32)(16U)) != (_INT32)(0U);
} /* feof_unlocked */


extern __inline _INT32 ferror_unlocked(
  struct _IO_FILE * __stream)
{
  
  
  return((__stream) -> _flags & (_INT32)(32U)) != (_INT32)(0U);
} /* ferror_unlocked */


extern __inline _INT32 tolower(
  _INT32 __c)
{
  
  register _UINT64 __comma_preg;
  register _INT32 __cselect_preg;
  
  if(((_UINT32) __c + 128U) <= 383U)
  {
    __comma_preg = (_UINT64)(_UINT64) __ctype_tolower_loc();
    __cselect_preg = *(*(const _INT32 **) __comma_preg + (_INT64)((_UINT32) __c));
  }
  else
  {
    __cselect_preg = (_UINT32) __c;
  }
  return __cselect_preg;
} /* tolower */


extern __inline _INT32 toupper(
  _INT32 __c)
{
  
  register _UINT64 __comma_preg;
  register _INT32 __cselect_preg;
  
  if(((_UINT32) __c + 128U) <= 383U)
  {
    __comma_preg = (_UINT64)(_UINT64) __ctype_toupper_loc();
    __cselect_preg = *(*(const _INT32 **) __comma_preg + (_INT64)((_UINT32) __c));
  }
  else
  {
    __cselect_preg = (_UINT32) __c;
  }
  return __cselect_preg;
} /* toupper */


extern __inline _UINT64 __strcspn_c1(
  const _INT8 * __s,
  _INT32 __reject)
{
  
  _UINT64 __result;
  
  __result = 0U;
  while(((_INT32)(*(__s + __result)) != (_INT32)(0U)) && ((_INT32)(*(__s + __result)) != __reject))
  {
    _514 :;
    __result = __result + (_UINT64)(1U);
  }
  _770 :;
  return __result;
} /* __strcspn_c1 */


extern __inline _UINT64 __strcspn_c2(
  const _INT8 * __s,
  _INT32 __reject_w2c_1,
  _INT32 __reject_w2c_2)
{
  
  _UINT64 __result;
  
  __result = 0U;
  while((((_INT32)(*(__s + __result)) != (_INT32)(0U)) && ((_INT32)(*(__s + __result)) != __reject_w2c_1)) && ((_INT32)(*(__s + __result)) != __reject_w2c_2))
  {
    _514 :;
    __result = __result + (_UINT64)(1U);
  }
  _770 :;
  return __result;
} /* __strcspn_c2 */


extern __inline _UINT64 __strcspn_c3(
  const _INT8 * __s,
  _INT32 __reject_w2c_1,
  _INT32 __reject_w2c_2,
  _INT32 __reject_w2c_3)
{
  
  _UINT64 __result;
  
  __result = 0U;
  while(((((_INT32)(*(__s + __result)) != (_INT32)(0U)) && ((_INT32)(*(__s + __result)) != __reject_w2c_1)) && ((_INT32)(*(__s + __result)) != __reject_w2c_2)) && ((_INT32)(*(__s + __result)) != __reject_w2c_3))
  {
    _514 :;
    __result = __result + (_UINT64)(1U);
  }
  _770 :;
  return __result;
} /* __strcspn_c3 */


extern __inline _UINT64 __strspn_c1(
  const _INT8 * __s,
  _INT32 __accept)
{
  
  _UINT64 __result;
  
  __result = 0U;
  while((_INT32) * (__s + __result) == __accept)
  {
    _514 :;
    __result = __result + (_UINT64)(1U);
  }
  _770 :;
  return __result;
} /* __strspn_c1 */


extern __inline _UINT64 __strspn_c2(
  const _INT8 * __s,
  _INT32 __accept_w2c_1,
  _INT32 __accept_w2c_2)
{
  
  _UINT64 __result;
  
  __result = 0U;
  while(((_INT32) * (__s + __result) == __accept_w2c_1) || ((_INT32) * (__s + __result) == __accept_w2c_2))
  {
    _514 :;
    __result = __result + (_UINT64)(1U);
  }
  _770 :;
  return __result;
} /* __strspn_c2 */


extern __inline _UINT64 __strspn_c3(
  const _INT8 * __s,
  _INT32 __accept_w2c_1,
  _INT32 __accept_w2c_2,
  _INT32 __accept_w2c_3)
{
  
  _UINT64 __result;
  
  __result = 0U;
  while((((_INT32) * (__s + __result) == __accept_w2c_1) || ((_INT32) * (__s + __result) == __accept_w2c_2)) || ((_INT32) * (__s + __result) == __accept_w2c_3))
  {
    _514 :;
    __result = __result + (_UINT64)(1U);
  }
  _770 :;
  return __result;
} /* __strspn_c3 */


extern __inline _INT8 * __strpbrk_c2(
  const _INT8 * __s,
  _INT32 __accept_w2c_1,
  _INT32 __accept_w2c_2)
{
  
  register _UINT64 __cselect_preg;
  
  while((((_INT32)(*__s) != (_INT32)(0U)) && ((_INT32)(*__s) != __accept_w2c_1)) && ((_INT32)(*__s) != __accept_w2c_2))
  {
    _514 :;
    __s = __s + 1U;
  }
  _770 :;
  if((_INT32)(*__s) != (_INT32)(0U))
  {
    __cselect_preg = (_UINT64)(__s);
  }
  else
  {
    __cselect_preg = 0U;
  }
  return(_INT8 *) __cselect_preg;
} /* __strpbrk_c2 */


extern __inline _INT8 * __strpbrk_c3(
  const _INT8 * __s,
  _INT32 __accept_w2c_1,
  _INT32 __accept_w2c_2,
  _INT32 __accept_w2c_3)
{
  
  register _UINT64 __cselect_preg;
  
  while(((((_INT32)(*__s) != (_INT32)(0U)) && ((_INT32)(*__s) != __accept_w2c_1)) && ((_INT32)(*__s) != __accept_w2c_2)) && ((_INT32)(*__s) != __accept_w2c_3))
  {
    _514 :;
    __s = __s + 1U;
  }
  _770 :;
  if((_INT32)(*__s) != (_INT32)(0U))
  {
    __cselect_preg = (_UINT64)(__s);
  }
  else
  {
    __cselect_preg = 0U;
  }
  return(_INT8 *) __cselect_preg;
} /* __strpbrk_c3 */


extern __inline _INT8 * __strtok_r_1c(
  _INT8 * __s,
  _INT8 __sep,
  _INT8 ** __nextp)
{
  
  _INT8 * __result;
  
  if((_UINT64)(__s) == (_UINT64)(0U))
  {
    __s = *__nextp;
  }
  while((_INT32)(*__s) == (_INT32)(__sep))
  {
    _514 :;
    __s = __s + 1U;
  }
  _770 :;
  __result = (_INT8 *)(0U);
  if((_INT32)(*__s) != (_INT32)(0U))
  {
    __s = __s + 1U;
    __result = __s + -1LL;
    while((_INT32)(*__s) != (_INT32)(0U))
    {
      _1282 :;
      __s = __s + 1U;
      if((_INT32)(*(__s + -1LL)) == (_INT32)(__sep))
      {
        * (__s + -1LL) = 0U;
        goto _1538;
      }
    }
    _1538 :;
    * __nextp = __s;
  }
  return __result;
} /* __strtok_r_1c */


extern __inline _INT8 * __strsep_1c(
  _INT8 ** __s,
  _INT8 __reject)
{
  
  register _UINT64 __comma_preg;
  register _UINT64 __cselect_preg;
  register _UINT64 __comma_preg_w2c_0;
  _INT8 * __retval;
  
  __retval = *__s;
  if((_UINT64)(__retval) != (_UINT64)(0U))
  {
    if(((_INT32)(0U) != (_INT32)(0U)) && ((_INT32) __reject == (_INT32)(0U)))
    {
      __comma_preg = (_UINT64)(_UINT64) __rawmemchr(__retval, (_INT32) __reject);
      __cselect_preg = (_UINT64)((_INT8 *) __comma_preg);
    }
    else
    {
      __comma_preg_w2c_0 = (_UINT64)(_UINT64) strchr(__retval, (_INT32) __reject);
      __cselect_preg = (_UINT64)((_INT8 *) __comma_preg_w2c_0);
    }
    * __s = (_INT8 *)(__cselect_preg);
    if(__cselect_preg != (_UINT64)(0U))
    {
      * __s = (_INT8 *)(__cselect_preg + (_UINT64)(1U));
      * ((_INT8 *) __cselect_preg) = 0U;
    }
  }
  _514 :;
  return __retval;
} /* __strsep_1c */


extern __inline _INT8 * __strsep_2c(
  _INT8 ** __s,
  _INT8 __reject_w2c_1,
  _INT8 __reject_w2c_2)
{
  
  _INT8 * __retval;
  _INT8 * __cp;
  
  __retval = *__s;
  if((_UINT64)(__retval) != (_UINT64)(0U))
  {
    __cp = __retval;
    _3330 :;
    _258 :;
    if((_INT32)(*__cp) == (_INT32)(0U))
    {
      __cp = (_INT8 *)(0U);
      goto _514;
    }
    else
    {
      if(((_INT32)(*__cp) == (_INT32)(__reject_w2c_1)) || ((_INT32)(*__cp) == (_INT32)(__reject_w2c_2)))
      {
        __cp = __cp + 1U;
        * (__cp + -1LL) = 0U;
        goto _514;
      }
      else
      {
        __cp = __cp + 1U;
      }
    }
    goto _3330;
    _514 :;
    * __s = __cp;
  }
  return __retval;
} /* __strsep_2c */


extern __inline _INT8 * __strsep_3c(
  _INT8 ** __s,
  _INT8 __reject_w2c_1,
  _INT8 __reject_w2c_2,
  _INT8 __reject_w2c_3)
{
  
  _INT8 * __retval;
  _INT8 * __cp;
  
  __retval = *__s;
  if((_UINT64)(__retval) != (_UINT64)(0U))
  {
    __cp = __retval;
    _3586 :;
    _258 :;
    if((_INT32)(*__cp) == (_INT32)(0U))
    {
      __cp = (_INT8 *)(0U);
      goto _514;
    }
    else
    {
      if((((_INT32)(*__cp) == (_INT32)(__reject_w2c_1)) || ((_INT32)(*__cp) == (_INT32)(__reject_w2c_2))) || ((_INT32)(*__cp) == (_INT32)(__reject_w2c_3)))
      {
        __cp = __cp + 1U;
        * (__cp + -1LL) = 0U;
        goto _514;
      }
      else
      {
        __cp = __cp + 1U;
      }
    }
    goto _3586;
    _514 :;
    * __s = __cp;
  }
  return __retval;
} /* __strsep_3c */


extern void BZ2_bz__AssertH__fail(
  _INT32 errcode)
{
  
  register _UINT64 __comma_preg;
  
  __comma_preg = (_UINT64)(_UINT64) BZ2_bzlibVersion();
  fprintf(stderr, "\n\nbzip2/libbzip2: internal error number %d.\nThis is a bug in bzip2/libbzip2, %s.\nPlease report it to me at: jseward@bzip.org.  If this happened\nwhen you were using some program which uses libbzip2 as a\ncomponent, you should also report this bug to the author(s)\nof that program.  Please make an effort to report this bug;\ntimely and accurate bug reports eventually lead to higher\nquality software.  Thanks.  Julian Seward, 15 February 2005.\n\n", errcode, (const _INT8 *) __comma_preg);
  if(errcode == (_INT32)(1007U))
  {
    fprintf(stderr, "\n*** A special note about internal error number 1007 ***\n\nExperience suggests that a common cause of i.e. 1007\nis unreliable memory or other hardware.  The 1007 assertion\njust happens to cross-check the results of huge numbers of\nmemory reads/writes, and so acts (unintendedly) as a stress\ntest of your memory system.\n\nI suggest the following: try compressing the file again,\npossibly monitoring progress in detail with the -vv flag.\n\n* If the error cannot be reproduced, and/or happens at different\n  points in compression, you may have a flaky memory system.\n  Try a memory-test program.  I have used Memtest86\n  (www.memtest86.com).  At the time of writing it is free (GPLd).\n  Memtest86 tests memory much more thorougly than your BIOSs\n  power-on test, and may find failures that the BIOS doesn\'t.\n\n* If the error can be repeatably reproduced, this is a bug in\n  bzip2, and I would very much like to hear about it.  Please\n  let me know, and, ideally, save a copy of the file causing the\n  problem -- without which I will be unable to investigate it.\n\n");
  }
  exit((_INT32) 3U);
  return;
} /* BZ2_bz__AssertH__fail */


static _INT32 bz_config_ok()
{
  
  
  _3074 :;
  return 1U;
} /* bz_config_ok */


static void * default_bzalloc(
  void * opaque,
  _INT32 items,
  _INT32 size)
{
  
  register _UINT64 __comma_preg;
  
  __comma_preg = (_UINT64)(_UINT64) malloc((_UINT64)(_INT64)((items * size)));
  return(void *) __comma_preg;
} /* default_bzalloc */


static void default_bzfree(
  void * opaque,
  void * addr)
{
  
  
  if((_UINT64)(addr) != (_UINT64)(0U))
  {
    free(addr);
  }
  return;
} /* default_bzfree */


static void prepare_new_block(
  struct anonymous_w2c_5 * s)
{
  
  register _INT32 i_preg;
  
  (s) -> nblock = 0U;
  (s) -> numZ = 0U;
  (s) -> state_out_pos = 0U;
  (s) -> blockCRC = 4294967295U;
  for(i_preg = 0U; i_preg <= (_INT32)(255U); i_preg = i_preg + (_INT32)(1U))
  {
    * (_UINT8 *)(&((struct anonymous_w2c_5 *)((_UINT8 *)(s) + 128U))[(_INT64)(i_preg)]) = 0U;
  }
  (s) -> blockNo = (s) -> blockNo + (_INT32)(1U);
  return;
} /* prepare_new_block */


static void init_RL(
  struct anonymous_w2c_5 * s)
{
  
  
  (s) -> state_in_ch = 256U;
  (s) -> state_in_len = 0U;
  return;
} /* init_RL */


static _UINT8 isempty_RL(
  struct anonymous_w2c_5 * s)
{
  
  
  if(!(((s) -> state_in_ch <= 255U) && ((s) -> state_in_len > (_INT32)(0U))))
    goto _1026;
  _1282 :;
  return 0U;
  _1026 :;
  return 1U;
} /* isempty_RL */


extern _INT32 BZ2_bzCompressInit(
  struct anonymous_w2c_15 * strm,
  _INT32 blockSize100k,
  _INT32 verbosity,
  _INT32 workFactor)
{
  
  register _INT32 __comma_preg;
  register _UINT64 __comma_preg_w2c_0;
  register _UINT64 __comma_preg_w2c_1;
  register _UINT64 __comma_preg_w2c_2;
  register _UINT64 __comma_preg_w2c_3;
  
  __comma_preg = bz_config_ok();
  if(__comma_preg == (_INT32)(0U))
  {
    return -9LL;
  }
  if((((((_UINT64)(strm) == (_UINT64)(0U)) || (blockSize100k <= (_INT32)(0U))) || (blockSize100k > (_INT32)(9U))) || (workFactor < (_INT32)(0U))) || (workFactor > (_INT32)(250U)))
  {
    return -2LL;
  }
  if(workFactor == (_INT32)(0U))
  {
    workFactor = 30U;
  }
  if((_UINT64)(*((void * (**)(void *, _INT32, _INT32))(strm) + 7LL)) == (_UINT64)(0U))
  {
    * ((void * (**)(void *, _INT32, _INT32))(strm) + 7LL) = (void * (*)(void *, _INT32, _INT32))(&default_bzalloc);
  }
  if((_UINT64)(*((void(**)(void *, void *))(strm) + 8LL)) == (_UINT64)(0U))
  {
    * ((void(**)(void *, void *))(strm) + 8LL) = &default_bzfree;
  }
  __comma_preg_w2c_0 = (_UINT64)(_UINT64)(*((void * (**)(void *, _INT32, _INT32))(strm) + 7LL))(*((void **)(strm) + 9LL), (_INT32) 55768U, (_INT32) 1U);
  if((_UINT64)((struct anonymous_w2c_5 *) __comma_preg_w2c_0) == (_UINT64)(0U))
  {
    return -3LL;
  }
  ((struct anonymous_w2c_5 *) __comma_preg_w2c_0) -> strm = strm;
  ((struct anonymous_w2c_5 *) __comma_preg_w2c_0) -> arr1 = (_UINT32 *)(0ULL);
  ((struct anonymous_w2c_5 *) __comma_preg_w2c_0) -> arr2 = (_UINT32 *)(0ULL);
  ((struct anonymous_w2c_5 *) __comma_preg_w2c_0) -> ftab = (_UINT32 *)(0ULL);
  __comma_preg_w2c_1 = (_UINT64)(_UINT64)(*((void * (**)(void *, _INT32, _INT32))(strm) + 7LL))(*((void **)(strm) + 9LL), (_INT32)((_UINT64)((_INT64)(blockSize100k * (_INT32)(100000U))) * (_UINT64)(4U)), (_INT32) 1U);
  ((struct anonymous_w2c_5 *) __comma_preg_w2c_0) -> arr1 = (_UINT32 *) __comma_preg_w2c_1;
  __comma_preg_w2c_2 = (_UINT64)(_UINT64)(*((void * (**)(void *, _INT32, _INT32))(strm) + 7LL))(*((void **)(strm) + 9LL), (_INT32)(((_UINT64)((_INT64)(blockSize100k * (_INT32)(100000U))) * (_UINT64)(4U))) + (_INT32)(136U), (_INT32) 1U);
  ((struct anonymous_w2c_5 *) __comma_preg_w2c_0) -> arr2 = (_UINT32 *) __comma_preg_w2c_2;
  __comma_preg_w2c_3 = (_UINT64)(_UINT64)(*((void * (**)(void *, _INT32, _INT32))(strm) + 7LL))(*((void **)(strm) + 9LL), (_INT32) 262148U, (_INT32) 1U);
  ((struct anonymous_w2c_5 *) __comma_preg_w2c_0) -> ftab = (_UINT32 *) __comma_preg_w2c_3;
  if((((_UINT64)(((struct anonymous_w2c_5 *) __comma_preg_w2c_0) -> arr1) == (_UINT64)(0U)) || ((_UINT64)(((struct anonymous_w2c_5 *) __comma_preg_w2c_0) -> arr2) == (_UINT64)(0U))) || ((_UINT64)((_UINT32 *) __comma_preg_w2c_3) == (_UINT64)(0U)))
  {
    if((_UINT64)(((struct anonymous_w2c_5 *) __comma_preg_w2c_0) -> arr1) != (_UINT64)(0U))
    {
      (*((void(**)(void *, void *))(strm) + 8LL))(*((void **)(strm) + 9LL), ((struct anonymous_w2c_5 *) __comma_preg_w2c_0) -> arr1);
    }
    if((_UINT64)(((struct anonymous_w2c_5 *) __comma_preg_w2c_0) -> arr2) != (_UINT64)(0U))
    {
      (*((void(**)(void *, void *))(strm) + 8LL))(*((void **)(strm) + 9LL), ((struct anonymous_w2c_5 *) __comma_preg_w2c_0) -> arr2);
    }
    if((_UINT64)(((struct anonymous_w2c_5 *) __comma_preg_w2c_0) -> ftab) != (_UINT64)(0U))
    {
      (*((void(**)(void *, void *))(strm) + 8LL))(*((void **)(strm) + 9LL), ((struct anonymous_w2c_5 *) __comma_preg_w2c_0) -> ftab);
    }
    (*((void(**)(void *, void *))(strm) + 8LL))(*((void **)(strm) + 9LL), (struct anonymous_w2c_5 *) __comma_preg_w2c_0);
    return -3LL;
  }
  ((struct anonymous_w2c_5 *) __comma_preg_w2c_0) -> blockNo = 0U;
  ((struct anonymous_w2c_5 *) __comma_preg_w2c_0) -> state = 2U;
  ((struct anonymous_w2c_5 *) __comma_preg_w2c_0) -> mode = 2U;
  ((struct anonymous_w2c_5 *) __comma_preg_w2c_0) -> combinedCRC = 0U;
  ((struct anonymous_w2c_5 *) __comma_preg_w2c_0) -> blockSize100k = blockSize100k;
  ((struct anonymous_w2c_5 *) __comma_preg_w2c_0) -> nblockMAX = (blockSize100k * (_INT32)(100000U)) + -19;
  ((struct anonymous_w2c_5 *) __comma_preg_w2c_0) -> verbosity = verbosity;
  ((struct anonymous_w2c_5 *) __comma_preg_w2c_0) -> workFactor = workFactor;
  ((struct anonymous_w2c_5 *) __comma_preg_w2c_0) -> block = (_UINT8 *)(((struct anonymous_w2c_5 *) __comma_preg_w2c_0) -> arr2);
  ((struct anonymous_w2c_5 *) __comma_preg_w2c_0) -> mtfv = (_UINT16 *)(((struct anonymous_w2c_5 *) __comma_preg_w2c_0) -> arr1);
  ((struct anonymous_w2c_5 *) __comma_preg_w2c_0) -> zbits = (_UINT8 *)(0ULL);
  ((struct anonymous_w2c_5 *) __comma_preg_w2c_0) -> ptr = ((struct anonymous_w2c_5 *) __comma_preg_w2c_0) -> arr1;
  * ((void **)(strm) + 6LL) = (struct anonymous_w2c_5 *) __comma_preg_w2c_0;
  * ((_UINT32 *)(strm) + 3LL) = 0U;
  * ((_UINT32 *)(strm) + 4LL) = 0U;
  * ((_UINT32 *)(strm) + 9LL) = 0U;
  * ((_UINT32 *)(strm) + 10LL) = 0U;
  init_RL((struct anonymous_w2c_5 *) __comma_preg_w2c_0);
  prepare_new_block((struct anonymous_w2c_5 *) __comma_preg_w2c_0);
  return 0U;
} /* BZ2_bzCompressInit */


static void add_pair_to_block(
  struct anonymous_w2c_5 * s)
{
  
  register _INT32 whiledo_var_preg;
  _UINT8 ch;
  _INT32 _temp__switch_index0;
  
  ch = (s) -> state_in_ch;
  whiledo_var_preg = 0U;
  _3330 :;
  while((s) -> state_in_len > whiledo_var_preg)
  {
    _514 :;
    (s) -> blockCRC = (BZ2_crc32Table)[(_UINT32)(ch)^_U4LSHR((s) -> blockCRC, 24U)]^_U4SHL((s) -> blockCRC, 8U);
    _3842 :;
    whiledo_var_preg = whiledo_var_preg + (_INT32)(1U);
  }
  _770 :;
  * (_UINT8 *)(&((struct anonymous_w2c_5 *)((_UINT8 *)(s) + 128U))[(s) -> state_in_ch]) = 1U;
  _temp__switch_index0 = (s) -> state_in_len;
  if(_temp__switch_index0 == (_INT32)(1U))
    goto _1026;
  if(_temp__switch_index0 == (_INT32)(2U))
    goto _1538;
  if(!(_temp__switch_index0 != (_INT32)(3U)))
    goto _3074;
  goto _2050;
  _1026 :;
  * ((s) -> nblock + (s) -> block) = ch;
  (s) -> nblock = (s) -> nblock + (_INT32)(1U);
  goto _1282;
  _1538 :;
  * ((s) -> nblock + (s) -> block) = ch;
  (s) -> nblock = (s) -> nblock + (_INT32)(1U);
  * ((_INT64)((s) -> nblock) + (s) -> block) = ch;
  (s) -> nblock = (s) -> nblock + (_INT32)(1U);
  goto _1282;
  _3074 :;
  _1794 :;
  * ((s) -> nblock + (s) -> block) = ch;
  (s) -> nblock = (s) -> nblock + (_INT32)(1U);
  * ((_INT64)((s) -> nblock) + (s) -> block) = ch;
  (s) -> nblock = (s) -> nblock + (_INT32)(1U);
  * ((_INT64)((s) -> nblock) + (s) -> block) = ch;
  (s) -> nblock = (s) -> nblock + (_INT32)(1U);
  goto _1282;
  _2050 :;
  * (_UINT8 *)(&((struct anonymous_w2c_5 *)((_UINT8 *)(s) + 128U))[(s) -> state_in_len + -4]) = 1U;
  * ((s) -> nblock + (s) -> block) = ch;
  (s) -> nblock = (s) -> nblock + (_INT32)(1U);
  * ((_INT64)((s) -> nblock) + (s) -> block) = ch;
  (s) -> nblock = (s) -> nblock + (_INT32)(1U);
  * ((_INT64)((s) -> nblock) + (s) -> block) = ch;
  (s) -> nblock = (s) -> nblock + (_INT32)(1U);
  * ((_INT64)((s) -> nblock) + (s) -> block) = ch;
  (s) -> nblock = (s) -> nblock + (_INT32)(1U);
  * ((_INT64)((s) -> nblock) + (s) -> block) = (_UINT32)((s) -> state_in_len) + (_UINT32)(-4);
  (s) -> nblock = (s) -> nblock + (_INT32)(1U);
  goto _1282;
  _1282 :;
  return;
} /* add_pair_to_block */


static void flush_RL(
  struct anonymous_w2c_5 * s)
{
  
  
  if((s) -> state_in_ch <= 255U)
  {
    add_pair_to_block(s);
  }
  init_RL(s);
  return;
} /* flush_RL */


static _UINT8 copy_input_until_stop(
  struct anonymous_w2c_5 * s)
{
  
  _UINT8 progress_in;
  _UINT32 zchh;
  _UINT8 ch;
  _UINT32 zchh_w2c_0;
  _UINT8 ch_w2c_0;
  
  progress_in = 0U;
  if((s) -> mode == (_INT32)(2U))
  {
    _9474 :;
    _258 :;
    if((s) -> nblock >= (s) -> nblockMAX)
      goto _514;
    if(((s) -> strm) -> avail_in == 0U)
      goto _514;
    progress_in = 1U;
    zchh = (_UINT32) * (_UINT8 *)(((s) -> strm) -> next_in);
    if(((s) -> state_in_ch != zchh) && ((s) -> state_in_len == (_INT32)(1U)))
    {
      ch = (s) -> state_in_ch;
      (s) -> blockCRC = (BZ2_crc32Table)[(_UINT32)(ch)^_U4LSHR((s) -> blockCRC, 24U)]^_U4SHL((s) -> blockCRC, 8U);
      * (_UINT8 *)(&((struct anonymous_w2c_5 *)((_UINT8 *)(s) + 128U))[(s) -> state_in_ch]) = 1U;
      * ((s) -> nblock + (s) -> block) = ch;
      (s) -> nblock = (s) -> nblock + (_INT32)(1U);
      (s) -> state_in_ch = zchh;
    }
    else
    {
      if(((s) -> state_in_ch != zchh) || ((s) -> state_in_len == (_INT32)(255U)))
      {
        if((s) -> state_in_ch <= 255U)
        {
          add_pair_to_block(s);
        }
        (s) -> state_in_ch = zchh;
        (s) -> state_in_len = 1U;
      }
      else
      {
        (s) -> state_in_len = (s) -> state_in_len + (_INT32)(1U);
      }
    }
    ((s) -> strm) -> next_in = ((s) -> strm) -> next_in + 1U;
    ((s) -> strm) -> avail_in = ((s) -> strm) -> avail_in + (_UINT32)(-1);
    ((s) -> strm) -> total_in_lo32 = ((s) -> strm) -> total_in_lo32 + 1U;
    if(((s) -> strm) -> total_in_lo32 == 0U)
    {
      ((s) -> strm) -> total_in_hi32 = ((s) -> strm) -> total_in_hi32 + 1U;
    }
    goto _9474;
    _514 :;
  }
  else
  {
    _10754 :;
    _770 :;
    if((s) -> nblock >= (s) -> nblockMAX)
      goto _1026;
    if(((s) -> strm) -> avail_in == 0U)
      goto _1026;
    if((s) -> avail_in_expect == 0U)
      goto _1026;
    progress_in = 1U;
    zchh_w2c_0 = (_UINT32) * (_UINT8 *)(((s) -> strm) -> next_in);
    if(((s) -> state_in_ch != zchh_w2c_0) && ((s) -> state_in_len == (_INT32)(1U)))
    {
      ch_w2c_0 = (s) -> state_in_ch;
      (s) -> blockCRC = (BZ2_crc32Table)[(_UINT32)(ch_w2c_0)^_U4LSHR((s) -> blockCRC, 24U)]^_U4SHL((s) -> blockCRC, 8U);
      * (_UINT8 *)(&((struct anonymous_w2c_5 *)((_UINT8 *)(s) + 128U))[(s) -> state_in_ch]) = 1U;
      * ((s) -> nblock + (s) -> block) = ch_w2c_0;
      (s) -> nblock = (s) -> nblock + (_INT32)(1U);
      (s) -> state_in_ch = zchh_w2c_0;
    }
    else
    {
      if(((s) -> state_in_ch != zchh_w2c_0) || ((s) -> state_in_len == (_INT32)(255U)))
      {
        if((s) -> state_in_ch <= 255U)
        {
          add_pair_to_block(s);
        }
        (s) -> state_in_ch = zchh_w2c_0;
        (s) -> state_in_len = 1U;
      }
      else
      {
        (s) -> state_in_len = (s) -> state_in_len + (_INT32)(1U);
      }
    }
    ((s) -> strm) -> next_in = ((s) -> strm) -> next_in + 1U;
    ((s) -> strm) -> avail_in = ((s) -> strm) -> avail_in + (_UINT32)(-1);
    ((s) -> strm) -> total_in_lo32 = ((s) -> strm) -> total_in_lo32 + 1U;
    if(((s) -> strm) -> total_in_lo32 == 0U)
    {
      ((s) -> strm) -> total_in_hi32 = ((s) -> strm) -> total_in_hi32 + 1U;
    }
    (s) -> avail_in_expect = (s) -> avail_in_expect + (_UINT32)(-1);
    goto _10754;
    _1026 :;
  }
  return progress_in;
} /* copy_input_until_stop */


static _UINT8 copy_output_until_stop(
  struct anonymous_w2c_5 * s)
{
  
  _UINT8 progress_out;
  
  progress_out = 0U;
  _2306 :;
  _258 :;
  if(((s) -> strm) -> avail_out == 0U)
    goto _514;
  if((s) -> numZ <= (s) -> state_out_pos)
    goto _514;
  progress_out = 1U;
  * ((s) -> strm) -> next_out = (_INT8) * ((_INT64)((s) -> state_out_pos) + (s) -> zbits);
  (s) -> state_out_pos = (s) -> state_out_pos + (_INT32)(1U);
  ((s) -> strm) -> avail_out = ((s) -> strm) -> avail_out + (_UINT32)(-1);
  ((s) -> strm) -> next_out = ((s) -> strm) -> next_out + 1U;
  ((s) -> strm) -> total_out_lo32 = ((s) -> strm) -> total_out_lo32 + 1U;
  if(((s) -> strm) -> total_out_lo32 == 0U)
  {
    ((s) -> strm) -> total_out_hi32 = ((s) -> strm) -> total_out_hi32 + 1U;
  }
  goto _2306;
  _514 :;
  return progress_out;
} /* copy_output_until_stop */


static _UINT8 handle_compress(
  struct anonymous_w2c_15 * strm)
{
  
  register _UINT32 __comma_preg;
  register _UINT32 __comma_preg_w2c_0;
  register _UINT32 __comma_preg_w2c_1;
  register _UINT32 __comma_preg_w2c_2;
  _UINT8 progress_in;
  _UINT8 progress_out;
  struct anonymous_w2c_5 * s;
  
  progress_in = 0U;
  progress_out = 0U;
  s = (strm) -> state;
  _5634 :;
  _258 :;
  if((s) -> state == (_INT32)(1U))
  {
    __comma_preg = copy_output_until_stop(s);
    progress_out = (_UINT32)(progress_out) | __comma_preg;
    if((s) -> numZ > (s) -> state_out_pos)
      goto _514;
    if(((s) -> mode == (_INT32)(4U)) && ((s) -> avail_in_expect == 0U))
    {
      __comma_preg_w2c_0 = isempty_RL(s);
      if((_UINT32)((_UINT8)(__comma_preg_w2c_0)) != 0U)
      {
        goto _514;
      }
    }
    _1026 :;
    prepare_new_block(s);
    (s) -> state = 2U;
    if(((s) -> mode == (_INT32)(3U)) && ((s) -> avail_in_expect == 0U))
    {
      __comma_preg_w2c_1 = isempty_RL(s);
      if((_UINT32)((_UINT8)(__comma_preg_w2c_1)) != 0U)
      {
        goto _514;
      }
    }
    _1794 :;
  }
  if((s) -> state == (_INT32)(2U))
  {
    __comma_preg_w2c_2 = copy_input_until_stop(s);
    progress_in = (_UINT32)(progress_in) | __comma_preg_w2c_2;
    if(((s) -> mode != (_INT32)(2U)) && ((s) -> avail_in_expect == 0U))
    {
      flush_RL(s);
      BZ2_compressBlock(s, (_UINT8)((s) -> mode == (_INT32)(4U)));
      (s) -> state = 1U;
    }
    else
    {
      if((s) -> nblock >= (s) -> nblockMAX)
      {
        BZ2_compressBlock(s, (_UINT8) 0U);
        (s) -> state = 1U;
      }
      else
      {
        if(((s) -> strm) -> avail_in == 0U)
          goto _514;
      }
    }
  }
  goto _5634;
  _514 :;
  return((_UINT32)(progress_in) | (_UINT32)(progress_out)) != 0U;
} /* handle_compress */


extern _INT32 BZ2_bzCompress(
  struct anonymous_w2c_15 * strm,
  _INT32 action)
{
  
  register _UINT32 __comma_preg;
  register _INT32 __cselect_preg;
  register _UINT32 __comma_preg_w2c_0;
  register _UINT32 __comma_preg_w2c_1;
  register _UINT32 __comma_preg_w2c_2;
  struct anonymous_w2c_5 * s;
  _INT32 _temp__switch_index_w2c_1;
  
  if((_UINT64)(strm) == (_UINT64)(0U))
  {
    return -2LL;
  }
  s = *((void **)(strm) + 6LL);
  if((_UINT64)(s) == (_UINT64)(0U))
  {
    return -2LL;
  }
  if((_UINT64)((s) -> strm) != (_UINT64)(strm))
  {
    return -2LL;
  }
  _258 :;
  _temp__switch_index_w2c_1 = (s) -> mode;
  if(_temp__switch_index_w2c_1 == (_INT32)(1U))
    goto _514;
  if(_temp__switch_index_w2c_1 == (_INT32)(2U))
    goto _770;
  if(_temp__switch_index_w2c_1 == (_INT32)(3U))
    goto _1026;
  if(!(_temp__switch_index_w2c_1 != (_INT32)(4U)))
    goto _10498;
  goto _1538;
  _514 :;
  return -1LL;
  _770 :;
  if(!(action == (_INT32)(0U)))
    goto _11522;
  _14338 :;
  __comma_preg = handle_compress(strm);
  if((_UINT32)((_UINT8)(__comma_preg)) != 0U)
  {
    __cselect_preg = 1U;
  }
  else
  {
    __cselect_preg = -2LL;
  }
  return __cselect_preg;
  _11522 :;
  if(!(action == (_INT32)(1U)))
    goto _12034;
  _14594 :;
  (s) -> avail_in_expect = *((_UINT32 *)(strm) + 2LL);
  (s) -> mode = 3U;
  goto _258;
  _12034 :;
  if(!(action == (_INT32)(2U)))
    goto _12290;
  _14850 :;
  (s) -> avail_in_expect = *((_UINT32 *)(strm) + 2LL);
  (s) -> mode = 4U;
  goto _258;
  _12290 :;
  return -2LL;
  _1026 :;
  if(action != (_INT32)(1U))
  {
    return -1LL;
  }
  if(((s) -> strm) -> avail_in != (s) -> avail_in_expect)
  {
    return -1LL;
  }
  handle_compress(strm);
  if((s) -> avail_in_expect != 0U)
    goto _6402;
  __comma_preg_w2c_0 = isempty_RL(s);
  if((_UINT32)((_UINT8)(__comma_preg_w2c_0)) == 0U)
  {
    goto _6402;
  }
  _6914 :;
  if(!((s) -> numZ > (s) -> state_out_pos))
    goto _10242;
  _6402 :;
  return 2U;
  _10242 :;
  _6658 :;
  (s) -> mode = 2U;
  return 1U;
  _10498 :;
  _1282 :;
  if(action != (_INT32)(2U))
  {
    return -1LL;
  }
  if(((s) -> strm) -> avail_in != (s) -> avail_in_expect)
  {
    return -1LL;
  }
  __comma_preg_w2c_1 = handle_compress(strm);
  if((_UINT32)((_UINT8)(__comma_preg_w2c_1)) == 0U)
  {
    return -1LL;
  }
  if((s) -> avail_in_expect != 0U)
    goto _8962;
  __comma_preg_w2c_2 = isempty_RL(s);
  if((_UINT32)((_UINT8)(__comma_preg_w2c_2)) == 0U)
  {
    goto _8962;
  }
  _9474 :;
  if(!((s) -> numZ > (s) -> state_out_pos))
    goto _9986;
  _8962 :;
  return 3U;
  _9986 :;
  _9218 :;
  (s) -> mode = 1U;
  return 4U;
  _1538 :;
  return 0U;
} /* BZ2_bzCompress */


extern _INT32 BZ2_bzCompressEnd(
  struct anonymous_w2c_15 * strm)
{
  
  struct anonymous_w2c_5 * s;
  
  if((_UINT64)(strm) == (_UINT64)(0U))
  {
    return -2LL;
  }
  s = *((void **)(strm) + 6LL);
  if((_UINT64)(s) == (_UINT64)(0U))
  {
    return -2LL;
  }
  if((_UINT64)((s) -> strm) != (_UINT64)(strm))
  {
    return -2LL;
  }
  if((_UINT64)((s) -> arr1) != (_UINT64)(0U))
  {
    (*((void(**)(void *, void *))(strm) + 8LL))(*((void **)(strm) + 9LL), (s) -> arr1);
  }
  if((_UINT64)((s) -> arr2) != (_UINT64)(0U))
  {
    (*((void(**)(void *, void *))(strm) + 8LL))(*((void **)(strm) + 9LL), (s) -> arr2);
  }
  if((_UINT64)((s) -> ftab) != (_UINT64)(0U))
  {
    (*((void(**)(void *, void *))(strm) + 8LL))(*((void **)(strm) + 9LL), (s) -> ftab);
  }
  (*((void(**)(void *, void *))(strm) + 8LL))(*((void **)(strm) + 9LL), *((void **)(strm) + 6LL));
  * ((void **)(strm) + 6LL) = (void *)(0ULL);
  return 0U;
} /* BZ2_bzCompressEnd */


extern _INT32 BZ2_bzDecompressInit(
  struct anonymous_w2c_15 * strm,
  _INT32 verbosity,
  _INT32 small)
{
  
  register _INT32 __comma_preg;
  register _UINT64 __comma_preg_w2c_0;
  
  __comma_preg = bz_config_ok();
  if(__comma_preg == (_INT32)(0U))
  {
    return -9LL;
  }
  if((_UINT64)(strm) == (_UINT64)(0U))
  {
    return -2LL;
  }
  if((_UINT32) small > 1U)
  {
    return -2LL;
  }
  if((_UINT32) verbosity > 4U)
  {
    return -2LL;
  }
  if((_UINT64)(*((void * (**)(void *, _INT32, _INT32))(strm) + 7LL)) == (_UINT64)(0U))
  {
    * ((void * (**)(void *, _INT32, _INT32))(strm) + 7LL) = (void * (*)(void *, _INT32, _INT32))(&default_bzalloc);
  }
  if((_UINT64)(*((void(**)(void *, void *))(strm) + 8LL)) == (_UINT64)(0U))
  {
    * ((void(**)(void *, void *))(strm) + 8LL) = &default_bzfree;
  }
  __comma_preg_w2c_0 = (_UINT64)(_UINT64)(*((void * (**)(void *, _INT32, _INT32))(strm) + 7LL))(*((void **)(strm) + 9LL), (_INT32) 64144U, (_INT32) 1U);
  if((_UINT64)((struct anonymous_w2c_17 *) __comma_preg_w2c_0) == (_UINT64)(0U))
  {
    return -3LL;
  }
  ((struct anonymous_w2c_17 *) __comma_preg_w2c_0) -> strm = strm;
  * ((void **)(strm) + 6LL) = (struct anonymous_w2c_17 *) __comma_preg_w2c_0;
  ((struct anonymous_w2c_17 *) __comma_preg_w2c_0) -> state = 10U;
  ((struct anonymous_w2c_17 *) __comma_preg_w2c_0) -> bsLive = 0U;
  ((struct anonymous_w2c_17 *) __comma_preg_w2c_0) -> bsBuff = 0U;
  ((struct anonymous_w2c_17 *) __comma_preg_w2c_0) -> calculatedCombinedCRC = 0U;
  * ((_UINT32 *)(strm) + 3LL) = 0U;
  * ((_UINT32 *)(strm) + 4LL) = 0U;
  * ((_UINT32 *)(strm) + 9LL) = 0U;
  * ((_UINT32 *)(strm) + 10LL) = 0U;
  ((struct anonymous_w2c_17 *) __comma_preg_w2c_0) -> smallDecompress = (_UINT32) small;
  ((struct anonymous_w2c_17 *) __comma_preg_w2c_0) -> ll4 = (_UINT8 *)(0ULL);
  ((struct anonymous_w2c_17 *) __comma_preg_w2c_0) -> ll16 = (_UINT16 *)(0ULL);
  ((struct anonymous_w2c_17 *) __comma_preg_w2c_0) -> tt = (_UINT32 *)(0ULL);
  ((struct anonymous_w2c_17 *) __comma_preg_w2c_0) -> currBlockNo = 0U;
  ((struct anonymous_w2c_17 *) __comma_preg_w2c_0) -> verbosity = (_UINT32) verbosity;
  return 0U;
} /* BZ2_bzDecompressInit */


static _UINT8 unRLE_obuf_to_output_FAST(
  struct anonymous_w2c_17 * s)
{
  
  _UINT8 k_w2c_1;
  _UINT32 c_calculatedBlockCRC;
  _UINT8 c_state_out_ch;
  _INT32 c_state_out_len;
  _INT32 c_nblock_used;
  _INT32 c_k0;
  _UINT32 * c_tt;
  _UINT32 c_tPos;
  _INT8 * cs_next_out;
  _UINT32 cs_avail_out;
  _UINT32 avail_out_INIT;
  _INT32 s_save_nblockPP;
  _UINT32 total_out_lo32_old;
  
  if((_UINT32)((s) -> blockRandomised) != 0U)
  {
    _20994 :;
    _21250 :;
    _514 :;
    if(((s) -> strm) -> avail_out == 0U)
    {
      return 0U;
    }
    if((s) -> state_out_len == (_INT32)(0U))
      goto _770;
    * (_UINT8 *)(((s) -> strm) -> next_out) = (s) -> state_out_ch;
    (s) -> calculatedBlockCRC = (BZ2_crc32Table)[(_UINT32)((s) -> state_out_ch)^_U4LSHR((s) -> calculatedBlockCRC, 24U)]^_U4SHL((s) -> calculatedBlockCRC, 8U);
    (s) -> state_out_len = (s) -> state_out_len + -1;
    ((s) -> strm) -> next_out = ((s) -> strm) -> next_out + 1U;
    ((s) -> strm) -> avail_out = ((s) -> strm) -> avail_out + (_UINT32)(-1);
    ((s) -> strm) -> total_out_lo32 = ((s) -> strm) -> total_out_lo32 + 1U;
    if(((s) -> strm) -> total_out_lo32 == 0U)
    {
      ((s) -> strm) -> total_out_hi32 = ((s) -> strm) -> total_out_hi32 + 1U;
    }
    goto _21250;
    _770 :;
    if((s) -> nblock_used == (*(((_INT32 *)(s) + 16384U) + -364LL) + (_INT32)(1U)))
    {
      return 0U;
    }
    if((s) -> nblock_used > (*(((_INT32 *)(s) + 16384U) + -364LL) + (_INT32)(1U)))
    {
      return 1U;
    }
    (s) -> state_out_len = 1U;
    (s) -> state_out_ch = (s) -> k0;
    (s) -> tPos = *((s) -> tt + (s) -> tPos);
    k_w2c_1 = (s) -> tPos;
    (s) -> tPos = _U4LSHR((s) -> tPos, 8U);
    if((s) -> rNToGo == (_INT32)(0U))
    {
      (s) -> rNToGo = (BZ2_rNums)[(s) -> rTPos];
      (s) -> rTPos = (s) -> rTPos + (_INT32)(1U);
      if((s) -> rTPos == (_INT32)(512U))
      {
        (s) -> rTPos = 0U;
      }
    }
    (s) -> rNToGo = (s) -> rNToGo + -1;
    k_w2c_1 = (_INT8)(((s) -> rNToGo == (_INT32)(1U))^(_INT32)(k_w2c_1));
    (s) -> nblock_used = (s) -> nblock_used + (_INT32)(1U);
    if((s) -> nblock_used != (*(((_INT32 *)(s) + 16384U) + -364LL) + (_INT32)(1U)))
    {
      if((s) -> k0 != (_INT32)(k_w2c_1))
      {
        (s) -> k0 = k_w2c_1;
      }
      else
      {
        (s) -> state_out_len = 2U;
        (s) -> tPos = *((s) -> tt + (s) -> tPos);
        k_w2c_1 = (s) -> tPos;
        (s) -> tPos = _U4LSHR((s) -> tPos, 8U);
        if((s) -> rNToGo == (_INT32)(0U))
        {
          (s) -> rNToGo = (BZ2_rNums)[(s) -> rTPos];
          (s) -> rTPos = (s) -> rTPos + (_INT32)(1U);
          if((s) -> rTPos == (_INT32)(512U))
          {
            (s) -> rTPos = 0U;
          }
        }
        (s) -> rNToGo = (s) -> rNToGo + -1;
        k_w2c_1 = (_INT8)(((s) -> rNToGo == (_INT32)(1U))^(_INT32)(k_w2c_1));
        (s) -> nblock_used = (s) -> nblock_used + (_INT32)(1U);
        if((s) -> nblock_used != (*(((_INT32 *)(s) + 16384U) + -364LL) + (_INT32)(1U)))
        {
          if((s) -> k0 != (_INT32)(k_w2c_1))
          {
            (s) -> k0 = k_w2c_1;
          }
          else
          {
            (s) -> state_out_len = 3U;
            (s) -> tPos = *((s) -> tt + (s) -> tPos);
            k_w2c_1 = (s) -> tPos;
            (s) -> tPos = _U4LSHR((s) -> tPos, 8U);
            if((s) -> rNToGo == (_INT32)(0U))
            {
              (s) -> rNToGo = (BZ2_rNums)[(s) -> rTPos];
              (s) -> rTPos = (s) -> rTPos + (_INT32)(1U);
              if((s) -> rTPos == (_INT32)(512U))
              {
                (s) -> rTPos = 0U;
              }
            }
            (s) -> rNToGo = (s) -> rNToGo + -1;
            k_w2c_1 = (_INT8)(((s) -> rNToGo == (_INT32)(1U))^(_INT32)(k_w2c_1));
            (s) -> nblock_used = (s) -> nblock_used + (_INT32)(1U);
            if((s) -> nblock_used != (*(((_INT32 *)(s) + 16384U) + -364LL) + (_INT32)(1U)))
            {
              if((s) -> k0 != (_INT32)(k_w2c_1))
              {
                (s) -> k0 = k_w2c_1;
              }
              else
              {
                (s) -> tPos = *((s) -> tt + (s) -> tPos);
                k_w2c_1 = (s) -> tPos;
                (s) -> tPos = _U4LSHR((s) -> tPos, 8U);
                if((s) -> rNToGo == (_INT32)(0U))
                {
                  (s) -> rNToGo = (BZ2_rNums)[(s) -> rTPos];
                  (s) -> rTPos = (s) -> rTPos + (_INT32)(1U);
                  if((s) -> rTPos == (_INT32)(512U))
                  {
                    (s) -> rTPos = 0U;
                  }
                }
                (s) -> rNToGo = (s) -> rNToGo + -1;
                k_w2c_1 = (_INT8)(((s) -> rNToGo == (_INT32)(1U))^(_INT32)(k_w2c_1));
                (s) -> nblock_used = (s) -> nblock_used + (_INT32)(1U);
                (s) -> state_out_len = (_INT32)(k_w2c_1) + (_INT32)(4U);
                (s) -> tPos = *((s) -> tt + (s) -> tPos);
                (s) -> k0 = (_UINT8)((s) -> tPos);
                (s) -> tPos = _U4LSHR((s) -> tPos, 8U);
                if((s) -> rNToGo == (_INT32)(0U))
                {
                  (s) -> rNToGo = (BZ2_rNums)[(s) -> rTPos];
                  (s) -> rTPos = (s) -> rTPos + (_INT32)(1U);
                  if((s) -> rTPos == (_INT32)(512U))
                  {
                    (s) -> rTPos = 0U;
                  }
                }
                (s) -> rNToGo = (s) -> rNToGo + -1;
                (s) -> k0 = ((s) -> rNToGo == (_INT32)(1U))^(s) -> k0;
                (s) -> nblock_used = (s) -> nblock_used + (_INT32)(1U);
              }
            }
          }
        }
      }
    }
    _1026 :;
    goto _20994;
  }
  else
  {
    c_calculatedBlockCRC = (s) -> calculatedBlockCRC;
    c_state_out_ch = (s) -> state_out_ch;
    c_state_out_len = (s) -> state_out_len;
    c_nblock_used = (s) -> nblock_used;
    c_k0 = (s) -> k0;
    c_tt = (s) -> tt;
    c_tPos = (s) -> tPos;
    cs_next_out = ((s) -> strm) -> next_out;
    cs_avail_out = ((s) -> strm) -> avail_out;
    avail_out_INIT = cs_avail_out;
    s_save_nblockPP = *(((_INT32 *)(s) + 16384U) + -364LL) + (_INT32)(1U);
    _26626 :;
    _1282 :;
    if(!(c_state_out_len > (_INT32)(0U)))
      goto _20482;
    _26882 :;
    _1538 :;
    if(cs_avail_out == 0U)
      goto _1794;
    if(c_state_out_len == (_INT32)(1U))
      goto _2050;
    * (_UINT8 *)(cs_next_out) = c_state_out_ch;
    c_calculatedBlockCRC = (BZ2_crc32Table)[(_UINT32)(c_state_out_ch)^_U4LSHR(c_calculatedBlockCRC, 24U)]^_U4SHL(c_calculatedBlockCRC, 8U);
    c_state_out_len = c_state_out_len + -1;
    cs_next_out = cs_next_out + 1U;
    cs_avail_out = cs_avail_out + (_UINT32)(-1);
    goto _26882;
    _2050 :;
    _2306 :;
    if(cs_avail_out == 0U)
    {
      c_state_out_len = 1U;
      goto _1794;
    }
    else
    {
      * (_UINT8 *)(cs_next_out) = c_state_out_ch;
      c_calculatedBlockCRC = (BZ2_crc32Table)[(_UINT32)(c_state_out_ch)^_U4LSHR(c_calculatedBlockCRC, 24U)]^_U4SHL(c_calculatedBlockCRC, 8U);
      cs_next_out = cs_next_out + 1U;
      cs_avail_out = cs_avail_out + (_UINT32)(-1);
    }
    _20482 :;
    if(c_nblock_used > s_save_nblockPP)
    {
      return 1U;
    }
    if(c_nblock_used == s_save_nblockPP)
    {
      c_state_out_len = 0U;
      goto _1794;
    }
    else
    {
      c_state_out_ch = c_k0;
      c_tPos = *(c_tt + (_UINT64)((_UINT64) c_tPos));
      k_w2c_1 = c_tPos;
      c_tPos = _U4LSHR(c_tPos, 8U);
      c_nblock_used = c_nblock_used + (_INT32)(1U);
      if(c_k0 != (_INT32)(k_w2c_1))
      {
        c_k0 = k_w2c_1;
        goto _2306;
      }
      else
      {
        if(c_nblock_used == s_save_nblockPP)
          goto _2306;
        c_state_out_len = 2U;
        c_tPos = *(c_tt + (_UINT64)(c_tPos));
        k_w2c_1 = c_tPos;
        c_tPos = _U4LSHR(c_tPos, 8U);
        c_nblock_used = c_nblock_used + (_INT32)(1U);
        if(c_nblock_used != s_save_nblockPP)
        {
          if(c_k0 != (_INT32)(k_w2c_1))
          {
            c_k0 = k_w2c_1;
          }
          else
          {
            c_state_out_len = 3U;
            c_tPos = *(c_tt + (_UINT64)(c_tPos));
            k_w2c_1 = c_tPos;
            c_tPos = _U4LSHR(c_tPos, 8U);
            c_nblock_used = c_nblock_used + (_INT32)(1U);
            if(c_nblock_used != s_save_nblockPP)
            {
              if(c_k0 != (_INT32)(k_w2c_1))
              {
                c_k0 = k_w2c_1;
              }
              else
              {
                c_tPos = *(c_tt + (_UINT64)(c_tPos));
                c_state_out_len = (_INT32)((_UINT8)(c_tPos)) + (_INT32)(4U);
                c_tPos = *(c_tt + (_UINT64)(_U4LSHR(c_tPos, 8U)));
                c_k0 = (_UINT8)(c_tPos);
                c_tPos = _U4LSHR(c_tPos, 8U);
                c_nblock_used = c_nblock_used + (_INT32)(2U);
              }
            }
          }
        }
        _2562 :;
      }
    }
    goto _26626;
    _1794 :;
    total_out_lo32_old = ((s) -> strm) -> total_out_lo32;
    ((s) -> strm) -> total_out_lo32 = ((s) -> strm) -> total_out_lo32 + (avail_out_INIT - cs_avail_out);
    if(((s) -> strm) -> total_out_lo32 < total_out_lo32_old)
    {
      ((s) -> strm) -> total_out_hi32 = ((s) -> strm) -> total_out_hi32 + 1U;
    }
    (s) -> calculatedBlockCRC = c_calculatedBlockCRC;
    (s) -> state_out_ch = c_state_out_ch;
    (s) -> state_out_len = c_state_out_len;
    (s) -> nblock_used = c_nblock_used;
    (s) -> k0 = c_k0;
    (s) -> tt = c_tt;
    (s) -> tPos = c_tPos;
    ((s) -> strm) -> next_out = cs_next_out;
    ((s) -> strm) -> avail_out = cs_avail_out;
  }
  return 0U;
} /* unRLE_obuf_to_output_FAST */


extern __inline _INT32 BZ2_indexIntoF(
  _INT32 indx,
  _INT32 * cftab)
{
  
  _INT32 nb;
  _INT32 na;
  
  nb = 0U;
  na = 256U;
  do
  {
    _258 :;
    if(*(cftab + (_INT64)(_I4ASHR(nb + na, 1U))) <= indx)
    {
      nb = _I4ASHR(nb + na, (_INT32)(1U));
    }
    else
    {
      na = _I4ASHR(nb + na, (_INT32)(1U));
    }
  }
  while((na - nb) != (_INT32)(1U));
  _514 :;
  return nb;
} /* BZ2_indexIntoF */


static _UINT8 unRLE_obuf_to_output_SMALL(
  struct anonymous_w2c_17 * s)
{
  
  _UINT8 k_w2c_1;
  _INT32 nb;
  _INT32 na;
  _INT32 indx_w2c_0;
  _INT32 indx_w2c_1;
  _INT32 indx_w2c_2;
  _INT32 indx_w2c_3;
  _INT32 indx_w2c_4;
  _INT32 indx_w2c_5;
  _INT32 indx_w2c_6;
  _INT32 indx_w2c_7;
  _INT32 indx_w2c_8;
  _INT32 indx_w2c_9;
  
  if(!((_UINT32)((s) -> blockRandomised) != 0U))
    goto _34562;
  _48642 :;
  _34818 :;
  _35074 :;
  _514 :;
  if(((s) -> strm) -> avail_out == 0U)
  {
    return 0U;
  }
  if((s) -> state_out_len == (_INT32)(0U))
    goto _770;
  * (_UINT8 *)(((s) -> strm) -> next_out) = (s) -> state_out_ch;
  (s) -> calculatedBlockCRC = (BZ2_crc32Table)[(_UINT32)((s) -> state_out_ch)^_U4LSHR((s) -> calculatedBlockCRC, 24U)]^_U4SHL((s) -> calculatedBlockCRC, 8U);
  (s) -> state_out_len = (s) -> state_out_len + -1;
  ((s) -> strm) -> next_out = ((s) -> strm) -> next_out + 1U;
  ((s) -> strm) -> avail_out = ((s) -> strm) -> avail_out + (_UINT32)(-1);
  ((s) -> strm) -> total_out_lo32 = ((s) -> strm) -> total_out_lo32 + 1U;
  if(((s) -> strm) -> total_out_lo32 == 0U)
  {
    ((s) -> strm) -> total_out_hi32 = ((s) -> strm) -> total_out_hi32 + 1U;
  }
  goto _35074;
  _770 :;
  if((s) -> nblock_used == (*(((_INT32 *)(s) + 16384U) + -364LL) + (_INT32)(1U)))
  {
    return 0U;
  }
  if((s) -> nblock_used > (*(((_INT32 *)(s) + 16384U) + -364LL) + (_INT32)(1U)))
  {
    return 1U;
  }
  (s) -> state_out_len = 1U;
  (s) -> state_out_ch = (s) -> k0;
  indx_w2c_9 = (s) -> tPos;
  nb = 0U;
  na = 256U;
  do
  {
    _6914 :;
    if(*(((_INT32 *)(s) + (_INT64)(_I4ASHR(nb + na, 1U))) + 274LL) <= indx_w2c_9)
    {
      nb = _I4ASHR(nb + na, (_INT32)(1U));
    }
    else
    {
      na = _I4ASHR(nb + na, (_INT32)(1U));
    }
  }
  while((na - nb) != (_INT32)(1U));
  _7170 :;
  (s) -> tPos = (_UINT32) * ((s) -> ll16 + (_UINT64)((s) -> tPos)) | _U4SHL(_U4LSHR((_UINT32) * ((s) -> ll4 + _U4LSHR((s) -> tPos, 1U)), (_UINT32)((_INT32)(_U4SHL((s) -> tPos, 2U)) & (_INT32)(4U))) & 15U, 16U);
  if((s) -> rNToGo == (_INT32)(0U))
  {
    (s) -> rNToGo = (BZ2_rNums)[(s) -> rTPos];
    (s) -> rTPos = (s) -> rTPos + (_INT32)(1U);
    if((s) -> rTPos == (_INT32)(512U))
    {
      (s) -> rTPos = 0U;
    }
  }
  (s) -> rNToGo = (s) -> rNToGo + -1;
  k_w2c_1 = (_INT8)(((s) -> rNToGo == (_INT32)(1U))^(_INT32)((_UINT8)(nb)));
  (s) -> nblock_used = (s) -> nblock_used + (_INT32)(1U);
  if((s) -> nblock_used != (*(((_INT32 *)(s) + 16384U) + -364LL) + (_INT32)(1U)))
  {
    if((s) -> k0 != (_INT32)(k_w2c_1))
    {
      (s) -> k0 = k_w2c_1;
    }
    else
    {
      (s) -> state_out_len = 2U;
      indx_w2c_8 = (s) -> tPos;
      nb = 0U;
      na = 256U;
      do
      {
        _6402 :;
        if(*(((_INT32 *)(s) + (_INT64)(_I4ASHR(nb + na, 1U))) + 274LL) <= indx_w2c_8)
        {
          nb = _I4ASHR(nb + na, (_INT32)(1U));
        }
        else
        {
          na = _I4ASHR(nb + na, (_INT32)(1U));
        }
      }
      while((na - nb) != (_INT32)(1U));
      _6658 :;
      (s) -> tPos = (_UINT32) * ((s) -> ll16 + (_UINT64)((s) -> tPos)) | _U4SHL(_U4LSHR((_UINT32) * ((s) -> ll4 + _U4LSHR((s) -> tPos, 1U)), (_UINT32)((_INT32)(_U4SHL((s) -> tPos, 2U)) & (_INT32)(4U))) & 15U, 16U);
      if((s) -> rNToGo == (_INT32)(0U))
      {
        (s) -> rNToGo = (BZ2_rNums)[(s) -> rTPos];
        (s) -> rTPos = (s) -> rTPos + (_INT32)(1U);
        if((s) -> rTPos == (_INT32)(512U))
        {
          (s) -> rTPos = 0U;
        }
      }
      (s) -> rNToGo = (s) -> rNToGo + -1;
      k_w2c_1 = (_INT8)(((s) -> rNToGo == (_INT32)(1U))^(_INT32)((_UINT8)(nb)));
      (s) -> nblock_used = (s) -> nblock_used + (_INT32)(1U);
      if((s) -> nblock_used != (*(((_INT32 *)(s) + 16384U) + -364LL) + (_INT32)(1U)))
      {
        if((s) -> k0 != (_INT32)(k_w2c_1))
        {
          (s) -> k0 = k_w2c_1;
        }
        else
        {
          (s) -> state_out_len = 3U;
          indx_w2c_7 = (s) -> tPos;
          nb = 0U;
          na = 256U;
          do
          {
            _5890 :;
            if(*(((_INT32 *)(s) + (_INT64)(_I4ASHR(nb + na, 1U))) + 274LL) <= indx_w2c_7)
            {
              nb = _I4ASHR(nb + na, (_INT32)(1U));
            }
            else
            {
              na = _I4ASHR(nb + na, (_INT32)(1U));
            }
          }
          while((na - nb) != (_INT32)(1U));
          _6146 :;
          (s) -> tPos = (_UINT32) * ((s) -> ll16 + (_UINT64)((s) -> tPos)) | _U4SHL(_U4LSHR((_UINT32) * ((s) -> ll4 + _U4LSHR((s) -> tPos, 1U)), (_UINT32)((_INT32)(_U4SHL((s) -> tPos, 2U)) & (_INT32)(4U))) & 15U, 16U);
          if((s) -> rNToGo == (_INT32)(0U))
          {
            (s) -> rNToGo = (BZ2_rNums)[(s) -> rTPos];
            (s) -> rTPos = (s) -> rTPos + (_INT32)(1U);
            if((s) -> rTPos == (_INT32)(512U))
            {
              (s) -> rTPos = 0U;
            }
          }
          (s) -> rNToGo = (s) -> rNToGo + -1;
          k_w2c_1 = (_INT8)(((s) -> rNToGo == (_INT32)(1U))^(_INT32)((_UINT8)(nb)));
          (s) -> nblock_used = (s) -> nblock_used + (_INT32)(1U);
          if((s) -> nblock_used != (*(((_INT32 *)(s) + 16384U) + -364LL) + (_INT32)(1U)))
          {
            if((s) -> k0 != (_INT32)(k_w2c_1))
            {
              (s) -> k0 = k_w2c_1;
            }
            else
            {
              indx_w2c_6 = (s) -> tPos;
              nb = 0U;
              na = 256U;
              do
              {
                _5378 :;
                if(*(((_INT32 *)(s) + (_INT64)(_I4ASHR(nb + na, 1U))) + 274LL) <= indx_w2c_6)
                {
                  nb = _I4ASHR(nb + na, (_INT32)(1U));
                }
                else
                {
                  na = _I4ASHR(nb + na, (_INT32)(1U));
                }
              }
              while((na - nb) != (_INT32)(1U));
              _5634 :;
              (s) -> tPos = (_UINT32) * ((s) -> ll16 + (_UINT64)((s) -> tPos)) | _U4SHL(_U4LSHR((_UINT32) * ((s) -> ll4 + _U4LSHR((s) -> tPos, 1U)), (_UINT32)((_INT32)(_U4SHL((s) -> tPos, 2U)) & (_INT32)(4U))) & 15U, 16U);
              if((s) -> rNToGo == (_INT32)(0U))
              {
                (s) -> rNToGo = (BZ2_rNums)[(s) -> rTPos];
                (s) -> rTPos = (s) -> rTPos + (_INT32)(1U);
                if((s) -> rTPos == (_INT32)(512U))
                {
                  (s) -> rTPos = 0U;
                }
              }
              (s) -> rNToGo = (s) -> rNToGo + -1;
              k_w2c_1 = (_INT8)(((s) -> rNToGo == (_INT32)(1U))^(_INT32)((_UINT8)(nb)));
              (s) -> nblock_used = (s) -> nblock_used + (_INT32)(1U);
              (s) -> state_out_len = (_INT32)(k_w2c_1) + (_INT32)(4U);
              indx_w2c_5 = (s) -> tPos;
              nb = 0U;
              na = 256U;
              do
              {
                _4866 :;
                if(*(((_INT32 *)(s) + (_INT64)(_I4ASHR(nb + na, 1U))) + 274LL) <= indx_w2c_5)
                {
                  nb = _I4ASHR(nb + na, (_INT32)(1U));
                }
                else
                {
                  na = _I4ASHR(nb + na, (_INT32)(1U));
                }
              }
              while((na - nb) != (_INT32)(1U));
              _5122 :;
              (s) -> k0 = nb;
              (s) -> tPos = (_UINT32) * ((s) -> ll16 + (_UINT64)((s) -> tPos)) | _U4SHL(_U4LSHR((_UINT32) * ((s) -> ll4 + _U4LSHR((s) -> tPos, 1U)), (_UINT32)((_INT32)(_U4SHL((s) -> tPos, 2U)) & (_INT32)(4U))) & 15U, 16U);
              if((s) -> rNToGo == (_INT32)(0U))
              {
                (s) -> rNToGo = (BZ2_rNums)[(s) -> rTPos];
                (s) -> rTPos = (s) -> rTPos + (_INT32)(1U);
                if((s) -> rTPos == (_INT32)(512U))
                {
                  (s) -> rTPos = 0U;
                }
              }
              (s) -> rNToGo = (s) -> rNToGo + -1;
              (s) -> k0 = ((s) -> rNToGo == (_INT32)(1U))^(s) -> k0;
              (s) -> nblock_used = (s) -> nblock_used + (_INT32)(1U);
            }
          }
        }
      }
    }
  }
  _1026 :;
  goto _34818;
  _34562 :;
  _43010 :;
  _43266 :;
  _1538 :;
  if(((s) -> strm) -> avail_out == 0U)
  {
    return 0U;
  }
  if((s) -> state_out_len == (_INT32)(0U))
    goto _1794;
  * (_UINT8 *)(((s) -> strm) -> next_out) = (s) -> state_out_ch;
  (s) -> calculatedBlockCRC = (BZ2_crc32Table)[(_UINT32)((s) -> state_out_ch)^_U4LSHR((s) -> calculatedBlockCRC, 24U)]^_U4SHL((s) -> calculatedBlockCRC, 8U);
  (s) -> state_out_len = (s) -> state_out_len + -1;
  ((s) -> strm) -> next_out = ((s) -> strm) -> next_out + 1U;
  ((s) -> strm) -> avail_out = ((s) -> strm) -> avail_out + (_UINT32)(-1);
  ((s) -> strm) -> total_out_lo32 = ((s) -> strm) -> total_out_lo32 + 1U;
  if(((s) -> strm) -> total_out_lo32 == 0U)
  {
    ((s) -> strm) -> total_out_hi32 = ((s) -> strm) -> total_out_hi32 + 1U;
  }
  goto _43266;
  _1794 :;
  if((s) -> nblock_used == (*(((_INT32 *)(s) + 16384U) + -364LL) + (_INT32)(1U)))
  {
    return 0U;
  }
  if((s) -> nblock_used > (*(((_INT32 *)(s) + 16384U) + -364LL) + (_INT32)(1U)))
  {
    return 1U;
  }
  (s) -> state_out_len = 1U;
  (s) -> state_out_ch = (s) -> k0;
  indx_w2c_4 = (s) -> tPos;
  nb = 0U;
  na = 256U;
  do
  {
    _4354 :;
    if(*(((_INT32 *)(s) + (_INT64)(_I4ASHR(nb + na, 1U))) + 274LL) <= indx_w2c_4)
    {
      nb = _I4ASHR(nb + na, (_INT32)(1U));
    }
    else
    {
      na = _I4ASHR(nb + na, (_INT32)(1U));
    }
  }
  while((na - nb) != (_INT32)(1U));
  _4610 :;
  (s) -> tPos = (_UINT32) * ((s) -> ll16 + (_UINT64)((s) -> tPos)) | _U4SHL(_U4LSHR((_UINT32) * ((s) -> ll4 + _U4LSHR((s) -> tPos, 1U)), (_UINT32)((_INT32)(_U4SHL((s) -> tPos, 2U)) & (_INT32)(4U))) & 15U, 16U);
  (s) -> nblock_used = (s) -> nblock_used + (_INT32)(1U);
  if((s) -> nblock_used != (*(((_INT32 *)(s) + 16384U) + -364LL) + (_INT32)(1U)))
  {
    if((s) -> k0 != (_INT32)((_UINT8)(nb)))
    {
      (s) -> k0 = (_UINT8)(nb);
    }
    else
    {
      (s) -> state_out_len = 2U;
      indx_w2c_3 = (s) -> tPos;
      nb = 0U;
      na = 256U;
      do
      {
        _3842 :;
        if(*(((_INT32 *)(s) + (_INT64)(_I4ASHR(nb + na, 1U))) + 274LL) <= indx_w2c_3)
        {
          nb = _I4ASHR(nb + na, (_INT32)(1U));
        }
        else
        {
          na = _I4ASHR(nb + na, (_INT32)(1U));
        }
      }
      while((na - nb) != (_INT32)(1U));
      _4098 :;
      (s) -> tPos = (_UINT32) * ((s) -> ll16 + (_UINT64)((s) -> tPos)) | _U4SHL(_U4LSHR((_UINT32) * ((s) -> ll4 + _U4LSHR((s) -> tPos, 1U)), (_UINT32)((_INT32)(_U4SHL((s) -> tPos, 2U)) & (_INT32)(4U))) & 15U, 16U);
      (s) -> nblock_used = (s) -> nblock_used + (_INT32)(1U);
      if((s) -> nblock_used != (*(((_INT32 *)(s) + 16384U) + -364LL) + (_INT32)(1U)))
      {
        if((s) -> k0 != (_INT32)((_UINT8)(nb)))
        {
          (s) -> k0 = (_UINT8)(nb);
        }
        else
        {
          (s) -> state_out_len = 3U;
          indx_w2c_2 = (s) -> tPos;
          nb = 0U;
          na = 256U;
          do
          {
            _3330 :;
            if(*(((_INT32 *)(s) + (_INT64)(_I4ASHR(nb + na, 1U))) + 274LL) <= indx_w2c_2)
            {
              nb = _I4ASHR(nb + na, (_INT32)(1U));
            }
            else
            {
              na = _I4ASHR(nb + na, (_INT32)(1U));
            }
          }
          while((na - nb) != (_INT32)(1U));
          _3586 :;
          (s) -> tPos = (_UINT32) * ((s) -> ll16 + (_UINT64)((s) -> tPos)) | _U4SHL(_U4LSHR((_UINT32) * ((s) -> ll4 + _U4LSHR((s) -> tPos, 1U)), (_UINT32)((_INT32)(_U4SHL((s) -> tPos, 2U)) & (_INT32)(4U))) & 15U, 16U);
          (s) -> nblock_used = (s) -> nblock_used + (_INT32)(1U);
          if((s) -> nblock_used != (*(((_INT32 *)(s) + 16384U) + -364LL) + (_INT32)(1U)))
          {
            if((s) -> k0 != (_INT32)((_UINT8)(nb)))
            {
              (s) -> k0 = (_UINT8)(nb);
            }
            else
            {
              indx_w2c_1 = (s) -> tPos;
              nb = 0U;
              na = 256U;
              do
              {
                _2818 :;
                if(*(((_INT32 *)(s) + (_INT64)(_I4ASHR(nb + na, 1U))) + 274LL) <= indx_w2c_1)
                {
                  nb = _I4ASHR(nb + na, (_INT32)(1U));
                }
                else
                {
                  na = _I4ASHR(nb + na, (_INT32)(1U));
                }
              }
              while((na - nb) != (_INT32)(1U));
              _3074 :;
              (s) -> tPos = (_UINT32) * ((s) -> ll16 + (_UINT64)((s) -> tPos)) | _U4SHL(_U4LSHR((_UINT32) * ((s) -> ll4 + _U4LSHR((s) -> tPos, 1U)), (_UINT32)((_INT32)(_U4SHL((s) -> tPos, 2U)) & (_INT32)(4U))) & 15U, 16U);
              (s) -> nblock_used = (s) -> nblock_used + (_INT32)(1U);
              (s) -> state_out_len = (_INT32)((_UINT8)(nb)) + (_INT32)(4U);
              indx_w2c_0 = (s) -> tPos;
              nb = 0U;
              na = 256U;
              do
              {
                _2306 :;
                if(*(((_INT32 *)(s) + (_INT64)(_I4ASHR(nb + na, 1U))) + 274LL) <= indx_w2c_0)
                {
                  nb = _I4ASHR(nb + na, (_INT32)(1U));
                }
                else
                {
                  na = _I4ASHR(nb + na, (_INT32)(1U));
                }
              }
              while((na - nb) != (_INT32)(1U));
              _2562 :;
              (s) -> k0 = nb;
              (s) -> tPos = (_UINT32) * ((s) -> ll16 + (_UINT64)((s) -> tPos)) | _U4SHL(_U4LSHR((_UINT32) * ((s) -> ll4 + _U4LSHR((s) -> tPos, 1U)), (_UINT32)((_INT32)(_U4SHL((s) -> tPos, 2U)) & (_INT32)(4U))) & 15U, 16U);
              (s) -> nblock_used = (s) -> nblock_used + (_INT32)(1U);
            }
          }
        }
      }
    }
  }
  _2050 :;
  goto _43010;
} /* unRLE_obuf_to_output_SMALL */


extern _INT32 BZ2_bzDecompress(
  struct anonymous_w2c_15 * strm)
{
  
  register _UINT32 __comma_preg;
  register _UINT32 __comma_preg_w2c_0;
  register _INT32 __comma_preg_w2c_1;
  _UINT8 corrupt;
  struct anonymous_w2c_17 * s;
  
  if((_UINT64)(strm) == (_UINT64)(0U))
  {
    return -2LL;
  }
  s = *((void **)(strm) + 6LL);
  if((_UINT64)(s) == (_UINT64)(0U))
  {
    return -2LL;
  }
  if((_UINT64)((s) -> strm) != (_UINT64)(strm))
  {
    return -2LL;
  }
  _10754 :;
  _258 :;
  if((s) -> state == (_INT32)(1U))
  {
    return -1LL;
  }
  if((s) -> state == (_INT32)(2U))
  {
    if((_UINT32)((s) -> smallDecompress) != 0U)
    {
      __comma_preg = unRLE_obuf_to_output_SMALL(s);
      corrupt = __comma_preg;
    }
    else
    {
      __comma_preg_w2c_0 = unRLE_obuf_to_output_FAST(s);
      corrupt = __comma_preg_w2c_0;
    }
    if((_UINT32)(corrupt) != 0U)
    {
      return -4LL;
    }
    if(((s) -> nblock_used == (*(((_INT32 *)(s) + 16384U) + -364LL) + (_INT32)(1U))) && ((s) -> state_out_len == (_INT32)(0U)))
    {
      (s) -> calculatedBlockCRC =~(s) -> calculatedBlockCRC;
      if((s) -> verbosity > (_INT32)(2U))
      {
        fprintf(stderr, " {0x%08x, 0x%08x}", (s) -> storedBlockCRC, (s) -> calculatedBlockCRC);
      }
      if((s) -> verbosity > (_INT32)(1U))
      {
        fprintf(stderr, "]");
      }
      if((s) -> storedBlockCRC != (s) -> calculatedBlockCRC)
      {
        return -4LL;
      }
      (s) -> calculatedCombinedCRC = _U4LSHR((s) -> calculatedCombinedCRC, 31U) | _U4SHL((s) -> calculatedCombinedCRC, 1U);
      (s) -> calculatedCombinedCRC = (s) -> calculatedBlockCRC^(s) -> calculatedCombinedCRC;
      (s) -> state = 14U;
    }
    else
    {
      return 0U;
    }
  }
  if((s) -> state > (_INT32)(9U))
  {
    __comma_preg_w2c_1 = BZ2_decompress(s);
    if(__comma_preg_w2c_1 == (_INT32)(4U))
    {
      if((s) -> verbosity > (_INT32)(2U))
      {
        fprintf(stderr, "\n    combined CRCs: stored = 0x%08x, computed = 0x%08x", (s) -> storedCombinedCRC, (s) -> calculatedCombinedCRC);
      }
      if((s) -> storedCombinedCRC != (s) -> calculatedCombinedCRC)
      {
        return -4LL;
      }
      return __comma_preg_w2c_1;
    }
    if((s) -> state != (_INT32)(2U))
    {
      return __comma_preg_w2c_1;
    }
  }
  goto _10754;
} /* BZ2_bzDecompress */


extern _INT32 BZ2_bzDecompressEnd(
  struct anonymous_w2c_15 * strm)
{
  
  struct anonymous_w2c_17 * s;
  
  if((_UINT64)(strm) == (_UINT64)(0U))
  {
    return -2LL;
  }
  s = *((void **)(strm) + 6LL);
  if((_UINT64)(s) == (_UINT64)(0U))
  {
    return -2LL;
  }
  if((_UINT64)((s) -> strm) != (_UINT64)(strm))
  {
    return -2LL;
  }
  if((_UINT64)((s) -> tt) != (_UINT64)(0U))
  {
    (*((void(**)(void *, void *))(strm) + 8LL))(*((void **)(strm) + 9LL), (s) -> tt);
  }
  if((_UINT64)((s) -> ll16) != (_UINT64)(0U))
  {
    (*((void(**)(void *, void *))(strm) + 8LL))(*((void **)(strm) + 9LL), (s) -> ll16);
  }
  if((_UINT64)((s) -> ll4) != (_UINT64)(0U))
  {
    (*((void(**)(void *, void *))(strm) + 8LL))(*((void **)(strm) + 9LL), (s) -> ll4);
  }
  (*((void(**)(void *, void *))(strm) + 8LL))(*((void **)(strm) + 9LL), *((void **)(strm) + 6LL));
  * ((void **)(strm) + 6LL) = (void *)(0ULL);
  return 0U;
} /* BZ2_bzDecompressEnd */


static _UINT8 myfeof(
  struct _IO_FILE * f)
{
  
  register _INT32 __comma_preg;
  
  __comma_preg = fgetc(f);
  if(__comma_preg == -1)
  {
    return 1U;
  }
  ungetc(__comma_preg, f);
  return 0U;
} /* myfeof */


extern void * BZ2_bzWriteOpen(
  _INT32 * bzerror,
  struct _IO_FILE * f,
  _INT32 blockSize100k,
  _INT32 verbosity,
  _INT32 workFactor)
{
  
  register _INT32 __comma_preg;
  register _UINT64 __comma_preg_w2c_0;
  register _INT32 __comma_preg_w2c_1;
  
  if((_UINT64)(bzerror) != (_UINT64)(0U))
  {
    * (_INT32 *)(bzerror) = 0U;
  }
  _14082 :;
  if(((((_UINT64)(f) == (_UINT64)(0U)) || (((_UINT32) blockSize100k + (_UINT32)(-1)) > 8U)) || ((_UINT32) workFactor > 250U)) || ((_UINT32) verbosity > 4U))
  {
    if((_UINT64)(bzerror) != (_UINT64)(0U))
    {
      * (_INT32 *)(bzerror) = -2LL;
    }
    _14338 :;
    return(void *) 0U;
  }
  __comma_preg = ferror(f);
  if(__comma_preg != (_INT32)(0U))
  {
    if((_UINT64)(bzerror) != (_UINT64)(0U))
    {
      * (_INT32 *)(bzerror) = -6LL;
    }
    _14594 :;
    return(void *) 0U;
  }
  __comma_preg_w2c_0 = (_UINT64)(_UINT64) malloc(5104U);
  if((_UINT64)((struct anonymous_w2c_28 *) __comma_preg_w2c_0) == (_UINT64)(0U))
  {
    if((_UINT64)(bzerror) != (_UINT64)(0U))
    {
      * (_INT32 *)(bzerror) = -3LL;
    }
    _14850 :;
    return(void *) 0U;
  }
  if((_UINT64)(bzerror) != (_UINT64)(0U))
  {
    * (_INT32 *)(bzerror) = 0U;
  }
  ((struct anonymous_w2c_28 *) __comma_preg_w2c_0) -> lastErr = 0U;
  ((struct anonymous_w2c_28 *) __comma_preg_w2c_0) -> initialisedOk = 0U;
  ((struct anonymous_w2c_28 *) __comma_preg_w2c_0) -> bufN = 0U;
  ((struct anonymous_w2c_28 *) __comma_preg_w2c_0) -> handle = f;
  ((struct anonymous_w2c_28 *) __comma_preg_w2c_0) -> writing = 1U;
  ((struct anonymous_w2c_28 *) __comma_preg_w2c_0) -> strm.bzalloc = (void * (*)(void *, _INT32, _INT32))(0ULL);
  ((struct anonymous_w2c_28 *) __comma_preg_w2c_0) -> strm.bzfree = (void(*)(void *, void *))(0ULL);
  ((struct anonymous_w2c_28 *) __comma_preg_w2c_0) -> strm.opaque = (void *)(0ULL);
  if((_INT32)((_UINT32) workFactor) == (_INT32)(0U))
  {
    workFactor = 30U;
  }
  __comma_preg_w2c_1 = BZ2_bzCompressInit((struct anonymous_w2c_15 *)(struct anonymous_w2c_28 *)((_UINT8 *)((struct anonymous_w2c_28 *) __comma_preg_w2c_0) + 5016U), (_INT32)(_UINT32) blockSize100k, (_INT32)(_UINT32) verbosity, workFactor);
  if(__comma_preg_w2c_1 != (_INT32)(0U))
  {
    if((_UINT64)(bzerror) != (_UINT64)(0U))
    {
      * (_INT32 *)(bzerror) = __comma_preg_w2c_1;
    }
    ((struct anonymous_w2c_28 *) __comma_preg_w2c_0) -> lastErr = __comma_preg_w2c_1;
    free((struct anonymous_w2c_28 *) __comma_preg_w2c_0);
    return(void *) 0U;
  }
  ((struct anonymous_w2c_28 *) __comma_preg_w2c_0) -> strm.avail_in = 0U;
  ((struct anonymous_w2c_28 *) __comma_preg_w2c_0) -> initialisedOk = 1U;
  return(void *) __comma_preg_w2c_0;
} /* BZ2_bzWriteOpen */


extern void BZ2_bzWrite(
  _INT32 * bzerror,
  void * b,
  void * buf,
  _INT32 len)
{
  
  register _INT32 __comma_preg;
  register _INT32 __comma_preg_w2c_0;
  register _UINT64 __comma_preg_w2c_1;
  register _INT32 __comma_preg_w2c_2;
  _INT32 n;
  
  if((_UINT64)(bzerror) != (_UINT64)(0U))
  {
    * (_INT32 *)(bzerror) = 0U;
  }
  if((_UINT64)((struct anonymous_w2c_28 *) b) != (_UINT64)(0U))
  {
    ((struct anonymous_w2c_28 *) b) -> lastErr = 0U;
  }
  if((((_UINT64)((struct anonymous_w2c_28 *) b) == (_UINT64)(0U)) || ((_UINT64)(buf) == (_UINT64)(0U))) || (len < (_INT32)(0U)))
  {
    if((_UINT64)(bzerror) != (_UINT64)(0U))
    {
      * (_INT32 *)(bzerror) = -2LL;
    }
    if((_UINT64)((struct anonymous_w2c_28 *) b) != (_UINT64)(0U))
    {
      ((struct anonymous_w2c_28 *) b) -> lastErr = -2LL;
    }
    return;
  }
  if((_UINT32)(((struct anonymous_w2c_28 *) b) -> writing) == 0U)
  {
    if((_UINT64)(bzerror) != (_UINT64)(0U))
    {
      * (_INT32 *)(bzerror) = -1LL;
    }
    if((_UINT64)((struct anonymous_w2c_28 *) b) != (_UINT64)(0U))
    {
      ((struct anonymous_w2c_28 *) b) -> lastErr = -1LL;
    }
    return;
  }
  __comma_preg = ferror(((struct anonymous_w2c_28 *) b) -> handle);
  if(__comma_preg != (_INT32)(0U))
  {
    if((_UINT64)(bzerror) != (_UINT64)(0U))
    {
      * (_INT32 *)(bzerror) = -6LL;
    }
    if((_UINT64)((struct anonymous_w2c_28 *) b) != (_UINT64)(0U))
    {
      ((struct anonymous_w2c_28 *) b) -> lastErr = -6LL;
    }
    return;
  }
  if(len == (_INT32)(0U))
  {
    if((_UINT64)(bzerror) != (_UINT64)(0U))
    {
      * (_INT32 *)(bzerror) = 0U;
    }
    if((_UINT64)((struct anonymous_w2c_28 *) b) != (_UINT64)(0U))
    {
      ((struct anonymous_w2c_28 *) b) -> lastErr = 0U;
    }
    return;
  }
  ((struct anonymous_w2c_28 *) b) -> strm.avail_in = len;
  ((struct anonymous_w2c_28 *) b) -> strm.next_in = buf;
  _17922 :;
  _258 :;
  ((struct anonymous_w2c_28 *) b) -> strm.avail_out = 5000U;
  ((struct anonymous_w2c_28 *) b) -> strm.next_out = (_INT8 *)((struct anonymous_w2c_28 *)((_UINT8 *)((struct anonymous_w2c_28 *) b) + 8U));
  __comma_preg_w2c_0 = BZ2_bzCompress((struct anonymous_w2c_15 *)(struct anonymous_w2c_28 *)((_UINT8 *)((struct anonymous_w2c_28 *) b) + 5016U), (_INT32) 0U);
  if(__comma_preg_w2c_0 != (_INT32)(1U))
  {
    if((_UINT64)(bzerror) != (_UINT64)(0U))
    {
      * (_INT32 *)(bzerror) = __comma_preg_w2c_0;
    }
    if((_UINT64)((struct anonymous_w2c_28 *) b) != (_UINT64)(0U))
    {
      ((struct anonymous_w2c_28 *) b) -> lastErr = __comma_preg_w2c_0;
    }
    return;
  }
  if(((struct anonymous_w2c_28 *) b) -> strm.avail_out <= 4999U)
  {
    n = (_INT32)(5000U) - (_INT32)(((struct anonymous_w2c_28 *) b) -> strm.avail_out);
    __comma_preg_w2c_1 = fwrite((struct anonymous_w2c_28 *)((_UINT8 *)((struct anonymous_w2c_28 *) b) + 8U), 1U, (_UINT64)(_INT64)(n), ((struct anonymous_w2c_28 *) b) -> handle);
    if(n != (_INT32)((_UINT32)(__comma_preg_w2c_1)))
      goto _10754;
    __comma_preg_w2c_2 = ferror(((struct anonymous_w2c_28 *) b) -> handle);
    if(!(__comma_preg_w2c_2 != (_INT32)(0U)))
      goto _14082;
    _10754 :;
    if((_UINT64)(bzerror) != (_UINT64)(0U))
    {
      * (_INT32 *)(bzerror) = -6LL;
    }
    if((_UINT64)((struct anonymous_w2c_28 *) b) != (_UINT64)(0U))
    {
      ((struct anonymous_w2c_28 *) b) -> lastErr = -6LL;
    }
    return;
    _14082 :;
  }
  _20482 :;
  if(((struct anonymous_w2c_28 *) b) -> strm.avail_in == 0U)
  {
    if((_UINT64)(bzerror) != (_UINT64)(0U))
    {
      * (_INT32 *)(bzerror) = 0U;
    }
    if((_UINT64)((struct anonymous_w2c_28 *) b) != (_UINT64)(0U))
    {
      ((struct anonymous_w2c_28 *) b) -> lastErr = 0U;
    }
    return;
  }
  goto _17922;
} /* BZ2_bzWrite */


extern void BZ2_bzWriteClose(
  _INT32 * bzerror,
  void * b,
  _INT32 abandon,
  _UINT32 * nbytes_in,
  _UINT32 * nbytes_out)
{
  
  
  BZ2_bzWriteClose64(bzerror, b, abandon, nbytes_in, (_UINT32 *) 0U, nbytes_out, (_UINT32 *) 0U);
  return;
} /* BZ2_bzWriteClose */


extern void BZ2_bzWriteClose64(
  _INT32 * bzerror,
  void * b,
  _INT32 abandon,
  _UINT32 * nbytes_in_lo_w2c_32,
  _UINT32 * nbytes_in_hi_w2c_32,
  _UINT32 * nbytes_out_lo_w2c_32,
  _UINT32 * nbytes_out_hi_w2c_32)
{
  
  register _INT32 __comma_preg;
  register _INT32 __comma_preg_w2c_0;
  register _UINT64 __comma_preg_w2c_1;
  register _INT32 __comma_preg_w2c_2;
  register _INT32 __comma_preg_w2c_4;
  register _INT32 __comma_preg_w2c_3;
  _INT32 n;
  
  if((_UINT64)((struct anonymous_w2c_28 *) b) == (_UINT64)(0U))
  {
    if((_UINT64)(bzerror) != (_UINT64)(0U))
    {
      * (_INT32 *)(bzerror) = 0U;
    }
    _26626 :;
    return;
  }
  if((_UINT32)(((struct anonymous_w2c_28 *) b) -> writing) == 0U)
  {
    if((_UINT64)(bzerror) != (_UINT64)(0U))
    {
      * (_INT32 *)(bzerror) = -1LL;
    }
    ((struct anonymous_w2c_28 *) b) -> lastErr = -1LL;
    return;
  }
  __comma_preg = ferror(((struct anonymous_w2c_28 *) b) -> handle);
  if(__comma_preg != (_INT32)(0U))
  {
    if((_UINT64)(bzerror) != (_UINT64)(0U))
    {
      * (_INT32 *)(bzerror) = -6LL;
    }
    ((struct anonymous_w2c_28 *) b) -> lastErr = -6LL;
    return;
  }
  if((_UINT64)(nbytes_in_lo_w2c_32) != (_UINT64)(0U))
  {
    * (_UINT32 *)(nbytes_in_lo_w2c_32) = 0U;
  }
  if((_UINT64)(nbytes_in_hi_w2c_32) != (_UINT64)(0U))
  {
    * (_UINT32 *)(nbytes_in_hi_w2c_32) = 0U;
  }
  if((_UINT64)(nbytes_out_lo_w2c_32) != (_UINT64)(0U))
  {
    * (_UINT32 *)(nbytes_out_lo_w2c_32) = 0U;
  }
  if((_UINT64)(nbytes_out_hi_w2c_32) != (_UINT64)(0U))
  {
    * (_UINT32 *)(nbytes_out_hi_w2c_32) = 0U;
  }
  if((abandon == (_INT32)(0U)) && (((struct anonymous_w2c_28 *) b) -> lastErr == (_INT32)(0U)))
  {
    _22018 :;
    _258 :;
    ((struct anonymous_w2c_28 *) b) -> strm.avail_out = 5000U;
    ((struct anonymous_w2c_28 *) b) -> strm.next_out = (_INT8 *)((struct anonymous_w2c_28 *)((_UINT8 *)((struct anonymous_w2c_28 *) b) + 8U));
    __comma_preg_w2c_0 = BZ2_bzCompress((struct anonymous_w2c_15 *)(struct anonymous_w2c_28 *)((_UINT8 *)((struct anonymous_w2c_28 *) b) + 5016U), (_INT32) 2U);
    if(((_UINT32)(__comma_preg_w2c_0) + (_UINT32)(-3)) > 1U)
    {
      if((_UINT64)(bzerror) != (_UINT64)(0U))
      {
        * (_INT32 *)(bzerror) = __comma_preg_w2c_0;
      }
      ((struct anonymous_w2c_28 *) b) -> lastErr = __comma_preg_w2c_0;
      return;
    }
    if(((struct anonymous_w2c_28 *) b) -> strm.avail_out <= 4999U)
    {
      n = (_INT32)(5000U) - (_INT32)(((struct anonymous_w2c_28 *) b) -> strm.avail_out);
      __comma_preg_w2c_1 = fwrite((struct anonymous_w2c_28 *)((_UINT8 *)((struct anonymous_w2c_28 *) b) + 8U), 1U, (_UINT64)(_INT64)(n), ((struct anonymous_w2c_28 *) b) -> handle);
      if(n != (_INT32)((_UINT32)(__comma_preg_w2c_1)))
        goto _9986;
      __comma_preg_w2c_2 = ferror(((struct anonymous_w2c_28 *) b) -> handle);
      if(!(__comma_preg_w2c_2 != (_INT32)(0U)))
        goto _18178;
      _9986 :;
      if((_UINT64)(bzerror) != (_UINT64)(0U))
      {
        * (_INT32 *)(bzerror) = -6LL;
      }
      ((struct anonymous_w2c_28 *) b) -> lastErr = -6LL;
      return;
      _18178 :;
    }
    _26882 :;
    if(__comma_preg_w2c_0 == (_INT32)(4U))
      goto _514;
    goto _22018;
    _514 :;
  }
  if(abandon == (_INT32)(0U))
  {
    __comma_preg_w2c_4 = ferror(((struct anonymous_w2c_28 *) b) -> handle);
    if(__comma_preg_w2c_4 == (_INT32)(0U))
    {
      fflush(((struct anonymous_w2c_28 *) b) -> handle);
      __comma_preg_w2c_3 = ferror(((struct anonymous_w2c_28 *) b) -> handle);
      if(__comma_preg_w2c_3 != (_INT32)(0U))
      {
        if((_UINT64)(bzerror) != (_UINT64)(0U))
        {
          * (_INT32 *)(bzerror) = -6LL;
        }
        ((struct anonymous_w2c_28 *) b) -> lastErr = -6LL;
        return;
      }
    }
  }
  _14594 :;
  if((_UINT64)(nbytes_in_lo_w2c_32) != (_UINT64)(0U))
  {
    * (_UINT32 *)(nbytes_in_lo_w2c_32) = ((struct anonymous_w2c_28 *) b) -> strm.total_in_lo32;
  }
  if((_UINT64)(nbytes_in_hi_w2c_32) != (_UINT64)(0U))
  {
    * (_UINT32 *)(nbytes_in_hi_w2c_32) = ((struct anonymous_w2c_28 *) b) -> strm.total_in_hi32;
  }
  if((_UINT64)(nbytes_out_lo_w2c_32) != (_UINT64)(0U))
  {
    * (_UINT32 *)(nbytes_out_lo_w2c_32) = ((struct anonymous_w2c_28 *) b) -> strm.total_out_lo32;
  }
  if((_UINT64)(nbytes_out_hi_w2c_32) != (_UINT64)(0U))
  {
    * (_UINT32 *)(nbytes_out_hi_w2c_32) = ((struct anonymous_w2c_28 *) b) -> strm.total_out_hi32;
  }
  if((_UINT64)(bzerror) != (_UINT64)(0U))
  {
    * (_INT32 *)(bzerror) = 0U;
  }
  ((struct anonymous_w2c_28 *) b) -> lastErr = 0U;
  BZ2_bzCompressEnd((struct anonymous_w2c_15 *)(struct anonymous_w2c_28 *)((_UINT8 *)((struct anonymous_w2c_28 *) b) + 5016U));
  free((struct anonymous_w2c_28 *) b);
  return;
} /* BZ2_bzWriteClose64 */


extern void * BZ2_bzReadOpen(
  _INT32 * bzerror,
  struct _IO_FILE * f,
  _INT32 verbosity,
  _INT32 small,
  void * unused,
  _INT32 nUnused)
{
  
  register _INT32 __comma_preg;
  register _UINT64 __comma_preg_w2c_0;
  register _INT32 nUnused_preg;
  register _INT32 __comma_preg_w2c_1;
  
  if((_UINT64)(bzerror) != (_UINT64)(0U))
  {
    * (_INT32 *)(bzerror) = 0U;
  }
  if((((((_UINT64)(f) == (_UINT64)(0U)) || ((_UINT32) small > 1U)) || ((_UINT32) verbosity > 4U)) || (((_UINT64)(unused) == (_UINT64)(0U)) && (nUnused != (_INT32)(0U)))) || (((_UINT64)(unused) != (_UINT64)(0U)) && ((_UINT32)(nUnused) > 5000U)))
  {
    if((_UINT64)(bzerror) != (_UINT64)(0U))
    {
      * (_INT32 *)(bzerror) = -2LL;
    }
    return(void *) 0U;
  }
  __comma_preg = ferror(f);
  if(__comma_preg != (_INT32)(0U))
  {
    if((_UINT64)(bzerror) != (_UINT64)(0U))
    {
      * (_INT32 *)(bzerror) = -6LL;
    }
    return(void *) 0U;
  }
  __comma_preg_w2c_0 = (_UINT64)(_UINT64) malloc(5104U);
  if((_UINT64)((struct anonymous_w2c_28 *) __comma_preg_w2c_0) == (_UINT64)(0U))
  {
    if((_UINT64)(bzerror) != (_UINT64)(0U))
    {
      * (_INT32 *)(bzerror) = -3LL;
    }
    return(void *) 0U;
  }
  if((_UINT64)(bzerror) != (_UINT64)(0U))
  {
    * (_INT32 *)(bzerror) = 0U;
  }
  ((struct anonymous_w2c_28 *) __comma_preg_w2c_0) -> lastErr = 0U;
  ((struct anonymous_w2c_28 *) __comma_preg_w2c_0) -> initialisedOk = 0U;
  ((struct anonymous_w2c_28 *) __comma_preg_w2c_0) -> handle = f;
  ((struct anonymous_w2c_28 *) __comma_preg_w2c_0) -> bufN = 0U;
  ((struct anonymous_w2c_28 *) __comma_preg_w2c_0) -> writing = 0U;
  ((struct anonymous_w2c_28 *) __comma_preg_w2c_0) -> strm.bzalloc = (void * (*)(void *, _INT32, _INT32))(0ULL);
  ((struct anonymous_w2c_28 *) __comma_preg_w2c_0) -> strm.bzfree = (void(*)(void *, void *))(0ULL);
  ((struct anonymous_w2c_28 *) __comma_preg_w2c_0) -> strm.opaque = (void *)(0ULL);
  for(nUnused_preg = 0U; nUnused_preg <= (nUnused + -1); nUnused_preg = nUnused_preg + (_INT32)(1U))
  {
    * (_INT8 *)(&((struct anonymous_w2c_28 *)((_UINT8 *)((struct anonymous_w2c_28 *) __comma_preg_w2c_0) + 8U))[*(_INT32 *)(&((struct anonymous_w2c_28 *) __comma_preg_w2c_0)[1252LL])]) = (_INT8) * (_UINT8 *)(&(unused)[nUnused_preg]);
    * (_INT32 *)(&((struct anonymous_w2c_28 *) __comma_preg_w2c_0)[1252LL]) = *(_INT32 *)(&((struct anonymous_w2c_28 *) __comma_preg_w2c_0)[1252LL]) + (_INT32)(1U);
  }
  __comma_preg_w2c_1 = BZ2_bzDecompressInit((struct anonymous_w2c_15 *)(struct anonymous_w2c_28 *)((_UINT8 *)((struct anonymous_w2c_28 *) __comma_preg_w2c_0) + 5016U), (_INT32)(_UINT32) verbosity, (_INT32)(_UINT32) small);
  if(__comma_preg_w2c_1 != (_INT32)(0U))
  {
    if((_UINT64)(bzerror) != (_UINT64)(0U))
    {
      * (_INT32 *)(bzerror) = __comma_preg_w2c_1;
    }
    ((struct anonymous_w2c_28 *) __comma_preg_w2c_0) -> lastErr = __comma_preg_w2c_1;
    free((struct anonymous_w2c_28 *) __comma_preg_w2c_0);
    return(void *) 0U;
  }
  ((struct anonymous_w2c_28 *) __comma_preg_w2c_0) -> strm.avail_in = ((struct anonymous_w2c_28 *) __comma_preg_w2c_0) -> bufN;
  ((struct anonymous_w2c_28 *) __comma_preg_w2c_0) -> strm.next_in = (_INT8 *)((struct anonymous_w2c_28 *)((_UINT8 *)((struct anonymous_w2c_28 *) __comma_preg_w2c_0) + 8U));
  ((struct anonymous_w2c_28 *) __comma_preg_w2c_0) -> initialisedOk = 1U;
  return(void *) __comma_preg_w2c_0;
} /* BZ2_bzReadOpen */


extern void BZ2_bzReadClose(
  _INT32 * bzerror,
  void * b)
{
  
  
  if((_UINT64)(bzerror) != (_UINT64)(0U))
  {
    * (_INT32 *)(bzerror) = 0U;
  }
  if((_UINT64)((struct anonymous_w2c_28 *) b) != (_UINT64)(0U))
  {
    ((struct anonymous_w2c_28 *) b) -> lastErr = 0U;
  }
  if((_UINT64)((struct anonymous_w2c_28 *) b) == (_UINT64)(0U))
  {
    if((_UINT64)(bzerror) != (_UINT64)(0U))
    {
      * (_INT32 *)(bzerror) = 0U;
    }
    _7170 :;
    return;
  }
  if((_UINT32)(((struct anonymous_w2c_28 *) b) -> writing) != 0U)
  {
    if((_UINT64)(bzerror) != (_UINT64)(0U))
    {
      * (_INT32 *)(bzerror) = -1LL;
    }
    ((struct anonymous_w2c_28 *) b) -> lastErr = -1LL;
    return;
  }
  if((_UINT32)(((struct anonymous_w2c_28 *) b) -> initialisedOk) != 0U)
  {
    BZ2_bzDecompressEnd((struct anonymous_w2c_15 *)(struct anonymous_w2c_28 *)((_UINT8 *)((struct anonymous_w2c_28 *) b) + 5016U));
  }
  free((struct anonymous_w2c_28 *) b);
  return;
} /* BZ2_bzReadClose */


extern _INT32 BZ2_bzRead(
  _INT32 * bzerror,
  void * b,
  void * buf,
  _INT32 len)
{
  
  register _INT32 __comma_preg;
  register _UINT32 __comma_preg_w2c_2;
  register _UINT64 __comma_preg_w2c_0;
  register _INT32 __comma_preg_w2c_1;
  register _INT32 __comma_preg_w2c_3;
  register _UINT32 __comma_preg_w2c_4;
  
  if((_UINT64)(bzerror) != (_UINT64)(0U))
  {
    * (_INT32 *)(bzerror) = 0U;
  }
  if((_UINT64)((struct anonymous_w2c_28 *) b) != (_UINT64)(0U))
  {
    ((struct anonymous_w2c_28 *) b) -> lastErr = 0U;
  }
  if((((_UINT64)((struct anonymous_w2c_28 *) b) == (_UINT64)(0U)) || ((_UINT64)(buf) == (_UINT64)(0U))) || (len < (_INT32)(0U)))
  {
    if((_UINT64)(bzerror) != (_UINT64)(0U))
    {
      * (_INT32 *)(bzerror) = -2LL;
    }
    if((_UINT64)((struct anonymous_w2c_28 *) b) != (_UINT64)(0U))
    {
      ((struct anonymous_w2c_28 *) b) -> lastErr = -2LL;
    }
    return 0U;
  }
  if((_UINT32)(((struct anonymous_w2c_28 *) b) -> writing) != 0U)
  {
    if((_UINT64)(bzerror) != (_UINT64)(0U))
    {
      * (_INT32 *)(bzerror) = -1LL;
    }
    if((_UINT64)((struct anonymous_w2c_28 *) b) != (_UINT64)(0U))
    {
      ((struct anonymous_w2c_28 *) b) -> lastErr = -1LL;
    }
    return 0U;
  }
  if(len == (_INT32)(0U))
  {
    if((_UINT64)(bzerror) != (_UINT64)(0U))
    {
      * (_INT32 *)(bzerror) = 0U;
    }
    if((_UINT64)((struct anonymous_w2c_28 *) b) != (_UINT64)(0U))
    {
      ((struct anonymous_w2c_28 *) b) -> lastErr = 0U;
    }
    return 0U;
  }
  ((struct anonymous_w2c_28 *) b) -> strm.avail_out = len;
  ((struct anonymous_w2c_28 *) b) -> strm.next_out = buf;
  _20994 :;
  _258 :;
  __comma_preg = ferror(((struct anonymous_w2c_28 *) b) -> handle);
  if(__comma_preg != (_INT32)(0U))
  {
    if((_UINT64)(bzerror) != (_UINT64)(0U))
    {
      * (_INT32 *)(bzerror) = -6LL;
    }
    if((_UINT64)((struct anonymous_w2c_28 *) b) != (_UINT64)(0U))
    {
      ((struct anonymous_w2c_28 *) b) -> lastErr = -6LL;
    }
    return 0U;
  }
  if(((struct anonymous_w2c_28 *) b) -> strm.avail_in == 0U)
  {
    __comma_preg_w2c_2 = myfeof(((struct anonymous_w2c_28 *) b) -> handle);
    if((_UINT32)((_UINT8)(__comma_preg_w2c_2)) == 0U)
    {
      __comma_preg_w2c_0 = fread((struct anonymous_w2c_28 *)((_UINT8 *)((struct anonymous_w2c_28 *) b) + 8U), 1U, 5000U, ((struct anonymous_w2c_28 *) b) -> handle);
      __comma_preg_w2c_1 = ferror(((struct anonymous_w2c_28 *) b) -> handle);
      if(__comma_preg_w2c_1 != (_INT32)(0U))
      {
        if((_UINT64)(bzerror) != (_UINT64)(0U))
        {
          * (_INT32 *)(bzerror) = -6LL;
        }
        if((_UINT64)((struct anonymous_w2c_28 *) b) != (_UINT64)(0U))
        {
          ((struct anonymous_w2c_28 *) b) -> lastErr = -6LL;
        }
        return 0U;
      }
      ((struct anonymous_w2c_28 *) b) -> bufN = __comma_preg_w2c_0;
      ((struct anonymous_w2c_28 *) b) -> strm.avail_in = __comma_preg_w2c_0;
      ((struct anonymous_w2c_28 *) b) -> strm.next_in = (_INT8 *)((struct anonymous_w2c_28 *)((_UINT8 *)((struct anonymous_w2c_28 *) b) + 8U));
    }
  }
  _9986 :;
  __comma_preg_w2c_3 = BZ2_bzDecompress((struct anonymous_w2c_15 *)(struct anonymous_w2c_28 *)((_UINT8 *)((struct anonymous_w2c_28 *) b) + 5016U));
  if((__comma_preg_w2c_3 != (_INT32)(0U)) && (__comma_preg_w2c_3 != (_INT32)(4U)))
  {
    if((_UINT64)(bzerror) != (_UINT64)(0U))
    {
      * (_INT32 *)(bzerror) = __comma_preg_w2c_3;
    }
    if((_UINT64)((struct anonymous_w2c_28 *) b) != (_UINT64)(0U))
    {
      ((struct anonymous_w2c_28 *) b) -> lastErr = __comma_preg_w2c_3;
    }
    return 0U;
  }
  if(__comma_preg_w2c_3 == (_INT32)(0U))
  {
    __comma_preg_w2c_4 = myfeof(((struct anonymous_w2c_28 *) b) -> handle);
    if((_UINT32)((_UINT8)(__comma_preg_w2c_4)) != 0U)
    {
      if(((struct anonymous_w2c_28 *) b) -> strm.avail_in == 0U)
      {
        if(((struct anonymous_w2c_28 *) b) -> strm.avail_out != 0U)
        {
          if((_UINT64)(bzerror) != (_UINT64)(0U))
          {
            * (_INT32 *)(bzerror) = -7LL;
          }
          if((_UINT64)((struct anonymous_w2c_28 *) b) != (_UINT64)(0U))
          {
            ((struct anonymous_w2c_28 *) b) -> lastErr = -7LL;
          }
          return 0U;
        }
      }
    }
  }
  _13570 :;
  if(__comma_preg_w2c_3 == (_INT32)(4U))
  {
    if((_UINT64)(bzerror) != (_UINT64)(0U))
    {
      * (_INT32 *)(bzerror) = 4U;
    }
    if((_UINT64)((struct anonymous_w2c_28 *) b) != (_UINT64)(0U))
    {
      ((struct anonymous_w2c_28 *) b) -> lastErr = 4U;
    }
    return(_UINT32)(len) - ((struct anonymous_w2c_28 *) b) -> strm.avail_out;
  }
  if(((struct anonymous_w2c_28 *) b) -> strm.avail_out == 0U)
  {
    if((_UINT64)(bzerror) != (_UINT64)(0U))
    {
      * (_INT32 *)(bzerror) = 0U;
    }
    if((_UINT64)((struct anonymous_w2c_28 *) b) != (_UINT64)(0U))
    {
      ((struct anonymous_w2c_28 *) b) -> lastErr = 0U;
    }
    return len;
  }
  goto _20994;
} /* BZ2_bzRead */


extern void BZ2_bzReadGetUnused(
  _INT32 * bzerror,
  void * b,
  void ** unused,
  _INT32 * nUnused)
{
  
  
  if((_UINT64)((struct anonymous_w2c_28 *) b) == (_UINT64)(0U))
  {
    if((_UINT64)(bzerror) != (_UINT64)(0U))
    {
      * (_INT32 *)(bzerror) = -2LL;
    }
    _8962 :;
    return;
  }
  if(((struct anonymous_w2c_28 *) b) -> lastErr != (_INT32)(4U))
  {
    if((_UINT64)(bzerror) != (_UINT64)(0U))
    {
      * (_INT32 *)(bzerror) = -1LL;
    }
    ((struct anonymous_w2c_28 *) b) -> lastErr = -1LL;
    return;
  }
  if(((_UINT64)(unused) == (_UINT64)(0U)) || ((_UINT64)(nUnused) == (_UINT64)(0U)))
  {
    if((_UINT64)(bzerror) != (_UINT64)(0U))
    {
      * (_INT32 *)(bzerror) = -2LL;
    }
    ((struct anonymous_w2c_28 *) b) -> lastErr = -2LL;
    return;
  }
  if((_UINT64)(bzerror) != (_UINT64)(0U))
  {
    * (_INT32 *)(bzerror) = 0U;
  }
  ((struct anonymous_w2c_28 *) b) -> lastErr = 0U;
  * (_INT32 *)(nUnused) = ((struct anonymous_w2c_28 *) b) -> strm.avail_in;
  * (void **)(unused) = ((struct anonymous_w2c_28 *) b) -> strm.next_in;
  return;
} /* BZ2_bzReadGetUnused */


extern _INT32 BZ2_bzBuffToBuffCompress(
  _INT8 * dest,
  _UINT32 * destLen,
  _INT8 * source,
  _UINT32 sourceLen,
  _INT32 blockSize100k,
  _INT32 verbosity,
  _INT32 workFactor)
{
  
  register _INT32 __comma_preg;
  register _INT32 __comma_preg_w2c_0;
  struct anonymous_w2c_15 strm;
  
  if((((((((((_UINT64)(dest) == (_UINT64)(0U)) || ((_UINT64)(destLen) == (_UINT64)(0U))) || ((_UINT64)(source) == (_UINT64)(0U))) || (blockSize100k <= (_INT32)(0U))) || (blockSize100k > (_INT32)(9U))) || (verbosity < (_INT32)(0U))) || (verbosity > (_INT32)(4U))) || (workFactor < (_INT32)(0U))) || (workFactor > (_INT32)(250U)))
  {
    return -2LL;
  }
  if(workFactor == (_INT32)(0U))
  {
    workFactor = 30U;
  }
  strm.bzalloc = (void * (*)(void *, _INT32, _INT32))(0U);
  strm.bzfree = (void(*)(void *, void *))(0U);
  strm.opaque = (void *)(0U);
  __comma_preg = BZ2_bzCompressInit(&strm, blockSize100k, verbosity, workFactor);
  if(__comma_preg != (_INT32)(0U))
  {
    return __comma_preg;
  }
  strm.next_in = source;
  strm.next_out = dest;
  strm.avail_in = sourceLen;
  strm.avail_out = *(_UINT32 *)(destLen);
  __comma_preg_w2c_0 = BZ2_bzCompress(&strm, (_INT32) 2U);
  if(__comma_preg_w2c_0 == (_INT32)(3U))
    goto _258;
  if(!(__comma_preg_w2c_0 == (_INT32)(4U)))
    goto _4866;
  * (_UINT32 *)(destLen) = *(_UINT32 *)(destLen) - (strm).avail_out;
  BZ2_bzCompressEnd(&strm);
  return 0U;
  _258 :;
  BZ2_bzCompressEnd(&strm);
  return -8LL;
  _4866 :;
  _514 :;
  BZ2_bzCompressEnd(&strm);
  return __comma_preg_w2c_0;
} /* BZ2_bzBuffToBuffCompress */


extern _INT32 BZ2_bzBuffToBuffDecompress(
  _INT8 * dest,
  _UINT32 * destLen,
  _INT8 * source,
  _UINT32 sourceLen,
  _INT32 small,
  _INT32 verbosity)
{
  
  register _INT32 __comma_preg;
  register _INT32 __comma_preg_w2c_0;
  struct anonymous_w2c_15 strm;
  
  if(((((((_UINT64)(dest) == (_UINT64)(0U)) || ((_UINT64)(destLen) == (_UINT64)(0U))) || ((_UINT64)(source) == (_UINT64)(0U))) || ((_UINT32) small > 1U)) || (verbosity < (_INT32)(0U))) || (verbosity > (_INT32)(4U)))
  {
    return -2LL;
  }
  strm.bzalloc = (void * (*)(void *, _INT32, _INT32))(0U);
  strm.bzfree = (void(*)(void *, void *))(0U);
  strm.opaque = (void *)(0U);
  __comma_preg = BZ2_bzDecompressInit(&strm, verbosity, (_INT32)(_UINT32) small);
  if(__comma_preg != (_INT32)(0U))
  {
    return __comma_preg;
  }
  strm.next_in = source;
  strm.next_out = dest;
  strm.avail_in = sourceLen;
  strm.avail_out = *(_UINT32 *)(destLen);
  __comma_preg_w2c_0 = BZ2_bzDecompress(&strm);
  if(__comma_preg_w2c_0 == (_INT32)(0U))
    goto _258;
  if(!(__comma_preg_w2c_0 == (_INT32)(4U)))
    goto _4098;
  * (_UINT32 *)(destLen) = *(_UINT32 *)(destLen) - (strm).avail_out;
  BZ2_bzDecompressEnd(&strm);
  return 0U;
  _258 :;
  if(!((strm).avail_out != 0U))
    goto _4866;
  _5122 :;
  BZ2_bzDecompressEnd(&strm);
  return -7LL;
  _4866 :;
  BZ2_bzDecompressEnd(&strm);
  return -8LL;
  _4098 :;
  _514 :;
  BZ2_bzDecompressEnd(&strm);
  return __comma_preg_w2c_0;
} /* BZ2_bzBuffToBuffDecompress */


extern const _INT8 * BZ2_bzlibVersion()
{
  
  
  return "1.0.3, 15-Feb-2005";
} /* BZ2_bzlibVersion */


static void * bzopen_or_bzdopen(
  const _INT8 * path,
  _INT32 fd,
  const _INT8 * mode,
  _INT32 open_mode)
{
  
  _UINT32 _tmp0;
  _UINT32 * _tmp_w2c_1;
  register _UINT64 __comma_preg;
  register _UINT64 __cselect_preg;
  register _UINT64 __cselect_preg_w2c_0;
  register _UINT64 __comma_preg_w2c_0;
  register _UINT64 __comma_preg_w2c_1;
  register _UINT64 __comma_preg_w2c_2;
  register _UINT64 __comma_preg_w2c_3;
  _INT32 bzerr;
  _INT8 unused[5000LL];
  _INT32 blockSize100k;
  _INT32 writing;
  _INT8 mode_w2c_2[10LL];
  struct _IO_FILE * fp;
  void * bzfp;
  _INT32 smallMode;
  _INT32 _temp__switch_index_w2c_2;
  _INT32 __result;
  
  blockSize100k = 9U;
  writing = 0U;
  __MSTORE("", 0LL, mode_w2c_2, 0LL, 1U);
  _tmp_w2c_1 = (_UINT32 *) mode_w2c_2 + 0LL;
  for(_tmp0 = 0LL; _tmp0 < (9U / 4LL); _tmp0++)
    _tmp_w2c_1[_tmp0] = 0U;
  smallMode = 0U;
  if((_UINT64)(mode) == (_UINT64)(0U))
  {
    return(void *) 0U;
  }
  while((_INT32)(*mode) != (_INT32)(0U))
  {
    _514 :;
    _temp__switch_index_w2c_2 = *mode;
    if(_temp__switch_index_w2c_2 == (_INT32)(114U))
      goto _770;
    if(_temp__switch_index_w2c_2 == (_INT32)(119U))
      goto _1282;
    if(!(_temp__switch_index_w2c_2 != (_INT32)(115U)))
      goto _13058;
    goto _1794;
    _770 :;
    writing = 0U;
    goto _1026;
    _1282 :;
    writing = 1U;
    goto _1026;
    _13058 :;
    _1538 :;
    smallMode = 1U;
    goto _1026;
    _1794 :;
    __comma_preg = (_UINT64)(_UINT64) __ctype_b_loc();
    if(((_INT32) * (*(const _UINT16 **) __comma_preg + (_UINT64) * mode) & (_INT32)(2048U)) != (_INT32)(0U))
    {
      blockSize100k = (_INT32)((_UINT64) * mode) + -48;
    }
    _2050 :;
    _1026 :;
    mode = mode + 1U;
  }
  _2306 :;
  if(writing != (_INT32)(0U))
  {
    __cselect_preg = (_UINT64)("w");
  }
  else
  {
    __cselect_preg = (_UINT64)("r");
  }
  strcat(mode_w2c_2, (const _INT8 *) __cselect_preg);
  strcat(mode_w2c_2, "b");
  if(open_mode == (_INT32)(0U))
  {
    if((_UINT64)(path) == (_UINT64)(0U))
      goto _5122;
    __result = (_INT32) * (_UINT8 *)(path);
    _17922 :;
    anon2 = __result;
    anon1 = __result;
    if(!(__result == (_INT32)(0U)))
      goto _12802;
    _5122 :;
    if(writing != (_INT32)(0U))
    {
      __cselect_preg_w2c_0 = (_UINT64)(stdout);
    }
    else
    {
      __cselect_preg_w2c_0 = (_UINT64)(stdin);
    }
    fp = (struct _IO_FILE *)(__cselect_preg_w2c_0);
    goto _8706;
    _12802 :;
    _5378 :;
    __comma_preg_w2c_0 = (_UINT64)(_UINT64) fopen(path, mode_w2c_2);
    fp = (struct _IO_FILE *) __comma_preg_w2c_0;
    _8706 :;
  }
  else
  {
    __comma_preg_w2c_1 = (_UINT64)(_UINT64) fdopen(fd, mode_w2c_2);
    fp = (struct _IO_FILE *) __comma_preg_w2c_1;
  }
  if((_UINT64)(fp) == (_UINT64)(0U))
  {
    return(void *) 0U;
  }
  if(writing != (_INT32)(0U))
  {
    if(blockSize100k <= (_INT32)(0U))
    {
      blockSize100k = 1U;
    }
    if(blockSize100k > (_INT32)(9U))
    {
      blockSize100k = 9U;
    }
    __comma_preg_w2c_2 = (_UINT64)(_UINT64) BZ2_bzWriteOpen(&bzerr, fp, blockSize100k, (_INT32) 0U, (_INT32) 30U);
    bzfp = (void *) __comma_preg_w2c_2;
  }
  else
  {
    __comma_preg_w2c_3 = (_UINT64)(_UINT64) BZ2_bzReadOpen(&bzerr, fp, (_INT32) 0U, smallMode, unused, (_INT32) 0U);
    bzfp = (void *) __comma_preg_w2c_3;
  }
  if((_UINT64)(bzfp) == (_UINT64)(0U))
  {
    if(((_UINT64)(stdin) != (_UINT64)(fp)) && ((_UINT64)(stdout) != (_UINT64)(fp)))
    {
      fclose(fp);
    }
    return(void *) 0U;
  }
  return bzfp;
} /* bzopen_or_bzdopen */


extern void * BZ2_bzopen(
  const _INT8 * path,
  const _INT8 * mode)
{
  
  register _UINT64 __comma_preg;
  
  __comma_preg = (_UINT64)(_UINT64) bzopen_or_bzdopen(path, -1, mode, (_INT32) 0U);
  return(void *) __comma_preg;
} /* BZ2_bzopen */


extern void * BZ2_bzdopen(
  _INT32 fd,
  const _INT8 * mode)
{
  
  register _UINT64 __comma_preg;
  
  __comma_preg = (_UINT64)(_UINT64) bzopen_or_bzdopen((const _INT8 *) 0U, fd, mode, (_INT32) 1U);
  return(void *) __comma_preg;
} /* BZ2_bzdopen */


extern _INT32 BZ2_bzread(
  void * b,
  void * buf,
  _INT32 len)
{
  
  register _INT32 __comma_preg;
  _INT32 bzerr;
  
  if(((struct anonymous_w2c_28 *) b) -> lastErr == (_INT32)(4U))
  {
    return 0U;
  }
  __comma_preg = BZ2_bzRead(&bzerr, (struct anonymous_w2c_28 *) b, buf, len);
  if(!((bzerr == (_INT32)(0U)) || (bzerr == (_INT32)(4U))))
    goto _1794;
  _2050 :;
  return __comma_preg;
  _1794 :;
  return -1LL;
} /* BZ2_bzread */


extern _INT32 BZ2_bzwrite(
  void * b,
  void * buf,
  _INT32 len)
{
  
  _INT32 bzerr;
  
  BZ2_bzWrite(&bzerr, b, buf, len);
  if(!(bzerr == (_INT32)(0U)))
    goto _770;
  _1026 :;
  return len;
  _770 :;
  return -1LL;
} /* BZ2_bzwrite */


extern _INT32 BZ2_bzflush(
  void * b)
{
  
  
  return 0U;
} /* BZ2_bzflush */


extern void BZ2_bzclose(
  void * b)
{
  
  _INT32 bzerr;
  struct _IO_FILE * fp;
  
  fp = ((struct anonymous_w2c_28 *) b) -> handle;
  if((_UINT64)((struct anonymous_w2c_28 *) b) == (_UINT64)(0U))
  {
    return;
  }
  if((_UINT32)(((struct anonymous_w2c_28 *) b) -> writing) != 0U)
  {
    BZ2_bzWriteClose(&bzerr, (struct anonymous_w2c_28 *) b, (_INT32) 0U, (_UINT32 *) 0U, (_UINT32 *) 0U);
    if(bzerr != (_INT32)(0U))
    {
      BZ2_bzWriteClose((_INT32 *) 0U, (struct anonymous_w2c_28 *) b, (_INT32) 1U, (_UINT32 *) 0U, (_UINT32 *) 0U);
    }
  }
  else
  {
    BZ2_bzReadClose(&bzerr, (struct anonymous_w2c_28 *) b);
  }
  if(((_UINT64)(stdin) != (_UINT64)(fp)) && ((_UINT64)(stdout) != (_UINT64)(fp)))
  {
    fclose(fp);
  }
  return;
} /* BZ2_bzclose */


extern const _INT8 * BZ2_bzerror(
  void * b,
  _INT32 * errnum)
{
  
  _INT32 err;
  
  err = ((struct anonymous_w2c_28 *) b) -> lastErr;
  if(err > (_INT32)(0U))
  {
    err = 0U;
  }
  * errnum = err;
  return(bzerrorstrings)[-err];
} /* BZ2_bzerror */

