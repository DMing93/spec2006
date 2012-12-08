/*******************************************************
 * C file translated from WHIRL Sat Dec  8 10:35:29 2012
 *******************************************************/

/* Include file-level type and variable decls */
#include "decompress.w2c.h"


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


static void makeMaps_d(
  struct anonymous_w2c_3 * s)
{
  
  register _INT32 i_preg;
  
  (s) -> nInUse = 0U;
  for(i_preg = 0U; i_preg <= (_INT32)(255U); i_preg = i_preg + (_INT32)(1U))
  {
    if((_UINT32)(*(_UINT8 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 3196U))[(_INT64)(i_preg)])) != 0U)
    {
      * (_UINT8 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 3468U))[*(_INT32 *)(&(s)[798LL])]) = i_preg;
      * (_INT32 *)(&(s)[798LL]) = *(_INT32 *)(&(s)[798LL]) + (_INT32)(1U);
    }
  }
  return;
} /* makeMaps_d */


extern _INT32 BZ2_decompress(
  struct anonymous_w2c_3 * s)
{
  
    register _UINT64 __comma_preg;
  register _UINT64 __comma_preg_w2c_0;
  register _UINT64 __comma_preg_w2c_1;
  register _INT32 i_preg;
  register _INT32 i_preg_w2c_9;
  register _INT32 i_preg_w2c_0;
  register _INT32 t_preg;
  register _INT32 i_preg_w2c_1;
  register _INT32 i_preg_w2c_2;
  register _INT32 ii_preg;
  register _INT32 jj_preg;
  register _INT32 _temp_8_preg;
  register _INT32 _temp_9_preg;
  register _INT32 es_preg;
  register _INT32 _temp_10_preg;
  register _INT32 _temp_11_preg;
  register _INT32 es_preg_w2c_0;
  register _INT32 whiledo_var_preg;
  register _INT32 lno_preg;
  register _INT32 ii_preg_w2c_0;
  register _INT32 jj_preg_w2c_0;
  register _INT32 i_preg_w2c_3;
  register _INT32 i_preg_w2c_4;
  register _INT32 i_preg_w2c_5;
  register _INT32 i_preg_w2c_6;
  register _INT32 i_preg_w2c_7;
  register _INT32 __comma_preg_w2c_2;
  register _INT32 __comma_preg_w2c_3;
  register _INT32 i_preg_w2c_10;
  register _INT32 i_preg_w2c_8;
  _UINT8 uc;
  _INT32 retVal;
  _INT32 minLen;
  _INT32 maxLen;
  struct anonymous_w2c_17 * strm;
  _INT32 i;
  _INT32 j;
  _INT32 t;
  _INT32 alphaSize;
  _INT32 nGroups;
  _INT32 nSelectors;
  _INT32 EOB;
  _INT32 groupNo;
  _INT32 groupPos;
  _INT32 nextSym;
  _INT32 nblockMAX;
  _INT32 nblock;
  _INT32 es;
  _INT32 N;
  _INT32 curr;
  _INT32 zt;
  _INT32 zn;
  _INT32 zvec;
  _INT32 zj;
  _INT32 gSel;
  _INT32 gMinlen;
  _INT32 * gLimit;
  _INT32 * gBase;
  _INT32 * gPerm;
  _INT32 _temp__switch_index0;
  _UINT32 v;
  _UINT32 v_w2c_0;
  _UINT32 v_w2c_1;
  _UINT32 v_w2c_2;
  _UINT32 v_w2c_3;
  _UINT32 v_w2c_4;
  _UINT32 v_w2c_5;
  _UINT32 v_w2c_6;
  _UINT32 v_w2c_7;
  _UINT32 v_w2c_8;
  _UINT32 v_w2c_9;
  _UINT32 v_w2c_10;
  _UINT32 v_w2c_11;
  _UINT32 v_w2c_12;
  _UINT32 v_w2c_13;
  _UINT32 v_w2c_14;
  _UINT32 v_w2c_15;
  _UINT32 v_w2c_16;
  _UINT32 v_w2c_17;
  _UINT32 v_w2c_18;
  _UINT32 v_w2c_19;
  _UINT32 v_w2c_20;
  _UINT32 v_w2c_21;
  _UINT8 pos[6LL];
  _UINT8 tmp;
  _UINT8 v_w2c_22;
  _UINT32 v_w2c_23;
  _UINT32 v_w2c_24;
  _UINT32 v_w2c_25;
  _UINT32 v_w2c_26;
  _UINT32 v_w2c_27;
  _UINT32 v_w2c_28;
  _UINT32 v_w2c_29;
  _INT32 pp;
  _INT32 lno;
  _UINT32 nn;
  _UINT32 v_w2c_30;
  _UINT32 v_w2c_31;
  _INT32 tmp_w2c_0;
  _UINT32 v_w2c_32;
  _UINT32 v_w2c_33;
  _UINT32 v_w2c_34;
  _UINT32 v_w2c_35;
  _UINT32 v_w2c_36;
  _UINT32 v_w2c_37;
  _UINT32 v_w2c_38;
  _UINT32 v_w2c_39;
  _UINT32 v_w2c_40;
  
  strm = (s) -> strm;
  if((s) -> state == (_INT32)(10U))
  {
    * (((_INT32 *)(s) + 16384U) + -375LL) = 0U;
    * (((_INT32 *)(s) + 16384U) + -374LL) = 0U;
    * (((_INT32 *)(s) + 16384U) + -373LL) = 0U;
    * (((_INT32 *)(s) + 16384U) + -372LL) = 0U;
    * (((_INT32 *)(s) + 16384U) + -371LL) = 0U;
    * (((_INT32 *)(s) + 16384U) + -370LL) = 0U;
    * (((_INT32 *)(s) + 16384U) + -369LL) = 0U;
    * (((_INT32 *)(s) + 16384U) + -368LL) = 0U;
    * (((_INT32 *)(s) + 16384U) + -367LL) = 0U;
    * (((_INT32 *)(s) + 16384U) + -366LL) = 0U;
    * (((_INT32 *)(s) + 16384U) + -365LL) = 0U;
    * (((_INT32 *)(s) + 16384U) + -364LL) = 0U;
    * (((_INT32 *)(s) + 16384U) + -363LL) = 0U;
    * (((_INT32 *)(s) + 16384U) + -362LL) = 0U;
    * (((_INT32 *)(s) + 16384U) + -361LL) = 0U;
    * (((_INT32 *)(s) + 16384U) + -360LL) = 0U;
    * (((_INT32 *)(s) + 16384U) + -359LL) = 0U;
    * (((_INT32 *)(s) + 16384U) + -358LL) = 0U;
    * (((_INT32 *)(s) + 16384U) + -357LL) = 0U;
    * (((_INT32 *)(s) + 16384U) + -356LL) = 0U;
    * (((_INT32 *)(s) + 16384U) + -355LL) = 0U;
    * (((_INT32 **)(s) + 8192U) + -177LL) = (_INT32 *)(0ULL);
    * (((_INT32 **)(s) + 8192U) + -176LL) = (_INT32 *)(0ULL);
    * (((_INT32 **)(s) + 8192U) + -175LL) = (_INT32 *)(0ULL);
  }
  i = *(((_INT32 *)(s) + 16384U) + -375LL);
  j = *(((_INT32 *)(s) + 16384U) + -374LL);
  t = *(((_INT32 *)(s) + 16384U) + -373LL);
  alphaSize = *(((_INT32 *)(s) + 16384U) + -372LL);
  nGroups = *(((_INT32 *)(s) + 16384U) + -371LL);
  nSelectors = *(((_INT32 *)(s) + 16384U) + -370LL);
  EOB = *(((_INT32 *)(s) + 16384U) + -369LL);
  groupNo = *(((_INT32 *)(s) + 16384U) + -368LL);
  groupPos = *(((_INT32 *)(s) + 16384U) + -367LL);
  nextSym = *(((_INT32 *)(s) + 16384U) + -366LL);
  nblockMAX = *(((_INT32 *)(s) + 16384U) + -365LL);
  nblock = *(((_INT32 *)(s) + 16384U) + -364LL);
  es = *(((_INT32 *)(s) + 16384U) + -363LL);
  N = *(((_INT32 *)(s) + 16384U) + -362LL);
  curr = *(((_INT32 *)(s) + 16384U) + -361LL);
  zt = *(((_INT32 *)(s) + 16384U) + -360LL);
  zn = *(((_INT32 *)(s) + 16384U) + -359LL);
  zvec = *(((_INT32 *)(s) + 16384U) + -358LL);
  zj = *(((_INT32 *)(s) + 16384U) + -357LL);
  gSel = *(((_INT32 *)(s) + 16384U) + -356LL);
  gMinlen = *(((_INT32 *)(s) + 16384U) + -355LL);
  gLimit = *(((_INT32 **)(s) + 8192U) + -177LL);
  gBase = *(((_INT32 **)(s) + 8192U) + -176LL);
  gPerm = *(((_INT32 **)(s) + 8192U) + -175LL);
  retVal = 0U;
  _temp__switch_index0 = (s) -> state;
  switch((_INT64)(_temp__switch_index0) + -10LL)
  {
  case 0LL :
    goto _258;
  case 1LL :
    goto _1282;
  case 2LL :
    goto _2050;
  case 3LL :
    goto _2818;
  case 4LL :
    goto _3586;
  case 5LL :
    goto _4610;
  case 6LL :
    goto _5378;
  case 7LL :
    goto _6146;
  case 8LL :
    goto _6914;
  case 9LL :
    goto _7682;
  case 10LL :
    goto _8450;
  case 11LL :
    goto _9218;
  case 12LL :
    goto _9986;
  case 13LL :
    goto _10754;
  case 14LL :
    goto _11522;
  case 15LL :
    goto _12290;
  case 16LL :
    goto _13058;
  case 17LL :
    goto _13826;
  case 18LL :
    goto _15106;
  case 19LL :
    goto _17922;
  case 20LL :
    goto _19202;
  case 21LL :
    goto _19970;
  case 22LL :
    goto _21506;
  case 23LL :
    goto _25602;
  case 24LL :
    goto _27138;
  case 25LL :
    goto _28162;
  case 26LL :
    goto _33282;
  case 27LL :
    goto _34562;
  case 28LL :
    goto _36098;
  case 29LL :
    goto _37378;
  case 30LL :
    goto _44802;
  case 31LL :
    goto _46082;
  case 32LL :
    goto _51970;
  case 33LL :
    goto _52738;
  case 34LL :
    goto _53506;
  case 35LL :
    goto _54274;
  case 36LL :
    goto _55042;
  case 37LL :
    goto _55810;
  case 38LL :
    goto _56578;
  case 39LL :
    goto _57346;
  case 40LL :
    goto _58114;
  default :
    goto _58882;
  }
  _258 :;
  (s) -> state = 10U;
  _220162 :;
  if((s) -> bsLive > (_INT32)(7U))
  {
    v = _U4LSHR((s) -> bsBuff, (_UINT32)((s) -> bsLive + -8)) & 255U;
    (s) -> bsLive = (s) -> bsLive + -8;
    goto _770;
  }
  else
  {
    if(((s) -> strm) -> avail_in == 0U)
    {
      retVal = 0U;
      goto _1026;
    }
    else
    {
      (s) -> bsBuff = (_UINT32) * (_UINT8 *)(((s) -> strm) -> next_in) | _U4SHL((s) -> bsBuff, 8U);
      (s) -> bsLive = (s) -> bsLive + (_INT32)(8U);
      ((s) -> strm) -> next_in = ((s) -> strm) -> next_in + 1U;
      ((s) -> strm) -> avail_in = ((s) -> strm) -> avail_in + (_UINT32)(-1);
      ((s) -> strm) -> total_in_lo32 = ((s) -> strm) -> total_in_lo32 + 1U;
      if(((s) -> strm) -> total_in_lo32 == 0U)
      {
        ((s) -> strm) -> total_in_hi32 = ((s) -> strm) -> total_in_hi32 + 1U;
      }
    }
  }
  goto _220162;
  _770 :;
  if(!(v != 66U))
    goto _211458;
  retVal = -5LL;
  goto _211202;
  _211458 :;
  _1282 :;
  (s) -> state = 11U;
  _221186 :;
  if((s) -> bsLive > (_INT32)(7U))
  {
    v_w2c_0 = _U4LSHR((s) -> bsBuff, (_UINT32)((s) -> bsLive + -8)) & 255U;
    (s) -> bsLive = (s) -> bsLive + -8;
    goto _1794;
  }
  else
  {
    if(((s) -> strm) -> avail_in == 0U)
    {
      retVal = 0U;
      goto _1026;
    }
    else
    {
      (s) -> bsBuff = (_UINT32) * (_UINT8 *)(((s) -> strm) -> next_in) | _U4SHL((s) -> bsBuff, 8U);
      (s) -> bsLive = (s) -> bsLive + (_INT32)(8U);
      ((s) -> strm) -> next_in = ((s) -> strm) -> next_in + 1U;
      ((s) -> strm) -> avail_in = ((s) -> strm) -> avail_in + (_UINT32)(-1);
      ((s) -> strm) -> total_in_lo32 = ((s) -> strm) -> total_in_lo32 + 1U;
      if(((s) -> strm) -> total_in_lo32 == 0U)
      {
        ((s) -> strm) -> total_in_hi32 = ((s) -> strm) -> total_in_hi32 + 1U;
      }
    }
  }
  goto _221186;
  _1794 :;
  if(!(v_w2c_0 != 90U))
    goto _210946;
  retVal = -5LL;
  goto _210690;
  _210946 :;
  _2050 :;
  (s) -> state = 12U;
  _222210 :;
  if((s) -> bsLive > (_INT32)(7U))
  {
    v_w2c_1 = _U4LSHR((s) -> bsBuff, (_UINT32)((s) -> bsLive + -8)) & 255U;
    (s) -> bsLive = (s) -> bsLive + -8;
    goto _2562;
  }
  else
  {
    if(((s) -> strm) -> avail_in == 0U)
    {
      retVal = 0U;
      goto _1026;
    }
    else
    {
      (s) -> bsBuff = (_UINT32) * (_UINT8 *)(((s) -> strm) -> next_in) | _U4SHL((s) -> bsBuff, 8U);
      (s) -> bsLive = (s) -> bsLive + (_INT32)(8U);
      ((s) -> strm) -> next_in = ((s) -> strm) -> next_in + 1U;
      ((s) -> strm) -> avail_in = ((s) -> strm) -> avail_in + (_UINT32)(-1);
      ((s) -> strm) -> total_in_lo32 = ((s) -> strm) -> total_in_lo32 + 1U;
      if(((s) -> strm) -> total_in_lo32 == 0U)
      {
        ((s) -> strm) -> total_in_hi32 = ((s) -> strm) -> total_in_hi32 + 1U;
      }
    }
  }
  goto _222210;
  _2562 :;
  if(!(v_w2c_1 != 104U))
    goto _210434;
  retVal = -5LL;
  goto _210178;
  _210434 :;
  _2818 :;
  (s) -> state = 13U;
  _223234 :;
  if((s) -> bsLive > (_INT32)(7U))
  {
    v_w2c_2 = _U4LSHR((s) -> bsBuff, (_UINT32)((s) -> bsLive + -8)) & 255U;
    (s) -> bsLive = (s) -> bsLive + -8;
    (s) -> blockSize100k = v_w2c_2;
    goto _3330;
  }
  else
  {
    if(((s) -> strm) -> avail_in == 0U)
    {
      retVal = 0U;
      goto _1026;
    }
    else
    {
      (s) -> bsBuff = (_UINT32) * (_UINT8 *)(((s) -> strm) -> next_in) | _U4SHL((s) -> bsBuff, 8U);
      (s) -> bsLive = (s) -> bsLive + (_INT32)(8U);
      ((s) -> strm) -> next_in = ((s) -> strm) -> next_in + 1U;
      ((s) -> strm) -> avail_in = ((s) -> strm) -> avail_in + (_UINT32)(-1);
      ((s) -> strm) -> total_in_lo32 = ((s) -> strm) -> total_in_lo32 + 1U;
      if(((s) -> strm) -> total_in_lo32 == 0U)
      {
        ((s) -> strm) -> total_in_hi32 = ((s) -> strm) -> total_in_hi32 + 1U;
      }
    }
  }
  goto _223234;
  _3330 :;
  if(!((v_w2c_2 + (_UINT32)(-49)) > 8U))
    goto _209922;
  retVal = -5LL;
  goto _209666;
  _209922 :;
  (s) -> blockSize100k = (_INT32)(v_w2c_2) + -48;
  if((_UINT32)((s) -> smallDecompress) != 0U)
  {
    __comma_preg = (_UINT64)(_UINT64)((strm) -> bzalloc)((strm) -> opaque, (_INT32)(((_UINT64)((_INT64)(v_w2c_2)) * (_UINT64)(200000U))) + -9600000, (_INT32) 1U);
    (s) -> ll16 = (_UINT16 *) __comma_preg;
    __comma_preg_w2c_0 = (_UINT64)(_UINT64)((strm) -> bzalloc)((strm) -> opaque, _I4ASHR(((s) -> blockSize100k * (_INT32)(100000U)) + (_INT32)(1U), (_INT32)(1U)), (_INT32) 1U);
    (s) -> ll4 = (_UINT8 *) __comma_preg_w2c_0;
    if(((_UINT64)((s) -> ll16) == (_UINT64)(0U)) || ((_UINT64)((_UINT8 *) __comma_preg_w2c_0) == (_UINT64)(0U)))
    {
      retVal = -3LL;
      goto _1026;
    }
  }
  else
  {
    __comma_preg_w2c_1 = (_UINT64)(_UINT64)((strm) -> bzalloc)((strm) -> opaque, (_INT32)(((_UINT64)((_INT64)(v_w2c_2)) * (_UINT64)(400000U))) + -19200000, (_INT32) 1U);
    (s) -> tt = (_UINT32 *) __comma_preg_w2c_1;
    if((_UINT64)((_UINT32 *) __comma_preg_w2c_1) == (_UINT64)(0U))
    {
      retVal = -3LL;
      goto _1026;
    }
  }
  _3586 :;
  (s) -> state = 14U;
  _225026 :;
  if((s) -> bsLive > (_INT32)(7U))
  {
    v_w2c_3 = _U4LSHR((s) -> bsBuff, (_UINT32)((s) -> bsLive + -8)) & 255U;
    (s) -> bsLive = (s) -> bsLive + -8;
    goto _4098;
  }
  else
  {
    if(((s) -> strm) -> avail_in == 0U)
    {
      retVal = 0U;
      goto _1026;
    }
    else
    {
      (s) -> bsBuff = (_UINT32) * (_UINT8 *)(((s) -> strm) -> next_in) | _U4SHL((s) -> bsBuff, 8U);
      (s) -> bsLive = (s) -> bsLive + (_INT32)(8U);
      ((s) -> strm) -> next_in = ((s) -> strm) -> next_in + 1U;
      ((s) -> strm) -> avail_in = ((s) -> strm) -> avail_in + (_UINT32)(-1);
      ((s) -> strm) -> total_in_lo32 = ((s) -> strm) -> total_in_lo32 + 1U;
      if(((s) -> strm) -> total_in_lo32 == 0U)
      {
        ((s) -> strm) -> total_in_hi32 = ((s) -> strm) -> total_in_hi32 + 1U;
      }
    }
  }
  goto _225026;
  _4098 :;
  if(v_w2c_3 == 23U)
    goto _4354;
  if(!(v_w2c_3 != 49U))
    goto _206850;
  retVal = -4LL;
  goto _206594;
  _206850 :;
  _4610 :;
  (s) -> state = 15U;
  _226050 :;
  if((s) -> bsLive > (_INT32)(7U))
  {
    v_w2c_4 = _U4LSHR((s) -> bsBuff, (_UINT32)((s) -> bsLive + -8)) & 255U;
    (s) -> bsLive = (s) -> bsLive + -8;
    goto _5122;
  }
  else
  {
    if(((s) -> strm) -> avail_in == 0U)
    {
      retVal = 0U;
      goto _1026;
    }
    else
    {
      (s) -> bsBuff = (_UINT32) * (_UINT8 *)(((s) -> strm) -> next_in) | _U4SHL((s) -> bsBuff, 8U);
      (s) -> bsLive = (s) -> bsLive + (_INT32)(8U);
      ((s) -> strm) -> next_in = ((s) -> strm) -> next_in + 1U;
      ((s) -> strm) -> avail_in = ((s) -> strm) -> avail_in + (_UINT32)(-1);
      ((s) -> strm) -> total_in_lo32 = ((s) -> strm) -> total_in_lo32 + 1U;
      if(((s) -> strm) -> total_in_lo32 == 0U)
      {
        ((s) -> strm) -> total_in_hi32 = ((s) -> strm) -> total_in_hi32 + 1U;
      }
    }
  }
  goto _226050;
  _5122 :;
  if(!(v_w2c_4 != 65U))
    goto _206338;
  retVal = -4LL;
  goto _206082;
  _206338 :;
  _5378 :;
  (s) -> state = 16U;
  _227074 :;
  if((s) -> bsLive > (_INT32)(7U))
  {
    v_w2c_5 = _U4LSHR((s) -> bsBuff, (_UINT32)((s) -> bsLive + -8)) & 255U;
    (s) -> bsLive = (s) -> bsLive + -8;
    goto _5890;
  }
  else
  {
    if(((s) -> strm) -> avail_in == 0U)
    {
      retVal = 0U;
      goto _1026;
    }
    else
    {
      (s) -> bsBuff = (_UINT32) * (_UINT8 *)(((s) -> strm) -> next_in) | _U4SHL((s) -> bsBuff, 8U);
      (s) -> bsLive = (s) -> bsLive + (_INT32)(8U);
      ((s) -> strm) -> next_in = ((s) -> strm) -> next_in + 1U;
      ((s) -> strm) -> avail_in = ((s) -> strm) -> avail_in + (_UINT32)(-1);
      ((s) -> strm) -> total_in_lo32 = ((s) -> strm) -> total_in_lo32 + 1U;
      if(((s) -> strm) -> total_in_lo32 == 0U)
      {
        ((s) -> strm) -> total_in_hi32 = ((s) -> strm) -> total_in_hi32 + 1U;
      }
    }
  }
  goto _227074;
  _5890 :;
  if(!(v_w2c_5 != 89U))
    goto _205826;
  retVal = -4LL;
  goto _205570;
  _205826 :;
  _6146 :;
  (s) -> state = 17U;
  _228098 :;
  if((s) -> bsLive > (_INT32)(7U))
  {
    v_w2c_6 = _U4LSHR((s) -> bsBuff, (_UINT32)((s) -> bsLive + -8)) & 255U;
    (s) -> bsLive = (s) -> bsLive + -8;
    goto _6658;
  }
  else
  {
    if(((s) -> strm) -> avail_in == 0U)
    {
      retVal = 0U;
      goto _1026;
    }
    else
    {
      (s) -> bsBuff = (_UINT32) * (_UINT8 *)(((s) -> strm) -> next_in) | _U4SHL((s) -> bsBuff, 8U);
      (s) -> bsLive = (s) -> bsLive + (_INT32)(8U);
      ((s) -> strm) -> next_in = ((s) -> strm) -> next_in + 1U;
      ((s) -> strm) -> avail_in = ((s) -> strm) -> avail_in + (_UINT32)(-1);
      ((s) -> strm) -> total_in_lo32 = ((s) -> strm) -> total_in_lo32 + 1U;
      if(((s) -> strm) -> total_in_lo32 == 0U)
      {
        ((s) -> strm) -> total_in_hi32 = ((s) -> strm) -> total_in_hi32 + 1U;
      }
    }
  }
  goto _228098;
  _6658 :;
  if(!(v_w2c_6 != 38U))
    goto _205314;
  retVal = -4LL;
  goto _205058;
  _205314 :;
  _6914 :;
  (s) -> state = 18U;
  _229122 :;
  if((s) -> bsLive > (_INT32)(7U))
  {
    v_w2c_7 = _U4LSHR((s) -> bsBuff, (_UINT32)((s) -> bsLive + -8)) & 255U;
    (s) -> bsLive = (s) -> bsLive + -8;
    goto _7426;
  }
  else
  {
    if(((s) -> strm) -> avail_in == 0U)
    {
      retVal = 0U;
      goto _1026;
    }
    else
    {
      (s) -> bsBuff = (_UINT32) * (_UINT8 *)(((s) -> strm) -> next_in) | _U4SHL((s) -> bsBuff, 8U);
      (s) -> bsLive = (s) -> bsLive + (_INT32)(8U);
      ((s) -> strm) -> next_in = ((s) -> strm) -> next_in + 1U;
      ((s) -> strm) -> avail_in = ((s) -> strm) -> avail_in + (_UINT32)(-1);
      ((s) -> strm) -> total_in_lo32 = ((s) -> strm) -> total_in_lo32 + 1U;
      if(((s) -> strm) -> total_in_lo32 == 0U)
      {
        ((s) -> strm) -> total_in_hi32 = ((s) -> strm) -> total_in_hi32 + 1U;
      }
    }
  }
  goto _229122;
  _7426 :;
  if(!(v_w2c_7 != 83U))
    goto _204802;
  retVal = -4LL;
  goto _204546;
  _204802 :;
  _7682 :;
  (s) -> state = 19U;
  _230146 :;
  if((s) -> bsLive > (_INT32)(7U))
  {
    v_w2c_8 = _U4LSHR((s) -> bsBuff, (_UINT32)((s) -> bsLive + -8)) & 255U;
    (s) -> bsLive = (s) -> bsLive + -8;
    goto _8194;
  }
  else
  {
    if(((s) -> strm) -> avail_in == 0U)
    {
      retVal = 0U;
      goto _1026;
    }
    else
    {
      (s) -> bsBuff = (_UINT32) * (_UINT8 *)(((s) -> strm) -> next_in) | _U4SHL((s) -> bsBuff, 8U);
      (s) -> bsLive = (s) -> bsLive + (_INT32)(8U);
      ((s) -> strm) -> next_in = ((s) -> strm) -> next_in + 1U;
      ((s) -> strm) -> avail_in = ((s) -> strm) -> avail_in + (_UINT32)(-1);
      ((s) -> strm) -> total_in_lo32 = ((s) -> strm) -> total_in_lo32 + 1U;
      if(((s) -> strm) -> total_in_lo32 == 0U)
      {
        ((s) -> strm) -> total_in_hi32 = ((s) -> strm) -> total_in_hi32 + 1U;
      }
    }
  }
  goto _230146;
  _8194 :;
  if(!(v_w2c_8 != 89U))
    goto _204290;
  retVal = -4LL;
  goto _204034;
  _204290 :;
  (s) -> currBlockNo = (s) -> currBlockNo + (_INT32)(1U);
  if((s) -> verbosity > (_INT32)(1U))
  {
    fprintf(stderr, "\n    [%d: huff+mtf ", (s) -> currBlockNo);
  }
  (s) -> storedBlockCRC = 0U;
  _8450 :;
  (s) -> state = 20U;
  _231426 :;
  if((s) -> bsLive > (_INT32)(7U))
  {
    v_w2c_9 = _U4LSHR((s) -> bsBuff, (_UINT32)((s) -> bsLive + -8)) & 255U;
    (s) -> bsLive = (s) -> bsLive + -8;
    goto _8962;
  }
  else
  {
    if(((s) -> strm) -> avail_in == 0U)
    {
      retVal = 0U;
      goto _1026;
    }
    else
    {
      (s) -> bsBuff = (_UINT32) * (_UINT8 *)(((s) -> strm) -> next_in) | _U4SHL((s) -> bsBuff, 8U);
      (s) -> bsLive = (s) -> bsLive + (_INT32)(8U);
      ((s) -> strm) -> next_in = ((s) -> strm) -> next_in + 1U;
      ((s) -> strm) -> avail_in = ((s) -> strm) -> avail_in + (_UINT32)(-1);
      ((s) -> strm) -> total_in_lo32 = ((s) -> strm) -> total_in_lo32 + 1U;
      if(((s) -> strm) -> total_in_lo32 == 0U)
      {
        ((s) -> strm) -> total_in_hi32 = ((s) -> strm) -> total_in_hi32 + 1U;
      }
    }
  }
  goto _231426;
  _8962 :;
  (s) -> storedBlockCRC = v_w2c_9 | _U4SHL((s) -> storedBlockCRC, 8U);
  _9218 :;
  (s) -> state = 21U;
  _232450 :;
  if((s) -> bsLive > (_INT32)(7U))
  {
    v_w2c_10 = _U4LSHR((s) -> bsBuff, (_UINT32)((s) -> bsLive + -8)) & 255U;
    (s) -> bsLive = (s) -> bsLive + -8;
    goto _9730;
  }
  else
  {
    if(((s) -> strm) -> avail_in == 0U)
    {
      retVal = 0U;
      goto _1026;
    }
    else
    {
      (s) -> bsBuff = (_UINT32) * (_UINT8 *)(((s) -> strm) -> next_in) | _U4SHL((s) -> bsBuff, 8U);
      (s) -> bsLive = (s) -> bsLive + (_INT32)(8U);
      ((s) -> strm) -> next_in = ((s) -> strm) -> next_in + 1U;
      ((s) -> strm) -> avail_in = ((s) -> strm) -> avail_in + (_UINT32)(-1);
      ((s) -> strm) -> total_in_lo32 = ((s) -> strm) -> total_in_lo32 + 1U;
      if(((s) -> strm) -> total_in_lo32 == 0U)
      {
        ((s) -> strm) -> total_in_hi32 = ((s) -> strm) -> total_in_hi32 + 1U;
      }
    }
  }
  goto _232450;
  _9730 :;
  (s) -> storedBlockCRC = v_w2c_10 | _U4SHL((s) -> storedBlockCRC, 8U);
  _9986 :;
  (s) -> state = 22U;
  _233474 :;
  if((s) -> bsLive > (_INT32)(7U))
  {
    v_w2c_11 = _U4LSHR((s) -> bsBuff, (_UINT32)((s) -> bsLive + -8)) & 255U;
    (s) -> bsLive = (s) -> bsLive + -8;
    goto _10498;
  }
  else
  {
    if(((s) -> strm) -> avail_in == 0U)
    {
      retVal = 0U;
      goto _1026;
    }
    else
    {
      (s) -> bsBuff = (_UINT32) * (_UINT8 *)(((s) -> strm) -> next_in) | _U4SHL((s) -> bsBuff, 8U);
      (s) -> bsLive = (s) -> bsLive + (_INT32)(8U);
      ((s) -> strm) -> next_in = ((s) -> strm) -> next_in + 1U;
      ((s) -> strm) -> avail_in = ((s) -> strm) -> avail_in + (_UINT32)(-1);
      ((s) -> strm) -> total_in_lo32 = ((s) -> strm) -> total_in_lo32 + 1U;
      if(((s) -> strm) -> total_in_lo32 == 0U)
      {
        ((s) -> strm) -> total_in_hi32 = ((s) -> strm) -> total_in_hi32 + 1U;
      }
    }
  }
  goto _233474;
  _10498 :;
  (s) -> storedBlockCRC = v_w2c_11 | _U4SHL((s) -> storedBlockCRC, 8U);
  _10754 :;
  (s) -> state = 23U;
  _234498 :;
  if((s) -> bsLive > (_INT32)(7U))
  {
    v_w2c_12 = _U4LSHR((s) -> bsBuff, (_UINT32)((s) -> bsLive + -8)) & 255U;
    (s) -> bsLive = (s) -> bsLive + -8;
    goto _11266;
  }
  else
  {
    if(((s) -> strm) -> avail_in == 0U)
    {
      retVal = 0U;
      goto _1026;
    }
    else
    {
      (s) -> bsBuff = (_UINT32) * (_UINT8 *)(((s) -> strm) -> next_in) | _U4SHL((s) -> bsBuff, 8U);
      (s) -> bsLive = (s) -> bsLive + (_INT32)(8U);
      ((s) -> strm) -> next_in = ((s) -> strm) -> next_in + 1U;
      ((s) -> strm) -> avail_in = ((s) -> strm) -> avail_in + (_UINT32)(-1);
      ((s) -> strm) -> total_in_lo32 = ((s) -> strm) -> total_in_lo32 + 1U;
      if(((s) -> strm) -> total_in_lo32 == 0U)
      {
        ((s) -> strm) -> total_in_hi32 = ((s) -> strm) -> total_in_hi32 + 1U;
      }
    }
  }
  goto _234498;
  _11266 :;
  (s) -> storedBlockCRC = v_w2c_12 | _U4SHL((s) -> storedBlockCRC, 8U);
  _11522 :;
  (s) -> state = 24U;
  _235522 :;
  if((s) -> bsLive > (_INT32)(0U))
  {
    v_w2c_13 = _U4LSHR((s) -> bsBuff, (_UINT32)((s) -> bsLive + -1)) & 1U;
    (s) -> bsLive = (s) -> bsLive + -1;
    (s) -> blockRandomised = v_w2c_13;
    goto _12034;
  }
  else
  {
    if(((s) -> strm) -> avail_in == 0U)
    {
      retVal = 0U;
      goto _1026;
    }
    else
    {
      (s) -> bsBuff = (_UINT32) * (_UINT8 *)(((s) -> strm) -> next_in) | _U4SHL((s) -> bsBuff, 8U);
      (s) -> bsLive = (s) -> bsLive + (_INT32)(8U);
      ((s) -> strm) -> next_in = ((s) -> strm) -> next_in + 1U;
      ((s) -> strm) -> avail_in = ((s) -> strm) -> avail_in + (_UINT32)(-1);
      ((s) -> strm) -> total_in_lo32 = ((s) -> strm) -> total_in_lo32 + 1U;
      if(((s) -> strm) -> total_in_lo32 == 0U)
      {
        ((s) -> strm) -> total_in_hi32 = ((s) -> strm) -> total_in_hi32 + 1U;
      }
    }
  }
  goto _235522;
  _12034 :;
  (s) -> origPtr = 0U;
  _12290 :;
  (s) -> state = 25U;
  _236546 :;
  if((s) -> bsLive > (_INT32)(7U))
  {
    v_w2c_14 = _U4LSHR((s) -> bsBuff, (_UINT32)((s) -> bsLive + -8)) & 255U;
    (s) -> bsLive = (s) -> bsLive + -8;
    goto _12802;
  }
  else
  {
    if(((s) -> strm) -> avail_in == 0U)
    {
      retVal = 0U;
      goto _1026;
    }
    else
    {
      (s) -> bsBuff = (_UINT32) * (_UINT8 *)(((s) -> strm) -> next_in) | _U4SHL((s) -> bsBuff, 8U);
      (s) -> bsLive = (s) -> bsLive + (_INT32)(8U);
      ((s) -> strm) -> next_in = ((s) -> strm) -> next_in + 1U;
      ((s) -> strm) -> avail_in = ((s) -> strm) -> avail_in + (_UINT32)(-1);
      ((s) -> strm) -> total_in_lo32 = ((s) -> strm) -> total_in_lo32 + 1U;
      if(((s) -> strm) -> total_in_lo32 == 0U)
      {
        ((s) -> strm) -> total_in_hi32 = ((s) -> strm) -> total_in_hi32 + 1U;
      }
    }
  }
  goto _236546;
  _12802 :;
  (s) -> origPtr = (_INT32)(v_w2c_14) | _I4SHL((s) -> origPtr, (_INT32)(8U));
  _13058 :;
  (s) -> state = 26U;
  _237570 :;
  if((s) -> bsLive > (_INT32)(7U))
  {
    v_w2c_15 = _U4LSHR((s) -> bsBuff, (_UINT32)((s) -> bsLive + -8)) & 255U;
    (s) -> bsLive = (s) -> bsLive + -8;
    goto _13570;
  }
  else
  {
    if(((s) -> strm) -> avail_in == 0U)
    {
      retVal = 0U;
      goto _1026;
    }
    else
    {
      (s) -> bsBuff = (_UINT32) * (_UINT8 *)(((s) -> strm) -> next_in) | _U4SHL((s) -> bsBuff, 8U);
      (s) -> bsLive = (s) -> bsLive + (_INT32)(8U);
      ((s) -> strm) -> next_in = ((s) -> strm) -> next_in + 1U;
      ((s) -> strm) -> avail_in = ((s) -> strm) -> avail_in + (_UINT32)(-1);
      ((s) -> strm) -> total_in_lo32 = ((s) -> strm) -> total_in_lo32 + 1U;
      if(((s) -> strm) -> total_in_lo32 == 0U)
      {
        ((s) -> strm) -> total_in_hi32 = ((s) -> strm) -> total_in_hi32 + 1U;
      }
    }
  }
  goto _237570;
  _13570 :;
  (s) -> origPtr = (_INT32)(v_w2c_15) | _I4SHL((s) -> origPtr, (_INT32)(8U));
  _13826 :;
  (s) -> state = 27U;
  _238594 :;
  if((s) -> bsLive > (_INT32)(7U))
  {
    v_w2c_16 = _U4LSHR((s) -> bsBuff, (_UINT32)((s) -> bsLive + -8)) & 255U;
    (s) -> bsLive = (s) -> bsLive + -8;
    goto _14338;
  }
  else
  {
    if(((s) -> strm) -> avail_in == 0U)
    {
      retVal = 0U;
      goto _1026;
    }
    else
    {
      (s) -> bsBuff = (_UINT32) * (_UINT8 *)(((s) -> strm) -> next_in) | _U4SHL((s) -> bsBuff, 8U);
      (s) -> bsLive = (s) -> bsLive + (_INT32)(8U);
      ((s) -> strm) -> next_in = ((s) -> strm) -> next_in + 1U;
      ((s) -> strm) -> avail_in = ((s) -> strm) -> avail_in + (_UINT32)(-1);
      ((s) -> strm) -> total_in_lo32 = ((s) -> strm) -> total_in_lo32 + 1U;
      if(((s) -> strm) -> total_in_lo32 == 0U)
      {
        ((s) -> strm) -> total_in_hi32 = ((s) -> strm) -> total_in_hi32 + 1U;
      }
    }
  }
  goto _238594;
  _14338 :;
  (s) -> origPtr = (_INT32)(v_w2c_16) | _I4SHL((s) -> origPtr, (_INT32)(8U));
  if(!((s) -> origPtr < (_INT32)(0U)))
    goto _203778;
  retVal = -4LL;
  goto _203522;
  _203778 :;
  if(!((s) -> origPtr > (((s) -> blockSize100k * (_INT32)(100000U)) + (_INT32)(10U))))
    goto _203266;
  retVal = -4LL;
  goto _203010;
  _203266 :;
  i = 0U;
  _219394 :;
  _15106 :;
  (s) -> state = 28U;
  _239618 :;
  if((s) -> bsLive > (_INT32)(0U))
  {
    v_w2c_17 = _U4LSHR((s) -> bsBuff, (_UINT32)((s) -> bsLive + -1)) & 1U;
    (s) -> bsLive = (s) -> bsLive + -1;
    goto _15618;
  }
  else
  {
    if(((s) -> strm) -> avail_in == 0U)
    {
      retVal = 0U;
      goto _1026;
    }
    else
    {
      (s) -> bsBuff = (_UINT32) * (_UINT8 *)(((s) -> strm) -> next_in) | _U4SHL((s) -> bsBuff, 8U);
      (s) -> bsLive = (s) -> bsLive + (_INT32)(8U);
      ((s) -> strm) -> next_in = ((s) -> strm) -> next_in + 1U;
      ((s) -> strm) -> avail_in = ((s) -> strm) -> avail_in + (_UINT32)(-1);
      ((s) -> strm) -> total_in_lo32 = ((s) -> strm) -> total_in_lo32 + 1U;
      if(((s) -> strm) -> total_in_lo32 == 0U)
      {
        ((s) -> strm) -> total_in_hi32 = ((s) -> strm) -> total_in_hi32 + 1U;
      }
    }
  }
  goto _239618;
  _15618 :;
  if(v_w2c_17 == 1U)
  {
    * (_UINT8 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 3452U))[i]) = 1U;
  }
  else
  {
    * (_UINT8 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 3452U))[i]) = 0U;
  }
  i = i + (_INT32)(1U);
  if(i <= (_INT32)(15U))
    goto _219394;
  for(i_preg = 0U; i_preg <= (_INT32)(255U); i_preg = i_preg + (_INT32)(1U))
  {
    * (_UINT8 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 3196U))[(_INT64)(i_preg)]) = 0U;
  }
  i = 0U;
  _218882 :;
  if(!((_UINT32)(*(_UINT8 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 3452U))[i])) != 0U))
    goto _218626;
  j = 0U;
  _218114 :;
  _17922 :;
  (s) -> state = 29U;
  _241410 :;
  if((s) -> bsLive > (_INT32)(0U))
  {
    v_w2c_18 = _U4LSHR((s) -> bsBuff, (_UINT32)((s) -> bsLive + -1)) & 1U;
    (s) -> bsLive = (s) -> bsLive + -1;
    goto _18434;
  }
  else
  {
    if(((s) -> strm) -> avail_in == 0U)
    {
      retVal = 0U;
      goto _1026;
    }
    else
    {
      (s) -> bsBuff = (_UINT32) * (_UINT8 *)(((s) -> strm) -> next_in) | _U4SHL((s) -> bsBuff, 8U);
      (s) -> bsLive = (s) -> bsLive + (_INT32)(8U);
      ((s) -> strm) -> next_in = ((s) -> strm) -> next_in + 1U;
      ((s) -> strm) -> avail_in = ((s) -> strm) -> avail_in + (_UINT32)(-1);
      ((s) -> strm) -> total_in_lo32 = ((s) -> strm) -> total_in_lo32 + 1U;
      if(((s) -> strm) -> total_in_lo32 == 0U)
      {
        ((s) -> strm) -> total_in_hi32 = ((s) -> strm) -> total_in_hi32 + 1U;
      }
    }
  }
  goto _241410;
  _18434 :;
  if(v_w2c_18 == 1U)
  {
    * (_UINT8 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 3196U))[j + (i * (_INT32)(16U))]) = 1U;
  }
  j = j + (_INT32)(1U);
  if(j <= (_INT32)(15U))
    goto _218114;
  _218626 :;
  i = i + (_INT32)(1U);
  if(i <= (_INT32)(15U))
    goto _218882;
  makeMaps_d(s);
  if(!((s) -> nInUse == (_INT32)(0U)))
    goto _202754;
  retVal = -4LL;
  goto _202498;
  _202754 :;
  alphaSize = (s) -> nInUse + (_INT32)(2U);
  _19202 :;
  (s) -> state = 30U;
  _242690 :;
  if((s) -> bsLive > (_INT32)(2U))
  {
    v_w2c_19 = _U4LSHR((s) -> bsBuff, (_UINT32)((s) -> bsLive + -3)) & 7U;
    (s) -> bsLive = (s) -> bsLive + -3;
    nGroups = v_w2c_19;
    goto _19714;
  }
  else
  {
    if(((s) -> strm) -> avail_in == 0U)
    {
      retVal = 0U;
      goto _1026;
    }
    else
    {
      (s) -> bsBuff = (_UINT32) * (_UINT8 *)(((s) -> strm) -> next_in) | _U4SHL((s) -> bsBuff, 8U);
      (s) -> bsLive = (s) -> bsLive + (_INT32)(8U);
      ((s) -> strm) -> next_in = ((s) -> strm) -> next_in + 1U;
      ((s) -> strm) -> avail_in = ((s) -> strm) -> avail_in + (_UINT32)(-1);
      ((s) -> strm) -> total_in_lo32 = ((s) -> strm) -> total_in_lo32 + 1U;
      if(((s) -> strm) -> total_in_lo32 == 0U)
      {
        ((s) -> strm) -> total_in_hi32 = ((s) -> strm) -> total_in_hi32 + 1U;
      }
    }
  }
  goto _242690;
  _19714 :;
  if(!(((_UINT32)(nGroups) + (_UINT32)(-2)) > 4U))
    goto _202242;
  retVal = -4LL;
  goto _201986;
  _202242 :;
  _19970 :;
  (s) -> state = 31U;
  _243714 :;
  if((s) -> bsLive > (_INT32)(14U))
  {
    v_w2c_20 = _U4LSHR((s) -> bsBuff, (_UINT32)((s) -> bsLive + -15)) & 32767U;
    (s) -> bsLive = (s) -> bsLive + -15;
    nSelectors = v_w2c_20;
    goto _20482;
  }
  else
  {
    if(((s) -> strm) -> avail_in == 0U)
    {
      retVal = 0U;
      goto _1026;
    }
    else
    {
      (s) -> bsBuff = (_UINT32) * (_UINT8 *)(((s) -> strm) -> next_in) | _U4SHL((s) -> bsBuff, 8U);
      (s) -> bsLive = (s) -> bsLive + (_INT32)(8U);
      ((s) -> strm) -> next_in = ((s) -> strm) -> next_in + 1U;
      ((s) -> strm) -> avail_in = ((s) -> strm) -> avail_in + (_UINT32)(-1);
      ((s) -> strm) -> total_in_lo32 = ((s) -> strm) -> total_in_lo32 + 1U;
      if(((s) -> strm) -> total_in_lo32 == 0U)
      {
        ((s) -> strm) -> total_in_hi32 = ((s) -> strm) -> total_in_hi32 + 1U;
      }
    }
  }
  goto _243714;
  _20482 :;
  if(!(nSelectors <= (_INT32)(0U)))
    goto _201730;
  retVal = -4LL;
  goto _201474;
  _201730 :;
  i = 0U;
  _217602 :;
  j = 0U;
  _217346 :;
  _21506 :;
  (s) -> state = 32U;
  _244738 :;
  if((s) -> bsLive > (_INT32)(0U))
  {
    v_w2c_21 = _U4LSHR((s) -> bsBuff, (_UINT32)((s) -> bsLive + -1)) & 1U;
    (s) -> bsLive = (s) -> bsLive + -1;
    goto _22018;
  }
  else
  {
    if(((s) -> strm) -> avail_in == 0U)
    {
      retVal = 0U;
      goto _1026;
    }
    else
    {
      (s) -> bsBuff = (_UINT32) * (_UINT8 *)(((s) -> strm) -> next_in) | _U4SHL((s) -> bsBuff, 8U);
      (s) -> bsLive = (s) -> bsLive + (_INT32)(8U);
      ((s) -> strm) -> next_in = ((s) -> strm) -> next_in + 1U;
      ((s) -> strm) -> avail_in = ((s) -> strm) -> avail_in + (_UINT32)(-1);
      ((s) -> strm) -> total_in_lo32 = ((s) -> strm) -> total_in_lo32 + 1U;
      if(((s) -> strm) -> total_in_lo32 == 0U)
      {
        ((s) -> strm) -> total_in_hi32 = ((s) -> strm) -> total_in_hi32 + 1U;
      }
    }
  }
  goto _244738;
  _22018 :;
  if(v_w2c_21 == 0U)
    goto _22274;
  j = j + (_INT32)(1U);
  if(j >= nGroups)
  {
    retVal = -4LL;
    goto _1026;
  }
  goto _217346;
  _22274 :;
  * (_UINT8 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 25886U))[i]) = j;
  i = i + (_INT32)(1U);
  if(i < nSelectors)
    goto _217602;
  /* PARALLEL DO will be converted to SUBROUTINE __mpdo_BZ2_decompress1 */
#pragma omp parallel for private(v_w2c_22) shared(nGroups, pos)
    for(v_w2c_22 = 0U; (_INT32)(v_w2c_22) <= (nGroups + -1); v_w2c_22 = (_UINT32)(v_w2c_22) + 1U)
    {
      (pos)[v_w2c_22] = v_w2c_22;
    }
    for(i_preg_w2c_9 = 0U; i_preg_w2c_9 <= (nSelectors + -1); i_preg_w2c_9 = i_preg_w2c_9 + (_INT32)(1U))
    {
      v_w2c_22 = *(_UINT8 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 25886U))[(_INT64)(i_preg_w2c_9)]);
      tmp = (pos)[v_w2c_22];
      while((_UINT32)((_INT32) v_w2c_22) != 0U)
      {
        (pos)[(_INT32) v_w2c_22] = (pos)[(_INT32) v_w2c_22 + -1];
        v_w2c_22 = (_UINT32)((_INT32) v_w2c_22) + (_UINT32)(-1);
      }
      (pos)[0U] = tmp;
      * (_UINT8 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 7884U))[(_INT64)(i_preg_w2c_9)]) = tmp;
    }
    i_preg_w2c_0 = _I4MAX(nSelectors, (_INT32)(0U));
    i = i_preg_w2c_0;
    t = 0U;
    if(!(nGroups > (_INT32)(0U)))
      goto _217090;
    _216834 :;
    _25602 :;
    (s) -> state = 33U;
    _247554 :;
    if((s) -> bsLive > (_INT32)(4U))
    {
      v_w2c_23 = _U4LSHR((s) -> bsBuff, (_UINT32)((s) -> bsLive + -5)) & 31U;
      (s) -> bsLive = (s) -> bsLive + -5;
      curr = v_w2c_23;
      goto _26114;
    }
    else
    {
      if(((s) -> strm) -> avail_in == 0U)
      {
        retVal = 0U;
        goto _1026;
      }
      else
      {
        (s) -> bsBuff = (_UINT32) * (_UINT8 *)(((s) -> strm) -> next_in) | _U4SHL((s) -> bsBuff, 8U);
        (s) -> bsLive = (s) -> bsLive + (_INT32)(8U);
        ((s) -> strm) -> next_in = ((s) -> strm) -> next_in + 1U;
        ((s) -> strm) -> avail_in = ((s) -> strm) -> avail_in + (_UINT32)(-1);
        ((s) -> strm) -> total_in_lo32 = ((s) -> strm) -> total_in_lo32 + 1U;
        if(((s) -> strm) -> total_in_lo32 == 0U)
        {
          ((s) -> strm) -> total_in_hi32 = ((s) -> strm) -> total_in_hi32 + 1U;
        }
      }
    }
    goto _247554;
    _26114 :;
    i = 0U;
    if(!(alphaSize > (_INT32)(0U)))
      goto _216578;
    _216322 :;
    _216066 :;
    if(!(((_UINT32)(curr) + (_UINT32)(-1)) > 19U))
      goto _215810;
    retVal = -4LL;
    goto _1026;
    _215810 :;
    _27138 :;
    (s) -> state = 34U;
    _248578 :;
    if((s) -> bsLive > (_INT32)(0U))
    {
      v_w2c_24 = _U4LSHR((s) -> bsBuff, (_UINT32)((s) -> bsLive + -1)) & 1U;
      (s) -> bsLive = (s) -> bsLive + -1;
      goto _27650;
    }
    else
    {
      if(((s) -> strm) -> avail_in == 0U)
      {
        retVal = 0U;
        goto _1026;
      }
      else
      {
        (s) -> bsBuff = (_UINT32) * (_UINT8 *)(((s) -> strm) -> next_in) | _U4SHL((s) -> bsBuff, 8U);
        (s) -> bsLive = (s) -> bsLive + (_INT32)(8U);
        ((s) -> strm) -> next_in = ((s) -> strm) -> next_in + 1U;
        ((s) -> strm) -> avail_in = ((s) -> strm) -> avail_in + (_UINT32)(-1);
        ((s) -> strm) -> total_in_lo32 = ((s) -> strm) -> total_in_lo32 + 1U;
        if(((s) -> strm) -> total_in_lo32 == 0U)
        {
          ((s) -> strm) -> total_in_hi32 = ((s) -> strm) -> total_in_hi32 + 1U;
        }
      }
    }
    goto _248578;
    _27650 :;
    if(v_w2c_24 == 0U)
      goto _27906;
    _28162 :;
    (s) -> state = 35U;
    _249602 :;
    if((s) -> bsLive > (_INT32)(0U))
    {
      v_w2c_25 = _U4LSHR((s) -> bsBuff, (_UINT32)((s) -> bsLive + -1)) & 1U;
      (s) -> bsLive = (s) -> bsLive + -1;
      goto _28674;
    }
    else
    {
      if(((s) -> strm) -> avail_in == 0U)
      {
        retVal = 0U;
        goto _1026;
      }
      else
      {
        (s) -> bsBuff = (_UINT32) * (_UINT8 *)(((s) -> strm) -> next_in) | _U4SHL((s) -> bsBuff, 8U);
        (s) -> bsLive = (s) -> bsLive + (_INT32)(8U);
        ((s) -> strm) -> next_in = ((s) -> strm) -> next_in + 1U;
        ((s) -> strm) -> avail_in = ((s) -> strm) -> avail_in + (_UINT32)(-1);
        ((s) -> strm) -> total_in_lo32 = ((s) -> strm) -> total_in_lo32 + 1U;
        if(((s) -> strm) -> total_in_lo32 == 0U)
        {
          ((s) -> strm) -> total_in_hi32 = ((s) -> strm) -> total_in_hi32 + 1U;
        }
      }
    }
    goto _249602;
    _28674 :;
    if(v_w2c_25 == 0U)
    {
      curr = curr + (_INT32)(1U);
    }
    else
    {
      curr = curr + -1;
    }
    goto _216066;
    _27906 :;
    * (_UINT8 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 43888U))[t][i]) = curr;
    i = i + (_INT32)(1U);
    if(i < alphaSize)
      goto _216322;
    _216578 :;
    t = t + (_INT32)(1U);
    if(t < nGroups)
      goto _216834;
    _217090 :;
    for(t_preg = 0U; t_preg <= (nGroups + -1); t_preg = t_preg + (_INT32)(1U))
    {
      minLen = 32U;
      maxLen = 0U;
      for(i_preg_w2c_1 = 0U; i_preg_w2c_1 <= (alphaSize + -1); i_preg_w2c_1 = i_preg_w2c_1 + (_INT32)(1U))
      {
        if(maxLen < (_INT32) * (_UINT8 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 43888U))[(_INT64)(t_preg)][(_INT64)(i_preg_w2c_1)]))
        {
          maxLen = (_INT32) * (_UINT8 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 43888U))[(_INT64)(t_preg)][(_INT64)(i_preg_w2c_1)]);
        }
        if(minLen > (_INT32) * (_UINT8 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 43888U))[(_INT64)(t_preg)][(_INT64)(i_preg_w2c_1)]))
        {
          minLen = (_INT32) * (_UINT8 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 43888U))[(_INT64)(t_preg)][(_INT64)(i_preg_w2c_1)]);
        }
      }
      BZ2_hbCreateDecodeTables((_INT32 *)(struct anonymous_w2c_3 *)((_UINT8 *)((struct anonymous_w2c_3 *)((_UINT8 *)(s) + ((_INT64)(t_preg) * 1032U))) + 45436U), (_INT32 *)(struct anonymous_w2c_3 *)((_UINT8 *)((struct anonymous_w2c_3 *)((_UINT8 *)(s) + ((_INT64)(t_preg) * 1032U))) + 51628U), (_INT32 *)(struct anonymous_w2c_3 *)((_UINT8 *)((struct anonymous_w2c_3 *)((_UINT8 *)(s) + ((_INT64)(t_preg) * 1032U))) + 57820U), (_UINT8 *)(struct anonymous_w2c_3 *)((_UINT8 *)((struct anonymous_w2c_3 *)((_UINT8 *)(s) + ((_INT64)(t_preg) * 258U))) + 43888U), minLen, maxLen, alphaSize);
      * (_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 64012U))[(_INT64)(t_preg)]) = minLen;
    }
    t = t_preg;
    EOB = (s) -> nInUse + (_INT32)(1U);
    nblockMAX = (s) -> blockSize100k * (_INT32)(100000U);
    groupPos = 0U;
    for(i_preg_w2c_2 = 0U; i_preg_w2c_2 <= (_INT32)(255U); i_preg_w2c_2 = i_preg_w2c_2 + (_INT32)(1U))
    {
      * (_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 68U))[(_INT64)(i_preg_w2c_2)]) = 0U;
    }
    i = 256U;
    for(ii_preg = 0U; ii_preg <= 15; ii_preg = ii_preg + (_INT32)(1U))
    {
      for(jj_preg = 0U; jj_preg <= 15; jj_preg = jj_preg + (_INT32)(1U))
      {
        * (_UINT8 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 3724U))[(_INT64)((-(jj_preg + (ii_preg * (_INT32)(16U))))) + (_INT64)(4095U)]) = 255U - (_UINT32)(jj_preg + (ii_preg * (_INT32)(16U)));
      }
      * (_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 7820U))[(_INT64)((-ii_preg)) + (_INT64)(15U)]) = (_INT32)(4080U) - (ii_preg * (_INT32)(16U));
    }
    nblock = 0U;
    groupNo = 0U;
    if(nSelectors <= (_INT32)(0U))
    {
      retVal = -4LL;
      goto _1026;
    }
    else
    {
      gSel = (_INT32) * (_UINT8 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 7884U))[0U]);
      gMinlen = *(_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 64012U))[gSel]);
      gLimit = (_INT32 *)((struct anonymous_w2c_3 *)((_UINT8 *)((struct anonymous_w2c_3 *)((_UINT8 *)(s) + (gSel * 1032U))) + 45436U));
      gPerm = (_INT32 *)((struct anonymous_w2c_3 *)((_UINT8 *)((struct anonymous_w2c_3 *)((_UINT8 *)(s) + (gSel * 1032U))) + 57820U));
      gBase = (_INT32 *)((struct anonymous_w2c_3 *)((_UINT8 *)((struct anonymous_w2c_3 *)((_UINT8 *)(s) + (gSel * 1032U))) + 51628U));
    }
    groupPos = 49U;
    zn = gMinlen;
    _33282 :;
    (s) -> state = 36U;
    _254466 :;
    if((s) -> bsLive >= zn)
    {
      v_w2c_26 = ((_UINT32)(_I4SHL((_INT32)(1U), zn)) + (_UINT32)(-1)) & _U4LSHR((s) -> bsBuff, (_UINT32)((s) -> bsLive - zn));
      (s) -> bsLive = (s) -> bsLive - zn;
      zvec = v_w2c_26;
      goto _215298;
    }
    else
    {
      if(((s) -> strm) -> avail_in == 0U)
      {
        retVal = 0U;
        goto _1026;
      }
      else
      {
        (s) -> bsBuff = (_UINT32) * (_UINT8 *)(((s) -> strm) -> next_in) | _U4SHL((s) -> bsBuff, 8U);
        (s) -> bsLive = (s) -> bsLive + (_INT32)(8U);
        ((s) -> strm) -> next_in = ((s) -> strm) -> next_in + 1U;
        ((s) -> strm) -> avail_in = ((s) -> strm) -> avail_in + (_UINT32)(-1);
        ((s) -> strm) -> total_in_lo32 = ((s) -> strm) -> total_in_lo32 + 1U;
        if(((s) -> strm) -> total_in_lo32 == 0U)
        {
          ((s) -> strm) -> total_in_hi32 = ((s) -> strm) -> total_in_hi32 + 1U;
        }
      }
    }
    goto _254466;
    _215298 :;
    if(!((_INT32)((_UINT64) zn) > (_INT32)(20U)))
      goto _215042;
    retVal = -4LL;
    goto _1026;
    _215042 :;
    if(*(gLimit + (_UINT64) zn) >= zvec)
      goto _34306;
    zn = (_INT32)((_UINT64) zn) + (_INT32)(1U);
    _34562 :;
    (s) -> state = 37U;
    _255490 :;
    if((s) -> bsLive > (_INT32)(0U))
    {
      v_w2c_27 = _U4LSHR((s) -> bsBuff, (_UINT32)((s) -> bsLive + -1)) & 1U;
      (s) -> bsLive = (s) -> bsLive + -1;
      zj = v_w2c_27;
      goto _35074;
    }
    else
    {
      if(((s) -> strm) -> avail_in == 0U)
      {
        retVal = 0U;
        goto _1026;
      }
      else
      {
        (s) -> bsBuff = (_UINT32) * (_UINT8 *)(((s) -> strm) -> next_in) | _U4SHL((s) -> bsBuff, 8U);
        (s) -> bsLive = (s) -> bsLive + (_INT32)(8U);
        ((s) -> strm) -> next_in = ((s) -> strm) -> next_in + 1U;
        ((s) -> strm) -> avail_in = ((s) -> strm) -> avail_in + (_UINT32)(-1);
        ((s) -> strm) -> total_in_lo32 = ((s) -> strm) -> total_in_lo32 + 1U;
        if(((s) -> strm) -> total_in_lo32 == 0U)
        {
          ((s) -> strm) -> total_in_hi32 = ((s) -> strm) -> total_in_hi32 + 1U;
        }
      }
    }
    goto _255490;
    _35074 :;
    zvec = zj | _I4SHL(zvec, (_INT32)(1U));
    goto _215298;
    _34306 :;
    if(!((_UINT32)(zvec - *(gBase + (_UINT64) zn)) > 257U))
      goto _201218;
    retVal = -4LL;
    goto _200962;
    _201218 :;
    nextSym = *(gPerm + (_INT64)(zvec - *(gBase + (_UINT64) zn)));
    _213506 :;
    if(EOB == nextSym)
      goto _35586;
    if(!((_UINT32)(nextSym) <= 1U))
      goto _213250;
    es = -1LL;
    N = 1U;
    _214530 :;
    if(nextSym == (_INT32)(0U))
    {
      es = es + N;
    }
    else
    {
      if(nextSym == (_INT32)(1U))
      {
        es = es + (N * (_INT32)(2U));
      }
    }
    N = N * (_INT32)(2U);
    if(groupPos == (_INT32)(0U))
    {
      groupNo = groupNo + (_INT32)(1U);
      if(nSelectors <= groupNo)
      {
        retVal = -4LL;
        goto _1026;
      }
      else
      {
        groupPos = 50U;
        gSel = (_INT32) * (_UINT8 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 7884U))[groupNo]);
        gMinlen = *(_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 64012U))[gSel]);
        gLimit = (_INT32 *)((struct anonymous_w2c_3 *)((_UINT8 *)((struct anonymous_w2c_3 *)((_UINT8 *)(s) + (gSel * 1032U))) + 45436U));
        gPerm = (_INT32 *)((struct anonymous_w2c_3 *)((_UINT8 *)((struct anonymous_w2c_3 *)((_UINT8 *)(s) + (gSel * 1032U))) + 57820U));
        gBase = (_INT32 *)((struct anonymous_w2c_3 *)((_UINT8 *)((struct anonymous_w2c_3 *)((_UINT8 *)(s) + (gSel * 1032U))) + 51628U));
      }
    }
    groupPos = groupPos + -1;
    zn = gMinlen;
    _36098 :;
    (s) -> state = 38U;
    _257538 :;
    if((s) -> bsLive >= zn)
    {
      v_w2c_28 = ((_UINT32)(_I4SHL((_INT32)(1U), zn)) + (_UINT32)(-1)) & _U4LSHR((s) -> bsBuff, (_UINT32)((s) -> bsLive - zn));
      (s) -> bsLive = (s) -> bsLive - zn;
      zvec = v_w2c_28;
      goto _214274;
    }
    else
    {
      if(((s) -> strm) -> avail_in == 0U)
      {
        retVal = 0U;
        goto _1026;
      }
      else
      {
        (s) -> bsBuff = (_UINT32) * (_UINT8 *)(((s) -> strm) -> next_in) | _U4SHL((s) -> bsBuff, 8U);
        (s) -> bsLive = (s) -> bsLive + (_INT32)(8U);
        ((s) -> strm) -> next_in = ((s) -> strm) -> next_in + 1U;
        ((s) -> strm) -> avail_in = ((s) -> strm) -> avail_in + (_UINT32)(-1);
        ((s) -> strm) -> total_in_lo32 = ((s) -> strm) -> total_in_lo32 + 1U;
        if(((s) -> strm) -> total_in_lo32 == 0U)
        {
          ((s) -> strm) -> total_in_hi32 = ((s) -> strm) -> total_in_hi32 + 1U;
        }
      }
    }
    goto _257538;
    _214274 :;
    if(!((_INT32)((_UINT64) zn) > (_INT32)(20U)))
      goto _214018;
    retVal = -4LL;
    goto _1026;
    _214018 :;
    if(*(gLimit + (_UINT64) zn) >= zvec)
      goto _37122;
    zn = (_INT32)((_UINT64) zn) + (_INT32)(1U);
    _37378 :;
    (s) -> state = 39U;
    _258562 :;
    if((s) -> bsLive > (_INT32)(0U))
    {
      v_w2c_29 = _U4LSHR((s) -> bsBuff, (_UINT32)((s) -> bsLive + -1)) & 1U;
      (s) -> bsLive = (s) -> bsLive + -1;
      zj = v_w2c_29;
      goto _37890;
    }
    else
    {
      if(((s) -> strm) -> avail_in == 0U)
      {
        retVal = 0U;
        goto _1026;
      }
      else
      {
        (s) -> bsBuff = (_UINT32) * (_UINT8 *)(((s) -> strm) -> next_in) | _U4SHL((s) -> bsBuff, 8U);
        (s) -> bsLive = (s) -> bsLive + (_INT32)(8U);
        ((s) -> strm) -> next_in = ((s) -> strm) -> next_in + 1U;
        ((s) -> strm) -> avail_in = ((s) -> strm) -> avail_in + (_UINT32)(-1);
        ((s) -> strm) -> total_in_lo32 = ((s) -> strm) -> total_in_lo32 + 1U;
        if(((s) -> strm) -> total_in_lo32 == 0U)
        {
          ((s) -> strm) -> total_in_hi32 = ((s) -> strm) -> total_in_hi32 + 1U;
        }
      }
    }
    goto _258562;
    _37890 :;
    zvec = zj | _I4SHL(zvec, (_INT32)(1U));
    goto _214274;
    _37122 :;
    if((_UINT32)(zvec - *(gBase + (_UINT64) zn)) > 257U)
    {
      retVal = -4LL;
      goto _1026;
    }
    else
    {
      nextSym = *(gPerm + (_INT64)(zvec - *(gBase + (_UINT64) zn)));
    }
    if((_UINT32)(nextSym) <= 1U)
      goto _214530;
    es = es + (_INT32)(1U);
    uc = *(_UINT8 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 3468U))[(_INT32) * (_UINT8 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 3724U))[*(_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 7820U))[0U])])]);
    * (_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 68U))[uc]) = *(_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 68U))[uc]) + es;
    if((_UINT32)((s) -> smallDecompress) != 0U)
    {
      _temp_8_preg = (_UINT64) nblock;
      _temp_9_preg = es;
      es_preg = 0U;
      es = _temp_9_preg - es_preg;
      nblock = _temp_8_preg + es_preg;
      while((_temp_9_preg - es_preg) > (_INT32)(0U))
      {
        if(nblockMAX <= (_temp_8_preg + es_preg))
        {
          retVal = -4LL;
          goto _1026;
        }
        else
        {
          * ((s) -> ll16 + (_INT64)(_temp_8_preg + es_preg)) = uc;
        }
        es_preg = es_preg + (_INT32)(1U);
        es = _temp_9_preg - es_preg;
        nblock = _temp_8_preg + es_preg;
      }
      es = _temp_9_preg - es_preg;
      nblock = _temp_8_preg + es_preg;
    }
    else
    {
      _temp_10_preg = (_UINT64) nblock;
      _temp_11_preg = es;
      es_preg_w2c_0 = 0U;
      es = _temp_11_preg - es_preg_w2c_0;
      nblock = _temp_10_preg + es_preg_w2c_0;
      while((_temp_11_preg - es_preg_w2c_0) > (_INT32)(0U))
      {
        if(nblockMAX <= (_temp_10_preg + es_preg_w2c_0))
        {
          retVal = -4LL;
          goto _1026;
        }
        else
        {
          * ((s) -> tt + (_INT64)(_temp_10_preg + es_preg_w2c_0)) = uc;
        }
        es_preg_w2c_0 = es_preg_w2c_0 + (_INT32)(1U);
        es = _temp_11_preg - es_preg_w2c_0;
        nblock = _temp_10_preg + es_preg_w2c_0;
      }
      es = _temp_11_preg - es_preg_w2c_0;
      nblock = _temp_10_preg + es_preg_w2c_0;
    }
    goto _212994;
    _213250 :;
    if(!(nblockMAX <= (_INT32)((_UINT64) nblock)))
      goto _212738;
    retVal = -4LL;
    goto _1026;
    _212738 :;
    nn = (_UINT32)(nextSym) + (_UINT32)(-1);
    if(((_UINT32)(nextSym) + (_UINT32)(-1)) <= 15U)
    {
      pp = *(_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 7820U))[0U]);
      uc = *(_UINT8 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 3724U))[((_UINT32)(nextSym) + (_UINT32)(pp)) + (_UINT32)(-1)]);
      while(nn > 3U)
      {
        * (_UINT8 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 3724U))[(_INT64)((_UINT32)(pp) + nn)]) = *(_UINT8 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 3724U))[(_INT32)((_UINT32)(pp) + nn) + -1]);
        * (_UINT8 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 3724U))[(_INT32)((_UINT32)(pp) + nn) + -1]) = *(_UINT8 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 3724U))[(_INT32)((_UINT32)(pp) + nn) + -2]);
        * (_UINT8 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 3724U))[(_INT32)((_UINT32)(pp) + nn) + -2]) = *(_UINT8 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 3724U))[(_INT32)((_UINT32)(pp) + nn) + -3]);
        * (_UINT8 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 3724U))[(_INT32)((_UINT32)(pp) + nn) + -3]) = *(_UINT8 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 3724U))[(_INT32)((_UINT32)(pp) + nn) + -4]);
        nn = nn + (_UINT32)(-4);
      }
      while(nn != 0U)
      {
        * (_UINT8 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 3724U))[(_UINT32)(pp) + nn]) = *(_UINT8 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 3724U))[(_INT32)((_UINT32)(pp) + nn) + -1]);
        nn = nn + (_UINT32)(-1);
      }
      * (_UINT8 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 3724U))[pp]) = uc;
    }
    else
    {
      lno = ((_UINT32)(nextSym) + (_UINT32)(-1)) / 16U;
      pp = *(_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 7820U))[lno]) + ((nextSym + -1) & (_INT32)(15U));
      uc = *(_UINT8 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 3724U))[pp]);
      whiledo_var_preg = 0U;
      while(*(_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 7820U))[lno]) < (pp - whiledo_var_preg))
      {
        * (_UINT8 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 3724U))[(_INT64)(pp - whiledo_var_preg)]) = *(_UINT8 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 3724U))[(pp - whiledo_var_preg) + -1]);
        whiledo_var_preg = whiledo_var_preg + (_INT32)(1U);
      }
      * (_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 7820U))[lno]) = *(_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 7820U))[lno]) + (_INT32)(1U);
      for(lno_preg = 0U; lno_preg <= (lno + -1); lno_preg = lno_preg + (_INT32)(1U))
      {
        * (_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 7820U))[(_INT64)(lno - lno_preg)]) = *(_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 7820U))[(_INT64)(lno - lno_preg)]) + -1;
        * (_UINT8 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 3724U))[*(_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 7820U))[(_INT64)(lno - lno_preg)])]) = *(_UINT8 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 3724U))[*(_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 7820U))[(lno - lno_preg) + -1]) + (_INT32)(15U)]);
      }
      * (_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 7820U))[0U]) = *(_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 7820U))[0U]) + -1;
      * (_UINT8 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 3724U))[*(_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 7820U))[0U])]) = uc;
      if(*(_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 7820U))[0U]) == (_INT32)(0U))
      {
        for(ii_preg_w2c_0 = 0U; ii_preg_w2c_0 <= 15; ii_preg_w2c_0 = ii_preg_w2c_0 + (_INT32)(1U))
        {
          for(jj_preg_w2c_0 = 0U; jj_preg_w2c_0 <= 15; jj_preg_w2c_0 = jj_preg_w2c_0 + (_INT32)(1U))
          {
            * (_UINT8 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 3724U))[(_INT64)((-(jj_preg_w2c_0 + (ii_preg_w2c_0 * (_INT32)(16U))))) + (_INT64)(4095U)]) = *(_UINT8 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 3724U))[(*(_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 7820U))[(_INT64)((-ii_preg_w2c_0)) + (_INT64)(15U)]) - jj_preg_w2c_0) + (_INT32)(15U)]);
          }
          * (_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 7820U))[(_INT64)((-ii_preg_w2c_0)) + (_INT64)(15U)]) = (_INT32)(4080U) - (ii_preg_w2c_0 * (_INT32)(16U));
        }
      }
    }
    * (_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 68U))[(_INT32) * (_UINT8 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 3468U))[(_INT32) uc])]) = *(_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 68U))[(_INT32) * (_UINT8 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 3468U))[(_INT32) uc])]) + (_INT32)(1U);
    if((_UINT32)((s) -> smallDecompress) != 0U)
    {
      * ((s) -> ll16 + (_UINT64) nblock) = (_UINT32) * (_UINT8 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 3468U))[(_INT32) uc]);
    }
    else
    {
      * ((s) -> tt + (_UINT64) nblock) = (_UINT32) * (_UINT8 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 3468U))[(_INT32) uc]);
    }
    nblock = (_INT32)((_UINT64) nblock) + (_INT32)(1U);
    if(groupPos == (_INT32)(0U))
    {
      groupNo = groupNo + (_INT32)(1U);
      if(nSelectors <= groupNo)
      {
        retVal = -4LL;
        goto _1026;
      }
      else
      {
        groupPos = 50U;
        gSel = (_INT32) * (_UINT8 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 7884U))[groupNo]);
        gMinlen = *(_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 64012U))[gSel]);
        gLimit = (_INT32 *)((struct anonymous_w2c_3 *)((_UINT8 *)((struct anonymous_w2c_3 *)((_UINT8 *)(s) + (gSel * 1032U))) + 45436U));
        gPerm = (_INT32 *)((struct anonymous_w2c_3 *)((_UINT8 *)((struct anonymous_w2c_3 *)((_UINT8 *)(s) + (gSel * 1032U))) + 57820U));
        gBase = (_INT32 *)((struct anonymous_w2c_3 *)((_UINT8 *)((struct anonymous_w2c_3 *)((_UINT8 *)(s) + (gSel * 1032U))) + 51628U));
      }
    }
    groupPos = groupPos + -1;
    zn = gMinlen;
    _44802 :;
    (s) -> state = 40U;
    _265986 :;
    if((s) -> bsLive >= zn)
    {
      v_w2c_30 = ((_UINT32)(_I4SHL((_INT32)(1U), zn)) + (_UINT32)(-1)) & _U4LSHR((s) -> bsBuff, (_UINT32)((s) -> bsLive - zn));
      (s) -> bsLive = (s) -> bsLive - zn;
      zvec = v_w2c_30;
      goto _212226;
    }
    else
    {
      if(((s) -> strm) -> avail_in == 0U)
      {
        retVal = 0U;
        goto _1026;
      }
      else
      {
        (s) -> bsBuff = (_UINT32) * (_UINT8 *)(((s) -> strm) -> next_in) | _U4SHL((s) -> bsBuff, 8U);
        (s) -> bsLive = (s) -> bsLive + (_INT32)(8U);
        ((s) -> strm) -> next_in = ((s) -> strm) -> next_in + 1U;
        ((s) -> strm) -> avail_in = ((s) -> strm) -> avail_in + (_UINT32)(-1);
        ((s) -> strm) -> total_in_lo32 = ((s) -> strm) -> total_in_lo32 + 1U;
        if(((s) -> strm) -> total_in_lo32 == 0U)
        {
          ((s) -> strm) -> total_in_hi32 = ((s) -> strm) -> total_in_hi32 + 1U;
        }
      }
    }
    goto _265986;
    _212226 :;
    if(!((_INT32)((_UINT64) zn) > (_INT32)(20U)))
      goto _211970;
    retVal = -4LL;
    goto _1026;
    _211970 :;
    if(*(gLimit + (_UINT64) zn) >= zvec)
      goto _45826;
    zn = (_INT32)((_UINT64) zn) + (_INT32)(1U);
    _46082 :;
    (s) -> state = 41U;
    _267010 :;
    if((s) -> bsLive > (_INT32)(0U))
    {
      v_w2c_31 = _U4LSHR((s) -> bsBuff, (_UINT32)((s) -> bsLive + -1)) & 1U;
      (s) -> bsLive = (s) -> bsLive + -1;
      zj = v_w2c_31;
      goto _46594;
    }
    else
    {
      if(((s) -> strm) -> avail_in == 0U)
      {
        retVal = 0U;
        goto _1026;
      }
      else
      {
        (s) -> bsBuff = (_UINT32) * (_UINT8 *)(((s) -> strm) -> next_in) | _U4SHL((s) -> bsBuff, 8U);
        (s) -> bsLive = (s) -> bsLive + (_INT32)(8U);
        ((s) -> strm) -> next_in = ((s) -> strm) -> next_in + 1U;
        ((s) -> strm) -> avail_in = ((s) -> strm) -> avail_in + (_UINT32)(-1);
        ((s) -> strm) -> total_in_lo32 = ((s) -> strm) -> total_in_lo32 + 1U;
        if(((s) -> strm) -> total_in_lo32 == 0U)
        {
          ((s) -> strm) -> total_in_hi32 = ((s) -> strm) -> total_in_hi32 + 1U;
        }
      }
    }
    goto _267010;
    _46594 :;
    zvec = zj | _I4SHL(zvec, (_INT32)(1U));
    goto _212226;
    _45826 :;
    if((_UINT32)(zvec - *(gBase + (_UINT64) zn)) > 257U)
    {
      retVal = -4LL;
      goto _1026;
    }
    else
    {
      nextSym = *(gPerm + (_INT64)(zvec - *(gBase + (_UINT64) zn)));
    }
    _212994 :;
    goto _213506;
    _35586 :;
    if((s) -> origPtr < (_INT32)(0U))
      goto _200706;
    if(!((s) -> origPtr >= (_INT32)((_UINT64) nblock)))
      goto _200450;
    _200706 :;
    retVal = -4LL;
    goto _200194;
    _200450 :;
    * (_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 1096U))[0U]) = 0U;
    for(i_preg_w2c_3 = 0U; i_preg_w2c_3 <= 255; i_preg_w2c_3 = i_preg_w2c_3 + (_INT32)(1U))
    {
      * (_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 1096U))[(_INT64)(i_preg_w2c_3) + (_INT64)(1U)]) = *(_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 68U))[i_preg_w2c_3]);
    }
    for(i_preg_w2c_4 = 0U; i_preg_w2c_4 <= 255; i_preg_w2c_4 = i_preg_w2c_4 + (_INT32)(1U))
    {
      * (_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 1096U))[(_INT64)(i_preg_w2c_4) + (_INT64)(1U)]) = *(_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 1096U))[i_preg_w2c_4]) + *(_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 1096U))[(_INT64)(i_preg_w2c_4) + (_INT64)(1U)]);
    }
    i_preg_w2c_5 = 0U;
    i = i_preg_w2c_5;
    while(i_preg_w2c_5 <= (_INT32)(256U))
    {
      if((*(_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 1096U))[(_INT64)(i_preg_w2c_5)]) < (_INT32)(0U)) || (*(_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 1096U))[(_INT64)(i_preg_w2c_5)]) > (_INT32)((_UINT64) nblock)))
      {
        retVal = -4LL;
        goto _1026;
      }
      i_preg_w2c_5 = i_preg_w2c_5 + (_INT32)(1U);
      i = i_preg_w2c_5;
    }
    (s) -> state_out_len = 0U;
    (s) -> state_out_ch = 0U;
    (s) -> calculatedBlockCRC = 4294967295U;
    (s) -> state = 2U;
    if((s) -> verbosity > (_INT32)(1U))
    {
      fprintf(stderr, "rt+rld");
    }
    if((_UINT32)((s) -> smallDecompress) != 0U)
    {
      for(i_preg_w2c_6 = 0U; i_preg_w2c_6 <= (_INT32)(256U); i_preg_w2c_6 = i_preg_w2c_6 + (_INT32)(1U))
      {
        * (_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 2124U))[(_INT64)(i_preg_w2c_6)]) = *(_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 1096U))[(_INT64)(i_preg_w2c_6)]);
      }
      for(i_preg_w2c_7 = 0U; i_preg_w2c_7 <= ((_INT32)((_UINT64) nblock) + -1); i_preg_w2c_7 = i_preg_w2c_7 + (_INT32)(1U))
      {
        uc = ((_UINT16 *)((s)[395LL]).strm)[(_INT64)(i_preg_w2c_7)];
        ((_UINT16 *)((s)[395LL]).strm)[(_INT64)(i_preg_w2c_7)] = (_UINT16) * (_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 2124U))[uc]);
        if((i_preg_w2c_7 & (_INT32)(1U)) == (_INT32)(0U))
        {
          * ((_UINT64)(_I4ASHR(i_preg_w2c_7, 1U)) + (_UINT8 *)((s)[396LL]).strm) = _I4ASHR(*(_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 2124U))[uc]), (_INT32)(16U)) | ((_INT32)((_INT8) * ((_UINT64)(_I4ASHR(i_preg_w2c_7, 1U)) + (_UINT8 *)((s)[396LL]).strm)) & -16);
        }
        else
        {
          * ((_UINT64)(_I4ASHR(i_preg_w2c_7, 1U)) + (_UINT8 *)((s)[396LL]).strm) = ((_INT32)((_INT8) * ((_UINT64)(_I4ASHR(i_preg_w2c_7, 1U)) + (_UINT8 *)((s)[396LL]).strm)) & (_INT32)(15U)) | _I4SHL(_I4ASHR(*(_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 2124U))[uc]), (_INT32)(16U)), (_INT32)(4U));
        }
        * (_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 2124U))[uc]) = *(_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 2124U))[uc]) + (_INT32)(1U);
      }
      i = (s) -> origPtr;
      j = (_UINT32) * ((s) -> ll16 + i) | _U4SHL(_U4LSHR((_UINT32) * ((_UINT64)(_I4ASHR(i, 1U)) + (s) -> ll4), (_UINT32)(_I4SHL(i, (_INT32)(2U)) & (_INT32)(4U))) & 15U, 16U);
      do
      {
        tmp_w2c_0 = (_UINT32) * ((s) -> ll16 + j) | _U4SHL(_U4LSHR((_UINT32) * ((_UINT64)(_I4ASHR(j, 1U)) + (s) -> ll4), (_UINT32)(_I4SHL(j, (_INT32)(2U)) & (_INT32)(4U))) & 15U, 16U);
        * ((s) -> ll16 + j) = i;
        if((j & (_INT32)(1U)) == (_INT32)(0U))
        {
          * ((_UINT64)(_I4ASHR(j, 1U)) + (s) -> ll4) = _I4ASHR(i, (_INT32)(16U)) | ((_INT32)((_INT8) * ((_UINT64)(_I4ASHR(j, 1U)) + (s) -> ll4)) & -16);
        }
        else
        {
          * ((_UINT64)(_I4ASHR(j, 1U)) + (s) -> ll4) = ((_INT32)((_INT8) * ((_UINT64)(_I4ASHR(j, 1U)) + (s) -> ll4)) & (_INT32)(15U)) | _I4SHL(_I4ASHR(i, (_INT32)(16U)), (_INT32)(4U));
        }
        i = j;
        j = tmp_w2c_0;
      }
      while((s) -> origPtr != i);
      (s) -> tPos = (s) -> origPtr;
      (s) -> nblock_used = 0U;
      if((_UINT32)((s) -> blockRandomised) != 0U)
      {
        (s) -> rNToGo = 0U;
        (s) -> rTPos = 0U;
        __comma_preg_w2c_2 = BZ2_indexIntoF((_INT32)(s) -> tPos, (_INT32 *)(struct anonymous_w2c_3 *)((_UINT8 *)(s) + 1096U));
        (s) -> k0 = __comma_preg_w2c_2;
        (s) -> tPos = (_UINT32) * ((s) -> ll16 + (s) -> tPos) | _U4SHL(_U4LSHR((_UINT32) * ((s) -> ll4 + _U4LSHR((_UINT32)((s) -> tPos), 1U)), (_UINT32)((_INT32)(_U4SHL((_UINT32)((s) -> tPos), 2U)) & (_INT32)(4U))) & 15U, 16U);
        (s) -> nblock_used = (s) -> nblock_used + (_INT32)(1U);
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
      }
      else
      {
        __comma_preg_w2c_3 = BZ2_indexIntoF((_INT32)(s) -> tPos, (_INT32 *)(struct anonymous_w2c_3 *)((_UINT8 *)(s) + 1096U));
        (s) -> k0 = __comma_preg_w2c_3;
        (s) -> tPos = (_UINT32) * ((s) -> ll16 + (s) -> tPos) | _U4SHL(_U4LSHR((_UINT32) * ((s) -> ll4 + _U4LSHR((_UINT32)((s) -> tPos), 1U)), (_UINT32)((_INT32)(_U4SHL((_UINT32)((s) -> tPos), 2U)) & (_INT32)(4U))) & 15U, 16U);
        (s) -> nblock_used = (s) -> nblock_used + (_INT32)(1U);
      }
    }
    else
    {
      for(i_preg_w2c_10 = 0U; i_preg_w2c_10 <= ((_INT32)((_UINT64) nblock) + -1); i_preg_w2c_10 = i_preg_w2c_10 + (_INT32)(1U))
      {
        uc = ((_UINT32 *)((s)[394LL]).strm)[(_INT64)(i_preg_w2c_10)];
        ((_UINT32 *)((s)[394LL]).strm)[(_UINT64) * (_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 1096U))[uc])] = ((_UINT32 *)((s)[394LL]).strm)[(_UINT64) * (_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 1096U))[uc])] | (_UINT32)(_I4SHL(i_preg_w2c_10, (_INT32)(8U)));
        * (_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 1096U))[uc]) = *(_INT32 *)(&((struct anonymous_w2c_3 *)((_UINT8 *)(s) + 1096U))[uc]) + (_INT32)(1U);
      }
      i_preg_w2c_8 = _I4MAX((_INT32)((_UINT64) nblock), (_INT32)(0U));
      i = i_preg_w2c_8;
      (s) -> tPos = _U4LSHR(*((s) -> tt + (s) -> origPtr), 8U);
      (s) -> nblock_used = 0U;
      if((_UINT32)((s) -> blockRandomised) != 0U)
      {
        (s) -> rNToGo = 0U;
        (s) -> rTPos = 0U;
        (s) -> tPos = *((s) -> tt + (s) -> tPos);
        (s) -> k0 = (_UINT8)((s) -> tPos);
        (s) -> tPos = _U4LSHR((s) -> tPos, 8U);
        (s) -> nblock_used = 1U;
        (s) -> rNToGo = (BZ2_rNums)[0U];
        (s) -> rTPos = 1U;
        (s) -> rNToGo = (s) -> rNToGo + -1;
        (s) -> k0 = ((s) -> rNToGo == (_INT32)(1U))^(s) -> k0;
      }
      else
      {
        (s) -> tPos = *((s) -> tt + (s) -> tPos);
        (s) -> k0 = (_UINT8)((s) -> tPos);
        (s) -> tPos = _U4LSHR((s) -> tPos, 8U);
        (s) -> nblock_used = 1U;
      }
    }
    retVal = 0U;
    goto _1026;
    _4354 :;
    _51970 :;
    (s) -> state = 42U;
    _274434 :;
    if((s) -> bsLive > (_INT32)(7U))
    {
      v_w2c_32 = _U4LSHR((s) -> bsBuff, (_UINT32)((s) -> bsLive + -8)) & 255U;
      (s) -> bsLive = (s) -> bsLive + -8;
      goto _52482;
    }
    else
    {
      if(((s) -> strm) -> avail_in == 0U)
      {
        retVal = 0U;
        goto _1026;
      }
      else
      {
        (s) -> bsBuff = (_UINT32) * (_UINT8 *)(((s) -> strm) -> next_in) | _U4SHL((s) -> bsBuff, 8U);
        (s) -> bsLive = (s) -> bsLive + (_INT32)(8U);
        ((s) -> strm) -> next_in = ((s) -> strm) -> next_in + 1U;
        ((s) -> strm) -> avail_in = ((s) -> strm) -> avail_in + (_UINT32)(-1);
        ((s) -> strm) -> total_in_lo32 = ((s) -> strm) -> total_in_lo32 + 1U;
        if(((s) -> strm) -> total_in_lo32 == 0U)
        {
          ((s) -> strm) -> total_in_hi32 = ((s) -> strm) -> total_in_hi32 + 1U;
        }
      }
    }
    goto _274434;
    _52482 :;
    if(!(v_w2c_32 != 114U))
      goto _209410;
    retVal = -4LL;
    goto _209154;
    _209410 :;
    _52738 :;
    (s) -> state = 43U;
    _275458 :;
    if((s) -> bsLive > (_INT32)(7U))
    {
      v_w2c_33 = _U4LSHR((s) -> bsBuff, (_UINT32)((s) -> bsLive + -8)) & 255U;
      (s) -> bsLive = (s) -> bsLive + -8;
      goto _53250;
    }
    else
    {
      if(((s) -> strm) -> avail_in == 0U)
      {
        retVal = 0U;
        goto _1026;
      }
      else
      {
        (s) -> bsBuff = (_UINT32) * (_UINT8 *)(((s) -> strm) -> next_in) | _U4SHL((s) -> bsBuff, 8U);
        (s) -> bsLive = (s) -> bsLive + (_INT32)(8U);
        ((s) -> strm) -> next_in = ((s) -> strm) -> next_in + 1U;
        ((s) -> strm) -> avail_in = ((s) -> strm) -> avail_in + (_UINT32)(-1);
        ((s) -> strm) -> total_in_lo32 = ((s) -> strm) -> total_in_lo32 + 1U;
        if(((s) -> strm) -> total_in_lo32 == 0U)
        {
          ((s) -> strm) -> total_in_hi32 = ((s) -> strm) -> total_in_hi32 + 1U;
        }
      }
    }
    goto _275458;
    _53250 :;
    if(!(v_w2c_33 != 69U))
      goto _208898;
    retVal = -4LL;
    goto _208642;
    _208898 :;
    _53506 :;
    (s) -> state = 44U;
    _276482 :;
    if((s) -> bsLive > (_INT32)(7U))
    {
      v_w2c_34 = _U4LSHR((s) -> bsBuff, (_UINT32)((s) -> bsLive + -8)) & 255U;
      (s) -> bsLive = (s) -> bsLive + -8;
      goto _54018;
    }
    else
    {
      if(((s) -> strm) -> avail_in == 0U)
      {
        retVal = 0U;
        goto _1026;
      }
      else
      {
        (s) -> bsBuff = (_UINT32) * (_UINT8 *)(((s) -> strm) -> next_in) | _U4SHL((s) -> bsBuff, 8U);
        (s) -> bsLive = (s) -> bsLive + (_INT32)(8U);
        ((s) -> strm) -> next_in = ((s) -> strm) -> next_in + 1U;
        ((s) -> strm) -> avail_in = ((s) -> strm) -> avail_in + (_UINT32)(-1);
        ((s) -> strm) -> total_in_lo32 = ((s) -> strm) -> total_in_lo32 + 1U;
        if(((s) -> strm) -> total_in_lo32 == 0U)
        {
          ((s) -> strm) -> total_in_hi32 = ((s) -> strm) -> total_in_hi32 + 1U;
        }
      }
    }
    goto _276482;
    _54018 :;
    if(!(v_w2c_34 != 56U))
      goto _208386;
    retVal = -4LL;
    goto _208130;
    _208386 :;
    _54274 :;
    (s) -> state = 45U;
    _277506 :;
    if((s) -> bsLive > (_INT32)(7U))
    {
      v_w2c_35 = _U4LSHR((s) -> bsBuff, (_UINT32)((s) -> bsLive + -8)) & 255U;
      (s) -> bsLive = (s) -> bsLive + -8;
      goto _54786;
    }
    else
    {
      if(((s) -> strm) -> avail_in == 0U)
      {
        retVal = 0U;
        goto _1026;
      }
      else
      {
        (s) -> bsBuff = (_UINT32) * (_UINT8 *)(((s) -> strm) -> next_in) | _U4SHL((s) -> bsBuff, 8U);
        (s) -> bsLive = (s) -> bsLive + (_INT32)(8U);
        ((s) -> strm) -> next_in = ((s) -> strm) -> next_in + 1U;
        ((s) -> strm) -> avail_in = ((s) -> strm) -> avail_in + (_UINT32)(-1);
        ((s) -> strm) -> total_in_lo32 = ((s) -> strm) -> total_in_lo32 + 1U;
        if(((s) -> strm) -> total_in_lo32 == 0U)
        {
          ((s) -> strm) -> total_in_hi32 = ((s) -> strm) -> total_in_hi32 + 1U;
        }
      }
    }
    goto _277506;
    _54786 :;
    if(!(v_w2c_35 != 80U))
      goto _207874;
    retVal = -4LL;
    goto _207618;
    _207874 :;
    _55042 :;
    (s) -> state = 46U;
    _278530 :;
    if((s) -> bsLive > (_INT32)(7U))
    {
      v_w2c_36 = _U4LSHR((s) -> bsBuff, (_UINT32)((s) -> bsLive + -8)) & 255U;
      (s) -> bsLive = (s) -> bsLive + -8;
      goto _55554;
    }
    else
    {
      if(((s) -> strm) -> avail_in == 0U)
      {
        retVal = 0U;
        goto _1026;
      }
      else
      {
        (s) -> bsBuff = (_UINT32) * (_UINT8 *)(((s) -> strm) -> next_in) | _U4SHL((s) -> bsBuff, 8U);
        (s) -> bsLive = (s) -> bsLive + (_INT32)(8U);
        ((s) -> strm) -> next_in = ((s) -> strm) -> next_in + 1U;
        ((s) -> strm) -> avail_in = ((s) -> strm) -> avail_in + (_UINT32)(-1);
        ((s) -> strm) -> total_in_lo32 = ((s) -> strm) -> total_in_lo32 + 1U;
        if(((s) -> strm) -> total_in_lo32 == 0U)
        {
          ((s) -> strm) -> total_in_hi32 = ((s) -> strm) -> total_in_hi32 + 1U;
        }
      }
    }
    goto _278530;
    _55554 :;
    if(!(v_w2c_36 != 144U))
      goto _207362;
    retVal = -4LL;
    goto _207106;
    _207362 :;
    (s) -> storedCombinedCRC = 0U;
    _55810 :;
    (s) -> state = 47U;
    _279554 :;
    if((s) -> bsLive > (_INT32)(7U))
    {
      v_w2c_37 = _U4LSHR((s) -> bsBuff, (_UINT32)((s) -> bsLive + -8)) & 255U;
      (s) -> bsLive = (s) -> bsLive + -8;
      goto _56322;
    }
    else
    {
      if(((s) -> strm) -> avail_in == 0U)
      {
        retVal = 0U;
        goto _1026;
      }
      else
      {
        (s) -> bsBuff = (_UINT32) * (_UINT8 *)(((s) -> strm) -> next_in) | _U4SHL((s) -> bsBuff, 8U);
        (s) -> bsLive = (s) -> bsLive + (_INT32)(8U);
        ((s) -> strm) -> next_in = ((s) -> strm) -> next_in + 1U;
        ((s) -> strm) -> avail_in = ((s) -> strm) -> avail_in + (_UINT32)(-1);
        ((s) -> strm) -> total_in_lo32 = ((s) -> strm) -> total_in_lo32 + 1U;
        if(((s) -> strm) -> total_in_lo32 == 0U)
        {
          ((s) -> strm) -> total_in_hi32 = ((s) -> strm) -> total_in_hi32 + 1U;
        }
      }
    }
    goto _279554;
    _56322 :;
    (s) -> storedCombinedCRC = v_w2c_37 | _U4SHL((s) -> storedCombinedCRC, 8U);
    _56578 :;
    (s) -> state = 48U;
    _280578 :;
    if((s) -> bsLive > (_INT32)(7U))
    {
      v_w2c_38 = _U4LSHR((s) -> bsBuff, (_UINT32)((s) -> bsLive + -8)) & 255U;
      (s) -> bsLive = (s) -> bsLive + -8;
      goto _57090;
    }
    else
    {
      if(((s) -> strm) -> avail_in == 0U)
      {
        retVal = 0U;
        goto _1026;
      }
      else
      {
        (s) -> bsBuff = (_UINT32) * (_UINT8 *)(((s) -> strm) -> next_in) | _U4SHL((s) -> bsBuff, 8U);
        (s) -> bsLive = (s) -> bsLive + (_INT32)(8U);
        ((s) -> strm) -> next_in = ((s) -> strm) -> next_in + 1U;
        ((s) -> strm) -> avail_in = ((s) -> strm) -> avail_in + (_UINT32)(-1);
        ((s) -> strm) -> total_in_lo32 = ((s) -> strm) -> total_in_lo32 + 1U;
        if(((s) -> strm) -> total_in_lo32 == 0U)
        {
          ((s) -> strm) -> total_in_hi32 = ((s) -> strm) -> total_in_hi32 + 1U;
        }
      }
    }
    goto _280578;
    _57090 :;
    (s) -> storedCombinedCRC = v_w2c_38 | _U4SHL((s) -> storedCombinedCRC, 8U);
    _57346 :;
    (s) -> state = 49U;
    _281602 :;
    if((s) -> bsLive > (_INT32)(7U))
    {
      v_w2c_39 = _U4LSHR((s) -> bsBuff, (_UINT32)((s) -> bsLive + -8)) & 255U;
      (s) -> bsLive = (s) -> bsLive + -8;
      goto _57858;
    }
    else
    {
      if(((s) -> strm) -> avail_in == 0U)
      {
        retVal = 0U;
        goto _1026;
      }
      else
      {
        (s) -> bsBuff = (_UINT32) * (_UINT8 *)(((s) -> strm) -> next_in) | _U4SHL((s) -> bsBuff, 8U);
        (s) -> bsLive = (s) -> bsLive + (_INT32)(8U);
        ((s) -> strm) -> next_in = ((s) -> strm) -> next_in + 1U;
        ((s) -> strm) -> avail_in = ((s) -> strm) -> avail_in + (_UINT32)(-1);
        ((s) -> strm) -> total_in_lo32 = ((s) -> strm) -> total_in_lo32 + 1U;
        if(((s) -> strm) -> total_in_lo32 == 0U)
        {
          ((s) -> strm) -> total_in_hi32 = ((s) -> strm) -> total_in_hi32 + 1U;
        }
      }
    }
    goto _281602;
    _57858 :;
    (s) -> storedCombinedCRC = v_w2c_39 | _U4SHL((s) -> storedCombinedCRC, 8U);
    _58114 :;
    (s) -> state = 50U;
    _282626 :;
    if((s) -> bsLive > (_INT32)(7U))
    {
      v_w2c_40 = _U4LSHR((s) -> bsBuff, (_UINT32)((s) -> bsLive + -8)) & 255U;
      (s) -> bsLive = (s) -> bsLive + -8;
      goto _58626;
    }
    else
    {
      if(((s) -> strm) -> avail_in == 0U)
      {
        retVal = 0U;
        goto _1026;
      }
      else
      {
        (s) -> bsBuff = (_UINT32) * (_UINT8 *)(((s) -> strm) -> next_in) | _U4SHL((s) -> bsBuff, 8U);
        (s) -> bsLive = (s) -> bsLive + (_INT32)(8U);
        ((s) -> strm) -> next_in = ((s) -> strm) -> next_in + 1U;
        ((s) -> strm) -> avail_in = ((s) -> strm) -> avail_in + (_UINT32)(-1);
        ((s) -> strm) -> total_in_lo32 = ((s) -> strm) -> total_in_lo32 + 1U;
        if(((s) -> strm) -> total_in_lo32 == 0U)
        {
          ((s) -> strm) -> total_in_hi32 = ((s) -> strm) -> total_in_hi32 + 1U;
        }
      }
    }
    goto _282626;
    _58626 :;
    (s) -> storedCombinedCRC = v_w2c_40 | _U4SHL((s) -> storedCombinedCRC, 8U);
    (s) -> state = 1U;
    retVal = 4U;
    goto _1026;
    _58882 :;
    BZ2_bz__AssertH__fail((_INT32) 4001U);
    BZ2_bz__AssertH__fail((_INT32) 4002U);
    _207106 :;
    _207618 :;
    _208130 :;
    _208642 :;
    _209154 :;
    _200194 :;
    _200962 :;
    _201474 :;
    _201986 :;
    _202498 :;
    _203010 :;
    _203522 :;
    _204034 :;
    _204546 :;
    _205058 :;
    _205570 :;
    _206082 :;
    _206594 :;
    _209666 :;
    _210178 :;
    _210690 :;
    _211202 :;
    _1026 :;
    * (((_INT32 *)(s) + 16384U) + -375LL) = i;
    * (((_INT32 *)(s) + 16384U) + -374LL) = j;
    * (((_INT32 *)(s) + 16384U) + -373LL) = t;
    * (((_INT32 *)(s) + 16384U) + -372LL) = alphaSize;
    * (((_INT32 *)(s) + 16384U) + -371LL) = nGroups;
    * (((_INT32 *)(s) + 16384U) + -370LL) = nSelectors;
    * (((_INT32 *)(s) + 16384U) + -369LL) = EOB;
    * (((_INT32 *)(s) + 16384U) + -368LL) = groupNo;
    * (((_INT32 *)(s) + 16384U) + -367LL) = groupPos;
    * (((_INT32 *)(s) + 16384U) + -366LL) = nextSym;
    * (((_INT32 *)(s) + 16384U) + -365LL) = nblockMAX;
    * (((_INT32 *)(s) + 16384U) + -364LL) = nblock;
    * (((_INT32 *)(s) + 16384U) + -363LL) = es;
    * (((_INT32 *)(s) + 16384U) + -362LL) = N;
    * (((_INT32 *)(s) + 16384U) + -361LL) = curr;
    * (((_INT32 *)(s) + 16384U) + -360LL) = zt;
    * (((_INT32 *)(s) + 16384U) + -359LL) = zn;
    * (((_INT32 *)(s) + 16384U) + -358LL) = zvec;
    * (((_INT32 *)(s) + 16384U) + -357LL) = zj;
    * (((_INT32 *)(s) + 16384U) + -356LL) = gSel;
    * (((_INT32 *)(s) + 16384U) + -355LL) = gMinlen;
    * (((_INT32 **)(s) + 8192U) + -177LL) = gLimit;
    * (((_INT32 **)(s) + 8192U) + -176LL) = gBase;
    * (((_INT32 **)(s) + 8192U) + -175LL) = gPerm;
    return retVal;
  } /* BZ2_decompress */

  