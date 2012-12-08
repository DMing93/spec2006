/*******************************************************
 * C file translated from WHIRL Sat Dec  8 10:39:05 2012
 *******************************************************/

/* Include file-level type and variable decls */
#include "randtable.w2c.h"


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

