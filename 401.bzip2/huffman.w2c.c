/*******************************************************
 * C file translated from WHIRL Sat Dec  8 10:39:04 2012
 *******************************************************/

/* Include file-level type and variable decls */
#include "huffman.w2c.h"


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


extern void BZ2_hbMakeCodeLengths(
  _UINT8 * len,
  _INT32 * freq,
  _INT32 alphaSize,
  _INT32 maxLen)
{
  
      register _INT32 i_preg;
  register _INT32 __cselect_preg;
  register _INT32 i_preg_w2c_3;
  register _INT32 i_preg_w2c_0;
  register _INT32 nHeap_preg_w2c_0;
  register _INT32 nHeap_preg;
  register _INT32 i_preg_w2c_1;
  register _INT32 whiledo_var_preg;
  register _INT32 i_preg_w2c_2;
  _INT32 nHeap;
  _INT32 n_w2c_1;
  _INT32 n_w2c_2;
  _INT32 j;
  _INT32 k;
  _UINT8 tooLong;
  _INT32 heap[260LL];
  _INT32 weight[516LL];
  _INT32 parent[516LL];
  _INT32 zz;
  _INT32 zz_w2c_0;
  _INT32 yy;
  _INT32 tmp_w2c_0;
  _INT32 zz_w2c_1;
  _INT32 yy_w2c_0;
  _INT32 tmp_w2c_1;
  _INT32 zz_w2c_2;
  
  /* PARALLEL DO will be converted to SUBROUTINE __mpdo_BZ2_hbMakeCodeLengths1 */
#pragma omp parallel for private(i_preg, __cselect_preg) shared(freq, alphaSize, weight)
    for(i_preg = 0U; i_preg <= (alphaSize + -1); i_preg = i_preg + (_INT32)(1U))
    {
      if((freq)[(_INT64)(i_preg)] != (_INT32)(0U))
      {
        __cselect_preg = _I4SHL((freq)[(_INT64)(i_preg)], (_INT32)(8U));
      }
      else
      {
        __cselect_preg = 256U;
      }
      (weight)[i_preg + (_INT32)(1U)] = __cselect_preg;
    }
    _19202 :;
    (heap)[0U] = 0U;
    (weight)[0U] = 0U;
    (parent)[0U] = -2LL;
    for(i_preg_w2c_3 = 0U; i_preg_w2c_3 <= (alphaSize + -1); i_preg_w2c_3 = i_preg_w2c_3 + (_INT32)(1U))
    {
      (parent)[(_INT64)(i_preg_w2c_3) + (_INT64)(1U)] = -1LL;
      (heap)[(_INT64)(i_preg_w2c_3) + (_INT64)(1U)] = i_preg_w2c_3 + (_INT32)(1U);
      zz = i_preg_w2c_3 + (_INT32)(1U);
      while((weight)[(heap)[_I4ASHR(zz, (_INT32)(1U))]] > (weight)[(_INT64)(i_preg_w2c_3) + (_INT64)(1U)])
      {
        (heap)[zz] = (heap)[_I4ASHR(zz, (_INT32)(1U))];
        zz = _I4ASHR(zz, (_INT32)(1U));
      }
      (heap)[zz] = i_preg_w2c_3 + (_INT32)(1U);
    }
    i_preg_w2c_0 = _I4MAX(alphaSize, (_INT32)(0U));
    nHeap = i_preg_w2c_0;
    if(nHeap > (_INT32)(259U))
    {
      BZ2_bz__AssertH__fail((_INT32) 2001U);
    }
    for(nHeap_preg_w2c_0 = 0U; nHeap_preg_w2c_0 <= (i_preg_w2c_0 + -2); nHeap_preg_w2c_0 = nHeap_preg_w2c_0 + (_INT32)(1U))
    {
      n_w2c_1 = (heap)[1U];
      (heap)[1U] = (heap)[(_INT64)(i_preg_w2c_0 - nHeap_preg_w2c_0)];
      zz_w2c_0 = 1U;
      tmp_w2c_0 = (heap)[1U];
      _21250 :;
      yy = _I4SHL(zz_w2c_0, (_INT32)(1U));
      if(((i_preg_w2c_0 - nHeap_preg_w2c_0) + -1) < _I4SHL(zz_w2c_0, (_INT32)(1U)))
        goto _3586;
      if((((i_preg_w2c_0 - nHeap_preg_w2c_0) + -1) > _I4SHL(zz_w2c_0, (_INT32)(1U))) && ((weight)[(heap)[(_INT64)(_I4SHL(zz_w2c_0, (_INT32)(1U)))]] > (weight)[(heap)[_I4SHL(zz_w2c_0, (_INT32)(1U)) + (_INT32)(1U)]]))
      {
        yy = yy + (_INT32)(1U);
      }
      if((weight)[(heap)[yy]] > (weight)[tmp_w2c_0])
        goto _3586;
      (heap)[zz_w2c_0] = (heap)[yy];
      zz_w2c_0 = yy;
      goto _21250;
      _3586 :;
      (heap)[zz_w2c_0] = tmp_w2c_0;
      n_w2c_2 = (heap)[1U];
      (heap)[1U] = (heap)[(_INT64)((i_preg_w2c_0 - nHeap_preg_w2c_0)) + -1LL];
      zz_w2c_1 = 1U;
      tmp_w2c_1 = (heap)[1U];
      _21762 :;
      yy_w2c_0 = _I4SHL(zz_w2c_1, (_INT32)(1U));
      if(((i_preg_w2c_0 - nHeap_preg_w2c_0) + -2) < _I4SHL(zz_w2c_1, (_INT32)(1U)))
        goto _4098;
      if((((i_preg_w2c_0 - nHeap_preg_w2c_0) + -2) > _I4SHL(zz_w2c_1, (_INT32)(1U))) && ((weight)[(heap)[(_INT64)(_I4SHL(zz_w2c_1, (_INT32)(1U)))]] > (weight)[(heap)[_I4SHL(zz_w2c_1, (_INT32)(1U)) + (_INT32)(1U)]]))
      {
        yy_w2c_0 = yy_w2c_0 + (_INT32)(1U);
      }
      if((weight)[(heap)[yy_w2c_0]] > (weight)[tmp_w2c_1])
        goto _4098;
      (heap)[zz_w2c_1] = (heap)[yy_w2c_0];
      zz_w2c_1 = yy_w2c_0;
      goto _21762;
      _4098 :;
      (heap)[zz_w2c_1] = tmp_w2c_1;
      (parent)[n_w2c_2] = (alphaSize + nHeap_preg_w2c_0) + (_INT32)(1U);
      (parent)[n_w2c_1] = (alphaSize + nHeap_preg_w2c_0) + (_INT32)(1U);
      (weight)[(_INT64)((alphaSize + nHeap_preg_w2c_0)) + (_INT64)(1U)] = ((_UINT32)(_I4MAX((weight)[n_w2c_1] & (_INT32)(255U), (weight)[n_w2c_2] & (_INT32)(255U))) + 1U) | (((_UINT32)((weight)[n_w2c_1]) & 4294967040U) + ((_UINT32)((weight)[n_w2c_2]) & 4294967040U));
      (parent)[(_INT64)((alphaSize + nHeap_preg_w2c_0)) + (_INT64)(1U)] = -1LL;
      (heap)[(_INT64)((i_preg_w2c_0 - nHeap_preg_w2c_0)) + -1LL] = (alphaSize + nHeap_preg_w2c_0) + (_INT32)(1U);
      zz_w2c_2 = (i_preg_w2c_0 - nHeap_preg_w2c_0) + -1;
      while((weight)[(heap)[_I4ASHR(zz_w2c_2, (_INT32)(1U))]] > (weight)[(_INT64)((alphaSize + nHeap_preg_w2c_0)) + (_INT64)(1U)])
      {
        (heap)[zz_w2c_2] = (heap)[_I4ASHR(zz_w2c_2, (_INT32)(1U))];
        zz_w2c_2 = _I4ASHR(zz_w2c_2, (_INT32)(1U));
      }
      (heap)[zz_w2c_2] = (alphaSize + nHeap_preg_w2c_0) + (_INT32)(1U);
    }
    nHeap_preg = _I4MAX(i_preg_w2c_0 + -1, (_INT32)(0U));
    if((alphaSize + nHeap_preg) > (_INT32)(515U))
    {
      BZ2_bz__AssertH__fail((_INT32) 2002U);
    }
    tooLong = 0U;
    for(i_preg_w2c_1 = 0U; i_preg_w2c_1 <= (alphaSize + -1); i_preg_w2c_1 = i_preg_w2c_1 + (_INT32)(1U))
    {
      k = i_preg_w2c_1 + (_INT32)(1U);
      whiledo_var_preg = 0U;
      while((parent)[k] >= (_INT32)(0U))
      {
        k = (parent)[k];
        whiledo_var_preg = whiledo_var_preg + (_INT32)(1U);
      }
      (len)[(_INT64)(i_preg_w2c_1)] = whiledo_var_preg;
      if(maxLen < whiledo_var_preg)
      {
        tooLong = 1U;
      }
    }
    if((_UINT32)(tooLong) == 0U)
      goto _6914;
    /* PARALLEL DO will be converted to SUBROUTINE __mpdo_BZ2_hbMakeCodeLengths2 */
#pragma omp parallel for private(i_preg_w2c_2, j) shared(weight, alphaSize)
      for(i_preg_w2c_2 = 0U; i_preg_w2c_2 <= (alphaSize + -1); i_preg_w2c_2 = i_preg_w2c_2 + (_INT32)(1U))
      {
        j = (_I4ASHR((weight)[(_INT64)(i_preg_w2c_2) + (_INT64)(1U)], (_INT32)(8U)) / (_INT32)(2U)) + (_INT32)(1U);
        (weight)[(_INT64)(i_preg_w2c_2) + (_INT64)(1U)] = _I4SHL(j, (_INT32)(8U));
      }
      goto _19202;
      _6914 :;
      return;
    } /* BZ2_hbMakeCodeLengths */

    
    extern void BZ2_hbAssignCodes(
      _INT32 * code,
      _UINT8 * length,
      _INT32 minLen,
      _INT32 maxLen,
      _INT32 alphaSize)
    {
      
      register _INT32 n_preg;
      register _INT32 i_preg;
      _INT32 vec;
      
      vec = 0U;
      for(n_preg = 0U; n_preg <= (maxLen - minLen); n_preg = n_preg + (_INT32)(1U))
      {
        for(i_preg = 0U; i_preg <= (alphaSize + -1); i_preg = i_preg + (_INT32)(1U))
        {
          if((_INT32)(length)[(_INT64)(i_preg)] == (minLen + n_preg))
          {
            (code)[(_INT64)(i_preg)] = vec;
            vec = vec + (_INT32)(1U);
          }
        }
        vec = _I4SHL(vec, (_INT32)(1U));
      }
      return;
    } /* BZ2_hbAssignCodes */

    
    extern void BZ2_hbCreateDecodeTables(
      _INT32 * limit,
      _INT32 * base,
      _INT32 * perm,
      _UINT8 * length,
      _INT32 minLen,
      _INT32 maxLen,
      _INT32 alphaSize)
    {
      
      register _INT32 i_preg;
      register _INT32 j_preg;
      register _INT32 i_preg_w2c_0;
      register _INT32 i_preg_w2c_1;
      register _INT32 i_preg_w2c_2;
      register _INT32 i_preg_w2c_3;
      register _INT32 i_preg_w2c_4;
      register _INT32 i_preg_w2c_5;
      _INT32 pp;
      _INT32 vec;
      
      pp = 0U;
      for(i_preg = 0U; i_preg <= (maxLen - minLen); i_preg = i_preg + (_INT32)(1U))
      {
        for(j_preg = 0U; j_preg <= (alphaSize + -1); j_preg = j_preg + (_INT32)(1U))
        {
          if((_INT32)(length)[(_INT64)(j_preg)] == (minLen + i_preg))
          {
            (perm)[(_UINT64) pp] = j_preg;
            pp = (_INT32)((_UINT64) pp) + (_INT32)(1U);
          }
        }
      }
      for(i_preg_w2c_0 = 0U; i_preg_w2c_0 <= (_INT32)(22U); i_preg_w2c_0 = i_preg_w2c_0 + (_INT32)(1U))
      {
        (base)[(_INT64)(i_preg_w2c_0)] = 0U;
      }
      for(i_preg_w2c_1 = 0U; i_preg_w2c_1 <= (alphaSize + -1); i_preg_w2c_1 = i_preg_w2c_1 + (_INT32)(1U))
      {
        (base)[(_INT64)((_UINT64)(length)[(_INT64)(i_preg_w2c_1)]) + 1LL] = (base)[(_INT64)((_UINT64)(length)[(_INT64)(i_preg_w2c_1)]) + 1LL] + (_INT32)(1U);
      }
      for(i_preg_w2c_2 = 0U; i_preg_w2c_2 <= 21; i_preg_w2c_2 = i_preg_w2c_2 + (_INT32)(1U))
      {
        (base)[(_INT64)(i_preg_w2c_2) + 1LL] = (base)[(_INT64)(i_preg_w2c_2)] + (base)[(_INT64)(i_preg_w2c_2) + 1LL];
      }
      for(i_preg_w2c_3 = 0U; i_preg_w2c_3 <= (_INT32)(22U); i_preg_w2c_3 = i_preg_w2c_3 + (_INT32)(1U))
      {
        (limit)[(_INT64)(i_preg_w2c_3)] = 0U;
      }
      vec = 0U;
      for(i_preg_w2c_4 = 0U; i_preg_w2c_4 <= (maxLen - minLen); i_preg_w2c_4 = i_preg_w2c_4 + (_INT32)(1U))
      {
        vec = vec + ((base)[(_INT64)((minLen + i_preg_w2c_4)) + 1LL] - (base)[(_INT64)(minLen + i_preg_w2c_4)]);
        (limit)[(_INT64)(minLen + i_preg_w2c_4)] = vec + -1;
        vec = _I4SHL(vec, (_INT32)(1U));
      }
      for(i_preg_w2c_5 = 0U; i_preg_w2c_5 <= ((maxLen - minLen) + -1); i_preg_w2c_5 = i_preg_w2c_5 + (_INT32)(1U))
      {
        (base)[(_INT64)((minLen + i_preg_w2c_5)) + 1LL] = _I4SHL((limit)[(_INT64)(minLen + i_preg_w2c_5)] + (_INT32)(1U), (_INT32)(1U)) - (base)[(_INT64)((minLen + i_preg_w2c_5)) + 1LL];
      }
      return;
    } /* BZ2_hbCreateDecodeTables */

    