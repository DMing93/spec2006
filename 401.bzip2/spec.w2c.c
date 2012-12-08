/*******************************************************
 * C file translated from WHIRL Sat Dec  8 10:35:28 2012
 *******************************************************/

/* Include file-level type and variable decls */
#include "spec.w2c.h"


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


extern _IEEE64 ran()
{
  
  _INT64 lo;
  _INT64 hi;
  
  hi = seedi / (_INT64)(127773U);
  lo = seedi % (_INT64)(127773U);
  if(((lo * (_INT64)(16807U)) - (hi * (_INT64)(2836U))) > (_INT64)(0U))
  {
    seedi = (lo * (_INT64)(16807U)) - (hi * (_INT64)(2836U));
  }
  else
  {
    seedi = ((lo * (_INT64)(16807U)) - (hi * (_INT64)(2836U))) + (_INT64)(2147483647U);
  }
  return(_IEEE64)((_IEEE32)(seedi) * 4.6566128731e-10F);
} /* ran */


extern _INT32 spec_init()
{
  
  register _INT32 i_preg;
  register _UINT64 __comma_preg;
  register _INT32 _ub0_preg;
  register _INT32 j_preg;
  _INT32 limit;
  
  if(dbglvl > (_INT32)(3U))
  {
    printf("spec_init\n");
  }
  for(i_preg = 0U; i_preg <= (_INT32)(2U); i_preg = i_preg + (_INT32)(1U))
  {
    limit = ((spec_fd)[(_INT64)(i_preg)]).limit;
    memset((struct spec_fd_t *)(spec_fd) + (_INT64)(i_preg), (_INT32) 0U, 24U);
    ((spec_fd)[(_INT64)(i_preg)]).limit = limit;
    __comma_preg = (_UINT64)(_UINT64) malloc((_UINT64)((_INT64)(limit) + (_INT64)(1048576U)));
    ((spec_fd)[(_INT64)(i_preg)]).buf = (_UINT8 *) __comma_preg;
    if((_UINT64)((_UINT8 *) __comma_preg) == (_UINT64)(0U))
    {
      printf("spec_init: Error mallocing memory!\n");
      exit((_INT32) 0U);
    }
    _ub0_preg = _I4DIVCEIL(limit, 1024U) + -1;
    for(j_preg = 0U; j_preg <= _ub0_preg; j_preg = j_preg + (_INT32)(1U))
    {
      * ((_INT64)((j_preg * 1024U)) + ((spec_fd)[(_INT64)(i_preg)]).buf) = 0U;
    }
  }
  return 0U;
} /* spec_init */


extern _INT32 spec_random_load(
  _INT32 fd)
{
  
  register _INT32 i_preg;
  register _INT32 j_preg;
  register _IEEE64 __comma_preg;
  register _INT32 whiledo_var_preg;
  register _IEEE64 __comma_preg_w2c_0;
  _INT8 random_text[32LL][131072LL];
  
  if(dbglvl > (_INT32)(4U))
  {
    printf("Creating Chunks\n");
  }
  for(i_preg = 0U; i_preg <= (_INT32)(31U); i_preg = i_preg + (_INT32)(1U))
  {
    if(dbglvl > (_INT32)(5U))
    {
      printf("Creating Chunk %d\n", i_preg);
    }
    for(j_preg = 0U; j_preg <= (_INT32)(131071U); j_preg = j_preg + (_INT32)(1U))
    {
      __comma_preg = ran();
      (random_text)[(_INT64)(i_preg)][(_INT64)(j_preg)] = _I4F8TRUNC(__comma_preg * 2.56e+02);
    }
  }
  if(dbglvl > (_INT32)(4U))
  {
    printf("Filling input file\n");
  }
  whiledo_var_preg = 0U;
  while(((spec_fd)[fd]).limit > (whiledo_var_preg * (_INT32)(131072U)))
  {
    __comma_preg_w2c_0 = ran();
    memcpy((_INT64)((whiledo_var_preg * 131072U)) + ((spec_fd)[fd]).buf, (_INT8 *)(random_text) + ((_INT64)(_I4F8TRUNC(__comma_preg_w2c_0 * 3.2e+01)) * 131072U), 131072U);
    whiledo_var_preg = whiledo_var_preg + (_INT32)(1U);
  }
  ((spec_fd)[fd]).len = 1048576U;
  return 0U;
} /* spec_random_load */


extern _INT32 spec_load(
  _INT32 num,
  _INT8 * filename,
  _INT32 size)
{
  
  register _INT32 __comma_preg;
  register _UINT64 __comma_preg_w2c_0;
  register _UINT64 __comma_preg_w2c_1;
  register _INT64 __comma_preg_w2c_2;
  register _UINT64 __comma_preg_w2c_3;
  register _UINT64 __comma_preg_w2c_4;
  _INT32 i;
  _INT32 tmp;
  
  __comma_preg = open(filename, (_INT32) 0U);
  if(__comma_preg < (_INT32)(0U))
  {
    __comma_preg_w2c_0 = (_UINT64)(_UINT64) __errno_location();
    __comma_preg_w2c_1 = (_UINT64)(_UINT64) strerror(*(_INT32 *) __comma_preg_w2c_0);
    fprintf(stderr, "Can\'t open file %s: %s\n", filename, (_INT8 *) __comma_preg_w2c_1);
    exit((_INT32) 0U);
  }
  ((spec_fd)[num]).len = 0U;
  ((spec_fd)[num]).pos = 0U;
  i = 0U;
  while(size > (_INT32)((_UINT64) i))
  {
    _514 :;
    __comma_preg_w2c_2 = read(__comma_preg, (_INT64)((_UINT64) i) + ((spec_fd)[num]).buf, 131072U);
    if((_INT32)(__comma_preg_w2c_2) == (_INT32)(0U))
      goto _770;
    if((_INT32)(__comma_preg_w2c_2) < (_INT32)(0U))
    {
      __comma_preg_w2c_3 = (_UINT64)(_UINT64) __errno_location();
      __comma_preg_w2c_4 = (_UINT64)(_UINT64) strerror(*(_INT32 *) __comma_preg_w2c_3);
      fprintf(stderr, "Error reading from %s: %s\n", filename, (_INT8 *) __comma_preg_w2c_4);
      exit((_INT32) 0U);
    }
    ((spec_fd)[num]).len = ((spec_fd)[num]).len + (_INT32)(__comma_preg_w2c_2);
    i = (_INT32)((_UINT64) i) + (_INT32)(__comma_preg_w2c_2);
  }
  _770 :;
  close(__comma_preg);
  while(((spec_fd)[num]).len < size)
  {
    _1282 :;
    tmp = size - ((spec_fd)[num]).len;
    if(((spec_fd)[num]).len < tmp)
    {
      tmp = ((spec_fd)[num]).len;
    }
    if(dbglvl > (_INT32)(3U))
    {
      printf("Duplicating %d bytes\n", tmp);
    }
    memcpy(((spec_fd)[num]).len + ((spec_fd)[num]).buf, ((spec_fd)[num]).buf, (_UINT64)(_INT64)(tmp));
    ((spec_fd)[num]).len = ((spec_fd)[num]).len + tmp;
  }
  _1538 :;
  return 0U;
} /* spec_load */


extern _INT32 spec_read(
  _INT32 fd,
  _UINT8 * buf,
  _INT32 size)
{
  
  _INT32 rc;
  
  if(dbglvl > (_INT32)(4U))
  {
    printf("spec_read: %d, %p, %d = ", fd, buf, size);
  }
  if(fd > (_INT32)(3U))
  {
    fprintf(stderr, "spec_read: fd=%d, > MAX_SPEC_FD!\n", fd);
    exit((_INT32) 0U);
  }
  if(((spec_fd)[(_INT64)(fd)]).len <= ((spec_fd)[(_INT64)(fd)]).pos)
  {
    if(dbglvl > (_INT32)(4U))
    {
      printf("EOF\n");
    }
    return -1LL;
  }
  if(((spec_fd)[(_INT64)(fd)]).len <= (((spec_fd)[(_INT64)(fd)]).pos + size))
  {
    rc = ((spec_fd)[(_INT64)(fd)]).len - ((spec_fd)[(_INT64)(fd)]).pos;
  }
  else
  {
    rc = size;
  }
  memcpy(buf, (_INT64)(((spec_fd)[(_INT64)(fd)]).pos) + ((spec_fd)[(_INT64)(fd)]).buf, (_UINT64)(_INT64)(rc));
  ((spec_fd)[(_INT64)(fd)]).pos = ((spec_fd)[(_INT64)(fd)]).pos + rc;
  if(dbglvl > (_INT32)(4U))
  {
    printf("%d\n", rc);
  }
  return rc;
} /* spec_read */


extern _INT32 spec_fread(
  _UINT8 * buf,
  _INT32 size,
  _INT32 num,
  _INT32 fd)
{
  
  _INT32 rc;
  
  if(dbglvl > (_INT32)(4U))
  {
    printf("spec_fread: %p, (%d x %d) fd %d =", buf, size, num, fd);
  }
  if(fd > (_INT32)(3U))
  {
    fprintf(stderr, "spec_fread: fd=%d, > MAX_SPEC_FD!\n", fd);
    exit((_INT32) 0U);
  }
  if(((spec_fd)[(_INT64)(fd)]).len <= ((spec_fd)[(_INT64)(fd)]).pos)
  {
    if(dbglvl > (_INT32)(4U))
    {
      printf("EOF\n");
    }
    return -1LL;
  }
  if(((spec_fd)[(_INT64)(fd)]).len <= (((spec_fd)[(_INT64)(fd)]).pos + (size * num)))
  {
    rc = (((spec_fd)[(_INT64)(fd)]).len - ((spec_fd)[(_INT64)(fd)]).pos) / size;
  }
  else
  {
    rc = num;
  }
  memcpy(buf, (_INT64)(((spec_fd)[(_INT64)(fd)]).pos) + ((spec_fd)[(_INT64)(fd)]).buf, (_UINT64)(_INT64)(rc));
  ((spec_fd)[(_INT64)(fd)]).pos = ((spec_fd)[(_INT64)(fd)]).pos + (size * rc);
  if(dbglvl > (_INT32)(4U))
  {
    printf("%d\n", size * rc);
  }
  return rc;
} /* spec_fread */


extern _INT32 spec_getc(
  _INT32 fd)
{
  
  register _INT32 preg_preg;
  _INT32 rc;
  
  if(dbglvl > (_INT32)(4U))
  {
    printf("spec_getc: %d = ", fd);
  }
  if(fd > (_INT32)(3U))
  {
    fprintf(stderr, "spec_read: fd=%d, > MAX_SPEC_FD!\n", fd);
    exit((_INT32) 0U);
  }
  if(((spec_fd)[(_INT64)(fd)]).len <= ((spec_fd)[(_INT64)(fd)]).pos)
  {
    if(dbglvl > (_INT32)(4U))
    {
      printf("EOF\n");
    }
    return -1LL;
  }
  preg_preg = ((spec_fd)[(_INT64)(fd)]).pos;
  ((spec_fd)[(_INT64)(fd)]).pos = preg_preg + (_INT32)(1U);
  rc = (_INT32) * ((_UINT64)(preg_preg) + ((spec_fd)[(_INT64)(fd)]).buf);
  if(dbglvl > (_INT32)(4U))
  {
    printf("%d\n", rc);
  }
  return rc;
} /* spec_getc */


extern _INT32 spec_ungetc(
  _UINT8 ch,
  _INT32 fd)
{
  
  
  if(dbglvl > (_INT32)(4U))
  {
    printf("spec_ungetc: %d = ", fd);
  }
  if(fd > (_INT32)(3U))
  {
    fprintf(stderr, "spec_read: fd=%d, > MAX_SPEC_FD!\n", fd);
    exit((_INT32) 0U);
  }
  if(((spec_fd)[(_INT64)(fd)]).pos <= (_INT32)(0U))
  {
    fprintf(stderr, "spec_ungetc: pos %d <= 0\n", ((spec_fd)[(_INT64)(fd)]).pos);
    exit((_INT32) 0U);
  }
  ((spec_fd)[(_INT64)(fd)]).pos = ((spec_fd)[(_INT64)(fd)]).pos + -1;
  if((_UINT32)(*((_INT64)(((spec_fd)[(_INT64)(fd)]).pos) + ((spec_fd)[(_INT64)(fd)]).buf)) != (_UINT32)(ch))
  {
    fprintf(stderr, "spec_ungetc: can\'t unget something that wasn\'t what was in the buffer!\n");
    exit((_INT32) 0U);
  }
  if(dbglvl > (_INT32)(4U))
  {
    printf("%d\n", (_INT32) 0U);
  }
  return(_INT32) ch;
} /* spec_ungetc */


extern _INT32 spec_rewind(
  _INT32 fd)
{
  
  
  ((spec_fd)[fd]).pos = 0U;
  return 0U;
} /* spec_rewind */


extern _INT32 spec_reset(
  _INT32 fd)
{
  
  
  memset(((spec_fd)[fd]).buf, (_INT32) 0U, (_UINT64)((spec_fd)[fd]).len);
  ((spec_fd)[fd]).len = 0U;
  ((spec_fd)[fd]).pos = 0U;
  return 0U;
} /* spec_reset */


extern _INT32 spec_write(
  _INT32 fd,
  _UINT8 * buf,
  _INT32 size)
{
  
  
  if(dbglvl > (_INT32)(4U))
  {
    printf("spec_write: %d, %p, %d = ", fd, buf, (_INT32)((_UINT64) size));
  }
  if(fd > (_INT32)(3U))
  {
    fprintf(stderr, "spec_write: fd=%d, > MAX_SPEC_FD!\n", fd);
    exit((_INT32) 0U);
  }
  memcpy(((spec_fd)[(_INT64)(fd)]).pos + ((spec_fd)[(_INT64)(fd)]).buf, buf, (_UINT64) size);
  ((spec_fd)[(_INT64)(fd)]).len = ((spec_fd)[(_INT64)(fd)]).len + (_INT32)((_UINT64) size);
  ((spec_fd)[(_INT64)(fd)]).pos = ((spec_fd)[(_INT64)(fd)]).pos + (_INT32)((_UINT64) size);
  if(dbglvl > (_INT32)(4U))
  {
    printf("%d\n", (_INT32)((_UINT64) size));
  }
  return(_INT32)((_UINT64) size);
} /* spec_write */


extern _INT32 spec_fwrite(
  _UINT8 * buf,
  _INT32 size,
  _INT32 num,
  _INT32 fd)
{
  
  
  if(dbglvl > (_INT32)(4U))
  {
    printf("spec_fwrite: %p, %d, %d, %d = ", buf, size, num, fd);
  }
  if(fd > (_INT32)(3U))
  {
    fprintf(stderr, "spec_fwrite: fd=%d, > MAX_SPEC_FD!\n", fd);
    exit((_INT32) 0U);
  }
  memcpy(((spec_fd)[(_INT64)(fd)]).pos + ((spec_fd)[(_INT64)(fd)]).buf, buf, (_UINT64)(_INT64)((size * num)));
  ((spec_fd)[(_INT64)(fd)]).len = ((spec_fd)[(_INT64)(fd)]).len + (size * num);
  ((spec_fd)[(_INT64)(fd)]).pos = ((spec_fd)[(_INT64)(fd)]).pos + (size * num);
  if(dbglvl > (_INT32)(4U))
  {
    printf("%d\n", num);
  }
  return num;
} /* spec_fwrite */


extern _INT32 spec_putc(
  _UINT8 ch,
  _INT32 fd)
{
  
  register _INT32 preg_preg;
  
  if(dbglvl > (_INT32)(4U))
  {
    printf("spec_putc: %d, %d = ", (_INT32) ch, fd);
  }
  if(fd > (_INT32)(3U))
  {
    fprintf(stderr, "spec_write: fd=%d, > MAX_SPEC_FD!\n", fd);
    exit((_INT32) 0U);
  }
  preg_preg = ((spec_fd)[(_INT64)(fd)]).pos;
  ((spec_fd)[(_INT64)(fd)]).pos = preg_preg + (_INT32)(1U);
  * ((_UINT64)(preg_preg) + ((spec_fd)[(_INT64)(fd)]).buf) = ch;
  ((spec_fd)[(_INT64)(fd)]).len = ((spec_fd)[(_INT64)(fd)]).len + (_INT32)(1U);
  return(_INT32) ch;
} /* spec_putc */

