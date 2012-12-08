/*******************************************************
 * C file translated from WHIRL Sat Dec  8 10:39:05 2012
 *******************************************************/

/* Include file-level type and variable decls */
#include "compress.w2c.h"


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


extern void BZ2_bsInitWrite(
  struct anonymous_w2c_3 * s)
{
  
  
  (s) -> bsLive = 0U;
  (s) -> bsBuff = 0U;
  return;
} /* BZ2_bsInitWrite */


static void bsFinishWrite(
  struct anonymous_w2c_3 * s)
{
  
  
  while((s) -> bsLive > (_INT32)(0U))
  {
    _514 :;
    * ((s) -> numZ + (s) -> zbits) = _U4LSHR((s) -> bsBuff, 24U);
    (s) -> numZ = (s) -> numZ + (_INT32)(1U);
    (s) -> bsBuff = _U4SHL((s) -> bsBuff, 8U);
    (s) -> bsLive = (s) -> bsLive + -8;
  }
  _770 :;
  return;
} /* bsFinishWrite */


static void bsW(
  struct anonymous_w2c_3 * s,
  _INT32 n,
  _UINT32 v)
{
  
  
  while((s) -> bsLive > (_INT32)(7U))
  {
    _514 :;
    * ((s) -> numZ + (s) -> zbits) = _U4LSHR((s) -> bsBuff, 24U);
    (s) -> numZ = (s) -> numZ + (_INT32)(1U);
    (s) -> bsBuff = _U4SHL((s) -> bsBuff, 8U);
    (s) -> bsLive = (s) -> bsLive + -8;
  }
  _770 :;
  (s) -> bsBuff = (s) -> bsBuff | _U4SHL(v, (_UINT32)((_INT32)(32U) - ((s) -> bsLive + n)));
  (s) -> bsLive = (s) -> bsLive + n;
  return;
} /* bsW */


static void bsPutUInt32(
  struct anonymous_w2c_3 * s,
  _UINT32 u)
{
  
  
  while((s) -> bsLive > (_INT32)(7U))
  {
    _2818 :;
    * ((s) -> numZ + (s) -> zbits) = _U4LSHR((s) -> bsBuff, 24U);
    (s) -> numZ = (s) -> numZ + (_INT32)(1U);
    (s) -> bsBuff = _U4SHL((s) -> bsBuff, 8U);
    (s) -> bsLive = (s) -> bsLive + -8;
  }
  _3074 :;
  (s) -> bsBuff = (s) -> bsBuff | _U4SHL(_U4LSHR(u, 24U), (_UINT32)((_INT32)(24U) - (s) -> bsLive));
  (s) -> bsLive = (s) -> bsLive + (_INT32)(8U);
  while((s) -> bsLive > (_INT32)(7U))
  {
    _2050 :;
    * ((s) -> numZ + (s) -> zbits) = _U4LSHR((s) -> bsBuff, 24U);
    (s) -> numZ = (s) -> numZ + (_INT32)(1U);
    (s) -> bsBuff = _U4SHL((s) -> bsBuff, 8U);
    (s) -> bsLive = (s) -> bsLive + -8;
  }
  _2306 :;
  (s) -> bsBuff = (s) -> bsBuff | _U4SHL(_U4EXTRACT_BITS(u), (_UINT32)((_INT32)(24U) - (s) -> bsLive));
  (s) -> bsLive = (s) -> bsLive + (_INT32)(8U);
  while((s) -> bsLive > (_INT32)(7U))
  {
    _1282 :;
    * ((s) -> numZ + (s) -> zbits) = _U4LSHR((s) -> bsBuff, 24U);
    (s) -> numZ = (s) -> numZ + (_INT32)(1U);
    (s) -> bsBuff = _U4SHL((s) -> bsBuff, 8U);
    (s) -> bsLive = (s) -> bsLive + -8;
  }
  _1538 :;
  (s) -> bsBuff = (s) -> bsBuff | _U4SHL(_U4EXTRACT_BITS(u), (_UINT32)((_INT32)(24U) - (s) -> bsLive));
  (s) -> bsLive = (s) -> bsLive + (_INT32)(8U);
  while((s) -> bsLive > (_INT32)(7U))
  {
    _514 :;
    * ((s) -> numZ + (s) -> zbits) = _U4LSHR((s) -> bsBuff, 24U);
    (s) -> numZ = (s) -> numZ + (_INT32)(1U);
    (s) -> bsBuff = _U4SHL((s) -> bsBuff, 8U);
    (s) -> bsLive = (s) -> bsLive + -8;
  }
  _770 :;
  (s) -> bsBuff = (s) -> bsBuff | _U4SHL(u & 255U, (_UINT32)((_INT32)(24U) - (s) -> bsLive));
  (s) -> bsLive = (s) -> bsLive + (_INT32)(8U);
  return;
} /* bsPutUInt32 */


static void bsPutUChar(
  struct anonymous_w2c_3 * s,
  _UINT8 c)
{
  
  
  while((s) -> bsLive > (_INT32)(7U))
  {
    _514 :;
    * ((s) -> numZ + (s) -> zbits) = _U4LSHR((s) -> bsBuff, 24U);
    (s) -> numZ = (s) -> numZ + (_INT32)(1U);
    (s) -> bsBuff = _U4SHL((s) -> bsBuff, 8U);
    (s) -> bsLive = (s) -> bsLive + -8;
  }
  _770 :;
  (s) -> bsBuff = (s) -> bsBuff | _U4SHL((_UINT32) c, (_UINT32)((_INT32)(24U) - (s) -> bsLive));
  (s) -> bsLive = (s) -> bsLive + (_INT32)(8U);
  return;
} /* bsPutUChar */


static void makeMaps_e(
  struct anonymous_w2c_3 * s)
{
  
  register _INT32 i_preg;
  
  (s) -> nInUse = 0U;
  for(i_preg = 0U; i_preg <= (_INT32)(255U); i_preg = i_preg + (_INT32)(1U))
  {
    if((_UINT32)(*(_UINT8 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 128U))[(_INT64)(i_preg)])) != 0U)
    {
      * (_UINT8 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 384U))[(_INT64)(i_preg)]) = *(_INT32 *)(&(s)[31LL]);
      * (_INT32 *)(&(s)[31LL]) = *(_INT32 *)(&(s)[31LL]) + (_INT32)(1U);
    }
  }
  return;
} /* makeMaps_e */


static void generateMTFValues(
  struct anonymous_w2c_3 * s)
{
  
      register _INT32 i_preg;
  register _INT32 _ub0_preg;
  register _INT32 i_preg_w2c_0;
  register _INT32 whiledo_var_preg;
  _UINT8 yy[256LL];
  _INT32 j;
  _INT32 zPend;
  _INT32 wr;
  _INT32 EOB;
  _UINT32 * ptr;
  _UINT8 * block;
  _UINT16 * mtfv;
  _UINT8 ll_i;
  _UINT8 rtmp;
  _UINT8 * ryy_j;
  _UINT8 rtmp_w2c_2;
  _INT32 _temp__ubtmp0;
  
  ptr = (s) -> ptr;
  block = (s) -> block;
  mtfv = (s) -> mtfv;
  makeMaps_e(s);
  EOB = (s) -> nInUse + (_INT32)(1U);
  /* PARALLEL DO will be converted to SUBROUTINE __mpdo_generateMTFValues1 */
#pragma omp parallel for private(i_preg) shared(s, EOB)
    for(i_preg = 0U; EOB >= i_preg; i_preg = i_preg + (_INT32)(1U))
    {
      * (_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 672U))[(_INT64)(i_preg)]) = 0U;
    }
    wr = 0U;
    zPend = 0U;
    _ub0_preg = *(_INT32 *)(&(s)[31LL]) + -1;
    _temp__ubtmp0 = _ub0_preg;
    /* PARALLEL DO will be converted to SUBROUTINE __mpdo_generateMTFValues2 */
#pragma omp parallel for private(i_preg_w2c_0) shared(_temp__ubtmp0, yy)
      for(i_preg_w2c_0 = 0U; _temp__ubtmp0 >= i_preg_w2c_0; i_preg_w2c_0 = i_preg_w2c_0 + (_INT32)(1U))
      {
        (yy)[(_INT64)(i_preg_w2c_0)] = i_preg_w2c_0;
      }
      whiledo_var_preg = 0U;
      while((s) -> nblock > whiledo_var_preg)
      {
        j = (_INT32)(*(ptr + (_INT64)(whiledo_var_preg))) + -1;
        if(j < (_INT32)(0U))
        {
          j = (s) -> nblock + j;
        }
        ll_i = *(_UINT8 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 384U))[(_INT32) * ((_UINT64) j + block)]);
        if((_UINT32)((yy)[0U]) == (_UINT32)(ll_i))
        {
          zPend = zPend + (_INT32)(1U);
        }
        else
        {
          if(zPend > (_INT32)(0U))
          {
            zPend = zPend + -1;
            _13314 :;
            if(zPend & (_INT32)(1U))
            {
              * (mtfv + wr) = 1U;
              wr = wr + (_INT32)(1U);
              * (_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 672U))[1U]) = *(_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 672U))[1U]) + (_INT32)(1U);
            }
            else
            {
              * (mtfv + wr) = 0U;
              wr = wr + (_INT32)(1U);
              * (_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 672U))[0U]) = *(_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 672U))[0U]) + (_INT32)(1U);
            }
            if(zPend <= (_INT32)(1U))
              goto _2562;
            zPend = (zPend + -2) / (_INT32)(2U);
            goto _13314;
            _2562 :;
            zPend = 0U;
          }
          rtmp = (yy)[1U];
          (yy)[1U] = (yy)[0U];
          ryy_j = (_UINT8 *)(&yy[1]);
          while((_UINT32)(ll_i) != (_UINT32)(rtmp))
          {
            ryy_j = ryy_j + 1U;
            rtmp_w2c_2 = rtmp;
            rtmp = *ryy_j;
            * ryy_j = rtmp_w2c_2;
          }
          (yy)[0U] = rtmp;
          * (mtfv + wr) = ((_UINT32)((intptr_t)(ryy_j)) - (_UINT32)((intptr_t)(yy))) + 1U;
          wr = wr + (_INT32)(1U);
          * (_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 672U))[(_INT32)((_UINT32)((intptr_t)(ryy_j)) - (_UINT32)((intptr_t)(yy))) + (_INT32)(1U)]) = *(_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 672U))[(_INT32)((_UINT32)((intptr_t)(ryy_j)) - (_UINT32)((intptr_t)(yy))) + (_INT32)(1U)]) + (_INT32)(1U);
        }
        whiledo_var_preg = whiledo_var_preg + (_INT32)(1U);
      }
      if(zPend > (_INT32)(0U))
      {
        zPend = zPend + -1;
        _14594 :;
        if(zPend & (_INT32)(1U))
        {
          * (mtfv + wr) = 1U;
          wr = wr + (_INT32)(1U);
          * (_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 672U))[1U]) = *(_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 672U))[1U]) + (_INT32)(1U);
        }
        else
        {
          * (mtfv + wr) = 0U;
          wr = wr + (_INT32)(1U);
          * (_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 672U))[0U]) = *(_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 672U))[0U]) + (_INT32)(1U);
        }
        if(zPend <= (_INT32)(1U))
          goto _4098;
        zPend = (zPend + -2) / (_INT32)(2U);
        goto _14594;
        _4098 :;
      }
      * (mtfv + wr) = EOB;
      * (_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 672U))[EOB]) = *(_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 672U))[EOB]) + (_INT32)(1U);
      (s) -> nMTF = wr + (_INT32)(1U);
      return;
    } /* generateMTFValues */

    
    static void sendMTFValues(
      struct anonymous_w2c_3 * s)
    {
      
                      register _INT32 v_preg;
      register _INT32 t_preg_w2c_0;
      register _INT32 nPart_preg;
      register _INT32 whiledo_var_preg;
      register _INT32 v_preg_w2c_0;
      register _INT32 iter_preg;
      register _INT32 t_preg_w2c_1;
      register _INT32 v_preg_w2c_1;
      register _INT32 t_preg_w2c_2;
      register _INT32 v_preg_w2c_2;
      register _INT32 t_preg_w2c_3;
      register _UINT64 se1__$stk_preg;
      register _INT32 i_preg_w2c_4;
      register _INT32 t_preg_w2c_4;
      register _INT32 t_preg_w2c_5;
      register _INT32 i_preg_w2c_5;
      register _INT32 t_preg_w2c_6;
      register _INT32 t_preg_w2c_7;
      register _INT32 i_preg_w2c_6;
      register _INT32 i_preg_w2c_7;
      register _INT32 whiledo_var_preg_w2c_0;
      register _INT32 t_preg_w2c_8;
      register _INT32 i_preg_w2c_8;
      register _INT32 i_preg_w2c_9;
      register _INT32 j_preg_w2c_1;
      register _INT32 i_preg;
      register _INT32 i_preg_w2c_0;
      register _INT32 j_preg;
      register _INT32 i_preg_w2c_1;
      register _INT32 j_preg_w2c_0;
      register _INT32 t_preg;
      register _INT32 i_preg_w2c_2;
      register _INT32 curr_preg;
      register _INT32 curr_preg_w2c_0;
      register _INT32 i_preg_w2c_3;
      _INT32 gs;
      _INT32 ge;
      _INT32 totc;
      _INT32 bt;
      _INT32 bc;
      _INT32 nSelectors;
      _INT32 alphaSize;
      _INT32 minLen;
      _INT32 maxLen;
      _INT32 selCtr;
      _INT32 nGroups;
      _INT32 nBytes;
      _UINT16 cost[6LL];
      _INT32 fave[6LL];
      _UINT16 * mtfv;
      _INT32 remF;
      _INT32 tFreq;
      _INT32 aFreq;
      _UINT32 cost0_w2c_1;
      _UINT32 cost_w2c_23;
      _UINT32 cost_w2c_45;
      _UINT16 icv;
      _UINT8 pos[6LL];
      _UINT8 ll_i;
      _UINT8 tmp_w2c_2;
      _UINT8 tmp;
      _UINT8 inUse_w2c_16[16LL];
      _INT32 curr;
      _UINT16 mtfv_i;
      _UINT8 * s_len_sel_selCtr;
      _INT32 * s_code_sel_selCtr;
      _INT32 n_w2c_0;
      _UINT32 v_w2c_1;
      _INT32 n_w2c_1;
      _UINT32 v_w2c_2;
      _INT32 n_w2c_2;
      _UINT32 v_w2c_3;
      _UINT16 * se1_U_w2c_2;
      _INT32 _temp__ubtmp_w2c_3;
      
      mtfv = (s) -> mtfv;
      if((s) -> verbosity > (_INT32)(2U))
      {
        fprintf(stderr, "      %d in block, %d after MTF & 1-2 coding, %d+2 syms in use\n", (s) -> nblock, (s) -> nMTF, (s) -> nInUse);
      }
      alphaSize = (s) -> nInUse + (_INT32)(2U);
      /* PARALLEL DO will be converted to SUBROUTINE __mpdo_sendMTFValues1 */
#pragma omp parallel for private(v_preg, t_preg_w2c_0) shared(s, alphaSize)
        for(v_preg = 0U; v_preg <= (alphaSize + -1); v_preg = v_preg + (_INT32)(1U))
        {
          for(t_preg_w2c_0 = 0U; t_preg_w2c_0 <= (_INT32)(5U); t_preg_w2c_0 = t_preg_w2c_0 + (_INT32)(1U))
          {
            * (_UINT8 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 37708U))[(_INT64)(t_preg_w2c_0)][(_INT64)(v_preg)]) = 15U;
          }
        }
        if((s) -> nMTF <= (_INT32)(0U))
        {
          BZ2_bz__AssertH__fail((_INT32) 3001U);
        }
        if((s) -> nMTF <= (_INT32)(199U))
        {
          nGroups = 2U;
        }
        else
        {
          if((s) -> nMTF <= (_INT32)(599U))
          {
            nGroups = 3U;
          }
          else
          {
            if((s) -> nMTF <= (_INT32)(1199U))
            {
              nGroups = 4U;
            }
            else
            {
              if((s) -> nMTF <= (_INT32)(2399U))
              {
                nGroups = 5U;
              }
              else
              {
                nGroups = 6U;
              }
            }
          }
        }
        remF = (s) -> nMTF;
        gs = 0U;
        for(nPart_preg = 0U; nPart_preg <= ((_INT32)((_UINT32) nGroups) + -1); nPart_preg = nPart_preg + (_INT32)(1U))
        {
          tFreq = remF / ((_INT32)((_UINT32) nGroups) - nPart_preg);
          aFreq = 0U;
          whiledo_var_preg = 0U;
          while((tFreq > aFreq) && ((alphaSize + -1) > ((gs + whiledo_var_preg) + -1)))
          {
            aFreq = *(_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 672U))[(_INT64)(gs + whiledo_var_preg)]) + aFreq;
            whiledo_var_preg = whiledo_var_preg + (_INT32)(1U);
          }
          ge = (gs + whiledo_var_preg) + -1;
          if((((gs < ge) && (nPart_preg != (_INT32)(0U))) && (((_INT32)((_UINT32) nGroups) - nPart_preg) != (_INT32)(1U))) && ((nPart_preg % (_INT32)(2U)) == (_INT32)(1U)))
          {
            aFreq = aFreq - *(_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 672U))[ge]);
            ge = ge + -1;
          }
          if(*(_INT32 *)(&(s)[164LL]) > (_INT32)(2U))
          {
            fprintf(stderr, "      initial group %d, [%d .. %d], has %d syms (%4.1f%%)\n", (_INT32)((_UINT32) nGroups) - nPart_preg, gs, ge, aFreq, ((_IEEE64)((_IEEE32)(aFreq)) * 1.0e+02) / (_IEEE64)((_IEEE32)(*(_INT32 *)(&(s)[167LL]))));
          }
          _temp__ubtmp_w2c_3 = nPart_preg;
          /* PARALLEL DO will be converted to SUBROUTINE __mpdo_sendMTFValues2 */
#pragma omp parallel for private(v_preg_w2c_0) shared(gs, ge, s, nGroups, _temp__ubtmp_w2c_3, alphaSize)
            for(v_preg_w2c_0 = 0U; v_preg_w2c_0 <= (alphaSize + -1); v_preg_w2c_0 = v_preg_w2c_0 + (_INT32)(1U))
            {
              if((gs <= v_preg_w2c_0) && (ge >= v_preg_w2c_0))
              {
                * (_UINT8 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 37708U))[((_INT32)((_UINT32) nGroups) - _temp__ubtmp_w2c_3) + -1][(_INT64)(v_preg_w2c_0)]) = 0U;
              }
              else
              {
                * (_UINT8 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 37708U))[((_INT32)((_UINT32) nGroups) - _temp__ubtmp_w2c_3) + -1][(_INT64)(v_preg_w2c_0)]) = 15U;
              }
            }
            gs = ge + (_INT32)(1U);
            remF = remF - aFreq;
          }
          for(iter_preg = 0U; iter_preg <= (_INT32)(3U); iter_preg = iter_preg + (_INT32)(1U))
          {
            /* PARALLEL DO will be converted to SUBROUTINE __mpdo_sendMTFValues3 */
#pragma omp parallel for private(t_preg_w2c_1) shared(nGroups, fave)
              for(t_preg_w2c_1 = 0U; t_preg_w2c_1 <= ((_INT32)((_UINT32) nGroups) + -1); t_preg_w2c_1 = t_preg_w2c_1 + (_INT32)(1U))
              {
                (fave)[(_INT64)(t_preg_w2c_1)] = 0U;
              }
              /* PARALLEL DO will be converted to SUBROUTINE __mpdo_sendMTFValues4 */
#pragma omp parallel for private(v_preg_w2c_1, t_preg_w2c_2) shared(s, nGroups, alphaSize)
                for(v_preg_w2c_1 = 0U; v_preg_w2c_1 <= (alphaSize + -1); v_preg_w2c_1 = v_preg_w2c_1 + (_INT32)(1U))
                {
                  for(t_preg_w2c_2 = 0U; t_preg_w2c_2 <= ((_INT32)((_UINT32) nGroups) + -1); t_preg_w2c_2 = t_preg_w2c_2 + (_INT32)(1U))
                  {
                    * (_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 45448U))[(_INT64)(t_preg_w2c_2)][(_INT64)(v_preg_w2c_1)]) = 0U;
                  }
                }
                if((_INT32)((_UINT32) nGroups) == (_INT32)(6U))
                {
                  for(v_preg_w2c_2 = 0U; v_preg_w2c_2 <= (alphaSize + -1); v_preg_w2c_2 = v_preg_w2c_2 + (_INT32)(1U))
                  {
                    * (_UINT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 51640U))[(_INT64)(v_preg_w2c_2)][0U]) = (_INT32) * (_UINT8 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 37708U))[0U][(_INT64)(v_preg_w2c_2)]) | _I4SHL((_INT32) * (_UINT8 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 37708U))[1U][(_INT64)(v_preg_w2c_2)]), (_INT32)(16U));
                    * (_UINT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 51640U))[(_INT64)(v_preg_w2c_2)][1U]) = (_INT32) * (_UINT8 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 37708U))[2U][(_INT64)(v_preg_w2c_2)]) | _I4SHL((_INT32) * (_UINT8 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 37708U))[3U][(_INT64)(v_preg_w2c_2)]), (_INT32)(16U));
                    * (_UINT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 51640U))[(_INT64)(v_preg_w2c_2)][2U]) = (_INT32) * (_UINT8 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 37708U))[4U][(_INT64)(v_preg_w2c_2)]) | _I4SHL((_INT32) * (_UINT8 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 37708U))[5U][(_INT64)(v_preg_w2c_2)]), (_INT32)(16U));
                  }
                }
                nSelectors = 0U;
                totc = 0U;
                gs = 0U;
                _76802 :;
                if(*(_INT32 *)(&(s)[167LL]) <= (_INT32)((_UINT64) gs))
                  goto _7938;
                ge = (_INT32)((_UINT64) gs) + (_INT32)(49U);
                if(*(_INT32 *)(&(s)[167LL]) <= ((_INT32)((_UINT64) gs) + (_INT32)(49U)))
                {
                  ge = *(_INT32 *)(&(s)[167LL]) + -1;
                }
                /* PARALLEL DO will be converted to SUBROUTINE __mpdo_sendMTFValues5 */
#pragma omp parallel for private(t_preg_w2c_3) shared(nGroups, cost)
                  for(t_preg_w2c_3 = 0U; t_preg_w2c_3 <= ((_INT32)((_UINT32) nGroups) + -1); t_preg_w2c_3 = t_preg_w2c_3 + (_INT32)(1U))
                  {
                    (cost)[(_INT64)(t_preg_w2c_3)] = 0U;
                  }
                  if(((_INT32)((_UINT32) nGroups) == (_INT32)(6U)) && ((ge - (_INT32)((_UINT64) gs)) == (_INT32)(49U)))
                  {
                    icv = (mtfv)[(_UINT64) gs];
                    cost0_w2c_1 = *(_UINT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 51640U))[icv][0U]);
                    cost_w2c_23 = *(_UINT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 51640U))[icv][1U]);
                    cost_w2c_45 = *(_UINT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 51640U))[icv][2U]);
                    icv = (mtfv)[(_INT64)((_UINT64) gs) + 1LL];
                    cost0_w2c_1 = *(_UINT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 51640U))[icv][0U]) + cost0_w2c_1;
                    cost_w2c_23 = *(_UINT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 51640U))[icv][1U]) + cost_w2c_23;
                    cost_w2c_45 = *(_UINT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 51640U))[icv][2U]) + cost_w2c_45;
                    icv = (mtfv)[(_INT64)((_UINT64) gs) + 2LL];
                    cost0_w2c_1 = *(_UINT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 51640U))[icv][0U]) + cost0_w2c_1;
                    cost_w2c_23 = *(_UINT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 51640U))[icv][1U]) + cost_w2c_23;
                    cost_w2c_45 = *(_UINT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 51640U))[icv][2U]) + cost_w2c_45;
                    icv = (mtfv)[(_INT64)((_UINT64) gs) + 3LL];
                    cost0_w2c_1 = *(_UINT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 51640U))[icv][0U]) + cost0_w2c_1;
                    cost_w2c_23 = *(_UINT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 51640U))[icv][1U]) + cost_w2c_23;
                    cost_w2c_45 = *(_UINT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 51640U))[icv][2U]) + cost_w2c_45;
                    icv = (mtfv)[(_INT64)((_UINT64) gs) + 4LL];
                    cost0_w2c_1 = *(_UINT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 51640U))[icv][0U]) + cost0_w2c_1;
                    cost_w2c_23 = *(_UINT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 51640U))[icv][1U]) + cost_w2c_23;
                    cost_w2c_45 = *(_UINT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 51640U))[icv][2U]) + cost_w2c_45;
                    icv = (mtfv)[(_INT64)((_UINT64) gs) + 5LL];
                    cost0_w2c_1 = *(_UINT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 51640U))[icv][0U]) + cost0_w2c_1;
                    cost_w2c_23 = *(_UINT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 51640U))[icv][1U]) + cost_w2c_23;
                    cost_w2c_45 = *(_UINT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 51640U))[icv][2U]) + cost_w2c_45;
                    icv = (mtfv)[(_INT64)((_UINT64) gs) + 6LL];
                    cost0_w2c_1 = *(_UINT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 51640U))[icv][0U]) + cost0_w2c_1;
                    cost_w2c_23 = *(_UINT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 51640U))[icv][1U]) + cost_w2c_23;
                    cost_w2c_45 = *(_UINT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 51640U))[icv][2U]) + cost_w2c_45;
                    icv = (mtfv)[(_INT64)((_UINT64) gs) + 7LL];
                    cost0_w2c_1 = *(_UINT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 51640U))[icv][0U]) + cost0_w2c_1;
                    cost_w2c_23 = *(_UINT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 51640U))[icv][1U]) + cost_w2c_23;
                    cost_w2c_45 = *(_UINT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 51640U))[icv][2U]) + cost_w2c_45;
                    icv = (mtfv)[(_INT64)((_UINT64) gs) + 8LL];
                    cost0_w2c_1 = *(_UINT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 51640U))[icv][0U]) + cost0_w2c_1;
                    cost_w2c_23 = *(_UINT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 51640U))[icv][1U]) + cost_w2c_23;
                    cost_w2c_45 = *(_UINT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 51640U))[icv][2U]) + cost_w2c_45;
                    icv = (mtfv)[(_INT64)((_UINT64) gs) + 9LL];
                    cost0_w2c_1 = *(_UINT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 51640U))[icv][0U]) + cost0_w2c_1;
                    cost_w2c_23 = *(_UINT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 51640U))[icv][1U]) + cost_w2c_23;
                    cost_w2c_45 = *(_UINT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 51640U))[icv][2U]) + cost_w2c_45;
                    icv = (mtfv)[(_INT64)((_UINT64) gs) + 10LL];
                    cost0_w2c_1 = *(_UINT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 51640U))[icv][0U]) + cost0_w2c_1;
                    cost_w2c_23 = *(_UINT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 51640U))[icv][1U]) + cost_w2c_23;
                    cost_w2c_45 = *(_UINT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 51640U))[icv][2U]) + cost_w2c_45;
                    icv = (mtfv)[(_INT64)((_UINT64) gs) + 11LL];
                    cost0_w2c_1 = *(_UINT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 51640U))[icv][0U]) + cost0_w2c_1;
                    cost_w2c_23 = *(_UINT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 51640U))[icv][1U]) + cost_w2c_23;
                    cost_w2c_45 = *(_UINT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 51640U))[icv][2U]) + cost_w2c_45;
                    icv = (mtfv)[(_INT64)((_UINT64) gs) + 12LL];
                    cost0_w2c_1 = *(_UINT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 51640U))[icv][0U]) + cost0_w2c_1;
                    cost_w2c_23 = *(_UINT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 51640U))[icv][1U]) + cost_w2c_23;
                    cost_w2c_45 = *(_UINT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 51640U))[icv][2U]) + cost_w2c_45;
                    icv = (mtfv)[(_INT64)((_UINT64) gs) + 13LL];
                    cost0_w2c_1 = *(_UINT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 51640U))[icv][0U]) + cost0_w2c_1;
                    cost_w2c_23 = *(_UINT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 51640U))[icv][1U]) + cost_w2c_23;
                    cost_w2c_45 = *(_UINT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 51640U))[icv][2U]) + cost_w2c_45;
                    icv = (mtfv)[(_INT64)((_UINT64) gs) + 14LL];
                    cost0_w2c_1 = *(_UINT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 51640U))[icv][0U]) + cost0_w2c_1;
                    cost_w2c_23 = *(_UINT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 51640U))[icv][1U]) + cost_w2c_23;
                    cost_w2c_45 = *(_UINT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 51640U))[icv][2U]) + cost_w2c_45;
                    icv = (mtfv)[(_INT64)((_UINT64) gs) + 15LL];
                    cost0_w2c_1 = *(_UINT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 51640U))[icv][0U]) + cost0_w2c_1;
                    cost_w2c_23 = *(_UINT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 51640U))[icv][1U]) + cost_w2c_23;
                    cost_w2c_45 = *(_UINT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 51640U))[icv][2U]) + cost_w2c_45;
                    icv = (mtfv)[(_INT64)((_UINT64) gs) + 16LL];
                    cost0_w2c_1 = *(_UINT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 51640U))[icv][0U]) + cost0_w2c_1;
                    cost_w2c_23 = *(_UINT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 51640U))[icv][1U]) + cost_w2c_23;
                    cost_w2c_45 = *(_UINT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 51640U))[icv][2U]) + cost_w2c_45;
                    icv = (mtfv)[(_INT64)((_UINT64) gs) + 17LL];
                    cost0_w2c_1 = *(_UINT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 51640U))[icv][0U]) + cost0_w2c_1;
                    cost_w2c_23 = *(_UINT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 51640U))[icv][1U]) + cost_w2c_23;
                    cost_w2c_45 = *(_UINT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 51640U))[icv][2U]) + cost_w2c_45;
                    icv = (mtfv)[(_INT64)((_UINT64) gs) + 18LL];
                    cost0_w2c_1 = *(_UINT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 51640U))[icv][0U]) + cost0_w2c_1;
                    cost_w2c_23 = *(_UINT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 51640U))[icv][1U]) + cost_w2c_23;
                    cost_w2c_45 = *(_UINT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 51640U))[icv][2U]) + cost_w2c_45;
                    icv = (mtfv)[(_INT64)((_UINT64) gs) + 19LL];
                    cost0_w2c_1 = *(_UINT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 51640U))[icv][0U]) + cost0_w2c_1;
                    cost_w2c_23 = *(_UINT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 51640U))[icv][1U]) + cost_w2c_23;
                    cost_w2c_45 = *(_UINT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 51640U))[icv][2U]) + cost_w2c_45;
                    icv = (mtfv)[(_INT64)((_UINT64) gs) + 20LL];
                    cost0_w2c_1 = *(_UINT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 51640U))[icv][0U]) + cost0_w2c_1;
                    cost_w2c_23 = *(_UINT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 51640U))[icv][1U]) + cost_w2c_23;
                    cost_w2c_45 = *(_UINT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 51640U))[icv][2U]) + cost_w2c_45;
                    icv = (mtfv)[(_INT64)((_UINT64) gs) + 21LL];
                    cost0_w2c_1 = *(_UINT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 51640U))[icv][0U]) + cost0_w2c_1;
                    cost_w2c_23 = *(_UINT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 51640U))[icv][1U]) + cost_w2c_23;
                    cost_w2c_45 = *(_UINT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 51640U))[icv][2U]) + cost_w2c_45;
                    icv = (mtfv)[(_INT64)((_UINT64) gs) + 22LL];
                    cost0_w2c_1 = *(_UINT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 51640U))[icv][0U]) + cost0_w2c_1;
                    cost_w2c_23 = *(_UINT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 51640U))[icv][1U]) + cost_w2c_23;
                    cost_w2c_45 = *(_UINT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 51640U))[icv][2U]) + cost_w2c_45;
                    icv = (mtfv)[(_INT64)((_UINT64) gs) + 23LL];
                    cost0_w2c_1 = *(_UINT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 51640U))[icv][0U]) + cost0_w2c_1;
                    cost_w2c_23 = *(_UINT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 51640U))[icv][1U]) + cost_w2c_23;
                    cost_w2c_45 = *(_UINT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 51640U))[icv][2U]) + cost_w2c_45;
                    icv = (mtfv)[(_INT64)((_UINT64) gs) + 24LL];
                    cost0_w2c_1 = *(_UINT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 51640U))[icv][0U]) + cost0_w2c_1;
                    cost_w2c_23 = *(_UINT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 51640U))[icv][1U]) + cost_w2c_23;
                    cost_w2c_45 = *(_UINT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 51640U))[icv][2U]) + cost_w2c_45;
                    icv = (mtfv)[(_INT64)((_UINT64) gs) + 25LL];
                    cost0_w2c_1 = *(_UINT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 51640U))[icv][0U]) + cost0_w2c_1;
                    cost_w2c_23 = *(_UINT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 51640U))[icv][1U]) + cost_w2c_23;
                    cost_w2c_45 = *(_UINT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 51640U))[icv][2U]) + cost_w2c_45;
                    icv = (mtfv)[(_INT64)((_UINT64) gs) + 26LL];
                    cost0_w2c_1 = *(_UINT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 51640U))[icv][0U]) + cost0_w2c_1;
                    cost_w2c_23 = *(_UINT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 51640U))[icv][1U]) + cost_w2c_23;
                    cost_w2c_45 = *(_UINT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 51640U))[icv][2U]) + cost_w2c_45;
                    icv = (mtfv)[(_INT64)((_UINT64) gs) + 27LL];
                    cost0_w2c_1 = *(_UINT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 51640U))[icv][0U]) + cost0_w2c_1;
                    cost_w2c_23 = *(_UINT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 51640U))[icv][1U]) + cost_w2c_23;
                    cost_w2c_45 = *(_UINT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 51640U))[icv][2U]) + cost_w2c_45;
                    icv = (mtfv)[(_INT64)((_UINT64) gs) + 28LL];
                    cost0_w2c_1 = *(_UINT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 51640U))[icv][0U]) + cost0_w2c_1;
                    cost_w2c_23 = *(_UINT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 51640U))[icv][1U]) + cost_w2c_23;
                    cost_w2c_45 = *(_UINT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 51640U))[icv][2U]) + cost_w2c_45;
                    icv = (mtfv)[(_INT64)((_UINT64) gs) + 29LL];
                    cost0_w2c_1 = *(_UINT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 51640U))[icv][0U]) + cost0_w2c_1;
                    cost_w2c_23 = *(_UINT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 51640U))[icv][1U]) + cost_w2c_23;
                    cost_w2c_45 = *(_UINT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 51640U))[icv][2U]) + cost_w2c_45;
                    icv = (mtfv)[(_INT64)((_UINT64) gs) + 30LL];
                    cost0_w2c_1 = *(_UINT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 51640U))[icv][0U]) + cost0_w2c_1;
                    cost_w2c_23 = *(_UINT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 51640U))[icv][1U]) + cost_w2c_23;
                    cost_w2c_45 = *(_UINT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 51640U))[icv][2U]) + cost_w2c_45;
                    icv = (mtfv)[(_INT64)((_UINT64) gs) + 31LL];
                    cost0_w2c_1 = *(_UINT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 51640U))[icv][0U]) + cost0_w2c_1;
                    cost_w2c_23 = *(_UINT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 51640U))[icv][1U]) + cost_w2c_23;
                    cost_w2c_45 = *(_UINT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 51640U))[icv][2U]) + cost_w2c_45;
                    icv = (mtfv)[(_INT64)((_UINT64) gs) + 32LL];
                    cost0_w2c_1 = *(_UINT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 51640U))[icv][0U]) + cost0_w2c_1;
                    cost_w2c_23 = *(_UINT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 51640U))[icv][1U]) + cost_w2c_23;
                    cost_w2c_45 = *(_UINT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 51640U))[icv][2U]) + cost_w2c_45;
                    icv = (mtfv)[(_INT64)((_UINT64) gs) + 33LL];
                    cost0_w2c_1 = *(_UINT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 51640U))[icv][0U]) + cost0_w2c_1;
                    cost_w2c_23 = *(_UINT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 51640U))[icv][1U]) + cost_w2c_23;
                    cost_w2c_45 = *(_UINT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 51640U))[icv][2U]) + cost_w2c_45;
                    icv = (mtfv)[(_INT64)((_UINT64) gs) + 34LL];
                    cost0_w2c_1 = *(_UINT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 51640U))[icv][0U]) + cost0_w2c_1;
                    cost_w2c_23 = *(_UINT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 51640U))[icv][1U]) + cost_w2c_23;
                    cost_w2c_45 = *(_UINT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 51640U))[icv][2U]) + cost_w2c_45;
                    icv = (mtfv)[(_INT64)((_UINT64) gs) + 35LL];
                    cost0_w2c_1 = *(_UINT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 51640U))[icv][0U]) + cost0_w2c_1;
                    cost_w2c_23 = *(_UINT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 51640U))[icv][1U]) + cost_w2c_23;
                    cost_w2c_45 = *(_UINT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 51640U))[icv][2U]) + cost_w2c_45;
                    icv = (mtfv)[(_INT64)((_UINT64) gs) + 36LL];
                    cost0_w2c_1 = *(_UINT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 51640U))[icv][0U]) + cost0_w2c_1;
                    cost_w2c_23 = *(_UINT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 51640U))[icv][1U]) + cost_w2c_23;
                    cost_w2c_45 = *(_UINT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 51640U))[icv][2U]) + cost_w2c_45;
                    icv = (mtfv)[(_INT64)((_UINT64) gs) + 37LL];
                    cost0_w2c_1 = *(_UINT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 51640U))[icv][0U]) + cost0_w2c_1;
                    cost_w2c_23 = *(_UINT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 51640U))[icv][1U]) + cost_w2c_23;
                    cost_w2c_45 = *(_UINT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 51640U))[icv][2U]) + cost_w2c_45;
                    icv = (mtfv)[(_INT64)((_UINT64) gs) + 38LL];
                    cost0_w2c_1 = *(_UINT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 51640U))[icv][0U]) + cost0_w2c_1;
                    cost_w2c_23 = *(_UINT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 51640U))[icv][1U]) + cost_w2c_23;
                    cost_w2c_45 = *(_UINT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 51640U))[icv][2U]) + cost_w2c_45;
                    icv = (mtfv)[(_INT64)((_UINT64) gs) + 39LL];
                    cost0_w2c_1 = *(_UINT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 51640U))[icv][0U]) + cost0_w2c_1;
                    cost_w2c_23 = *(_UINT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 51640U))[icv][1U]) + cost_w2c_23;
                    cost_w2c_45 = *(_UINT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 51640U))[icv][2U]) + cost_w2c_45;
                    icv = (mtfv)[(_INT64)((_UINT64) gs) + 40LL];
                    cost0_w2c_1 = *(_UINT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 51640U))[icv][0U]) + cost0_w2c_1;
                    cost_w2c_23 = *(_UINT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 51640U))[icv][1U]) + cost_w2c_23;
                    cost_w2c_45 = *(_UINT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 51640U))[icv][2U]) + cost_w2c_45;
                    icv = (mtfv)[(_INT64)((_UINT64) gs) + 41LL];
                    cost0_w2c_1 = *(_UINT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 51640U))[icv][0U]) + cost0_w2c_1;
                    cost_w2c_23 = *(_UINT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 51640U))[icv][1U]) + cost_w2c_23;
                    cost_w2c_45 = *(_UINT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 51640U))[icv][2U]) + cost_w2c_45;
                    icv = (mtfv)[(_INT64)((_UINT64) gs) + 42LL];
                    cost0_w2c_1 = *(_UINT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 51640U))[icv][0U]) + cost0_w2c_1;
                    cost_w2c_23 = *(_UINT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 51640U))[icv][1U]) + cost_w2c_23;
                    cost_w2c_45 = *(_UINT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 51640U))[icv][2U]) + cost_w2c_45;
                    icv = (mtfv)[(_INT64)((_UINT64) gs) + 43LL];
                    cost0_w2c_1 = *(_UINT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 51640U))[icv][0U]) + cost0_w2c_1;
                    cost_w2c_23 = *(_UINT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 51640U))[icv][1U]) + cost_w2c_23;
                    cost_w2c_45 = *(_UINT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 51640U))[icv][2U]) + cost_w2c_45;
                    icv = (mtfv)[(_INT64)((_UINT64) gs) + 44LL];
                    cost0_w2c_1 = *(_UINT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 51640U))[icv][0U]) + cost0_w2c_1;
                    cost_w2c_23 = *(_UINT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 51640U))[icv][1U]) + cost_w2c_23;
                    cost_w2c_45 = *(_UINT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 51640U))[icv][2U]) + cost_w2c_45;
                    icv = (mtfv)[(_INT64)((_UINT64) gs) + 45LL];
                    cost0_w2c_1 = *(_UINT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 51640U))[icv][0U]) + cost0_w2c_1;
                    cost_w2c_23 = *(_UINT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 51640U))[icv][1U]) + cost_w2c_23;
                    cost_w2c_45 = *(_UINT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 51640U))[icv][2U]) + cost_w2c_45;
                    icv = (mtfv)[(_INT64)((_UINT64) gs) + 46LL];
                    cost0_w2c_1 = *(_UINT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 51640U))[icv][0U]) + cost0_w2c_1;
                    cost_w2c_23 = *(_UINT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 51640U))[icv][1U]) + cost_w2c_23;
                    cost_w2c_45 = *(_UINT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 51640U))[icv][2U]) + cost_w2c_45;
                    icv = (mtfv)[(_INT64)((_UINT64) gs) + 47LL];
                    cost0_w2c_1 = *(_UINT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 51640U))[icv][0U]) + cost0_w2c_1;
                    cost_w2c_23 = *(_UINT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 51640U))[icv][1U]) + cost_w2c_23;
                    cost_w2c_45 = *(_UINT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 51640U))[icv][2U]) + cost_w2c_45;
                    icv = (mtfv)[(_INT64)((_UINT64) gs) + 48LL];
                    cost0_w2c_1 = *(_UINT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 51640U))[icv][0U]) + cost0_w2c_1;
                    cost_w2c_23 = *(_UINT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 51640U))[icv][1U]) + cost_w2c_23;
                    cost_w2c_45 = *(_UINT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 51640U))[icv][2U]) + cost_w2c_45;
                    icv = (mtfv)[(_INT64)((_UINT64) gs) + 49LL];
                    cost0_w2c_1 = *(_UINT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 51640U))[icv][0U]) + cost0_w2c_1;
                    cost_w2c_23 = *(_UINT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 51640U))[icv][1U]) + cost_w2c_23;
                    cost_w2c_45 = *(_UINT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 51640U))[icv][2U]) + cost_w2c_45;
                    (cost)[0U] = cost0_w2c_1;
                    (cost)[1U] = _U4LSHR(cost0_w2c_1, 16U);
                    (cost)[2U] = cost_w2c_23;
                    (cost)[3U] = _U4LSHR(cost_w2c_23, 16U);
                    (cost)[4U] = cost_w2c_45;
                    (cost)[5U] = _U4LSHR(cost_w2c_45, 16U);
                  }
                  else
                  {
                    se1__$stk_preg = (_UINT64)(alloca(0));
                    se1_U_w2c_2 = (_UINT16 *)(alloca((_UINT64)(((ge - (_INT32)((_UINT64) gs)) * 2) + 2)));
                    /* PARALLEL DO will be converted to SUBROUTINE __mpdo_sendMTFValues6 */
#pragma omp parallel for private(i_preg_w2c_4) shared(mtfv, gs, ge, se1_U_w2c_2)
                      for(i_preg_w2c_4 = 0U; i_preg_w2c_4 <= (ge - (_INT32)((_UINT64) gs)); i_preg_w2c_4 = i_preg_w2c_4 + (_INT32)(1U))
                      {
                        (se1_U_w2c_2)[i_preg_w2c_4] = (mtfv)[(_INT64)((_INT32)((_UINT64) gs) + i_preg_w2c_4)];
                      }
                      /* PARALLEL DO will be converted to SUBROUTINE __mpdo_sendMTFValues7 */
#pragma omp parallel for private(t_preg_w2c_4, i_preg_w2c_4) shared(se1_U_w2c_2, cost, s, ge, gs, nGroups)
                        for(t_preg_w2c_4 = 0U; t_preg_w2c_4 <= ((_INT32)((_UINT32) nGroups) + -1); t_preg_w2c_4 = t_preg_w2c_4 + (_INT32)(1U))
                        {
                          for(i_preg_w2c_4 = 0U; i_preg_w2c_4 <= (ge - (_INT32)((_UINT64) gs)); i_preg_w2c_4 = i_preg_w2c_4 + (_INT32)(1U))
                          {
                            (cost)[(_INT64)(t_preg_w2c_4)] = (_UINT32)((_UINT16) * (_UINT8 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 37708U))[(_INT64)(t_preg_w2c_4)][(se1_U_w2c_2)[i_preg_w2c_4]])) + (_UINT32)((cost)[(_INT64)(t_preg_w2c_4)]);
                          }
                        }
                        ;
                      }
                      bc = 999999999U;
                      bt = -1LL;
                      for(t_preg_w2c_5 = 0U; t_preg_w2c_5 <= ((_INT32)((_UINT32) nGroups) + -1); t_preg_w2c_5 = t_preg_w2c_5 + (_INT32)(1U))
                      {
                        if(bc > (_INT32)(cost)[(_INT64)(t_preg_w2c_5)])
                        {
                          bc = (_INT32)(cost)[(_INT64)(t_preg_w2c_5)];
                          bt = t_preg_w2c_5;
                        }
                      }
                      totc = totc + bc;
                      (fave)[bt] = (fave)[bt] + (_INT32)(1U);
                      * (_UINT8 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 1704U))[nSelectors]) = bt;
                      nSelectors = nSelectors + (_INT32)(1U);
                      if(((_INT32)((_UINT32) nGroups) == (_INT32)(6U)) && ((ge - (_INT32)((_UINT64) gs)) == (_INT32)(49U)))
                      {
                        * (_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 45448U))[bt][(_INT32)(mtfv)[(_UINT64) gs]]) = *(_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 45448U))[bt][(_INT32)(mtfv)[(_UINT64) gs]]) + (_INT32)(1U);
                        * (_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 45448U))[bt][(_INT32)(mtfv)[(_INT64)((_UINT64) gs) + 1LL]]) = *(_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 45448U))[bt][(_INT32)(mtfv)[(_INT64)((_UINT64) gs) + 1LL]]) + (_INT32)(1U);
                        * (_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 45448U))[bt][(_INT32)(mtfv)[(_INT64)((_UINT64) gs) + 2LL]]) = *(_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 45448U))[bt][(_INT32)(mtfv)[(_INT64)((_UINT64) gs) + 2LL]]) + (_INT32)(1U);
                        * (_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 45448U))[bt][(_INT32)(mtfv)[(_INT64)((_UINT64) gs) + 3LL]]) = *(_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 45448U))[bt][(_INT32)(mtfv)[(_INT64)((_UINT64) gs) + 3LL]]) + (_INT32)(1U);
                        * (_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 45448U))[bt][(_INT32)(mtfv)[(_INT64)((_UINT64) gs) + 4LL]]) = *(_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 45448U))[bt][(_INT32)(mtfv)[(_INT64)((_UINT64) gs) + 4LL]]) + (_INT32)(1U);
                        * (_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 45448U))[bt][(_INT32)(mtfv)[(_INT64)((_UINT64) gs) + 5LL]]) = *(_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 45448U))[bt][(_INT32)(mtfv)[(_INT64)((_UINT64) gs) + 5LL]]) + (_INT32)(1U);
                        * (_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 45448U))[bt][(_INT32)(mtfv)[(_INT64)((_UINT64) gs) + 6LL]]) = *(_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 45448U))[bt][(_INT32)(mtfv)[(_INT64)((_UINT64) gs) + 6LL]]) + (_INT32)(1U);
                        * (_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 45448U))[bt][(_INT32)(mtfv)[(_INT64)((_UINT64) gs) + 7LL]]) = *(_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 45448U))[bt][(_INT32)(mtfv)[(_INT64)((_UINT64) gs) + 7LL]]) + (_INT32)(1U);
                        * (_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 45448U))[bt][(_INT32)(mtfv)[(_INT64)((_UINT64) gs) + 8LL]]) = *(_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 45448U))[bt][(_INT32)(mtfv)[(_INT64)((_UINT64) gs) + 8LL]]) + (_INT32)(1U);
                        * (_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 45448U))[bt][(_INT32)(mtfv)[(_INT64)((_UINT64) gs) + 9LL]]) = *(_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 45448U))[bt][(_INT32)(mtfv)[(_INT64)((_UINT64) gs) + 9LL]]) + (_INT32)(1U);
                        * (_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 45448U))[bt][(_INT32)(mtfv)[(_INT64)((_UINT64) gs) + 10LL]]) = *(_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 45448U))[bt][(_INT32)(mtfv)[(_INT64)((_UINT64) gs) + 10LL]]) + (_INT32)(1U);
                        * (_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 45448U))[bt][(_INT32)(mtfv)[(_INT64)((_UINT64) gs) + 11LL]]) = *(_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 45448U))[bt][(_INT32)(mtfv)[(_INT64)((_UINT64) gs) + 11LL]]) + (_INT32)(1U);
                        * (_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 45448U))[bt][(_INT32)(mtfv)[(_INT64)((_UINT64) gs) + 12LL]]) = *(_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 45448U))[bt][(_INT32)(mtfv)[(_INT64)((_UINT64) gs) + 12LL]]) + (_INT32)(1U);
                        * (_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 45448U))[bt][(_INT32)(mtfv)[(_INT64)((_UINT64) gs) + 13LL]]) = *(_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 45448U))[bt][(_INT32)(mtfv)[(_INT64)((_UINT64) gs) + 13LL]]) + (_INT32)(1U);
                        * (_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 45448U))[bt][(_INT32)(mtfv)[(_INT64)((_UINT64) gs) + 14LL]]) = *(_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 45448U))[bt][(_INT32)(mtfv)[(_INT64)((_UINT64) gs) + 14LL]]) + (_INT32)(1U);
                        * (_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 45448U))[bt][(_INT32)(mtfv)[(_INT64)((_UINT64) gs) + 15LL]]) = *(_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 45448U))[bt][(_INT32)(mtfv)[(_INT64)((_UINT64) gs) + 15LL]]) + (_INT32)(1U);
                        * (_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 45448U))[bt][(_INT32)(mtfv)[(_INT64)((_UINT64) gs) + 16LL]]) = *(_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 45448U))[bt][(_INT32)(mtfv)[(_INT64)((_UINT64) gs) + 16LL]]) + (_INT32)(1U);
                        * (_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 45448U))[bt][(_INT32)(mtfv)[(_INT64)((_UINT64) gs) + 17LL]]) = *(_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 45448U))[bt][(_INT32)(mtfv)[(_INT64)((_UINT64) gs) + 17LL]]) + (_INT32)(1U);
                        * (_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 45448U))[bt][(_INT32)(mtfv)[(_INT64)((_UINT64) gs) + 18LL]]) = *(_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 45448U))[bt][(_INT32)(mtfv)[(_INT64)((_UINT64) gs) + 18LL]]) + (_INT32)(1U);
                        * (_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 45448U))[bt][(_INT32)(mtfv)[(_INT64)((_UINT64) gs) + 19LL]]) = *(_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 45448U))[bt][(_INT32)(mtfv)[(_INT64)((_UINT64) gs) + 19LL]]) + (_INT32)(1U);
                        * (_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 45448U))[bt][(_INT32)(mtfv)[(_INT64)((_UINT64) gs) + 20LL]]) = *(_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 45448U))[bt][(_INT32)(mtfv)[(_INT64)((_UINT64) gs) + 20LL]]) + (_INT32)(1U);
                        * (_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 45448U))[bt][(_INT32)(mtfv)[(_INT64)((_UINT64) gs) + 21LL]]) = *(_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 45448U))[bt][(_INT32)(mtfv)[(_INT64)((_UINT64) gs) + 21LL]]) + (_INT32)(1U);
                        * (_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 45448U))[bt][(_INT32)(mtfv)[(_INT64)((_UINT64) gs) + 22LL]]) = *(_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 45448U))[bt][(_INT32)(mtfv)[(_INT64)((_UINT64) gs) + 22LL]]) + (_INT32)(1U);
                        * (_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 45448U))[bt][(_INT32)(mtfv)[(_INT64)((_UINT64) gs) + 23LL]]) = *(_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 45448U))[bt][(_INT32)(mtfv)[(_INT64)((_UINT64) gs) + 23LL]]) + (_INT32)(1U);
                        * (_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 45448U))[bt][(_INT32)(mtfv)[(_INT64)((_UINT64) gs) + 24LL]]) = *(_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 45448U))[bt][(_INT32)(mtfv)[(_INT64)((_UINT64) gs) + 24LL]]) + (_INT32)(1U);
                        * (_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 45448U))[bt][(_INT32)(mtfv)[(_INT64)((_UINT64) gs) + 25LL]]) = *(_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 45448U))[bt][(_INT32)(mtfv)[(_INT64)((_UINT64) gs) + 25LL]]) + (_INT32)(1U);
                        * (_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 45448U))[bt][(_INT32)(mtfv)[(_INT64)((_UINT64) gs) + 26LL]]) = *(_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 45448U))[bt][(_INT32)(mtfv)[(_INT64)((_UINT64) gs) + 26LL]]) + (_INT32)(1U);
                        * (_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 45448U))[bt][(_INT32)(mtfv)[(_INT64)((_UINT64) gs) + 27LL]]) = *(_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 45448U))[bt][(_INT32)(mtfv)[(_INT64)((_UINT64) gs) + 27LL]]) + (_INT32)(1U);
                        * (_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 45448U))[bt][(_INT32)(mtfv)[(_INT64)((_UINT64) gs) + 28LL]]) = *(_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 45448U))[bt][(_INT32)(mtfv)[(_INT64)((_UINT64) gs) + 28LL]]) + (_INT32)(1U);
                        * (_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 45448U))[bt][(_INT32)(mtfv)[(_INT64)((_UINT64) gs) + 29LL]]) = *(_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 45448U))[bt][(_INT32)(mtfv)[(_INT64)((_UINT64) gs) + 29LL]]) + (_INT32)(1U);
                        * (_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 45448U))[bt][(_INT32)(mtfv)[(_INT64)((_UINT64) gs) + 30LL]]) = *(_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 45448U))[bt][(_INT32)(mtfv)[(_INT64)((_UINT64) gs) + 30LL]]) + (_INT32)(1U);
                        * (_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 45448U))[bt][(_INT32)(mtfv)[(_INT64)((_UINT64) gs) + 31LL]]) = *(_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 45448U))[bt][(_INT32)(mtfv)[(_INT64)((_UINT64) gs) + 31LL]]) + (_INT32)(1U);
                        * (_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 45448U))[bt][(_INT32)(mtfv)[(_INT64)((_UINT64) gs) + 32LL]]) = *(_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 45448U))[bt][(_INT32)(mtfv)[(_INT64)((_UINT64) gs) + 32LL]]) + (_INT32)(1U);
                        * (_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 45448U))[bt][(_INT32)(mtfv)[(_INT64)((_UINT64) gs) + 33LL]]) = *(_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 45448U))[bt][(_INT32)(mtfv)[(_INT64)((_UINT64) gs) + 33LL]]) + (_INT32)(1U);
                        * (_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 45448U))[bt][(_INT32)(mtfv)[(_INT64)((_UINT64) gs) + 34LL]]) = *(_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 45448U))[bt][(_INT32)(mtfv)[(_INT64)((_UINT64) gs) + 34LL]]) + (_INT32)(1U);
                        * (_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 45448U))[bt][(_INT32)(mtfv)[(_INT64)((_UINT64) gs) + 35LL]]) = *(_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 45448U))[bt][(_INT32)(mtfv)[(_INT64)((_UINT64) gs) + 35LL]]) + (_INT32)(1U);
                        * (_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 45448U))[bt][(_INT32)(mtfv)[(_INT64)((_UINT64) gs) + 36LL]]) = *(_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 45448U))[bt][(_INT32)(mtfv)[(_INT64)((_UINT64) gs) + 36LL]]) + (_INT32)(1U);
                        * (_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 45448U))[bt][(_INT32)(mtfv)[(_INT64)((_UINT64) gs) + 37LL]]) = *(_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 45448U))[bt][(_INT32)(mtfv)[(_INT64)((_UINT64) gs) + 37LL]]) + (_INT32)(1U);
                        * (_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 45448U))[bt][(_INT32)(mtfv)[(_INT64)((_UINT64) gs) + 38LL]]) = *(_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 45448U))[bt][(_INT32)(mtfv)[(_INT64)((_UINT64) gs) + 38LL]]) + (_INT32)(1U);
                        * (_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 45448U))[bt][(_INT32)(mtfv)[(_INT64)((_UINT64) gs) + 39LL]]) = *(_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 45448U))[bt][(_INT32)(mtfv)[(_INT64)((_UINT64) gs) + 39LL]]) + (_INT32)(1U);
                        * (_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 45448U))[bt][(_INT32)(mtfv)[(_INT64)((_UINT64) gs) + 40LL]]) = *(_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 45448U))[bt][(_INT32)(mtfv)[(_INT64)((_UINT64) gs) + 40LL]]) + (_INT32)(1U);
                        * (_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 45448U))[bt][(_INT32)(mtfv)[(_INT64)((_UINT64) gs) + 41LL]]) = *(_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 45448U))[bt][(_INT32)(mtfv)[(_INT64)((_UINT64) gs) + 41LL]]) + (_INT32)(1U);
                        * (_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 45448U))[bt][(_INT32)(mtfv)[(_INT64)((_UINT64) gs) + 42LL]]) = *(_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 45448U))[bt][(_INT32)(mtfv)[(_INT64)((_UINT64) gs) + 42LL]]) + (_INT32)(1U);
                        * (_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 45448U))[bt][(_INT32)(mtfv)[(_INT64)((_UINT64) gs) + 43LL]]) = *(_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 45448U))[bt][(_INT32)(mtfv)[(_INT64)((_UINT64) gs) + 43LL]]) + (_INT32)(1U);
                        * (_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 45448U))[bt][(_INT32)(mtfv)[(_INT64)((_UINT64) gs) + 44LL]]) = *(_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 45448U))[bt][(_INT32)(mtfv)[(_INT64)((_UINT64) gs) + 44LL]]) + (_INT32)(1U);
                        * (_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 45448U))[bt][(_INT32)(mtfv)[(_INT64)((_UINT64) gs) + 45LL]]) = *(_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 45448U))[bt][(_INT32)(mtfv)[(_INT64)((_UINT64) gs) + 45LL]]) + (_INT32)(1U);
                        * (_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 45448U))[bt][(_INT32)(mtfv)[(_INT64)((_UINT64) gs) + 46LL]]) = *(_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 45448U))[bt][(_INT32)(mtfv)[(_INT64)((_UINT64) gs) + 46LL]]) + (_INT32)(1U);
                        * (_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 45448U))[bt][(_INT32)(mtfv)[(_INT64)((_UINT64) gs) + 47LL]]) = *(_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 45448U))[bt][(_INT32)(mtfv)[(_INT64)((_UINT64) gs) + 47LL]]) + (_INT32)(1U);
                        * (_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 45448U))[bt][(_INT32)(mtfv)[(_INT64)((_UINT64) gs) + 48LL]]) = *(_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 45448U))[bt][(_INT32)(mtfv)[(_INT64)((_UINT64) gs) + 48LL]]) + (_INT32)(1U);
                        * (_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 45448U))[bt][(_INT32)(mtfv)[(_INT64)((_UINT64) gs) + 49LL]]) = *(_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 45448U))[bt][(_INT32)(mtfv)[(_INT64)((_UINT64) gs) + 49LL]]) + (_INT32)(1U);
                      }
                      else
                      {
                        for(i_preg_w2c_5 = 0U; i_preg_w2c_5 <= (ge - (_INT32)((_UINT64) gs)); i_preg_w2c_5 = i_preg_w2c_5 + (_INT32)(1U))
                        {
                          * (_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 45448U))[bt][(_INT32)(mtfv)[(_INT64)((_INT32)((_UINT64) gs) + i_preg_w2c_5)]]) = *(_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 45448U))[bt][(_INT32)(mtfv)[(_INT64)((_INT32)((_UINT64) gs) + i_preg_w2c_5)]]) + (_INT32)(1U);
                        }
                      }
                      gs = ge + (_INT32)(1U);
                      goto _76802;
                      _7938 :;
                      if(*(_INT32 *)(&(s)[164LL]) > (_INT32)(2U))
                      {
                        fprintf(stderr, "      pass %d: size is %d, grp uses are ", iter_preg + (_INT32)(1U), totc / (_INT32)(8U));
                        for(t_preg_w2c_6 = 0U; t_preg_w2c_6 <= ((_INT32)((_UINT32) nGroups) + -1); t_preg_w2c_6 = t_preg_w2c_6 + (_INT32)(1U))
                        {
                          fprintf(stderr, "%d ", (fave)[(_INT64)(t_preg_w2c_6)]);
                        }
                        fprintf(stderr, "\n");
                      }
                      for(t_preg_w2c_7 = 0U; t_preg_w2c_7 <= ((_INT32)((_UINT32) nGroups) + -1); t_preg_w2c_7 = t_preg_w2c_7 + (_INT32)(1U))
                      {
                        BZ2_hbMakeCodeLengths((_UINT8 *)(struct anonymous_w2c_3 *)((_UINT8 *)((struct anonymous_w2c_3 *)((_UINT8 *)(s) + ((_INT64)(t_preg_w2c_7) * 258U))) + 37708U), (_INT32 *)(struct anonymous_w2c_3 *)((_UINT8 *)((struct anonymous_w2c_3 *)((_UINT8 *)(s) + ((_INT64)(t_preg_w2c_7) * 1032U))) + 45448U), alphaSize, (_INT32) 17U);
                      }
                    }
                    if((_INT32)((_UINT32) nGroups) > (_INT32)(7U))
                    {
                      BZ2_bz__AssertH__fail((_INT32) 3002U);
                    }
                    if(nSelectors > (_INT32)(18002U))
                    {
                      BZ2_bz__AssertH__fail((_INT32) 3003U);
                    }
                    /* PARALLEL DO will be converted to SUBROUTINE __mpdo_sendMTFValues8 */
#pragma omp parallel for private(i_preg_w2c_6) shared(nGroups, pos)
                      for(i_preg_w2c_6 = 0U; i_preg_w2c_6 <= ((_INT32)((_UINT32) nGroups) + -1); i_preg_w2c_6 = i_preg_w2c_6 + (_INT32)(1U))
                      {
                        (pos)[(_INT64)(i_preg_w2c_6)] = i_preg_w2c_6;
                      }
                      for(i_preg_w2c_7 = 0U; i_preg_w2c_7 <= (nSelectors + -1); i_preg_w2c_7 = i_preg_w2c_7 + (_INT32)(1U))
                      {
                        ll_i = *(_UINT8 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 1704U))[(_INT64)(i_preg_w2c_7)]);
                        tmp = (pos)[0U];
                        whiledo_var_preg_w2c_0 = 0U;
                        while((_UINT32)(ll_i) != (_UINT32)(tmp))
                        {
                          tmp_w2c_2 = tmp;
                          tmp = (pos)[(_INT64)(whiledo_var_preg_w2c_0) + (_INT64)(1U)];
                          (pos)[(_INT64)(whiledo_var_preg_w2c_0) + (_INT64)(1U)] = tmp_w2c_2;
                          whiledo_var_preg_w2c_0 = whiledo_var_preg_w2c_0 + (_INT32)(1U);
                        }
                        (pos)[0U] = tmp;
                        * (_UINT8 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 19706U))[(_INT64)(i_preg_w2c_7)]) = whiledo_var_preg_w2c_0;
                      }
                      for(t_preg_w2c_8 = 0U; t_preg_w2c_8 <= ((_INT32)((_UINT32) nGroups) + -1); t_preg_w2c_8 = t_preg_w2c_8 + (_INT32)(1U))
                      {
                        minLen = 32U;
                        maxLen = 0U;
                        for(i_preg_w2c_8 = 0U; i_preg_w2c_8 <= (alphaSize + -1); i_preg_w2c_8 = i_preg_w2c_8 + (_INT32)(1U))
                        {
                          if(maxLen < (_INT32) * (_UINT8 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 37708U))[(_INT64)(t_preg_w2c_8)][(_INT64)(i_preg_w2c_8)]))
                          {
                            maxLen = (_INT32) * (_UINT8 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 37708U))[(_INT64)(t_preg_w2c_8)][(_INT64)(i_preg_w2c_8)]);
                          }
                          if(minLen > (_INT32) * (_UINT8 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 37708U))[(_INT64)(t_preg_w2c_8)][(_INT64)(i_preg_w2c_8)]))
                          {
                            minLen = (_INT32) * (_UINT8 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 37708U))[(_INT64)(t_preg_w2c_8)][(_INT64)(i_preg_w2c_8)]);
                          }
                        }
                        if(maxLen > (_INT32)(17U))
                        {
                          BZ2_bz__AssertH__fail((_INT32) 3004U);
                        }
                        if(minLen <= (_INT32)(0U))
                        {
                          BZ2_bz__AssertH__fail((_INT32) 3005U);
                        }
                        BZ2_hbAssignCodes((_INT32 *)(struct anonymous_w2c_3 *)((_UINT8 *)((struct anonymous_w2c_3 *)((_UINT8 *)(s) + ((_INT64)(t_preg_w2c_8) * 1032U))) + 39256U), (_UINT8 *)(struct anonymous_w2c_3 *)((_UINT8 *)((struct anonymous_w2c_3 *)((_UINT8 *)(s) + ((_INT64)(t_preg_w2c_8) * 258U))) + 37708U), minLen, maxLen, alphaSize);
                      }
                      nBytes = (s) -> numZ;
                      for(i_preg_w2c_9 = 0U; i_preg_w2c_9 <= (_INT32)(15U); i_preg_w2c_9 = i_preg_w2c_9 + (_INT32)(1U))
                      {
                        (inUse_w2c_16)[(_INT64)(i_preg_w2c_9)] = 0U;
                        for(j_preg_w2c_1 = 0U; j_preg_w2c_1 <= (_INT32)(15U); j_preg_w2c_1 = j_preg_w2c_1 + (_INT32)(1U))
                        {
                          if((_UINT32)(*(_UINT8 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 128U))[j_preg_w2c_1 + (i_preg_w2c_9 * (_INT32)(16U))])) != 0U)
                          {
                            (inUse_w2c_16)[(_INT64)(i_preg_w2c_9)] = 1U;
                          }
                        }
                      }
                      for(i_preg = 0U; i_preg <= (_INT32)(15U); i_preg = i_preg + (_INT32)(1U))
                      {
                        if((_UINT32)((inUse_w2c_16)[(_INT64)(i_preg)]) != 0U)
                        {
                          bsW(s, (_INT32) 1U, 1U);
                        }
                        else
                        {
                          bsW(s, (_INT32) 1U, 0U);
                        }
                      }
                      for(i_preg_w2c_0 = 0U; i_preg_w2c_0 <= (_INT32)(15U); i_preg_w2c_0 = i_preg_w2c_0 + (_INT32)(1U))
                      {
                        if((_UINT32)((inUse_w2c_16)[(_INT64)(i_preg_w2c_0)]) != 0U)
                        {
                          for(j_preg = 0U; j_preg <= (_INT32)(15U); j_preg = j_preg + (_INT32)(1U))
                          {
                            if((_UINT32)(*(_UINT8 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 128U))[j_preg + (i_preg_w2c_0 * (_INT32)(16U))])) != 0U)
                            {
                              bsW(s, (_INT32) 1U, 1U);
                            }
                            else
                            {
                              bsW(s, (_INT32) 1U, 0U);
                            }
                          }
                        }
                      }
                      if((s) -> verbosity > (_INT32)(2U))
                      {
                        fprintf(stderr, "      bytes: mapping %d, ", (s) -> numZ - nBytes);
                      }
                      nBytes = (s) -> numZ;
                      bsW(s, (_INT32) 3U, (_UINT32) nGroups);
                      bsW(s, (_INT32) 15U, (_UINT32) nSelectors);
                      for(i_preg_w2c_1 = 0U; i_preg_w2c_1 <= (nSelectors + -1); i_preg_w2c_1 = i_preg_w2c_1 + (_INT32)(1U))
                      {
                        j_preg_w2c_0 = 0U;
                        while(j_preg_w2c_0 < (_INT32) * (_UINT8 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 19706U))[(_INT64)(i_preg_w2c_1)]))
                        {
                          bsW(s, (_INT32) 1U, 1U);
                          j_preg_w2c_0 = j_preg_w2c_0 + (_INT32)(1U);
                        }
                        bsW(s, (_INT32) 1U, 0U);
                      }
                      if((s) -> verbosity > (_INT32)(2U))
                      {
                        fprintf(stderr, "selectors %d, ", (s) -> numZ - nBytes);
                      }
                      nBytes = (s) -> numZ;
                      for(t_preg = 0U; t_preg <= ((_INT32)((_UINT32) nGroups) + -1); t_preg = t_preg + (_INT32)(1U))
                      {
                        curr = (_INT32) * (_UINT8 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 37708U))[(_INT64)(t_preg)][0U]);
                        bsW(s, (_INT32) 5U, (_UINT32) curr);
                        for(i_preg_w2c_2 = 0U; i_preg_w2c_2 <= (alphaSize + -1); i_preg_w2c_2 = i_preg_w2c_2 + (_INT32)(1U))
                        {
                          curr_preg = 0U;
                          while((_INT32) * (_UINT8 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 37708U))[(_INT64)(t_preg)][(_INT64)(i_preg_w2c_2)]) > (curr + curr_preg))
                          {
                            bsW(s, (_INT32) 2U, 2U);
                            curr_preg = curr_preg + (_INT32)(1U);
                          }
                          curr = curr + curr_preg;
                          curr_preg_w2c_0 = 0U;
                          while((_INT32) * (_UINT8 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 37708U))[(_INT64)(t_preg)][(_INT64)(i_preg_w2c_2)]) < (curr - curr_preg_w2c_0))
                          {
                            bsW(s, (_INT32) 2U, 3U);
                            curr_preg_w2c_0 = curr_preg_w2c_0 + (_INT32)(1U);
                          }
                          curr = curr - curr_preg_w2c_0;
                          bsW(s, (_INT32) 1U, 0U);
                        }
                      }
                      if((s) -> verbosity > (_INT32)(2U))
                      {
                        fprintf(stderr, "code lengths %d, ", (s) -> numZ - nBytes);
                      }
                      nBytes = (s) -> numZ;
                      selCtr = 0U;
                      gs = 0U;
                      _93442 :;
                      if((s) -> nMTF <= (_INT32)((_UINT64) gs))
                        goto _26370;
                      ge = (_INT32)((_UINT64) gs) + (_INT32)(49U);
                      if((s) -> nMTF <= ((_INT32)((_UINT64) gs) + (_INT32)(49U)))
                      {
                        ge = (s) -> nMTF + -1;
                      }
                      if((_INT32) * (_UINT8 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 1704U))[selCtr]) >= (_INT32)((_UINT32) nGroups))
                      {
                        BZ2_bz__AssertH__fail((_INT32) 3006U);
                      }
                      if(((_INT32)((_UINT32) nGroups) == (_INT32)(6U)) && ((ge - (_INT32)((_UINT64) gs)) == (_INT32)(49U)))
                      {
                        s_len_sel_selCtr = (_UINT8 *)((struct anonymous_w2c_3 *)((_UINT8 *)((struct anonymous_w2c_3 *)((_UINT8 *)(s) + ((_UINT64) * (_UINT8 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 1704U))[selCtr]) * 258U))) + 37708U));
                        s_code_sel_selCtr = (_INT32 *)((struct anonymous_w2c_3 *)((_UINT8 *)((struct anonymous_w2c_3 *)((_UINT8 *)(s) + ((_UINT64) * (_UINT8 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 1704U))[selCtr]) * 1032U))) + 39256U));
                        mtfv_i = *(mtfv + (_UINT64) gs);
                        bsW(s, (_INT32) * (mtfv_i + s_len_sel_selCtr), (_UINT32) * (s_code_sel_selCtr + mtfv_i));
                        mtfv_i = *((mtfv + (_UINT64) gs) + 1LL);
                        bsW(s, (_INT32) * (mtfv_i + s_len_sel_selCtr), (_UINT32) * (s_code_sel_selCtr + mtfv_i));
                        mtfv_i = *((mtfv + (_UINT64) gs) + 2LL);
                        bsW(s, (_INT32) * (mtfv_i + s_len_sel_selCtr), (_UINT32) * (s_code_sel_selCtr + mtfv_i));
                        mtfv_i = *((mtfv + (_UINT64) gs) + 3LL);
                        bsW(s, (_INT32) * (mtfv_i + s_len_sel_selCtr), (_UINT32) * (s_code_sel_selCtr + mtfv_i));
                        mtfv_i = *((mtfv + (_UINT64) gs) + 4LL);
                        bsW(s, (_INT32) * (mtfv_i + s_len_sel_selCtr), (_UINT32) * (s_code_sel_selCtr + mtfv_i));
                        mtfv_i = *((mtfv + (_UINT64) gs) + 5LL);
                        bsW(s, (_INT32) * (mtfv_i + s_len_sel_selCtr), (_UINT32) * (s_code_sel_selCtr + mtfv_i));
                        mtfv_i = *((mtfv + (_UINT64) gs) + 6LL);
                        bsW(s, (_INT32) * (mtfv_i + s_len_sel_selCtr), (_UINT32) * (s_code_sel_selCtr + mtfv_i));
                        mtfv_i = *((mtfv + (_UINT64) gs) + 7LL);
                        bsW(s, (_INT32) * (mtfv_i + s_len_sel_selCtr), (_UINT32) * (s_code_sel_selCtr + mtfv_i));
                        mtfv_i = *((mtfv + (_UINT64) gs) + 8LL);
                        bsW(s, (_INT32) * (mtfv_i + s_len_sel_selCtr), (_UINT32) * (s_code_sel_selCtr + mtfv_i));
                        mtfv_i = *((mtfv + (_UINT64) gs) + 9LL);
                        bsW(s, (_INT32) * (mtfv_i + s_len_sel_selCtr), (_UINT32) * (s_code_sel_selCtr + mtfv_i));
                        mtfv_i = *((mtfv + (_UINT64) gs) + 10LL);
                        bsW(s, (_INT32) * (mtfv_i + s_len_sel_selCtr), (_UINT32) * (s_code_sel_selCtr + mtfv_i));
                        mtfv_i = *((mtfv + (_UINT64) gs) + 11LL);
                        bsW(s, (_INT32) * (mtfv_i + s_len_sel_selCtr), (_UINT32) * (s_code_sel_selCtr + mtfv_i));
                        mtfv_i = *((mtfv + (_UINT64) gs) + 12LL);
                        bsW(s, (_INT32) * (mtfv_i + s_len_sel_selCtr), (_UINT32) * (s_code_sel_selCtr + mtfv_i));
                        mtfv_i = *((mtfv + (_UINT64) gs) + 13LL);
                        bsW(s, (_INT32) * (mtfv_i + s_len_sel_selCtr), (_UINT32) * (s_code_sel_selCtr + mtfv_i));
                        mtfv_i = *((mtfv + (_UINT64) gs) + 14LL);
                        bsW(s, (_INT32) * (mtfv_i + s_len_sel_selCtr), (_UINT32) * (s_code_sel_selCtr + mtfv_i));
                        mtfv_i = *((mtfv + (_UINT64) gs) + 15LL);
                        bsW(s, (_INT32) * (mtfv_i + s_len_sel_selCtr), (_UINT32) * (s_code_sel_selCtr + mtfv_i));
                        mtfv_i = *((mtfv + (_UINT64) gs) + 16LL);
                        n_w2c_2 = (_INT32) * (mtfv_i + s_len_sel_selCtr);
                        v_w2c_3 = (_UINT32) * (s_code_sel_selCtr + mtfv_i);
                        while((s) -> bsLive > (_INT32)(7U))
                        {
                          * ((s) -> numZ + (s) -> zbits) = _U4LSHR((s) -> bsBuff, 24U);
                          (s) -> numZ = (s) -> numZ + (_INT32)(1U);
                          (s) -> bsBuff = _U4SHL((s) -> bsBuff, 8U);
                          (s) -> bsLive = (s) -> bsLive + -8;
                        }
                        (s) -> bsBuff = (s) -> bsBuff | _U4SHL(v_w2c_3, (_UINT32)((_INT32)(32U) - ((s) -> bsLive + n_w2c_2)));
                        (s) -> bsLive = (s) -> bsLive + n_w2c_2;
                        mtfv_i = *((mtfv + (_UINT64) gs) + 17LL);
                        n_w2c_1 = (_INT32) * (mtfv_i + s_len_sel_selCtr);
                        v_w2c_2 = (_UINT32) * (s_code_sel_selCtr + mtfv_i);
                        while((s) -> bsLive > (_INT32)(7U))
                        {
                          * ((s) -> numZ + (s) -> zbits) = _U4LSHR((s) -> bsBuff, 24U);
                          (s) -> numZ = (s) -> numZ + (_INT32)(1U);
                          (s) -> bsBuff = _U4SHL((s) -> bsBuff, 8U);
                          (s) -> bsLive = (s) -> bsLive + -8;
                        }
                        (s) -> bsBuff = (s) -> bsBuff | _U4SHL(v_w2c_2, (_UINT32)((_INT32)(32U) - ((s) -> bsLive + n_w2c_1)));
                        (s) -> bsLive = (s) -> bsLive + n_w2c_1;
                        mtfv_i = *((mtfv + (_UINT64) gs) + 18LL);
                        n_w2c_0 = (_INT32) * (mtfv_i + s_len_sel_selCtr);
                        v_w2c_1 = (_UINT32) * (s_code_sel_selCtr + mtfv_i);
                        while((s) -> bsLive > (_INT32)(7U))
                        {
                          * ((s) -> numZ + (s) -> zbits) = _U4LSHR((s) -> bsBuff, 24U);
                          (s) -> numZ = (s) -> numZ + (_INT32)(1U);
                          (s) -> bsBuff = _U4SHL((s) -> bsBuff, 8U);
                          (s) -> bsLive = (s) -> bsLive + -8;
                        }
                        (s) -> bsBuff = (s) -> bsBuff | _U4SHL(v_w2c_1, (_UINT32)((_INT32)(32U) - ((s) -> bsLive + n_w2c_0)));
                        (s) -> bsLive = (s) -> bsLive + n_w2c_0;
                        mtfv_i = *((mtfv + (_UINT64) gs) + 19LL);
                        bsW(s, (_INT32) * (mtfv_i + s_len_sel_selCtr), (_UINT32) * (s_code_sel_selCtr + mtfv_i));
                        mtfv_i = *((mtfv + (_UINT64) gs) + 20LL);
                        bsW(s, (_INT32) * (mtfv_i + s_len_sel_selCtr), (_UINT32) * (s_code_sel_selCtr + mtfv_i));
                        mtfv_i = *((mtfv + (_UINT64) gs) + 21LL);
                        bsW(s, (_INT32) * (mtfv_i + s_len_sel_selCtr), (_UINT32) * (s_code_sel_selCtr + mtfv_i));
                        mtfv_i = *((mtfv + (_UINT64) gs) + 22LL);
                        bsW(s, (_INT32) * (mtfv_i + s_len_sel_selCtr), (_UINT32) * (s_code_sel_selCtr + mtfv_i));
                        mtfv_i = *((mtfv + (_UINT64) gs) + 23LL);
                        bsW(s, (_INT32) * (mtfv_i + s_len_sel_selCtr), (_UINT32) * (s_code_sel_selCtr + mtfv_i));
                        mtfv_i = *((mtfv + (_UINT64) gs) + 24LL);
                        bsW(s, (_INT32) * (mtfv_i + s_len_sel_selCtr), (_UINT32) * (s_code_sel_selCtr + mtfv_i));
                        mtfv_i = *((mtfv + (_UINT64) gs) + 25LL);
                        bsW(s, (_INT32) * (mtfv_i + s_len_sel_selCtr), (_UINT32) * (s_code_sel_selCtr + mtfv_i));
                        mtfv_i = *((mtfv + (_UINT64) gs) + 26LL);
                        bsW(s, (_INT32) * (mtfv_i + s_len_sel_selCtr), (_UINT32) * (s_code_sel_selCtr + mtfv_i));
                        mtfv_i = *((mtfv + (_UINT64) gs) + 27LL);
                        bsW(s, (_INT32) * (mtfv_i + s_len_sel_selCtr), (_UINT32) * (s_code_sel_selCtr + mtfv_i));
                        mtfv_i = *((mtfv + (_UINT64) gs) + 28LL);
                        bsW(s, (_INT32) * (mtfv_i + s_len_sel_selCtr), (_UINT32) * (s_code_sel_selCtr + mtfv_i));
                        mtfv_i = *((mtfv + (_UINT64) gs) + 29LL);
                        bsW(s, (_INT32) * (mtfv_i + s_len_sel_selCtr), (_UINT32) * (s_code_sel_selCtr + mtfv_i));
                        mtfv_i = *((mtfv + (_UINT64) gs) + 30LL);
                        bsW(s, (_INT32) * (mtfv_i + s_len_sel_selCtr), (_UINT32) * (s_code_sel_selCtr + mtfv_i));
                        mtfv_i = *((mtfv + (_UINT64) gs) + 31LL);
                        bsW(s, (_INT32) * (mtfv_i + s_len_sel_selCtr), (_UINT32) * (s_code_sel_selCtr + mtfv_i));
                        mtfv_i = *((mtfv + (_UINT64) gs) + 32LL);
                        bsW(s, (_INT32) * (mtfv_i + s_len_sel_selCtr), (_UINT32) * (s_code_sel_selCtr + mtfv_i));
                        mtfv_i = *((mtfv + (_UINT64) gs) + 33LL);
                        bsW(s, (_INT32) * (mtfv_i + s_len_sel_selCtr), (_UINT32) * (s_code_sel_selCtr + mtfv_i));
                        mtfv_i = *((mtfv + (_UINT64) gs) + 34LL);
                        bsW(s, (_INT32) * (mtfv_i + s_len_sel_selCtr), (_UINT32) * (s_code_sel_selCtr + mtfv_i));
                        mtfv_i = *((mtfv + (_UINT64) gs) + 35LL);
                        bsW(s, (_INT32) * (mtfv_i + s_len_sel_selCtr), (_UINT32) * (s_code_sel_selCtr + mtfv_i));
                        mtfv_i = *((mtfv + (_UINT64) gs) + 36LL);
                        bsW(s, (_INT32) * (mtfv_i + s_len_sel_selCtr), (_UINT32) * (s_code_sel_selCtr + mtfv_i));
                        mtfv_i = *((mtfv + (_UINT64) gs) + 37LL);
                        bsW(s, (_INT32) * (mtfv_i + s_len_sel_selCtr), (_UINT32) * (s_code_sel_selCtr + mtfv_i));
                        mtfv_i = *((mtfv + (_UINT64) gs) + 38LL);
                        bsW(s, (_INT32) * (mtfv_i + s_len_sel_selCtr), (_UINT32) * (s_code_sel_selCtr + mtfv_i));
                        mtfv_i = *((mtfv + (_UINT64) gs) + 39LL);
                        bsW(s, (_INT32) * (mtfv_i + s_len_sel_selCtr), (_UINT32) * (s_code_sel_selCtr + mtfv_i));
                        mtfv_i = *((mtfv + (_UINT64) gs) + 40LL);
                        bsW(s, (_INT32) * (mtfv_i + s_len_sel_selCtr), (_UINT32) * (s_code_sel_selCtr + mtfv_i));
                        mtfv_i = *((mtfv + (_UINT64) gs) + 41LL);
                        bsW(s, (_INT32) * (mtfv_i + s_len_sel_selCtr), (_UINT32) * (s_code_sel_selCtr + mtfv_i));
                        mtfv_i = *((mtfv + (_UINT64) gs) + 42LL);
                        bsW(s, (_INT32) * (mtfv_i + s_len_sel_selCtr), (_UINT32) * (s_code_sel_selCtr + mtfv_i));
                        mtfv_i = *((mtfv + (_UINT64) gs) + 43LL);
                        bsW(s, (_INT32) * (mtfv_i + s_len_sel_selCtr), (_UINT32) * (s_code_sel_selCtr + mtfv_i));
                        mtfv_i = *((mtfv + (_UINT64) gs) + 44LL);
                        bsW(s, (_INT32) * (mtfv_i + s_len_sel_selCtr), (_UINT32) * (s_code_sel_selCtr + mtfv_i));
                        mtfv_i = *((mtfv + (_UINT64) gs) + 45LL);
                        bsW(s, (_INT32) * (mtfv_i + s_len_sel_selCtr), (_UINT32) * (s_code_sel_selCtr + mtfv_i));
                        mtfv_i = *((mtfv + (_UINT64) gs) + 46LL);
                        bsW(s, (_INT32) * (mtfv_i + s_len_sel_selCtr), (_UINT32) * (s_code_sel_selCtr + mtfv_i));
                        mtfv_i = *((mtfv + (_UINT64) gs) + 47LL);
                        bsW(s, (_INT32) * (mtfv_i + s_len_sel_selCtr), (_UINT32) * (s_code_sel_selCtr + mtfv_i));
                        mtfv_i = *((mtfv + (_UINT64) gs) + 48LL);
                        bsW(s, (_INT32) * (mtfv_i + s_len_sel_selCtr), (_UINT32) * (s_code_sel_selCtr + mtfv_i));
                        mtfv_i = *((mtfv + (_UINT64) gs) + 49LL);
                        bsW(s, (_INT32) * (mtfv_i + s_len_sel_selCtr), (_UINT32) * (s_code_sel_selCtr + mtfv_i));
                      }
                      else
                      {
                        for(i_preg_w2c_3 = 0U; i_preg_w2c_3 <= (ge - (_INT32)((_UINT64) gs)); i_preg_w2c_3 = i_preg_w2c_3 + (_INT32)(1U))
                        {
                          bsW(s, (_INT32) * (_UINT8 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 37708U))[(_INT32) * (_UINT8 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 1704U))[selCtr])][(_INT32)(mtfv)[(_INT64)((_INT32)((_UINT64) gs) + i_preg_w2c_3)]]), (_UINT32) * (_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 39256U))[(_INT32) * (_UINT8 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 1704U))[selCtr])][(_INT32)(mtfv)[(_INT64)((_INT32)((_UINT64) gs) + i_preg_w2c_3)]]));
                        }
                      }
                      gs = ge + (_INT32)(1U);
                      selCtr = selCtr + (_INT32)(1U);
                      goto _93442;
                      _26370 :;
                      if(nSelectors != selCtr)
                      {
                        BZ2_bz__AssertH__fail((_INT32) 3007U);
                      }
                      if((s) -> verbosity > (_INT32)(2U))
                      {
                        fprintf(stderr, "codes %d\n", (s) -> numZ - nBytes);
                      }
                      return;
                    } /* sendMTFValues */

                    
                    extern void BZ2_compressBlock(
                      struct anonymous_w2c_3 * s,
                      _UINT8 is_last_block)
                    {
                      
                      _UINT32 v_w2c_0;
                      
                      if((s) -> nblock > (_INT32)(0U))
                      {
                        (s) -> blockCRC =~(s) -> blockCRC;
                        (s) -> combinedCRC = _U4LSHR((s) -> combinedCRC, 31U) | _U4SHL((s) -> combinedCRC, 1U);
                        (s) -> combinedCRC = (s) -> blockCRC^(s) -> combinedCRC;
                        if((s) -> blockNo > (_INT32)(1U))
                        {
                          (s) -> numZ = 0U;
                        }
                        if((s) -> verbosity > (_INT32)(1U))
                        {
                          fprintf(stderr, "    block %d: crc = 0x%08x, combined CRC = 0x%08x, size = %d\n", (s) -> blockNo, (s) -> blockCRC, (s) -> combinedCRC, (s) -> nblock);
                        }
                        BZ2_blockSort(s);
                      }
                      (s) -> zbits = (_UINT8 *)((_UINT32 *)((s) -> nblock + (_UINT8 *)((s) -> arr2)));
                      if((s) -> blockNo == (_INT32)(1U))
                      {
                        BZ2_bsInitWrite(s);
                        bsPutUChar(s, (_UINT8) 66U);
                        bsPutUChar(s, (_UINT8) 90U);
                        bsPutUChar(s, (_UINT8) 104U);
                        bsPutUChar(s, (_UINT8)((_UINT32)((s) -> blockSize100k) + 48U));
                      }
                      if((s) -> nblock > (_INT32)(0U))
                      {
                        bsPutUChar(s, (_UINT8) 49U);
                        bsPutUChar(s, (_UINT8) 65U);
                        bsPutUChar(s, (_UINT8) 89U);
                        bsPutUChar(s, (_UINT8) 38U);
                        bsPutUChar(s, (_UINT8) 83U);
                        bsPutUChar(s, (_UINT8) 89U);
                        bsPutUInt32(s, (s) -> blockCRC);
                        while((s) -> bsLive > (_INT32)(7U))
                        {
                          _1282 :;
                          * ((s) -> numZ + (s) -> zbits) = _U4LSHR((s) -> bsBuff, 24U);
                          (s) -> numZ = (s) -> numZ + (_INT32)(1U);
                          (s) -> bsBuff = _U4SHL((s) -> bsBuff, 8U);
                          (s) -> bsLive = (s) -> bsLive + -8;
                        }
                        _1538 :;
                        (s) -> bsBuff = (s) -> bsBuff | _U4SHL(0U, (_UINT32)((_INT32)(31U) - (s) -> bsLive));
                        (s) -> bsLive = (s) -> bsLive + (_INT32)(1U);
                        v_w2c_0 = (s) -> origPtr;
                        while((s) -> bsLive > (_INT32)(7U))
                        {
                          _514 :;
                          * ((s) -> numZ + (s) -> zbits) = _U4LSHR((s) -> bsBuff, 24U);
                          (s) -> numZ = (s) -> numZ + (_INT32)(1U);
                          (s) -> bsBuff = _U4SHL((s) -> bsBuff, 8U);
                          (s) -> bsLive = (s) -> bsLive + -8;
                        }
                        _770 :;
                        (s) -> bsBuff = (s) -> bsBuff | _U4SHL(v_w2c_0, (_UINT32)((_INT32)(8U) - (s) -> bsLive));
                        (s) -> bsLive = (s) -> bsLive + (_INT32)(24U);
                        generateMTFValues(s);
                        sendMTFValues(s);
                      }
                      if((_UINT32)(is_last_block) != 0U)
                      {
                        bsPutUChar(s, (_UINT8) 23U);
                        bsPutUChar(s, (_UINT8) 114U);
                        bsPutUChar(s, (_UINT8) 69U);
                        bsPutUChar(s, (_UINT8) 56U);
                        bsPutUChar(s, (_UINT8) 80U);
                        bsPutUChar(s, (_UINT8) 144U);
                        bsPutUInt32(s, (s) -> combinedCRC);
                        if((s) -> verbosity > (_INT32)(1U))
                        {
                          fprintf(stderr, "    final combined CRC = 0x%08x\n   ", (s) -> combinedCRC);
                        }
                        bsFinishWrite(s);
                      }
                      return;
                    } /* BZ2_compressBlock */

                    