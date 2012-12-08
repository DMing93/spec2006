/*******************************************************
 * C file translated from WHIRL Sat Dec  8 10:39:04 2012
 *******************************************************/

/* Include file-level type and variable decls */
#include "blocksort.w2c.h"


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


static void fallbackQSort3(
  _UINT32 * fmap,
  _UINT32 * eclass,
  _INT32 loSt,
  _INT32 hiSt)
{
  
  register _INT32 i_preg;
  register _INT32 whiledo_var_preg;
  register _INT32 i_preg_w2c_0;
  register _INT32 whiledo_var_preg_w2c_0;
  register _INT32 yyn_preg;
  register _INT32 yyn_preg_w2c_0;
  _INT32 unLo;
  _INT32 unHi;
  _INT32 ltLo;
  _INT32 gtHi;
  _INT32 n;
  _INT32 m;
  _INT32 sp;
  _INT32 lo;
  _INT32 hi;
  _UINT32 med;
  _UINT32 r;
  _UINT32 r_w2c_3;
  _INT32 stackLo[100LL];
  _INT32 stackHi[100LL];
  _INT32 zztmp;
  _INT32 zztmp_w2c_0;
  _INT32 zztmp_w2c_1;
  _INT32 zztmp_w2c_2;
  _INT32 zztmp_w2c_3;
  _INT32 tmp;
  _UINT32 ec_tmp;
  
  r = 0U;
  (stackLo)[0U] = loSt;
  (stackHi)[0U] = hiSt;
  sp = 1U;
  while(sp > (_INT32)(0U))
  {
    if(sp > (_INT32)(99U))
    {
      BZ2_bz__AssertH__fail((_INT32) 1004U);
    }
    sp = sp + -1;
    lo = (stackLo)[sp];
    hi = (stackHi)[sp];
    if((hi - lo) <= (_INT32)(9U))
    {
      if(lo != hi)
      {
        if((hi - lo) > (_INT32)(3U))
        {
          for(i_preg = 0U; i_preg <= ((hi - lo) + -4); i_preg = i_preg + (_INT32)(1U))
          {
            tmp = (_INT32)(fmap)[(_INT64)((hi - i_preg)) + -4LL];
            ec_tmp = (eclass)[tmp];
            whiledo_var_preg = 0U;
            while((hi >= ((whiledo_var_preg * (_INT32)(4U)) + (hi - i_preg))) && ((eclass)[(_UINT64)(fmap)[(_INT64)((whiledo_var_preg * (_INT32)(4U)) + (hi - i_preg))]] < ec_tmp))
            {
              (fmap)[(_INT64)(((whiledo_var_preg * (_INT32)(4U)) + (hi - i_preg))) + -4LL] = (_UINT64)(fmap)[(_INT64)((whiledo_var_preg * (_INT32)(4U)) + (hi - i_preg))];
              whiledo_var_preg = whiledo_var_preg + (_INT32)(1U);
            }
            (fmap)[(_INT64)(((whiledo_var_preg * (_INT32)(4U)) + (hi - i_preg))) + -4LL] = tmp;
          }
        }
        for(i_preg_w2c_0 = 0U; i_preg_w2c_0 <= ((hi - lo) + -1); i_preg_w2c_0 = i_preg_w2c_0 + (_INT32)(1U))
        {
          tmp = (_INT32)(fmap)[(_INT64)((hi - i_preg_w2c_0)) + -1LL];
          ec_tmp = (eclass)[tmp];
          whiledo_var_preg_w2c_0 = 0U;
          while((hi >= (whiledo_var_preg_w2c_0 + (hi - i_preg_w2c_0))) && ((eclass)[(_UINT64)(fmap)[(_INT64)(whiledo_var_preg_w2c_0 + (hi - i_preg_w2c_0))]] < ec_tmp))
          {
            (fmap)[(_INT64)((whiledo_var_preg_w2c_0 + (hi - i_preg_w2c_0))) + -1LL] = (_UINT64)(fmap)[(_INT64)(whiledo_var_preg_w2c_0 + (hi - i_preg_w2c_0))];
            whiledo_var_preg_w2c_0 = whiledo_var_preg_w2c_0 + (_INT32)(1U);
          }
          (fmap)[(_INT64)((whiledo_var_preg_w2c_0 + (hi - i_preg_w2c_0))) + -1LL] = tmp;
        }
      }
    }
    else
    {
      r = ((r * 7621U) + 1U) & 32767U;
      r_w2c_3 = r % 3U;
      if(r_w2c_3 == 0U)
      {
        med = *(eclass + (_UINT64) * (fmap + lo));
      }
      else
      {
        if(r_w2c_3 == 1U)
        {
          med = *(eclass + (_UINT64) * (fmap + (_INT64)(_I4ASHR(lo + hi, 1U))));
        }
        else
        {
          med = *(eclass + (_UINT64) * (fmap + hi));
        }
      }
      ltLo = lo;
      unLo = lo;
      gtHi = hi;
      unHi = hi;
      _23810 :;
      _24066 :;
      if(unLo > unHi)
        goto _1282;
      n = (_INT32) * (eclass + (_UINT64) * (fmap + unLo)) - (_INT32) med;
      if(n == (_INT32)(0U))
      {
        zztmp = (_UINT32)((_UINT64) * (fmap + unLo));
        * (fmap + unLo) = *(fmap + ltLo);
        * (fmap + ltLo) = zztmp;
        ltLo = ltLo + (_INT32)(1U);
        unLo = unLo + (_INT32)(1U);
      }
      else
      {
        if(n > (_INT32)(0U))
          goto _1282;
        unLo = unLo + (_INT32)(1U);
      }
      goto _24066;
      _1282 :;
      _24578 :;
      if(unLo > unHi)
        goto _2050;
      n = (_INT32) * (eclass + (_UINT64) * (fmap + unHi)) - (_INT32) med;
      if(n == (_INT32)(0U))
      {
        zztmp_w2c_0 = (_UINT32)((_UINT64) * (fmap + unHi));
        * (fmap + unHi) = *(fmap + gtHi);
        * (fmap + gtHi) = zztmp_w2c_0;
        gtHi = gtHi + -1;
        unHi = unHi + -1;
      }
      else
      {
        if(n < (_INT32)(0U))
          goto _2050;
        unHi = unHi + -1;
      }
      goto _24578;
      _2050 :;
      if(unLo > unHi)
        goto _2562;
      zztmp_w2c_1 = (_INT32) * (fmap + unLo);
      * (fmap + unLo) = (_UINT64) * (fmap + unHi);
      * (fmap + unHi) = zztmp_w2c_1;
      unLo = unLo + (_INT32)(1U);
      unHi = unHi + -1;
      goto _23810;
      _2562 :;
      if(ltLo <= gtHi)
      {
        n = _I4MIN(unLo - ltLo, ltLo - lo);
        m = _I4MIN(gtHi - unHi, hi - gtHi);
        for(yyn_preg = 0U; yyn_preg <= (n + -1); yyn_preg = yyn_preg + (_INT32)(1U))
        {
          zztmp_w2c_2 = (_INT32)(fmap)[(_INT64)(lo + yyn_preg)];
          (fmap)[(_INT64)(lo + yyn_preg)] = (fmap)[(_INT64)(yyn_preg + (unLo - n))];
          (fmap)[(_INT64)(yyn_preg + (unLo - n))] = zztmp_w2c_2;
        }
        for(yyn_preg_w2c_0 = 0U; yyn_preg_w2c_0 <= (m + -1); yyn_preg_w2c_0 = yyn_preg_w2c_0 + (_INT32)(1U))
        {
          zztmp_w2c_3 = (_INT32)(fmap)[(_INT64)(unLo + yyn_preg_w2c_0)];
          (fmap)[(_INT64)(unLo + yyn_preg_w2c_0)] = (fmap)[(_INT64)((yyn_preg_w2c_0 + (hi - m))) + 1LL];
          (fmap)[(_INT64)((yyn_preg_w2c_0 + (hi - m))) + 1LL] = zztmp_w2c_3;
        }
        if(((gtHi - unHi) + -1) < ((((unLo + lo) - ltLo) - lo) + -1))
        {
          (stackLo)[sp] = lo;
          (stackHi)[sp] = ((unLo + lo) - ltLo) + -1;
          (stackLo)[(_INT64)(sp) + (_INT64)(1U)] = (hi - (gtHi - unHi)) + (_INT32)(1U);
          (stackHi)[(_INT64)(sp) + (_INT64)(1U)] = hi;
          sp = sp + (_INT32)(2U);
        }
        else
        {
          (stackLo)[sp] = (hi - (gtHi - unHi)) + (_INT32)(1U);
          (stackHi)[sp] = hi;
          (stackLo)[(_INT64)(sp) + (_INT64)(1U)] = lo;
          (stackHi)[(_INT64)(sp) + (_INT64)(1U)] = ((unLo + lo) - ltLo) + -1;
          sp = sp + (_INT32)(2U);
        }
      }
    }
  }
  return;
} /* fallbackQSort3 */


static void fallbackSort(
  _UINT32 * fmap,
  _UINT32 * eclass,
  _UINT32 * bhtab,
  _INT32 nblock,
  _INT32 verb)
{
  
    register _INT32 i_preg;
  register _INT32 i_preg_w2c_0;
  register _INT32 i_preg_w2c_1;
  register _INT32 i_preg_w2c_2;
  register _INT32 i_preg_w2c_3;
  register _INT32 i_preg_w2c_4;
  register _INT32 i_preg_w2c_5;
  register _INT32 i_preg_w2c_6;
  register _INT32 i_preg_w2c_7;
  register _INT32 whiledo_var_preg;
  register _INT32 whiledo_var_preg_w2c_0;
  register _INT32 whiledo_var_preg_w2c_1;
  register _INT32 whiledo_var_preg_w2c_2;
  register _INT32 whiledo_var_preg_w2c_3;
  register _INT32 whiledo_var_preg_w2c_4;
  register _INT32 i_preg_w2c_8;
  register _INT32 i_preg_w2c_9;
  register _INT32 whiledo_var_preg_w2c_5;
  _INT32 ftab[257LL];
  _INT32 ftabCopy[256LL];
  _INT32 H;
  _INT32 j;
  _INT32 k;
  _INT32 l;
  _INT32 r;
  _INT32 cc;
  _INT32 cc_w2c_1;
  _INT32 nNotDone;
  _INT32 nBhtab;
  
  if(verb > (_INT32)(3U))
  {
    fprintf(stderr, "        bucket sorting ...\n");
  }
  for(i_preg = 0U; i_preg <= (_INT32)(256U); i_preg = i_preg + (_INT32)(1U))
  {
    (ftab)[(_INT64)(i_preg)] = 0U;
  }
  for(i_preg_w2c_0 = 0U; i_preg_w2c_0 <= (nblock + -1); i_preg_w2c_0 = i_preg_w2c_0 + (_INT32)(1U))
  {
    (ftab)[(_INT32)(*(_UINT8 **)(&eclass))[(_INT64)(i_preg_w2c_0)]] = (ftab)[(_INT32)(*(_UINT8 **)(&eclass))[(_INT64)(i_preg_w2c_0)]] + (_INT32)(1U);
  }
  for(i_preg_w2c_1 = 0U; i_preg_w2c_1 <= (_INT32)(255U); i_preg_w2c_1 = i_preg_w2c_1 + (_INT32)(1U))
  {
    (ftabCopy)[(_INT64)(i_preg_w2c_1)] = (ftab)[(_INT64)(i_preg_w2c_1)];
  }
  for(i_preg_w2c_2 = 0U; i_preg_w2c_2 <= 255; i_preg_w2c_2 = i_preg_w2c_2 + (_INT32)(1U))
  {
    (ftab)[(_INT64)(i_preg_w2c_2) + (_INT64)(1U)] = (ftab)[i_preg_w2c_2] + (ftab)[(_INT64)(i_preg_w2c_2) + (_INT64)(1U)];
  }
  nBhtab = (nblock / (_INT32)(32U)) + (_INT32)(2U);
  for(i_preg_w2c_3 = 0U; i_preg_w2c_3 <= (nblock + -1); i_preg_w2c_3 = i_preg_w2c_3 + (_INT32)(1U))
  {
    j = (_INT32)(*(_UINT8 **)(&eclass))[(_INT64)(i_preg_w2c_3)];
    k = (ftab)[j] + -1;
    (ftab)[j] = (ftab)[j] + -1;
    (fmap)[k] = i_preg_w2c_3;
  }
  /* PARALLEL DO will be converted to SUBROUTINE __mpdo_fallbackSort1 */
#pragma omp parallel for private(i_preg_w2c_4) shared(nBhtab, bhtab)
    for(i_preg_w2c_4 = 0U; i_preg_w2c_4 <= (nBhtab + -1); i_preg_w2c_4 = i_preg_w2c_4 + (_INT32)(1U))
    {
      (bhtab)[(_INT64)(i_preg_w2c_4)] = 0U;
    }
    for(i_preg_w2c_5 = 0U; i_preg_w2c_5 <= (_INT32)(255U); i_preg_w2c_5 = i_preg_w2c_5 + (_INT32)(1U))
    {
      (bhtab)[(_INT64)(_I4ASHR((ftab)[(_INT64)(i_preg_w2c_5)], (_INT32)(5U)))] = (bhtab)[(_INT64)(_I4ASHR((ftab)[(_INT64)(i_preg_w2c_5)], (_INT32)(5U)))] | (_UINT32)(_I4SHL((_INT32)(1U), (ftab)[(_INT64)(i_preg_w2c_5)] & (_INT32)(31U)));
    }
    for(i_preg_w2c_6 = 0U; i_preg_w2c_6 <= (_INT32)(31U); i_preg_w2c_6 = i_preg_w2c_6 + (_INT32)(1U))
    {
      (bhtab)[(_INT64)(_I4ASHR(nblock + (i_preg_w2c_6 * (_INT32)(2U)), (_INT32)(5U)))] = (bhtab)[(_INT64)(_I4ASHR(nblock + (i_preg_w2c_6 * (_INT32)(2U)), (_INT32)(5U)))] | (_UINT32)(_I4SHL((_INT32)(1U), (nblock + (i_preg_w2c_6 * (_INT32)(2U))) & (_INT32)(31U)));
      (bhtab)[(_INT64)(_I4ASHR((nblock + (i_preg_w2c_6 * (_INT32)(2U))) + (_INT32)(1U), (_INT32)(5U)))] = (bhtab)[(_INT64)(_I4ASHR((nblock + (i_preg_w2c_6 * (_INT32)(2U))) + (_INT32)(1U), (_INT32)(5U)))] & (_UINT32)(~_I4SHL((_INT32)(1U), ((nblock + (i_preg_w2c_6 * (_INT32)(2U))) + (_INT32)(1U)) & (_INT32)(31U)));
    }
    H = 1U;
    _36866 :;
    if(verb > (_INT32)(3U))
    {
      fprintf(stderr, "        depth %6d has ", H);
    }
    j = 0U;
    for(i_preg_w2c_7 = 0U; i_preg_w2c_7 <= (nblock + -1); i_preg_w2c_7 = i_preg_w2c_7 + (_INT32)(1U))
    {
      if(((bhtab)[(_INT64)(_I4ASHR(i_preg_w2c_7, (_INT32)(5U)))] & (_UINT32)(_I4SHL((_INT32)(1U), i_preg_w2c_7 & (_INT32)(31U)))) != 0U)
      {
        j = i_preg_w2c_7;
      }
      k = (fmap)[(_INT64)(i_preg_w2c_7)] - (_UINT32)(H);
      if(k < (_INT32)(0U))
      {
        k = nblock + k;
      }
      (_UINT32)(*(_UINT8 **)(&eclass))[(_UINT64) k] = (_UINT32) j;
    }
    nNotDone = 0U;
    r = -1LL;
    _38402 :;
    whiledo_var_preg = 0U;
    while(((*(bhtab + (_INT64)(_I4ASHR((r + whiledo_var_preg) + 1U, 5U))) & (_UINT32)(_I4SHL((_INT32)(1U), ((r + whiledo_var_preg) + (_INT32)(1U)) & (_INT32)(31U)))) != 0U) && ((((r + whiledo_var_preg) + (_INT32)(1U)) & (_INT32)(31U)) != (_INT32)(0U)))
    {
      whiledo_var_preg = whiledo_var_preg + (_INT32)(1U);
    }
    k = (r + whiledo_var_preg) + (_INT32)(1U);
    if((*(bhtab + (_INT64)(_I4ASHR(k, 5U))) & (_UINT32)(_I4SHL((_INT32)(1U), k & (_INT32)(31U)))) != 0U)
    {
      whiledo_var_preg_w2c_0 = 0U;
      while(*(bhtab + (_INT64)(_I4ASHR(k + (whiledo_var_preg_w2c_0 * 32U), 5U))) == 4294967295U)
      {
        whiledo_var_preg_w2c_0 = whiledo_var_preg_w2c_0 + (_INT32)(1U);
      }
      k = k + (whiledo_var_preg_w2c_0 * (_INT32)(32U));
      whiledo_var_preg_w2c_1 = 0U;
      while((*(bhtab + (_INT64)(_I4ASHR(k + whiledo_var_preg_w2c_1, 5U))) & (_UINT32)(_I4SHL((_INT32)(1U), (k + whiledo_var_preg_w2c_1) & (_INT32)(31U)))) != 0U)
      {
        whiledo_var_preg_w2c_1 = whiledo_var_preg_w2c_1 + (_INT32)(1U);
      }
      k = k + whiledo_var_preg_w2c_1;
    }
    l = k + -1;
    if(nblock <= (k + -1))
      goto _9986;
    whiledo_var_preg_w2c_2 = 0U;
    while(((*(bhtab + (_INT64)(_I4ASHR(k + whiledo_var_preg_w2c_2, 5U))) & (_UINT32)(_I4SHL((_INT32)(1U), (k + whiledo_var_preg_w2c_2) & (_INT32)(31U)))) == 0U) && (((k + whiledo_var_preg_w2c_2) & (_INT32)(31U)) != (_INT32)(0U)))
    {
      whiledo_var_preg_w2c_2 = whiledo_var_preg_w2c_2 + (_INT32)(1U);
    }
    k = k + whiledo_var_preg_w2c_2;
    if((*(bhtab + (_INT64)(_I4ASHR(k, 5U))) & (_UINT32)(_I4SHL((_INT32)(1U), k & (_INT32)(31U)))) == 0U)
    {
      whiledo_var_preg_w2c_3 = 0U;
      while(*(bhtab + (_INT64)(_I4ASHR(k + (whiledo_var_preg_w2c_3 * 32U), 5U))) == 0U)
      {
        whiledo_var_preg_w2c_3 = whiledo_var_preg_w2c_3 + (_INT32)(1U);
      }
      k = k + (whiledo_var_preg_w2c_3 * (_INT32)(32U));
      whiledo_var_preg_w2c_4 = 0U;
      while((*(bhtab + (_INT64)(_I4ASHR(k + whiledo_var_preg_w2c_4, 5U))) & (_UINT32)(_I4SHL((_INT32)(1U), (k + whiledo_var_preg_w2c_4) & (_INT32)(31U)))) == 0U)
      {
        whiledo_var_preg_w2c_4 = whiledo_var_preg_w2c_4 + (_INT32)(1U);
      }
      k = k + whiledo_var_preg_w2c_4;
    }
    r = k + -1;
    if(nblock <= (k + -1))
      goto _9986;
    if(l < (k + -1))
    {
      nNotDone = (nNotDone + (r - l)) + (_INT32)(1U);
      fallbackQSort3(fmap, (_UINT32 *) * (_UINT8 **)(&eclass), l, r);
      cc = -1LL;
      for(i_preg_w2c_8 = 0U; i_preg_w2c_8 <= (r - l); i_preg_w2c_8 = i_preg_w2c_8 + (_INT32)(1U))
      {
        cc_w2c_1 = (_INT32)(_UINT32)(*(_UINT8 **)(&eclass))[(_UINT64)(fmap)[(_INT64)(l + i_preg_w2c_8)]];
        if(cc != cc_w2c_1)
        {
          (bhtab)[(_INT64)(_I4ASHR(l + i_preg_w2c_8, (_INT32)(5U)))] = (bhtab)[(_INT64)(_I4ASHR(l + i_preg_w2c_8, (_INT32)(5U)))] | (_UINT32)(_I4SHL((_INT32)(1U), (l + i_preg_w2c_8) & (_INT32)(31U)));
          cc = cc_w2c_1;
        }
      }
    }
    goto _38402;
    _9986 :;
    if(verb > (_INT32)(3U))
    {
      fprintf(stderr, "%6d unresolved strings\n", nNotDone);
    }
    H = H * (_INT32)(2U);
    if((nblock < H) || (nNotDone == (_INT32)(0U)))
      goto _13314;
    goto _36866;
    _13314 :;
    if(verb > (_INT32)(3U))
    {
      fprintf(stderr, "        reconstructing block ...\n");
    }
    j = 0U;
    for(i_preg_w2c_9 = 0U; i_preg_w2c_9 <= (nblock + -1); i_preg_w2c_9 = i_preg_w2c_9 + (_INT32)(1U))
    {
      whiledo_var_preg_w2c_5 = 0U;
      while((ftabCopy)[(_INT64)(j + whiledo_var_preg_w2c_5)] == (_INT32)(0U))
      {
        whiledo_var_preg_w2c_5 = whiledo_var_preg_w2c_5 + (_INT32)(1U);
      }
      j = j + whiledo_var_preg_w2c_5;
      (ftabCopy)[j] = (ftabCopy)[j] + -1;
      (*(_UINT8 **)(&eclass))[(_UINT64)(fmap)[(_INT64)(i_preg_w2c_9)]] = j;
    }
    if(j > (_INT32)(255U))
    {
      BZ2_bz__AssertH__fail((_INT32) 1005U);
    }
    return;
  } /* fallbackSort */

  
  static void mainSimpleSort(
    _UINT32 * ptr,
    _UINT8 * block,
    _UINT16 * quadrant,
    _INT32 nblock,
    _INT32 lo,
    _INT32 hi,
    _INT32 d,
    _INT32 * budget)
  {
    
    register _INT32 whiledo_var_preg;
    register _INT32 hp_preg;
    register _UINT8 rr_preg_w2c_1;
    register _UINT8 rr_preg_w2c_0;
    register _UINT8 rr_preg;
    _INT32 i;
    _INT32 j;
    _INT32 h;
    _INT32 hp;
    _UINT32 v;
    _INT32 k;
    _UINT8 c_w2c_1;
    _UINT8 c_w2c_2;
    _UINT16 s_w2c_1;
    _UINT16 s_w2c_2;
    _UINT32 i_w2c_0;
    _UINT32 i_w2c_3;
    _UINT32 i_w2c_4;
    _UINT32 i_w2c_5;
    _UINT32 i_w2c_6;
    _UINT32 i_w2c_7;
    
    if(((hi - lo) + (_INT32)(1U)) <= (_INT32)(1U))
    {
      return;
    }
    whiledo_var_preg = 0U;
    _65794 :;
    while((incs)[(_INT64)(whiledo_var_preg)] < ((hi - lo) + (_INT32)(1U)))
    {
      _514 :;
      _91906 :;
      whiledo_var_preg = whiledo_var_preg + (_INT32)(1U);
    }
    _770 :;
    hp = whiledo_var_preg + -1;
    hp_preg = 0U;
    _66306 :;
    while((hp - hp_preg) >= (_INT32)(0U))
    {
      _1282 :;
      h = (incs)[(_INT64)(hp - hp_preg)];
      i = lo + h;
      _66818 :;
      _1538 :;
      if(hi < i)
        goto _1794;
      v = *(ptr + (_INT64)(i));
      j = i;
      _67074 :;
      _26626 :;
      i_w2c_6 = *(ptr + (_INT64)(j - h)) + (_UINT32) d;
      _7426 :;
      c_w2c_1 = *(block + i_w2c_6);
      c_w2c_2 = *(block + ((_UINT32) d + v));
      if((_UINT32)(c_w2c_1) != (_UINT32)(c_w2c_2))
      {
        rr_preg_w2c_1 = (_UINT32)(c_w2c_1) > (_UINT32)(c_w2c_2);
      }
      else
      {
        c_w2c_1 = *((block + i_w2c_6) + 1LL);
        c_w2c_2 = *((block + ((_UINT32) d + v)) + 1LL);
        if((_UINT32)(c_w2c_1) != (_UINT32)(c_w2c_2))
        {
          rr_preg_w2c_1 = (_UINT32)(c_w2c_1) > (_UINT32)(c_w2c_2);
        }
        else
        {
          c_w2c_1 = *((block + i_w2c_6) + 2LL);
          c_w2c_2 = *((block + ((_UINT32) d + v)) + 2LL);
          if((_UINT32)(c_w2c_1) != (_UINT32)(c_w2c_2))
          {
            rr_preg_w2c_1 = (_UINT32)(c_w2c_1) > (_UINT32)(c_w2c_2);
          }
          else
          {
            c_w2c_1 = *((block + i_w2c_6) + 3LL);
            c_w2c_2 = *((block + ((_UINT32) d + v)) + 3LL);
            if((_UINT32)(c_w2c_1) != (_UINT32)(c_w2c_2))
            {
              rr_preg_w2c_1 = (_UINT32)(c_w2c_1) > (_UINT32)(c_w2c_2);
            }
            else
            {
              c_w2c_1 = *((block + i_w2c_6) + 4LL);
              c_w2c_2 = *((block + ((_UINT32) d + v)) + 4LL);
              if((_UINT32)(c_w2c_1) != (_UINT32)(c_w2c_2))
              {
                rr_preg_w2c_1 = (_UINT32)(c_w2c_1) > (_UINT32)(c_w2c_2);
              }
              else
              {
                c_w2c_1 = *((block + i_w2c_6) + 5LL);
                c_w2c_2 = *((block + ((_UINT32) d + v)) + 5LL);
                if((_UINT32)(c_w2c_1) != (_UINT32)(c_w2c_2))
                {
                  rr_preg_w2c_1 = (_UINT32)(c_w2c_1) > (_UINT32)(c_w2c_2);
                }
                else
                {
                  c_w2c_1 = *((block + i_w2c_6) + 6LL);
                  c_w2c_2 = *((block + ((_UINT32) d + v)) + 6LL);
                  if((_UINT32)(c_w2c_1) != (_UINT32)(c_w2c_2))
                  {
                    rr_preg_w2c_1 = (_UINT32)(c_w2c_1) > (_UINT32)(c_w2c_2);
                  }
                  else
                  {
                    c_w2c_1 = *((block + i_w2c_6) + 7LL);
                    c_w2c_2 = *((block + ((_UINT32) d + v)) + 7LL);
                    if((_UINT32)(c_w2c_1) != (_UINT32)(c_w2c_2))
                    {
                      rr_preg_w2c_1 = (_UINT32)(c_w2c_1) > (_UINT32)(c_w2c_2);
                    }
                    else
                    {
                      c_w2c_1 = *((block + i_w2c_6) + 8LL);
                      c_w2c_2 = *((block + ((_UINT32) d + v)) + 8LL);
                      if((_UINT32)(c_w2c_1) != (_UINT32)(c_w2c_2))
                      {
                        rr_preg_w2c_1 = (_UINT32)(c_w2c_1) > (_UINT32)(c_w2c_2);
                      }
                      else
                      {
                        c_w2c_1 = *((block + i_w2c_6) + 9LL);
                        c_w2c_2 = *((block + ((_UINT32) d + v)) + 9LL);
                        if((_UINT32)(c_w2c_1) != (_UINT32)(c_w2c_2))
                        {
                          rr_preg_w2c_1 = (_UINT32)(c_w2c_1) > (_UINT32)(c_w2c_2);
                        }
                        else
                        {
                          c_w2c_1 = *((block + i_w2c_6) + 10LL);
                          c_w2c_2 = *((block + ((_UINT32) d + v)) + 10LL);
                          if((_UINT32)(c_w2c_1) != (_UINT32)(c_w2c_2))
                          {
                            rr_preg_w2c_1 = (_UINT32)(c_w2c_1) > (_UINT32)(c_w2c_2);
                          }
                          else
                          {
                            c_w2c_1 = *((block + i_w2c_6) + 11LL);
                            c_w2c_2 = *((block + ((_UINT32) d + v)) + 11LL);
                            if((_UINT32)(c_w2c_1) != (_UINT32)(c_w2c_2))
                            {
                              rr_preg_w2c_1 = (_UINT32)(c_w2c_1) > (_UINT32)(c_w2c_2);
                            }
                            else
                            {
                              i_w2c_6 = i_w2c_6 + 12U;
                              i_w2c_7 = ((_UINT32) d + v) + 12U;
                              k = (_INT32)((_UINT32) nblock) + (_INT32)(8U);
                              do
                              {
                                _6914 :;
                                c_w2c_1 = *(block + (_UINT64) i_w2c_6);
                                c_w2c_2 = *(block + (_UINT64) i_w2c_7);
                                if((_UINT32)(c_w2c_1) != (_UINT32)(c_w2c_2))
                                {
                                  rr_preg_w2c_1 = (_UINT32)(c_w2c_1) > (_UINT32)(c_w2c_2);
                                  goto _6658;
                                }
                                else
                                {
                                  s_w2c_1 = *(quadrant + (_UINT64)((_UINT64) i_w2c_6));
                                  s_w2c_2 = *(quadrant + (_UINT64)((_UINT64) i_w2c_7));
                                  if((_UINT32)(s_w2c_1) != (_UINT32)(s_w2c_2))
                                  {
                                    rr_preg_w2c_1 = (_UINT32)(s_w2c_1) > (_UINT32)(s_w2c_2);
                                    goto _6658;
                                  }
                                  else
                                  {
                                    c_w2c_1 = *((block + (_UINT64) i_w2c_6) + 1LL);
                                    c_w2c_2 = *((block + (_UINT64) i_w2c_7) + 1LL);
                                    if((_UINT32)(c_w2c_1) != (_UINT32)(c_w2c_2))
                                    {
                                      rr_preg_w2c_1 = (_UINT32)(c_w2c_1) > (_UINT32)(c_w2c_2);
                                      goto _6658;
                                    }
                                    else
                                    {
                                      s_w2c_1 = *(quadrant + (_UINT64)(((_UINT64) i_w2c_6 + 1U)));
                                      s_w2c_2 = *(quadrant + (_UINT64)(((_UINT64) i_w2c_7 + 1U)));
                                      if((_UINT32)(s_w2c_1) != (_UINT32)(s_w2c_2))
                                      {
                                        rr_preg_w2c_1 = (_UINT32)(s_w2c_1) > (_UINT32)(s_w2c_2);
                                        goto _6658;
                                      }
                                      else
                                      {
                                        c_w2c_1 = *((block + (_UINT64) i_w2c_6) + 2LL);
                                        c_w2c_2 = *((block + (_UINT64) i_w2c_7) + 2LL);
                                        if((_UINT32)(c_w2c_1) != (_UINT32)(c_w2c_2))
                                        {
                                        rr_preg_w2c_1 = (_UINT32)(c_w2c_1) > (_UINT32)(c_w2c_2);
                                        goto _6658;
                                        }
                                        else
                                        {
                                        s_w2c_1 = *(quadrant + (_UINT64)(((_UINT64) i_w2c_6 + 2U)));
                                        s_w2c_2 = *(quadrant + (_UINT64)(((_UINT64) i_w2c_7 + 2U)));
                                        if((_UINT32)(s_w2c_1) != (_UINT32)(s_w2c_2))
                                        {
                                        rr_preg_w2c_1 = (_UINT32)(s_w2c_1) > (_UINT32)(s_w2c_2);
                                        goto _6658;
                                        }
                                        else
                                        {
                                        c_w2c_1 = *((block + (_UINT64) i_w2c_6) + 3LL);
                                        c_w2c_2 = *((block + (_UINT64) i_w2c_7) + 3LL);
                                        if((_UINT32)(c_w2c_1) != (_UINT32)(c_w2c_2))
                                        {
                                        rr_preg_w2c_1 = (_UINT32)(c_w2c_1) > (_UINT32)(c_w2c_2);
                                        goto _6658;
                                        }
                                        else
                                        {
                                        s_w2c_1 = *(quadrant + (_UINT64)(((_UINT64) i_w2c_6 + 3U)));
                                        s_w2c_2 = *(quadrant + (_UINT64)(((_UINT64) i_w2c_7 + 3U)));
                                        if((_UINT32)(s_w2c_1) != (_UINT32)(s_w2c_2))
                                        {
                                        rr_preg_w2c_1 = (_UINT32)(s_w2c_1) > (_UINT32)(s_w2c_2);
                                        goto _6658;
                                        }
                                        else
                                        {
                                        c_w2c_1 = *((block + (_UINT64) i_w2c_6) + 4LL);
                                        c_w2c_2 = *((block + (_UINT64) i_w2c_7) + 4LL);
                                        if((_UINT32)(c_w2c_1) != (_UINT32)(c_w2c_2))
                                        {
                                        rr_preg_w2c_1 = (_UINT32)(c_w2c_1) > (_UINT32)(c_w2c_2);
                                        goto _6658;
                                        }
                                        else
                                        {
                                        s_w2c_1 = *(quadrant + (_UINT64)(((_UINT64) i_w2c_6 + 4U)));
                                        s_w2c_2 = *(quadrant + (_UINT64)(((_UINT64) i_w2c_7 + 4U)));
                                        if((_UINT32)(s_w2c_1) != (_UINT32)(s_w2c_2))
                                        {
                                        rr_preg_w2c_1 = (_UINT32)(s_w2c_1) > (_UINT32)(s_w2c_2);
                                        goto _6658;
                                        }
                                        else
                                        {
                                        c_w2c_1 = *((block + (_UINT64) i_w2c_6) + 5LL);
                                        c_w2c_2 = *((block + (_UINT64) i_w2c_7) + 5LL);
                                        if((_UINT32)(c_w2c_1) != (_UINT32)(c_w2c_2))
                                        {
                                        rr_preg_w2c_1 = (_UINT32)(c_w2c_1) > (_UINT32)(c_w2c_2);
                                        goto _6658;
                                        }
                                        else
                                        {
                                        s_w2c_1 = *(quadrant + (_UINT64)(((_UINT64) i_w2c_6 + 5U)));
                                        s_w2c_2 = *(quadrant + (_UINT64)(((_UINT64) i_w2c_7 + 5U)));
                                        if((_UINT32)(s_w2c_1) != (_UINT32)(s_w2c_2))
                                        {
                                        rr_preg_w2c_1 = (_UINT32)(s_w2c_1) > (_UINT32)(s_w2c_2);
                                        goto _6658;
                                        }
                                        else
                                        {
                                        c_w2c_1 = *((block + (_UINT64) i_w2c_6) + 6LL);
                                        c_w2c_2 = *((block + (_UINT64) i_w2c_7) + 6LL);
                                        if((_UINT32)(c_w2c_1) != (_UINT32)(c_w2c_2))
                                        {
                                        rr_preg_w2c_1 = (_UINT32)(c_w2c_1) > (_UINT32)(c_w2c_2);
                                        goto _6658;
                                        }
                                        else
                                        {
                                        s_w2c_1 = *(quadrant + (_UINT64)(((_UINT64) i_w2c_6 + 6U)));
                                        s_w2c_2 = *(quadrant + (_UINT64)(((_UINT64) i_w2c_7 + 6U)));
                                        if((_UINT32)(s_w2c_1) != (_UINT32)(s_w2c_2))
                                        {
                                        rr_preg_w2c_1 = (_UINT32)(s_w2c_1) > (_UINT32)(s_w2c_2);
                                        goto _6658;
                                        }
                                        else
                                        {
                                        c_w2c_1 = *((block + (_UINT64) i_w2c_6) + 7LL);
                                        c_w2c_2 = *((block + (_UINT64) i_w2c_7) + 7LL);
                                        if((_UINT32)(c_w2c_1) != (_UINT32)(c_w2c_2))
                                        {
                                        rr_preg_w2c_1 = (_UINT32)(c_w2c_1) > (_UINT32)(c_w2c_2);
                                        goto _6658;
                                        }
                                        else
                                        {
                                        s_w2c_1 = *(quadrant + (_UINT64)(((_UINT64) i_w2c_6 + 7U)));
                                        s_w2c_2 = *(quadrant + (_UINT64)(((_UINT64) i_w2c_7 + 7U)));
                                        if((_UINT32)(s_w2c_1) != (_UINT32)(s_w2c_2))
                                        {
                                        rr_preg_w2c_1 = (_UINT32)(s_w2c_1) > (_UINT32)(s_w2c_2);
                                        goto _6658;
                                        }
                                        else
                                        {
                                        i_w2c_6 = (_UINT32)((_UINT64) i_w2c_6) + 8U;
                                        i_w2c_7 = (_UINT32)((_UINT64) i_w2c_7) + 8U;
                                        if((_UINT32) nblock <= i_w2c_6)
                                        {
                                        i_w2c_6 = i_w2c_6 - (_UINT32) nblock;
                                        }
                                        if((_UINT32) nblock <= i_w2c_7)
                                        {
                                        i_w2c_7 = i_w2c_7 - (_UINT32) nblock;
                                        }
                                        k = k + -8;
                                        * budget = *budget + -1;
                                        }
                                        }
                                        }
                                        }
                                        }
                                        }
                                        }
                                        }
                                        }
                                        }
                                        }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                              while(k >= (_INT32)(0U));
                              _7170 :;
                              rr_preg_w2c_1 = 0U;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      _6658 :;
      if(!((_UINT32)(rr_preg_w2c_1) != 0U))
        goto _26882;
      _2306 :;
      * (ptr + (_INT64)(j)) = *(ptr + (_INT64)(j - h));
      j = j - h;
      if(j <= ((lo + h) + -1))
        goto _2562;
      _2050 :;
      goto _67074;
      _26882 :;
      _2562 :;
      * (ptr + (_INT64)((_UINT64) j)) = v;
      if(hi < (i + (_INT32)(1U)))
        goto _1794;
      v = *((ptr + (_INT64)(i)) + 1LL);
      j = i + (_INT32)(1U);
      _75266 :;
      _45058 :;
      i_w2c_4 = *(ptr + (_INT64)(j - h)) + (_UINT32) d;
      _6402 :;
      c_w2c_1 = *(block + i_w2c_4);
      c_w2c_2 = *(block + ((_UINT32) d + v));
      if((_UINT32)(c_w2c_1) != (_UINT32)(c_w2c_2))
      {
        rr_preg_w2c_0 = (_UINT32)(c_w2c_1) > (_UINT32)(c_w2c_2);
      }
      else
      {
        c_w2c_1 = *((block + i_w2c_4) + 1LL);
        c_w2c_2 = *((block + ((_UINT32) d + v)) + 1LL);
        if((_UINT32)(c_w2c_1) != (_UINT32)(c_w2c_2))
        {
          rr_preg_w2c_0 = (_UINT32)(c_w2c_1) > (_UINT32)(c_w2c_2);
        }
        else
        {
          c_w2c_1 = *((block + i_w2c_4) + 2LL);
          c_w2c_2 = *((block + ((_UINT32) d + v)) + 2LL);
          if((_UINT32)(c_w2c_1) != (_UINT32)(c_w2c_2))
          {
            rr_preg_w2c_0 = (_UINT32)(c_w2c_1) > (_UINT32)(c_w2c_2);
          }
          else
          {
            c_w2c_1 = *((block + i_w2c_4) + 3LL);
            c_w2c_2 = *((block + ((_UINT32) d + v)) + 3LL);
            if((_UINT32)(c_w2c_1) != (_UINT32)(c_w2c_2))
            {
              rr_preg_w2c_0 = (_UINT32)(c_w2c_1) > (_UINT32)(c_w2c_2);
            }
            else
            {
              c_w2c_1 = *((block + i_w2c_4) + 4LL);
              c_w2c_2 = *((block + ((_UINT32) d + v)) + 4LL);
              if((_UINT32)(c_w2c_1) != (_UINT32)(c_w2c_2))
              {
                rr_preg_w2c_0 = (_UINT32)(c_w2c_1) > (_UINT32)(c_w2c_2);
              }
              else
              {
                c_w2c_1 = *((block + i_w2c_4) + 5LL);
                c_w2c_2 = *((block + ((_UINT32) d + v)) + 5LL);
                if((_UINT32)(c_w2c_1) != (_UINT32)(c_w2c_2))
                {
                  rr_preg_w2c_0 = (_UINT32)(c_w2c_1) > (_UINT32)(c_w2c_2);
                }
                else
                {
                  c_w2c_1 = *((block + i_w2c_4) + 6LL);
                  c_w2c_2 = *((block + ((_UINT32) d + v)) + 6LL);
                  if((_UINT32)(c_w2c_1) != (_UINT32)(c_w2c_2))
                  {
                    rr_preg_w2c_0 = (_UINT32)(c_w2c_1) > (_UINT32)(c_w2c_2);
                  }
                  else
                  {
                    c_w2c_1 = *((block + i_w2c_4) + 7LL);
                    c_w2c_2 = *((block + ((_UINT32) d + v)) + 7LL);
                    if((_UINT32)(c_w2c_1) != (_UINT32)(c_w2c_2))
                    {
                      rr_preg_w2c_0 = (_UINT32)(c_w2c_1) > (_UINT32)(c_w2c_2);
                    }
                    else
                    {
                      c_w2c_1 = *((block + i_w2c_4) + 8LL);
                      c_w2c_2 = *((block + ((_UINT32) d + v)) + 8LL);
                      if((_UINT32)(c_w2c_1) != (_UINT32)(c_w2c_2))
                      {
                        rr_preg_w2c_0 = (_UINT32)(c_w2c_1) > (_UINT32)(c_w2c_2);
                      }
                      else
                      {
                        c_w2c_1 = *((block + i_w2c_4) + 9LL);
                        c_w2c_2 = *((block + ((_UINT32) d + v)) + 9LL);
                        if((_UINT32)(c_w2c_1) != (_UINT32)(c_w2c_2))
                        {
                          rr_preg_w2c_0 = (_UINT32)(c_w2c_1) > (_UINT32)(c_w2c_2);
                        }
                        else
                        {
                          c_w2c_1 = *((block + i_w2c_4) + 10LL);
                          c_w2c_2 = *((block + ((_UINT32) d + v)) + 10LL);
                          if((_UINT32)(c_w2c_1) != (_UINT32)(c_w2c_2))
                          {
                            rr_preg_w2c_0 = (_UINT32)(c_w2c_1) > (_UINT32)(c_w2c_2);
                          }
                          else
                          {
                            c_w2c_1 = *((block + i_w2c_4) + 11LL);
                            c_w2c_2 = *((block + ((_UINT32) d + v)) + 11LL);
                            if((_UINT32)(c_w2c_1) != (_UINT32)(c_w2c_2))
                            {
                              rr_preg_w2c_0 = (_UINT32)(c_w2c_1) > (_UINT32)(c_w2c_2);
                            }
                            else
                            {
                              i_w2c_4 = i_w2c_4 + 12U;
                              i_w2c_5 = ((_UINT32) d + v) + 12U;
                              k = (_INT32)((_UINT32) nblock) + (_INT32)(8U);
                              do
                              {
                                _5890 :;
                                c_w2c_1 = *(block + (_UINT64) i_w2c_4);
                                c_w2c_2 = *(block + (_UINT64) i_w2c_5);
                                if((_UINT32)(c_w2c_1) != (_UINT32)(c_w2c_2))
                                {
                                  rr_preg_w2c_0 = (_UINT32)(c_w2c_1) > (_UINT32)(c_w2c_2);
                                  goto _5634;
                                }
                                else
                                {
                                  s_w2c_1 = *(quadrant + (_UINT64)((_UINT64) i_w2c_4));
                                  s_w2c_2 = *(quadrant + (_UINT64)((_UINT64) i_w2c_5));
                                  if((_UINT32)(s_w2c_1) != (_UINT32)(s_w2c_2))
                                  {
                                    rr_preg_w2c_0 = (_UINT32)(s_w2c_1) > (_UINT32)(s_w2c_2);
                                    goto _5634;
                                  }
                                  else
                                  {
                                    c_w2c_1 = *((block + (_UINT64) i_w2c_4) + 1LL);
                                    c_w2c_2 = *((block + (_UINT64) i_w2c_5) + 1LL);
                                    if((_UINT32)(c_w2c_1) != (_UINT32)(c_w2c_2))
                                    {
                                      rr_preg_w2c_0 = (_UINT32)(c_w2c_1) > (_UINT32)(c_w2c_2);
                                      goto _5634;
                                    }
                                    else
                                    {
                                      s_w2c_1 = *(quadrant + (_UINT64)(((_UINT64) i_w2c_4 + 1U)));
                                      s_w2c_2 = *(quadrant + (_UINT64)(((_UINT64) i_w2c_5 + 1U)));
                                      if((_UINT32)(s_w2c_1) != (_UINT32)(s_w2c_2))
                                      {
                                        rr_preg_w2c_0 = (_UINT32)(s_w2c_1) > (_UINT32)(s_w2c_2);
                                        goto _5634;
                                      }
                                      else
                                      {
                                        c_w2c_1 = *((block + (_UINT64) i_w2c_4) + 2LL);
                                        c_w2c_2 = *((block + (_UINT64) i_w2c_5) + 2LL);
                                        if((_UINT32)(c_w2c_1) != (_UINT32)(c_w2c_2))
                                        {
                                        rr_preg_w2c_0 = (_UINT32)(c_w2c_1) > (_UINT32)(c_w2c_2);
                                        goto _5634;
                                        }
                                        else
                                        {
                                        s_w2c_1 = *(quadrant + (_UINT64)(((_UINT64) i_w2c_4 + 2U)));
                                        s_w2c_2 = *(quadrant + (_UINT64)(((_UINT64) i_w2c_5 + 2U)));
                                        if((_UINT32)(s_w2c_1) != (_UINT32)(s_w2c_2))
                                        {
                                        rr_preg_w2c_0 = (_UINT32)(s_w2c_1) > (_UINT32)(s_w2c_2);
                                        goto _5634;
                                        }
                                        else
                                        {
                                        c_w2c_1 = *((block + (_UINT64) i_w2c_4) + 3LL);
                                        c_w2c_2 = *((block + (_UINT64) i_w2c_5) + 3LL);
                                        if((_UINT32)(c_w2c_1) != (_UINT32)(c_w2c_2))
                                        {
                                        rr_preg_w2c_0 = (_UINT32)(c_w2c_1) > (_UINT32)(c_w2c_2);
                                        goto _5634;
                                        }
                                        else
                                        {
                                        s_w2c_1 = *(quadrant + (_UINT64)(((_UINT64) i_w2c_4 + 3U)));
                                        s_w2c_2 = *(quadrant + (_UINT64)(((_UINT64) i_w2c_5 + 3U)));
                                        if((_UINT32)(s_w2c_1) != (_UINT32)(s_w2c_2))
                                        {
                                        rr_preg_w2c_0 = (_UINT32)(s_w2c_1) > (_UINT32)(s_w2c_2);
                                        goto _5634;
                                        }
                                        else
                                        {
                                        c_w2c_1 = *((block + (_UINT64) i_w2c_4) + 4LL);
                                        c_w2c_2 = *((block + (_UINT64) i_w2c_5) + 4LL);
                                        if((_UINT32)(c_w2c_1) != (_UINT32)(c_w2c_2))
                                        {
                                        rr_preg_w2c_0 = (_UINT32)(c_w2c_1) > (_UINT32)(c_w2c_2);
                                        goto _5634;
                                        }
                                        else
                                        {
                                        s_w2c_1 = *(quadrant + (_UINT64)(((_UINT64) i_w2c_4 + 4U)));
                                        s_w2c_2 = *(quadrant + (_UINT64)(((_UINT64) i_w2c_5 + 4U)));
                                        if((_UINT32)(s_w2c_1) != (_UINT32)(s_w2c_2))
                                        {
                                        rr_preg_w2c_0 = (_UINT32)(s_w2c_1) > (_UINT32)(s_w2c_2);
                                        goto _5634;
                                        }
                                        else
                                        {
                                        c_w2c_1 = *((block + (_UINT64) i_w2c_4) + 5LL);
                                        c_w2c_2 = *((block + (_UINT64) i_w2c_5) + 5LL);
                                        if((_UINT32)(c_w2c_1) != (_UINT32)(c_w2c_2))
                                        {
                                        rr_preg_w2c_0 = (_UINT32)(c_w2c_1) > (_UINT32)(c_w2c_2);
                                        goto _5634;
                                        }
                                        else
                                        {
                                        s_w2c_1 = *(quadrant + (_UINT64)(((_UINT64) i_w2c_4 + 5U)));
                                        s_w2c_2 = *(quadrant + (_UINT64)(((_UINT64) i_w2c_5 + 5U)));
                                        if((_UINT32)(s_w2c_1) != (_UINT32)(s_w2c_2))
                                        {
                                        rr_preg_w2c_0 = (_UINT32)(s_w2c_1) > (_UINT32)(s_w2c_2);
                                        goto _5634;
                                        }
                                        else
                                        {
                                        c_w2c_1 = *((block + (_UINT64) i_w2c_4) + 6LL);
                                        c_w2c_2 = *((block + (_UINT64) i_w2c_5) + 6LL);
                                        if((_UINT32)(c_w2c_1) != (_UINT32)(c_w2c_2))
                                        {
                                        rr_preg_w2c_0 = (_UINT32)(c_w2c_1) > (_UINT32)(c_w2c_2);
                                        goto _5634;
                                        }
                                        else
                                        {
                                        s_w2c_1 = *(quadrant + (_UINT64)(((_UINT64) i_w2c_4 + 6U)));
                                        s_w2c_2 = *(quadrant + (_UINT64)(((_UINT64) i_w2c_5 + 6U)));
                                        if((_UINT32)(s_w2c_1) != (_UINT32)(s_w2c_2))
                                        {
                                        rr_preg_w2c_0 = (_UINT32)(s_w2c_1) > (_UINT32)(s_w2c_2);
                                        goto _5634;
                                        }
                                        else
                                        {
                                        c_w2c_1 = *((block + (_UINT64) i_w2c_4) + 7LL);
                                        c_w2c_2 = *((block + (_UINT64) i_w2c_5) + 7LL);
                                        if((_UINT32)(c_w2c_1) != (_UINT32)(c_w2c_2))
                                        {
                                        rr_preg_w2c_0 = (_UINT32)(c_w2c_1) > (_UINT32)(c_w2c_2);
                                        goto _5634;
                                        }
                                        else
                                        {
                                        s_w2c_1 = *(quadrant + (_UINT64)(((_UINT64) i_w2c_4 + 7U)));
                                        s_w2c_2 = *(quadrant + (_UINT64)(((_UINT64) i_w2c_5 + 7U)));
                                        if((_UINT32)(s_w2c_1) != (_UINT32)(s_w2c_2))
                                        {
                                        rr_preg_w2c_0 = (_UINT32)(s_w2c_1) > (_UINT32)(s_w2c_2);
                                        goto _5634;
                                        }
                                        else
                                        {
                                        i_w2c_4 = (_UINT32)((_UINT64) i_w2c_4) + 8U;
                                        i_w2c_5 = (_UINT32)((_UINT64) i_w2c_5) + 8U;
                                        if((_UINT32) nblock <= i_w2c_4)
                                        {
                                        i_w2c_4 = i_w2c_4 - (_UINT32) nblock;
                                        }
                                        if((_UINT32) nblock <= i_w2c_5)
                                        {
                                        i_w2c_5 = i_w2c_5 - (_UINT32) nblock;
                                        }
                                        k = k + -8;
                                        * budget = *budget + -1;
                                        }
                                        }
                                        }
                                        }
                                        }
                                        }
                                        }
                                        }
                                        }
                                        }
                                        }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                              while(k >= (_INT32)(0U));
                              _6146 :;
                              rr_preg_w2c_0 = 0U;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      _5634 :;
      if(!((_UINT32)(rr_preg_w2c_0) != 0U))
        goto _45314;
      _3074 :;
      * (ptr + (_INT64)(j)) = *(ptr + (_INT64)(j - h));
      j = j - h;
      if(j <= ((lo + h) + -1))
        goto _3330;
      _2818 :;
      goto _75266;
      _45314 :;
      _3330 :;
      * (ptr + (_INT64)((_UINT64) j)) = v;
      if(hi < (i + (_INT32)(2U)))
        goto _1794;
      v = *((ptr + (_INT64)(i)) + 2LL);
      j = i + (_INT32)(2U);
      _83458 :;
      _63490 :;
      i_w2c_0 = *(ptr + (_INT64)(j - h)) + (_UINT32) d;
      _5378 :;
      c_w2c_1 = *(block + i_w2c_0);
      c_w2c_2 = *(block + ((_UINT32) d + v));
      if((_UINT32)(c_w2c_1) != (_UINT32)(c_w2c_2))
      {
        rr_preg = (_UINT32)(c_w2c_1) > (_UINT32)(c_w2c_2);
      }
      else
      {
        c_w2c_1 = *((block + i_w2c_0) + 1LL);
        c_w2c_2 = *((block + ((_UINT32) d + v)) + 1LL);
        if((_UINT32)(c_w2c_1) != (_UINT32)(c_w2c_2))
        {
          rr_preg = (_UINT32)(c_w2c_1) > (_UINT32)(c_w2c_2);
        }
        else
        {
          c_w2c_1 = *((block + i_w2c_0) + 2LL);
          c_w2c_2 = *((block + ((_UINT32) d + v)) + 2LL);
          if((_UINT32)(c_w2c_1) != (_UINT32)(c_w2c_2))
          {
            rr_preg = (_UINT32)(c_w2c_1) > (_UINT32)(c_w2c_2);
          }
          else
          {
            c_w2c_1 = *((block + i_w2c_0) + 3LL);
            c_w2c_2 = *((block + ((_UINT32) d + v)) + 3LL);
            if((_UINT32)(c_w2c_1) != (_UINT32)(c_w2c_2))
            {
              rr_preg = (_UINT32)(c_w2c_1) > (_UINT32)(c_w2c_2);
            }
            else
            {
              c_w2c_1 = *((block + i_w2c_0) + 4LL);
              c_w2c_2 = *((block + ((_UINT32) d + v)) + 4LL);
              if((_UINT32)(c_w2c_1) != (_UINT32)(c_w2c_2))
              {
                rr_preg = (_UINT32)(c_w2c_1) > (_UINT32)(c_w2c_2);
              }
              else
              {
                c_w2c_1 = *((block + i_w2c_0) + 5LL);
                c_w2c_2 = *((block + ((_UINT32) d + v)) + 5LL);
                if((_UINT32)(c_w2c_1) != (_UINT32)(c_w2c_2))
                {
                  rr_preg = (_UINT32)(c_w2c_1) > (_UINT32)(c_w2c_2);
                }
                else
                {
                  c_w2c_1 = *((block + i_w2c_0) + 6LL);
                  c_w2c_2 = *((block + ((_UINT32) d + v)) + 6LL);
                  if((_UINT32)(c_w2c_1) != (_UINT32)(c_w2c_2))
                  {
                    rr_preg = (_UINT32)(c_w2c_1) > (_UINT32)(c_w2c_2);
                  }
                  else
                  {
                    c_w2c_1 = *((block + i_w2c_0) + 7LL);
                    c_w2c_2 = *((block + ((_UINT32) d + v)) + 7LL);
                    if((_UINT32)(c_w2c_1) != (_UINT32)(c_w2c_2))
                    {
                      rr_preg = (_UINT32)(c_w2c_1) > (_UINT32)(c_w2c_2);
                    }
                    else
                    {
                      c_w2c_1 = *((block + i_w2c_0) + 8LL);
                      c_w2c_2 = *((block + ((_UINT32) d + v)) + 8LL);
                      if((_UINT32)(c_w2c_1) != (_UINT32)(c_w2c_2))
                      {
                        rr_preg = (_UINT32)(c_w2c_1) > (_UINT32)(c_w2c_2);
                      }
                      else
                      {
                        c_w2c_1 = *((block + i_w2c_0) + 9LL);
                        c_w2c_2 = *((block + ((_UINT32) d + v)) + 9LL);
                        if((_UINT32)(c_w2c_1) != (_UINT32)(c_w2c_2))
                        {
                          rr_preg = (_UINT32)(c_w2c_1) > (_UINT32)(c_w2c_2);
                        }
                        else
                        {
                          c_w2c_1 = *((block + i_w2c_0) + 10LL);
                          c_w2c_2 = *((block + ((_UINT32) d + v)) + 10LL);
                          if((_UINT32)(c_w2c_1) != (_UINT32)(c_w2c_2))
                          {
                            rr_preg = (_UINT32)(c_w2c_1) > (_UINT32)(c_w2c_2);
                          }
                          else
                          {
                            c_w2c_1 = *((block + i_w2c_0) + 11LL);
                            c_w2c_2 = *((block + ((_UINT32) d + v)) + 11LL);
                            if((_UINT32)(c_w2c_1) != (_UINT32)(c_w2c_2))
                            {
                              rr_preg = (_UINT32)(c_w2c_1) > (_UINT32)(c_w2c_2);
                            }
                            else
                            {
                              i_w2c_0 = i_w2c_0 + 12U;
                              i_w2c_3 = ((_UINT32) d + v) + 12U;
                              k = (_INT32)((_UINT32) nblock) + (_INT32)(8U);
                              do
                              {
                                _4866 :;
                                c_w2c_1 = *(block + (_UINT64) i_w2c_0);
                                c_w2c_2 = *(block + (_UINT64) i_w2c_3);
                                if((_UINT32)(c_w2c_1) != (_UINT32)(c_w2c_2))
                                {
                                  rr_preg = (_UINT32)(c_w2c_1) > (_UINT32)(c_w2c_2);
                                  goto _4610;
                                }
                                else
                                {
                                  s_w2c_1 = *(quadrant + (_UINT64)((_UINT64) i_w2c_0));
                                  s_w2c_2 = *(quadrant + (_UINT64)((_UINT64) i_w2c_3));
                                  if((_UINT32)(s_w2c_1) != (_UINT32)(s_w2c_2))
                                  {
                                    rr_preg = (_UINT32)(s_w2c_1) > (_UINT32)(s_w2c_2);
                                    goto _4610;
                                  }
                                  else
                                  {
                                    c_w2c_1 = *((block + (_UINT64) i_w2c_0) + 1LL);
                                    c_w2c_2 = *((block + (_UINT64) i_w2c_3) + 1LL);
                                    if((_UINT32)(c_w2c_1) != (_UINT32)(c_w2c_2))
                                    {
                                      rr_preg = (_UINT32)(c_w2c_1) > (_UINT32)(c_w2c_2);
                                      goto _4610;
                                    }
                                    else
                                    {
                                      s_w2c_1 = *(quadrant + (_UINT64)(((_UINT64) i_w2c_0 + 1U)));
                                      s_w2c_2 = *(quadrant + (_UINT64)(((_UINT64) i_w2c_3 + 1U)));
                                      if((_UINT32)(s_w2c_1) != (_UINT32)(s_w2c_2))
                                      {
                                        rr_preg = (_UINT32)(s_w2c_1) > (_UINT32)(s_w2c_2);
                                        goto _4610;
                                      }
                                      else
                                      {
                                        c_w2c_1 = *((block + (_UINT64) i_w2c_0) + 2LL);
                                        c_w2c_2 = *((block + (_UINT64) i_w2c_3) + 2LL);
                                        if((_UINT32)(c_w2c_1) != (_UINT32)(c_w2c_2))
                                        {
                                        rr_preg = (_UINT32)(c_w2c_1) > (_UINT32)(c_w2c_2);
                                        goto _4610;
                                        }
                                        else
                                        {
                                        s_w2c_1 = *(quadrant + (_UINT64)(((_UINT64) i_w2c_0 + 2U)));
                                        s_w2c_2 = *(quadrant + (_UINT64)(((_UINT64) i_w2c_3 + 2U)));
                                        if((_UINT32)(s_w2c_1) != (_UINT32)(s_w2c_2))
                                        {
                                        rr_preg = (_UINT32)(s_w2c_1) > (_UINT32)(s_w2c_2);
                                        goto _4610;
                                        }
                                        else
                                        {
                                        c_w2c_1 = *((block + (_UINT64) i_w2c_0) + 3LL);
                                        c_w2c_2 = *((block + (_UINT64) i_w2c_3) + 3LL);
                                        if((_UINT32)(c_w2c_1) != (_UINT32)(c_w2c_2))
                                        {
                                        rr_preg = (_UINT32)(c_w2c_1) > (_UINT32)(c_w2c_2);
                                        goto _4610;
                                        }
                                        else
                                        {
                                        s_w2c_1 = *(quadrant + (_UINT64)(((_UINT64) i_w2c_0 + 3U)));
                                        s_w2c_2 = *(quadrant + (_UINT64)(((_UINT64) i_w2c_3 + 3U)));
                                        if((_UINT32)(s_w2c_1) != (_UINT32)(s_w2c_2))
                                        {
                                        rr_preg = (_UINT32)(s_w2c_1) > (_UINT32)(s_w2c_2);
                                        goto _4610;
                                        }
                                        else
                                        {
                                        c_w2c_1 = *((block + (_UINT64) i_w2c_0) + 4LL);
                                        c_w2c_2 = *((block + (_UINT64) i_w2c_3) + 4LL);
                                        if((_UINT32)(c_w2c_1) != (_UINT32)(c_w2c_2))
                                        {
                                        rr_preg = (_UINT32)(c_w2c_1) > (_UINT32)(c_w2c_2);
                                        goto _4610;
                                        }
                                        else
                                        {
                                        s_w2c_1 = *(quadrant + (_UINT64)(((_UINT64) i_w2c_0 + 4U)));
                                        s_w2c_2 = *(quadrant + (_UINT64)(((_UINT64) i_w2c_3 + 4U)));
                                        if((_UINT32)(s_w2c_1) != (_UINT32)(s_w2c_2))
                                        {
                                        rr_preg = (_UINT32)(s_w2c_1) > (_UINT32)(s_w2c_2);
                                        goto _4610;
                                        }
                                        else
                                        {
                                        c_w2c_1 = *((block + (_UINT64) i_w2c_0) + 5LL);
                                        c_w2c_2 = *((block + (_UINT64) i_w2c_3) + 5LL);
                                        if((_UINT32)(c_w2c_1) != (_UINT32)(c_w2c_2))
                                        {
                                        rr_preg = (_UINT32)(c_w2c_1) > (_UINT32)(c_w2c_2);
                                        goto _4610;
                                        }
                                        else
                                        {
                                        s_w2c_1 = *(quadrant + (_UINT64)(((_UINT64) i_w2c_0 + 5U)));
                                        s_w2c_2 = *(quadrant + (_UINT64)(((_UINT64) i_w2c_3 + 5U)));
                                        if((_UINT32)(s_w2c_1) != (_UINT32)(s_w2c_2))
                                        {
                                        rr_preg = (_UINT32)(s_w2c_1) > (_UINT32)(s_w2c_2);
                                        goto _4610;
                                        }
                                        else
                                        {
                                        c_w2c_1 = *((block + (_UINT64) i_w2c_0) + 6LL);
                                        c_w2c_2 = *((block + (_UINT64) i_w2c_3) + 6LL);
                                        if((_UINT32)(c_w2c_1) != (_UINT32)(c_w2c_2))
                                        {
                                        rr_preg = (_UINT32)(c_w2c_1) > (_UINT32)(c_w2c_2);
                                        goto _4610;
                                        }
                                        else
                                        {
                                        s_w2c_1 = *(quadrant + (_UINT64)(((_UINT64) i_w2c_0 + 6U)));
                                        s_w2c_2 = *(quadrant + (_UINT64)(((_UINT64) i_w2c_3 + 6U)));
                                        if((_UINT32)(s_w2c_1) != (_UINT32)(s_w2c_2))
                                        {
                                        rr_preg = (_UINT32)(s_w2c_1) > (_UINT32)(s_w2c_2);
                                        goto _4610;
                                        }
                                        else
                                        {
                                        c_w2c_1 = *((block + (_UINT64) i_w2c_0) + 7LL);
                                        c_w2c_2 = *((block + (_UINT64) i_w2c_3) + 7LL);
                                        if((_UINT32)(c_w2c_1) != (_UINT32)(c_w2c_2))
                                        {
                                        rr_preg = (_UINT32)(c_w2c_1) > (_UINT32)(c_w2c_2);
                                        goto _4610;
                                        }
                                        else
                                        {
                                        s_w2c_1 = *(quadrant + (_UINT64)(((_UINT64) i_w2c_0 + 7U)));
                                        s_w2c_2 = *(quadrant + (_UINT64)(((_UINT64) i_w2c_3 + 7U)));
                                        if((_UINT32)(s_w2c_1) != (_UINT32)(s_w2c_2))
                                        {
                                        rr_preg = (_UINT32)(s_w2c_1) > (_UINT32)(s_w2c_2);
                                        goto _4610;
                                        }
                                        else
                                        {
                                        i_w2c_0 = (_UINT32)((_UINT64) i_w2c_0) + 8U;
                                        i_w2c_3 = (_UINT32)((_UINT64) i_w2c_3) + 8U;
                                        if((_UINT32) nblock <= i_w2c_0)
                                        {
                                        i_w2c_0 = i_w2c_0 - (_UINT32) nblock;
                                        }
                                        if((_UINT32) nblock <= i_w2c_3)
                                        {
                                        i_w2c_3 = i_w2c_3 - (_UINT32) nblock;
                                        }
                                        k = k + -8;
                                        * budget = *budget + -1;
                                        }
                                        }
                                        }
                                        }
                                        }
                                        }
                                        }
                                        }
                                        }
                                        }
                                        }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                              while(k >= (_INT32)(0U));
                              _5122 :;
                              rr_preg = 0U;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      _4610 :;
      if(!((_UINT32)(rr_preg) != 0U))
        goto _63746;
      _3842 :;
      * (ptr + (_INT64)(j)) = *(ptr + (_INT64)(j - h));
      j = j - h;
      if(j <= ((lo + h) + -1))
        goto _4098;
      _3586 :;
      goto _83458;
      _63746 :;
      _4098 :;
      * (ptr + (_INT64)((_UINT64) j)) = v;
      i = i + (_INT32)(3U);
      if(*budget < (_INT32)(0U))
      {
        return;
      }
      goto _66818;
      _1794 :;
      _92162 :;
      hp_preg = hp_preg + (_INT32)(1U);
    }
    _4354 :;
    return;
  } /* mainSimpleSort */

  
  static void mainQSort3(
    _UINT32 * ptr,
    _UINT8 * block,
    _UINT16 * quadrant,
    _INT32 nblock,
    _INT32 loSt,
    _INT32 hiSt,
    _INT32 dSt,
    _INT32 * budget)
  {
    
    register _INT32 yyn_preg;
    register _INT32 yyn_preg_w2c_0;
    _INT32 unLo;
    _INT32 unHi;
    _INT32 ltLo;
    _INT32 gtHi;
    _INT32 n;
    _INT32 m;
    _INT32 sp;
    _INT32 lo;
    _INT32 hi;
    _INT32 d;
    _INT32 stackLo[100LL];
    _INT32 stackHi[100LL];
    _INT32 stackD[100LL];
    _INT32 nextLo[3LL];
    _INT32 nextHi[3LL];
    _INT32 nextD[3LL];
    _INT32 zztmp;
    _INT32 zztmp_w2c_0;
    _INT32 zztmp_w2c_1;
    _INT32 zztmp_w2c_2;
    _INT32 zztmp_w2c_3;
    _INT32 tz_w2c_0;
    _INT32 tz_w2c_1;
    _UINT8 t;
    _UINT8 a_w2c_0;
    _UINT8 b_w2c_0;
    _UINT8 c_w2c_0;
    
    (stackLo)[0U] = loSt;
    (stackHi)[0U] = hiSt;
    (stackD)[0U] = dSt;
    sp = 1U;
    while(sp > (_INT32)(0U))
    {
      if(sp > (_INT32)(99U))
      {
        BZ2_bz__AssertH__fail((_INT32) 1001U);
      }
      sp = sp + -1;
      lo = (stackLo)[sp];
      hi = (stackHi)[sp];
      d = (stackD)[sp];
      if(((hi - lo) <= (_INT32)(19U)) || (d > (_INT32)(14U)))
      {
        mainSimpleSort(ptr, block, quadrant, nblock, lo, hi, d, budget);
        if(*budget < (_INT32)(0U))
        {
          return;
        }
      }
      else
      {
        a_w2c_0 = (_INT32) * (block + (d + *(ptr + lo)));
        b_w2c_0 = (_INT32) * (block + (d + *(ptr + hi)));
        c_w2c_0 = (_INT32) * (block + (d + *(ptr + (_INT64)(_I4ASHR(lo + hi, 1U)))));
        if((_UINT32)(a_w2c_0) > (_UINT32)(b_w2c_0))
        {
          t = a_w2c_0;
          a_w2c_0 = b_w2c_0;
          b_w2c_0 = t;
        }
        if((_UINT32)((_INT32) b_w2c_0) > (_UINT32)(c_w2c_0))
        {
          b_w2c_0 = c_w2c_0;
          if((_UINT32)(a_w2c_0) > (_UINT32)(c_w2c_0))
          {
            b_w2c_0 = a_w2c_0;
          }
        }
        ltLo = lo;
        unLo = lo;
        gtHi = hi;
        unHi = hi;
        _17410 :;
        _17666 :;
        if(unLo > unHi)
          goto _1282;
        n = (_INT32) * (block + (d + *(ptr + unLo))) - (_INT32) b_w2c_0;
        if(n == (_INT32)(0U))
        {
          zztmp = *(ptr + unLo);
          * (ptr + unLo) = *(ptr + ltLo);
          * (ptr + ltLo) = zztmp;
          ltLo = ltLo + (_INT32)(1U);
          unLo = unLo + (_INT32)(1U);
        }
        else
        {
          if(n > (_INT32)(0U))
            goto _1282;
          unLo = unLo + (_INT32)(1U);
        }
        goto _17666;
        _1282 :;
        _18178 :;
        if(unLo > unHi)
          goto _2050;
        n = (_INT32) * (block + (d + *(ptr + unHi))) - (_INT32) b_w2c_0;
        if(n == (_INT32)(0U))
        {
          zztmp_w2c_0 = *(ptr + unHi);
          * (ptr + unHi) = *(ptr + gtHi);
          * (ptr + gtHi) = zztmp_w2c_0;
          gtHi = gtHi + -1;
          unHi = unHi + -1;
        }
        else
        {
          if(n < (_INT32)(0U))
            goto _2050;
          unHi = unHi + -1;
        }
        goto _18178;
        _2050 :;
        if(unLo > unHi)
          goto _2562;
        zztmp_w2c_1 = (_INT32) * (ptr + unLo);
        * (ptr + unLo) = *(ptr + unHi);
        * (ptr + unHi) = zztmp_w2c_1;
        unLo = unLo + (_INT32)(1U);
        unHi = unHi + -1;
        goto _17410;
        _2562 :;
        if(ltLo > gtHi)
        {
          (stackLo)[sp] = lo;
          (stackHi)[sp] = hi;
          (stackD)[sp] = d + (_INT32)(1U);
          sp = sp + (_INT32)(1U);
        }
        else
        {
          n = _I4MIN(unLo - ltLo, ltLo - lo);
          m = _I4MIN(gtHi - unHi, hi - gtHi);
          for(yyn_preg = 0U; yyn_preg <= (n + -1); yyn_preg = yyn_preg + (_INT32)(1U))
          {
            zztmp_w2c_2 = (_INT32)(ptr)[(_INT64)(lo + yyn_preg)];
            (ptr)[(_INT64)(lo + yyn_preg)] = (ptr)[(_INT64)(yyn_preg + (unLo - n))];
            (ptr)[(_INT64)(yyn_preg + (unLo - n))] = zztmp_w2c_2;
          }
          for(yyn_preg_w2c_0 = 0U; yyn_preg_w2c_0 <= (m + -1); yyn_preg_w2c_0 = yyn_preg_w2c_0 + (_INT32)(1U))
          {
            zztmp_w2c_3 = (_INT32)(ptr)[(_INT64)(unLo + yyn_preg_w2c_0)];
            (ptr)[(_INT64)(unLo + yyn_preg_w2c_0)] = (ptr)[(_INT64)((yyn_preg_w2c_0 + (hi - m))) + 1LL];
            (ptr)[(_INT64)((yyn_preg_w2c_0 + (hi - m))) + 1LL] = zztmp_w2c_3;
          }
          (nextLo)[0U] = lo;
          (nextHi)[0U] = ((unLo + lo) - ltLo) + -1;
          (nextD)[0U] = d;
          (nextLo)[1U] = (hi - (gtHi - unHi)) + (_INT32)(1U);
          (nextHi)[1U] = hi;
          (nextD)[1U] = d;
          (nextLo)[2U] = (unLo + lo) - ltLo;
          (nextHi)[2U] = hi - (gtHi - unHi);
          (nextD)[2U] = d + (_INT32)(1U);
          if(((gtHi - unHi) + -1) > ((((unLo + lo) - ltLo) - lo) + -1))
          {
            (nextLo)[0U] = (hi - (gtHi - unHi)) + (_INT32)(1U);
            (nextLo)[1U] = lo;
            (nextHi)[0U] = hi;
            (nextHi)[1U] = ((unLo + lo) - ltLo) + -1;
            (nextD)[0U] = d;
            (nextD)[1U] = d;
          }
          if(((nextHi)[1U] - (nextLo)[1U]) < ((nextHi)[2U] - (nextLo)[2U]))
          {
            tz_w2c_0 = (nextLo)[1U];
            (nextLo)[1U] = (nextLo)[2U];
            (nextLo)[2U] = tz_w2c_0;
            tz_w2c_0 = (nextHi)[1U];
            (nextHi)[1U] = (nextHi)[2U];
            (nextHi)[2U] = tz_w2c_0;
            tz_w2c_0 = (nextD)[1U];
            (nextD)[1U] = (nextD)[2U];
            (nextD)[2U] = tz_w2c_0;
          }
          if(((nextHi)[0U] - (nextLo)[0U]) < ((nextHi)[1U] - (nextLo)[1U]))
          {
            tz_w2c_1 = (nextLo)[0U];
            (nextLo)[0U] = (nextLo)[1U];
            (nextLo)[1U] = tz_w2c_1;
            tz_w2c_1 = (nextHi)[0U];
            (nextHi)[0U] = (nextHi)[1U];
            (nextHi)[1U] = tz_w2c_1;
            tz_w2c_1 = (nextD)[0U];
            (nextD)[0U] = (nextD)[1U];
            (nextD)[1U] = tz_w2c_1;
          }
          (stackLo)[sp] = (nextLo)[0U];
          (stackHi)[sp] = (nextHi)[0U];
          (stackD)[sp] = (nextD)[0U];
          (stackLo)[(_INT64)(sp) + (_INT64)(1U)] = (nextLo)[1U];
          (stackHi)[(_INT64)(sp) + (_INT64)(1U)] = (nextHi)[1U];
          (stackD)[(_INT64)(sp) + (_INT64)(1U)] = (nextD)[1U];
          (stackLo)[(_INT64)(sp) + (_INT64)(2U)] = (nextLo)[2U];
          (stackHi)[(_INT64)(sp) + (_INT64)(2U)] = (nextHi)[2U];
          (stackD)[(_INT64)(sp) + (_INT64)(2U)] = (nextD)[2U];
          sp = sp + (_INT32)(3U);
        }
      }
    }
    return;
  } /* mainQSort3 */

  
  static void mainSort(
    _UINT32 * ptr,
    _UINT8 * block,
    _UINT16 * quadrant,
    _UINT32 * ftab,
    _INT32 nblock,
    _INT32 verb,
    _INT32 * budget)
  {
    
      register _INT32 i_preg;
    register _INT32 _ub0_preg;
    register _INT32 i_preg_w2c_9;
    register _INT32 i_preg_w2c_0;
    register _INT32 i_preg_w2c_1;
    register _INT32 i_preg_w2c_2;
    register _INT32 i_preg_w2c_3;
    register _INT32 _ub1_preg;
    register _INT32 i_preg_w2c_10;
    register _INT32 i_preg_w2c_4;
    register _INT32 i_preg_w2c_5;
    register _INT32 i_preg_w2c_6;
    register _INT32 i_preg_w2c_7;
    register _INT32 whiledo_var_preg;
    register _INT32 i_preg_w2c_8;
    register _INT32 j_preg;
    register _INT32 j_preg_w2c_0;
    register _INT32 whiledo_var_preg_w2c_0;
    register _INT32 preg_preg;
    register _INT32 whiledo_var_preg_w2c_1;
    register _INT32 preg_preg_w2c_0;
    register _INT32 j_preg_w2c_1;
    register _INT32 whiledo_var_preg_w2c_2;
    register _INT32 j_preg_w2c_2;
    _INT32 j;
    _INT32 k;
    _INT32 ss;
    _INT32 runningOrder[256LL];
    _UINT8 bigDone[256LL];
    _INT32 copyStart[256LL];
    _INT32 copyEnd[256LL];
    _UINT8 c_w2c_1;
    _INT32 numQSorted;
    _UINT16 s;
    _INT32 vv;
    _INT32 h;
    _INT32 lo;
    _INT32 hi;
    _INT32 bbStart;
    _INT32 bbSize;
    _INT32 a2update;
    
    if(verb > (_INT32)(3U))
    {
      fprintf(stderr, "        main sort initialise ...\n");
    }
    /* PARALLEL DO will be converted to SUBROUTINE __mpdo_mainSort1 */
#pragma omp parallel for private(i_preg) shared(ftab)
      for(i_preg = 0U; i_preg <= 65536; i_preg = i_preg + (_INT32)(1U))
      {
        (ftab)[(_INT64)((-i_preg)) + 65536LL] = 0U;
      }
      j = _I4SHL((_INT32) * block, (_INT32)(8U));
      _ub0_preg = _I4DIVCEIL(nblock + -3, 4U) + -1;
      for(i_preg_w2c_9 = 0U; i_preg_w2c_9 <= _ub0_preg; i_preg_w2c_9 = i_preg_w2c_9 + (_INT32)(1U))
      {
        (quadrant)[(_INT64)((nblock - (i_preg_w2c_9 * (_INT32)(4U)))) + -1LL] = 0U;
        j = _I4ASHR(j, (_INT32)(8U)) | _I4SHL((_INT32)(block)[(_INT64)((nblock - (i_preg_w2c_9 * (_INT32)(4U)))) + -1LL], (_INT32)(8U));
        (ftab)[j] = (ftab)[j] + 1U;
        (quadrant)[(_INT64)((nblock - (i_preg_w2c_9 * (_INT32)(4U)))) + -2LL] = 0U;
        j = _I4ASHR(j, (_INT32)(8U)) | _I4SHL((_INT32)(block)[(_INT64)((nblock - (i_preg_w2c_9 * (_INT32)(4U)))) + -2LL], (_INT32)(8U));
        (ftab)[j] = (ftab)[j] + 1U;
        (quadrant)[(_INT64)((nblock - (i_preg_w2c_9 * (_INT32)(4U)))) + -3LL] = 0U;
        j = _I4ASHR(j, (_INT32)(8U)) | _I4SHL((_INT32)(block)[(_INT64)((nblock - (i_preg_w2c_9 * (_INT32)(4U)))) + -3LL], (_INT32)(8U));
        (ftab)[j] = (ftab)[j] + 1U;
        (quadrant)[(_INT64)((nblock - (i_preg_w2c_9 * (_INT32)(4U)))) + -4LL] = 0U;
        j = _I4ASHR(j, (_INT32)(8U)) | _I4SHL((_INT32)(block)[(_INT64)((nblock - (i_preg_w2c_9 * (_INT32)(4U)))) + -4LL], (_INT32)(8U));
        (ftab)[j] = (ftab)[j] + 1U;
      }
      i_preg_w2c_0 = _I4MAX(_I4DIVCEIL(nblock + -3, 4U), (_INT32)(0U));
      for(i_preg_w2c_1 = 0U; i_preg_w2c_1 <= ((nblock - (i_preg_w2c_0 * (_INT32)(4U))) + -1); i_preg_w2c_1 = i_preg_w2c_1 + (_INT32)(1U))
      {
        (quadrant)[(_INT64)(((nblock - (i_preg_w2c_0 * (_INT32)(4U))) - i_preg_w2c_1)) + -1LL] = 0U;
        j = _I4ASHR(j, (_INT32)(8U)) | _I4SHL((_INT32)(block)[(_INT64)(((nblock - (i_preg_w2c_0 * (_INT32)(4U))) - i_preg_w2c_1)) + -1LL], (_INT32)(8U));
        (ftab)[j] = (ftab)[j] + 1U;
      }
      for(i_preg_w2c_2 = 0U; i_preg_w2c_2 <= (_INT32)(33U); i_preg_w2c_2 = i_preg_w2c_2 + (_INT32)(1U))
      {
        (block)[(_UINT64)(nblock + i_preg_w2c_2)] = (block)[(_INT64)(i_preg_w2c_2)];
        (quadrant)[(_INT64)(nblock + i_preg_w2c_2)] = 0U;
      }
      if(verb > (_INT32)(3U))
      {
        fprintf(stderr, "        bucket sorting ...\n");
      }
      for(i_preg_w2c_3 = 0U; i_preg_w2c_3 <= 65535; i_preg_w2c_3 = i_preg_w2c_3 + (_INT32)(1U))
      {
        (ftab)[(_INT64)(i_preg_w2c_3) + 1LL] = (ftab)[(_INT64)(i_preg_w2c_3)] + (ftab)[(_INT64)(i_preg_w2c_3) + 1LL];
      }
      s = _U4SHL((_UINT32)((_UINT16) * block), 8U);
      _ub1_preg = _I4DIVCEIL(nblock + -3, 4U) + -1;
      for(i_preg_w2c_10 = 0U; i_preg_w2c_10 <= _ub1_preg; i_preg_w2c_10 = i_preg_w2c_10 + (_INT32)(1U))
      {
        s = (_INT16)(_I4SHL((_INT32)(block)[(_INT64)((nblock - (i_preg_w2c_10 * (_INT32)(4U)))) + -1LL], (_INT32)(8U)) | (_INT32)(_U4LSHR((_UINT32)(s), 8U)));
        j = (_INT32)((ftab)[s]) + -1;
        (ftab)[s] = j;
        (ptr)[j] = (nblock - (i_preg_w2c_10 * (_INT32)(4U))) + -1;
        s = (_INT16)(_I4SHL((_INT32)(block)[(_INT64)((nblock - (i_preg_w2c_10 * (_INT32)(4U)))) + -2LL], (_INT32)(8U)) | (_INT32)(_U4LSHR((_UINT32)(s), 8U)));
        j = (_INT32)((ftab)[s]) + -1;
        (ftab)[s] = j;
        (ptr)[j] = (_UINT32)(nblock - (i_preg_w2c_10 * (_INT32)(4U))) + (_UINT32)(-2);
        s = (_INT16)(_I4SHL((_INT32)(block)[(_INT64)((nblock - (i_preg_w2c_10 * (_INT32)(4U)))) + -3LL], (_INT32)(8U)) | (_INT32)(_U4LSHR((_UINT32)(s), 8U)));
        j = (_INT32)((ftab)[s]) + -1;
        (ftab)[s] = j;
        (ptr)[j] = (_UINT32)(nblock - (i_preg_w2c_10 * (_INT32)(4U))) + (_UINT32)(-3);
        s = (_INT16)(_I4SHL((_INT32)(block)[(_INT64)((nblock - (i_preg_w2c_10 * (_INT32)(4U)))) + -4LL], (_INT32)(8U)) | (_INT32)(_U4LSHR((_UINT32)(s), 8U)));
        j = (_INT32)((ftab)[s]) + -1;
        (ftab)[s] = j;
        (ptr)[j] = (_UINT32)(nblock - (i_preg_w2c_10 * (_INT32)(4U))) + (_UINT32)(-4);
      }
      i_preg_w2c_4 = _I4MAX(_I4DIVCEIL(nblock + -3, 4U), (_INT32)(0U));
      for(i_preg_w2c_5 = 0U; i_preg_w2c_5 <= ((nblock - (i_preg_w2c_4 * (_INT32)(4U))) + -1); i_preg_w2c_5 = i_preg_w2c_5 + (_INT32)(1U))
      {
        s = (_INT16)(_I4SHL((_INT32)(block)[(_INT64)(((nblock - (i_preg_w2c_4 * (_INT32)(4U))) - i_preg_w2c_5)) + -1LL], (_INT32)(8U)) | (_INT32)(_U4LSHR((_UINT32)(s), 8U)));
        j = (_INT32)((ftab)[s]) + -1;
        (ftab)[s] = j;
        (ptr)[j] = ((nblock - (i_preg_w2c_4 * (_INT32)(4U))) - i_preg_w2c_5) + -1;
      }
      for(i_preg_w2c_6 = 0U; i_preg_w2c_6 <= (_INT32)(255U); i_preg_w2c_6 = i_preg_w2c_6 + (_INT32)(1U))
      {
        (bigDone)[(_INT64)(i_preg_w2c_6)] = 0U;
        (runningOrder)[(_INT64)(i_preg_w2c_6)] = i_preg_w2c_6;
      }
      h = 1U;
      do
      {
        h = (h * (_INT32)(3U)) + (_INT32)(1U);
      }
      while(h <= (_INT32)(256U));
      do
      {
        h = h / (_INT32)(3U);
        for(i_preg_w2c_7 = 0U; i_preg_w2c_7 <= ((_INT32)(255U) - h); i_preg_w2c_7 = i_preg_w2c_7 + (_INT32)(1U))
        {
          vv = (runningOrder)[(_INT64)(h + i_preg_w2c_7)];
          whiledo_var_preg = 0U;
          while(((ftab)[(_INT64)(_I4SHL((runningOrder)[((h + i_preg_w2c_7) - (h * whiledo_var_preg)) - h] + (_INT32)(1U), (_INT32)(8U)))] - (ftab)[(_INT64)(_I4SHL((runningOrder)[((h + i_preg_w2c_7) - (h * whiledo_var_preg)) - h], (_INT32)(8U)))]) > ((ftab)[(_INT64)(_I4SHL(vv + (_INT32)(1U), (_INT32)(8U)))] - (ftab)[(_INT64)(_I4SHL(vv, (_INT32)(8U)))]))
          {
            (runningOrder)[(_INT64)((h + i_preg_w2c_7) - (h * whiledo_var_preg))] = (runningOrder)[((h + i_preg_w2c_7) - (h * whiledo_var_preg)) - h];
            j = ((h + i_preg_w2c_7) - (h * whiledo_var_preg)) - h;
            if(j <= (h + -1))
              goto _8194;
            whiledo_var_preg = whiledo_var_preg + (_INT32)(1U);
          }
          j = (h + i_preg_w2c_7) - (h * whiledo_var_preg);
          _8194 :;
          (runningOrder)[j] = vv;
        }
      }
      while(h != (_INT32)(1U));
      numQSorted = 0U;
      i_preg_w2c_8 = 0U;
      while(i_preg_w2c_8 <= (_INT32)(255U))
      {
        ss = (runningOrder)[(_INT64)(i_preg_w2c_8)];
        j_preg = 0U;
        while(j_preg <= (_INT32)(255U))
        {
          if(ss != j_preg)
          {
            if((*(ftab + (_INT64)(j_preg + _I4SHL(ss, 8U))) & 2097152U) == 0U)
            {
              lo = (_INT32)(*(ftab + (_INT64)(j_preg + _I4SHL(ss, 8U)))) & -2097153;
              hi = (_INT32)(*((ftab + (_INT64)(j_preg + _I4SHL(ss, 8U))) + 1LL) & 4292870143U) + -1;
              if(lo < hi)
              {
                if(verb > (_INT32)(3U))
                {
                  fprintf(stderr, "        qsort [0x%x, 0x%x]   done %d   this %d\n", (_UINT32) ss, (_UINT32) j_preg, numQSorted, (hi - lo) + (_INT32)(1U));
                }
                mainQSort3(ptr, block, quadrant, nblock, lo, hi, (_INT32) 2U, budget);
                numQSorted = (numQSorted + (hi - lo)) + (_INT32)(1U);
                if(*budget < (_INT32)(0U))
                {
                  return;
                }
              }
            }
            * (ftab + (_INT64)(j_preg + _I4SHL(ss, 8U))) = *(ftab + (_INT64)(j_preg + _I4SHL(ss, 8U))) | 2097152U;
          }
          j_preg = j_preg + (_INT32)(1U);
        }
        if((_UINT32)((bigDone)[ss]) != 0U)
        {
          BZ2_bz__AssertH__fail((_INT32) 1006U);
        }
        for(j_preg_w2c_0 = 0U; j_preg_w2c_0 <= (_INT32)(255U); j_preg_w2c_0 = j_preg_w2c_0 + (_INT32)(1U))
        {
          (copyStart)[(_INT64)(j_preg_w2c_0)] = (_INT32)(ftab)[(_INT64)(ss + _I4SHL(j_preg_w2c_0, (_INT32)(8U)))] & -2097153;
          (copyEnd)[(_INT64)(j_preg_w2c_0)] = (_INT32)((ftab)[(_INT64)((ss + _I4SHL(j_preg_w2c_0, (_INT32)(8U)))) + 1LL] & 4292870143U) + -1;
        }
        j = (_INT32) * (ftab + (_INT64)(_I4SHL(ss, 8U))) & -2097153;
        whiledo_var_preg_w2c_0 = 0U;
        while((copyStart)[ss] > (j + whiledo_var_preg_w2c_0))
        {
          k = (_INT32)(*(ptr + (_INT64)(j + whiledo_var_preg_w2c_0))) + -1;
          if(k < (_INT32)(0U))
          {
            k = nblock + k;
          }
          c_w2c_1 = *((_INT64)((_UINT32) k) + block);
          if((_UINT32)((bigDone)[c_w2c_1]) == 0U)
          {
            preg_preg = (copyStart)[c_w2c_1];
            (copyStart)[c_w2c_1] = preg_preg + (_INT32)(1U);
            * (ptr + (_INT64)(preg_preg)) = (_UINT32) k;
          }
          whiledo_var_preg_w2c_0 = whiledo_var_preg_w2c_0 + (_INT32)(1U);
        }
        j = (_INT32)(*(ftab + (_INT64)(_I4SHL(ss + 1U, 8U))) & 4292870143U) + -1;
        whiledo_var_preg_w2c_1 = 0U;
        while((copyEnd)[ss] < (j - whiledo_var_preg_w2c_1))
        {
          k = (_INT32)(*(ptr + (_INT64)(j - whiledo_var_preg_w2c_1))) + -1;
          if(k < (_INT32)(0U))
          {
            k = nblock + k;
          }
          c_w2c_1 = *((_INT64)((_UINT32) k) + block);
          if((_UINT32)((bigDone)[c_w2c_1]) == 0U)
          {
            preg_preg_w2c_0 = (copyEnd)[c_w2c_1];
            (copyEnd)[c_w2c_1] = preg_preg_w2c_0 + -1;
            * (ptr + (_INT64)(preg_preg_w2c_0)) = (_UINT32) k;
          }
          whiledo_var_preg_w2c_1 = whiledo_var_preg_w2c_1 + (_INT32)(1U);
        }
        if(((copyEnd)[ss] != ((copyStart)[ss] + -1)) && (((copyStart)[ss] != (_INT32)(0U)) || ((copyEnd)[ss] != (nblock + -1))))
        {
          BZ2_bz__AssertH__fail((_INT32) 1007U);
        }
        for(j_preg_w2c_1 = 0U; j_preg_w2c_1 <= (_INT32)(255U); j_preg_w2c_1 = j_preg_w2c_1 + (_INT32)(1U))
        {
          (ftab)[(_INT64)(ss + _I4SHL(j_preg_w2c_1, (_INT32)(8U)))] = (ftab)[(_INT64)(ss + _I4SHL(j_preg_w2c_1, (_INT32)(8U)))] | 2097152U;
        }
        (bigDone)[ss] = 1U;
        if(i_preg_w2c_8 <= (_INT32)(254U))
        {
          bbStart = (_INT32) * (ftab + (_INT64)(_I4SHL(ss, 8U))) & -2097153;
          bbSize = (*(ftab + (_INT64)(_I4SHL(ss + 1U, 8U))) & 4292870143U) - (_UINT32)(bbStart);
          whiledo_var_preg_w2c_2 = 0U;
          while(_I4ASHR(bbSize, whiledo_var_preg_w2c_2) > (_INT32)(65534U))
          {
            whiledo_var_preg_w2c_2 = whiledo_var_preg_w2c_2 + (_INT32)(1U);
          }
          for(j_preg_w2c_2 = 0U; j_preg_w2c_2 <= (bbSize + -1); j_preg_w2c_2 = j_preg_w2c_2 + (_INT32)(1U))
          {
            a2update = (_INT32)(ptr)[(_INT64)((bbStart + (bbSize - j_preg_w2c_2))) + -1LL];
            (quadrant)[a2update] = _I4ASHR((bbSize - j_preg_w2c_2) + -1, whiledo_var_preg_w2c_2);
            if(a2update <= (_INT32)(33U))
            {
              (quadrant)[(_INT64)(nblock + a2update)] = _I4ASHR((bbSize - j_preg_w2c_2) + -1, whiledo_var_preg_w2c_2);
            }
          }
          if(_I4ASHR(bbSize + -1, whiledo_var_preg_w2c_2) > (_INT32)(65535U))
          {
            BZ2_bz__AssertH__fail((_INT32) 1002U);
          }
        }
        i_preg_w2c_8 = i_preg_w2c_8 + (_INT32)(1U);
      }
      if(verb > (_INT32)(3U))
      {
        fprintf(stderr, "        %d pointers, %d sorted, %d scanned\n", nblock, numQSorted, nblock - numQSorted);
      }
      return;
    } /* mainSort */

    
    extern void BZ2_blockSort(
      struct anonymous_w2c_15 * s)
    {
      
      register _IEEE32 __cselect_preg;
      register _INT32 i_preg;
      _UINT32 * ptr;
      _UINT8 * block;
      _UINT32 * ftab;
      _INT32 nblock;
      _INT32 verb;
      _INT32 wfact;
      _INT32 budget;
      _INT32 budgetInit;
      _INT32 i;
      
      ptr = (s) -> ptr;
      block = (s) -> block;
      ftab = (s) -> ftab;
      nblock = (s) -> nblock;
      verb = (s) -> verbosity;
      wfact = (s) -> workFactor;
      if(nblock <= (_INT32)(9999U))
      {
        fallbackSort((s) -> arr1, (s) -> arr2, ftab, nblock, verb);
      }
      else
      {
        i = nblock + (_INT32)(34U);
        if((nblock + (_INT32)(34U)) & (_INT32)(1U))
        {
          i = i + (_INT32)(1U);
        }
        if(wfact <= (_INT32)(0U))
        {
          wfact = 1U;
        }
        if(wfact > (_INT32)(100U))
        {
          wfact = 100U;
        }
        budgetInit = nblock * ((wfact + -1) / (_INT32)(3U));
        budget = budgetInit;
        mainSort(ptr, block, (_UINT16 *)((_INT64)((_UINT64) i) + block), ftab, nblock, verb, &budget);
        if(verb > (_INT32)(2U))
        {
          if(nblock != (_INT32)(0U))
          {
            __cselect_preg = (_IEEE32)(nblock);
          }
          else
          {
            __cselect_preg = 1.0F;
          }
          fprintf(stderr, "      %d work, %d block, ratio %5.2f\n", budgetInit - budget, nblock, (_IEEE64)((_IEEE32)((budgetInit - budget)) / __cselect_preg));
        }
        if(budget < (_INT32)(0U))
        {
          if(verb > (_INT32)(1U))
          {
            fprintf(stderr, "    too repetitive; using fallback sorting algorithm\n");
          }
          fallbackSort((s) -> arr1, (s) -> arr2, ftab, nblock, verb);
        }
      }
      (s) -> origPtr = -1LL;
      i_preg = 0U;
      _8706 :;
      while((s) -> nblock > i_preg)
      {
        _514 :;
        if(*(ptr + (_INT64)(i_preg)) == 0U)
        {
          (s) -> origPtr = i_preg;
          goto _770;
        }
        i_preg = i_preg + (_INT32)(1U);
      }
      _770 :;
      if((s) -> origPtr == -1)
      {
        BZ2_bz__AssertH__fail((_INT32) 1003U);
      }
      return;
    } /* BZ2_blockSort */

    