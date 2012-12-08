/*******************************************************
 * C file translated from WHIRL Sat Dec  8 15:02:21 2012
 *******************************************************/

/* Include file-level type and variable decls */
#include "lencod.w2c.h"


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


extern __inline _INT64 strtoimax(
  const _INT8 * restrict nptr,
  _INT8 ** restrict endptr,
  _INT32 base)
{
  
  register _INT64 __comma_preg;
  
  __comma_preg = __strtol_internal(nptr, endptr, base, (_INT32) 0U);
  return __comma_preg;
} /* strtoimax */


extern __inline _UINT64 strtoumax(
  const _INT8 * restrict nptr,
  _INT8 ** restrict endptr,
  _INT32 base)
{
  
  register _UINT64 __comma_preg;
  
  __comma_preg = __strtoul_internal(nptr, endptr, base, (_INT32) 0U);
  return __comma_preg;
} /* strtoumax */


extern __inline _INT64 wcstoimax(
  const _INT32 * restrict nptr,
  _INT32 ** restrict endptr,
  _INT32 base)
{
  
  register _INT64 __comma_preg;
  
  __comma_preg = __wcstol_internal(nptr, endptr, base, (_INT32) 0U);
  return __comma_preg;
} /* wcstoimax */


extern __inline _UINT64 wcstoumax(
  const _INT32 * restrict nptr,
  _INT32 ** restrict endptr,
  _INT32 base)
{
  
  register _UINT64 __comma_preg;
  
  __comma_preg = __wcstoul_internal(nptr, endptr, base, (_INT32) 0U);
  return __comma_preg;
} /* wcstoumax */


extern _INT32 main(
  _INT32 argc,
  _INT8 ** argv)
{
  
  register _UINT64 __comma_preg;
  register _UINT64 __comma_preg_w2c_0;
  register _UINT64 __comma_preg_w2c_1;
  register _UINT64 __comma_preg_w2c_2;
  register _UINT64 __comma_preg_w2c_3;
  register _INT32 __comma_preg_w2c_4;
  register _INT32 __cselect_preg;
  register _INT32 __cselect_preg_w2c_0;
  register _INT32 __cselect_preg_w2c_1;
  _INT32 M;
  _INT32 N;
  _INT32 n;
  _INT32 np;
  _INT32 nb;
  _INT32 bi;
  
  p_in = -1LL;
  p_dec = -1LL;
  p_trace = (struct _IO_FILE *)(0U);
  p_log = (struct _IO_FILE *)(0U);
  p_stat = (struct _IO_FILE *)(0U);
  frame_statistic_start = 1U;
  Configure(argc, argv);
  Init_QMatrix();
  Init_QOffsetMatrix();
  AllocNalPayloadBuffer();
  init_poc();
  GenerateParameterSets();
  init_img();
  __comma_preg = (_UINT64)(_UINT64) malloc_picture();
  frame_pic = (struct anonymous_w2c_3 *) __comma_preg;
  if((input) -> RDPictureDecision != (_INT32)(0U))
  {
    __comma_preg_w2c_0 = (_UINT64)(_UINT64) malloc_picture();
    frame_pic2 = (struct anonymous_w2c_3 *) __comma_preg_w2c_0;
    __comma_preg_w2c_1 = (_UINT64)(_UINT64) malloc_picture();
    frame_pic3 = (struct anonymous_w2c_3 *) __comma_preg_w2c_1;
  }
  if((input) -> PicInterlace != (_INT32)(0U))
  {
    __comma_preg_w2c_2 = (_UINT64)(_UINT64) malloc_picture();
    top_pic = (struct anonymous_w2c_3 *) __comma_preg_w2c_2;
    __comma_preg_w2c_3 = (_UINT64)(_UINT64) malloc_picture();
    bottom_pic = (struct anonymous_w2c_3 *) __comma_preg_w2c_3;
  }
  init_rdopt();
  if((input) -> PyramidCoding != (_INT32)(0U))
  {
    init_gop_structure();
    if((input) -> PyramidCoding == (_INT32)(3U))
    {
      interpret_gop_structure();
    }
    else
    {
      create_pyramid();
    }
  }
  init_dpb(input);
  init_out_buffer();
  enc_bottom_picture = (struct storable_picture *)(0U);
  enc_top_picture = (struct storable_picture *)(0U);
  enc_frame_picture = (struct storable_picture *)(0U);
  enc_picture = (struct storable_picture *)(0U);
  init_global_buffers();
  create_context_memory();
  Init_Motion_Search_Module();
  information_init();
  if((input) -> RCEnable != (_INT32)(0U))
  {
    rc_init_seq();
  }
  if((input) -> FMEnable != (_INT32)(0U))
  {
    DefineThreshold();
  }
  Iframe_ctr = 0U;
  Pframe_ctr = 0U;
  Bframe_ctr = 0U;
  tot_time = 0U;
  if((input) -> last_frame > (_INT32)(0U))
  {
    (input) -> no_frames = (((input) -> jumpd + (input) -> last_frame) / ((input) -> jumpd + (_INT32)(1U))) + (_INT32)(1U);
  }
  initial_Bframes = (input) -> successive_Bframe;
  PatchInputNoFrames();
  (stats) -> bit_ctr_parametersets = 0U;
  __comma_preg_w2c_4 = start_sequence();
  (stats) -> bit_slice = __comma_preg_w2c_4;
  (stats) -> bit_ctr_parametersets = (stats) -> bit_ctr_parametersets + (stats) -> bit_ctr_parametersets_n;
  start_frame_no_in_this_IGOP = 0U;
  (img) -> number = 0U;
  while((img) -> number < (input) -> no_frames)
  {
    _514 :;
    * (((_INT32 *)(img) + 16384LL) + 1740LL) = 1U;
    if(((input) -> intra_period != (_INT32)(0U)) && ((input) -> idr_enable != (_INT32)(0U)))
    {
      __cselect_preg = ((img) -> number - start_frame_no_in_this_IGOP) % (input) -> intra_period;
    }
    else
    {
      __cselect_preg = (img) -> number - start_frame_no_in_this_IGOP;
    }
    * (((_INT32 *)(img) + 16384LL) + 1728LL) = __cselect_preg * (((input) -> jumpd * (_INT32)(2U)) + (_INT32)(2U));
    if(*((_UINT64 *)(input) + 360LL) == (_UINT64)(0U))
    {
      * (((_INT32 *)(img) + 16384LL) + 1729LL) = *(((_INT32 *)(img) + 16384LL) + 1728LL);
    }
    else
    {
      * (((_INT32 *)(img) + 16384LL) + 1729LL) = *(((_INT32 *)(img) + 16384LL) + 1728LL) + (_INT32)(1U);
    }
    * (((_INT32 *)(img) + 16384LL) + 1730LL) = _I4MIN(*(((_INT32 *)(img) + 16384LL) + 1728LL), *(((_INT32 *)(img) + 16384LL) + 1729LL));
    if(((((input) -> BRefPictures == (_INT32)(0U)) && ((input) -> PyramidCoding == (_INT32)(0U))) || ((input) -> successive_Bframe == (_INT32)(0U))) || ((img) -> number <= (_INT32)(1U)))
    {
      if(((input) -> intra_period != (_INT32)(0U)) && ((input) -> idr_enable != (_INT32)(0U)))
      {
        __cselect_preg_w2c_0 = ((img) -> number - start_frame_no_in_this_IGOP) % (input) -> intra_period;
      }
      else
      {
        __cselect_preg_w2c_0 = (img) -> number - start_frame_no_in_this_IGOP;
      }
      * (((_UINT32 *)(img) + 16384LL) + 1732LL) = __cselect_preg_w2c_0 % _I4SHL((_INT32)(1U), (_INT32)(log2_max_frame_num_minus4) + (_INT32)(4U));
    }
    else
    {
      * (((_UINT32 *)(img) + 16384LL) + 1732LL) = *(((_UINT32 *)(img) + 16384LL) + 1732LL) + 1U;
      if(((input) -> intra_period != (_INT32)(0U)) && ((input) -> idr_enable != (_INT32)(0U)))
      {
        if(((img) -> number % (input) -> intra_period) == (_INT32)(0U))
        {
          * (((_UINT32 *)(img) + 16384LL) + 1732LL) = 0U;
        }
      }
      * (((_UINT32 *)(img) + 16384LL) + 1732LL) = *(((_UINT32 *)(img) + 16384LL) + 1732LL) & ((_UINT32)(_I4SHL((_INT32)(1U), (_INT32)(log2_max_frame_num_minus4) + (_INT32)(4U))) + (_UINT32)(-1));
    }
    (((struct anonymous_w2c_22 *)((_UINT8 *)(img) + 72436U))[0U]).number = 0U;
    if((input) -> BRefPictures != (_INT32)(0U))
    {
      if((img) -> number != (_INT32)(0U))
      {
        (((struct anonymous_w2c_22 *)((_UINT8 *)(img) + 72436U))[0U]).number = (input) -> successive_Bframe * (_INT32)(2U);
      }
    }
    SetImgType();
    if((((input) -> successive_Bframe != (_INT32)(0U)) && ((input) -> last_frame != (_INT32)(0U))) && ((input) -> no_frames == (((img) -> number - start_frame_no_in_this_IGOP) + (_INT32)(1U))))
    {
      bi = _I4F8TRUNC(((_IEEE64)((_IEEE32)(((input) -> jumpd + (_INT32)(1U)))) / ((_IEEE64)((input) -> successive_Bframe) + 1.0)) + 4.99999000000000026755e-01);
      (input) -> successive_Bframe = (((input) -> last_frame - (((img) -> number + -1) * ((input) -> jumpd + (_INT32)(1U)))) / bi) + -1;
      (((struct anonymous_w2c_22 *)((_UINT8 *)(img) + 72436U))[0U]).number = (initial_Bframes - (input) -> successive_Bframe) * -2;
      * (((_INT32 *)(img) + 16384LL) + 1728LL) = (((struct anonymous_w2c_22 *)((_UINT8 *)(img) + 72436U))[0U]).number + *(((_INT32 *)(img) + 16384LL) + 1728LL);
      * (((_INT32 *)(img) + 16384LL) + 1729LL) = (((struct anonymous_w2c_22 *)((_UINT8 *)(img) + 72436U))[0U]).number + *(((_INT32 *)(img) + 16384LL) + 1729LL);
    }
    if((img) -> type == (_INT32)(2U))
    {
      if((input) -> RCEnable != (_INT32)(0U))
      {
        if((input) -> intra_period == (_INT32)(0U))
        {
          np = (input) -> no_frames + -1;
          nb = (input) -> successive_Bframe * ((input) -> no_frames + -1);
        }
        else
        {
          N = (input) -> intra_period * ((input) -> successive_Bframe + (_INT32)(1U));
          M = (input) -> successive_Bframe + (_INT32)(1U);
          if((img) -> number == (_INT32)(0U))
          {
            __cselect_preg_w2c_1 = (N - M) + (_INT32)(1U);
          }
          else
          {
            __cselect_preg_w2c_1 = N;
          }
          n = __cselect_preg_w2c_1;
          if(((img) -> number / (input) -> intra_period) >= ((input) -> no_frames / (input) -> intra_period))
          {
            if((img) -> number != (_INT32)(0U))
            {
              n = (input) -> successive_Bframe + (((input) -> successive_Bframe * (((input) -> no_frames - (img) -> number) + -1)) + ((input) -> no_frames - (img) -> number));
            }
            else
            {
              n = (input) -> no_frames + ((input) -> successive_Bframe * ((input) -> no_frames + -1));
            }
          }
          if((img) -> number == (_INT32)(0U))
          {
            np = (((n + (M * (_INT32)(2U))) + -2) / M) + -1;
          }
          else
          {
            np = (((M + n) + -1) / M) + -1;
          }
          nb = (n - np) + -1;
        }
        rc_init_GOP(np, nb);
      }
    }
    if((((img) -> number - start_frame_no_in_this_IGOP) % ((input) -> NumFramesInELSubSeq + (_INT32)(1U))) == (_INT32)(0U))
    {
      * (((_INT32 *)(img) + 16384LL) + 1712LL) = 0U;
    }
    else
    {
      * (((_INT32 *)(img) + 16384LL) + 1712LL) = 1U;
    }
    encode_one_frame();
    if((input) -> ReportFrameStats != (_INT32)(0U))
    {
      report_frame_statistic();
    }
    (img) -> nb_references = (img) -> nb_references + (_INT32)(1U);
    (img) -> nb_references = _I4MIN((img) -> nb_references, *(((_INT32 *)(img) + 16384LL) + 1710LL));
    encode_enhancement_layer();
    process_2nd_IGOP();
    (img) -> number = (img) -> number + (_INT32)(1U);
  }
  _770 :;
  terminate_sequence();
  flush_dpb();
  close(p_in);
  if(p_dec != -1)
  {
    close(p_dec);
  }
  if((_UINT64)(p_trace) != (_UINT64)(0U))
  {
    fclose(p_trace);
  }
  Clear_Motion_Search_Module();
  RandomIntraUninit();
  FmoUninit();
  if((input) -> PyramidCoding != (_INT32)(0U))
  {
    clear_gop_structure();
  }
  clear_rdopt();
  calc_buffer();
  report();
  free_picture(frame_pic);
  if((input) -> RDPictureDecision != (_INT32)(0U))
  {
    free_picture(frame_pic2);
    free_picture(frame_pic3);
  }
  if((_UINT64)(top_pic) != (_UINT64)(0U))
  {
    free_picture(top_pic);
  }
  if((_UINT64)(bottom_pic) != (_UINT64)(0U))
  {
    free_picture(bottom_pic);
  }
  free_dpb();
  free_colocated(Co_located);
  uninit_out_buffer();
  free_global_buffers();
  free_img();
  free_context_memory();
  FreeNalPayloadBuffer();
  FreeParameterSets();
  return 0U;
} /* main */


extern void report_stats_on_error()
{
  
  
  (input) -> no_frames = (img) -> number + -1;
  terminate_sequence();
  flush_dpb();
  close(p_in);
  if(p_dec != -1)
  {
    close(p_dec);
  }
  if((_UINT64)(p_trace) != (_UINT64)(0U))
  {
    fclose(p_trace);
  }
  Clear_Motion_Search_Module();
  RandomIntraUninit();
  FmoUninit();
  if((input) -> PyramidCoding != (_INT32)(0U))
  {
    clear_gop_structure();
  }
  clear_rdopt();
  calc_buffer();
  if((input) -> ReportFrameStats != (_INT32)(0U))
  {
    report_frame_statistic();
  }
  report();
  free_picture(frame_pic);
  if((_UINT64)(top_pic) != (_UINT64)(0U))
  {
    free_picture(top_pic);
  }
  if((_UINT64)(bottom_pic) != (_UINT64)(0U))
  {
    free_picture(bottom_pic);
  }
  free_dpb();
  free_colocated(Co_located);
  uninit_out_buffer();
  free_global_buffers();
  free_img();
  free_context_memory();
  FreeNalPayloadBuffer();
  FreeParameterSets();
  return;
} /* report_stats_on_error */


extern void init_poc()
{
  
  
  * (((_UINT32 *)(img) + 16384LL) + 1717LL) = (input) -> pic_order_cnt_type;
  * (((_UINT32 *)(img) + 16384LL) + 1718LL) = 0U;
  * (((_UINT32 *)(img) + 16384LL) + 1721LL) = 1U;
  if((input) -> BRefPictures != (_INT32)(0U))
  {
    * (((_INT32 *)(img) + 16384LL) + 1719LL) = 0U;
    (((struct anonymous_w2c_22 *)((_UINT8 *)(img) + 72424U))[0U]).number = 2U;
  }
  else
  {
    * (((_INT32 *)(img) + 16384LL) + 1719LL) = (input) -> successive_Bframe * -2;
    (((struct anonymous_w2c_22 *)((_UINT8 *)(img) + 72424U))[0U]).number = ((input) -> successive_Bframe * (_INT32)(2U)) + (_INT32)(2U);
  }
  if(*((_UINT64 *)(input) + 360LL) == (_UINT64)(0U))
  {
    * (((_INT32 *)(img) + 16384LL) + 1720LL) = 0U;
  }
  else
  {
    * (((_INT32 *)(img) + 16384LL) + 1720LL) = 1U;
  }
  if(*((_UINT64 *)(input) + 360LL) == (_UINT64)(0U))
  {
    * (((_UINT32 *)(img) + 16384LL) + 1739LL) = 0U;
    * (((_INT32 *)(img) + 16384LL) + 1724LL) = 0U;
  }
  else
  {
    * (((_UINT32 *)(img) + 16384LL) + 1739LL) = 1U;
    * (((_INT32 *)(img) + 16384LL) + 1724LL) = 1U;
  }
  return;
} /* init_poc */


extern void CAVLC_init()
{
  
  _UINT32 i;
  _UINT32 k;
  _UINT32 l;
  
  i = 0U;
  while(*(((_UINT32 *)(img) + 16384LL) + 1737LL) > (_UINT32)((_UINT64) i))
  {
    for(k = 0U; (_UINT32)((_UINT64) k) <= 3U; k = (_UINT32)((_UINT64) k) + 1U)
    {
      l = 0U;
      while((_UINT32)((_UINT64) l) < ((_UINT32)((img) -> num_blk8x8_uv) + 4U))
      {
        * (*((*(_INT32 ****)(&(img)[16LL]))[(_UINT64) i] + (_UINT64) k) + (_UINT64) l) = 0U;
        l = (_UINT32)((_UINT64) l) + 1U;
      }
    }
    i = (_UINT32)((_UINT64) i) + 1U;
  }
  return;
} /* CAVLC_init */


extern void init_img()
{
  
  register _INT32 __cselect_preg;
  register _INT32 __cselect_preg_w2c_0;
  register _INT32 __cselect_preg_w2c_1;
  register _INT32 __cselect_preg_w2c_2;
  register _INT32 __cselect_preg_w2c_3;
  register _UINT64 __comma_preg;
  register _INT32 _ub0_preg;
  register _INT32 i_preg;
  register _UINT32 __cselect_preg_w2c_4;
  register _UINT64 __comma_preg_w2c_0;
  register _UINT64 __comma_preg_w2c_1;
  register _INT32 i_preg_w2c_0;
  register _INT32 j_preg;
  _INT32 byte_abs_range;
  static _INT32 mb_width_cr_w2c_6527[4LL] = {0, 8, 8, 16};
  static _INT32 mb_height_cr_w2c_6528[4LL] = {0, 8, 16, 16};
  
  * (((_INT32 *)(img) + 16384LL) + 1791LL) = (input) -> yuv_format;
  * (((_INT32 *)(img) + 16384LL) + 1781LL) = (input) -> BitDepthLuma;
  if((*(((_INT32 *)(img) + 16384LL) + 1781LL) > *(((_INT32 *)(img) + 16384LL) + 1782LL)) || (*(((_INT32 *)(img) + 16384LL) + 1791LL) == (_INT32)(0U)))
  {
    if(*(((_INT32 *)(img) + 16384LL) + 1781LL) > (_INT32)(8U))
    {
      __cselect_preg = 16U;
    }
    else
    {
      __cselect_preg = 8U;
    }
    * (((_INT32 *)(img) + 16384LL) + 1780LL) = __cselect_preg;
  }
  else
  {
    if(*(((_INT32 *)(img) + 16384LL) + 1782LL) > (_INT32)(8U))
    {
      __cselect_preg_w2c_0 = 16U;
    }
    else
    {
      __cselect_preg_w2c_0 = 8U;
    }
    * (((_INT32 *)(img) + 16384LL) + 1780LL) = __cselect_preg_w2c_0;
  }
  * (((_INT32 *)(img) + 16384LL) + 1783LL) = (*(((_INT32 *)(img) + 16384LL) + 1781LL) * (_INT32)(6U)) + -48;
  * (((_INT32 *)(img) + 16384LL) + 1785LL) = (*(((_INT32 *)(img) + 16384LL) + 1781LL) * (_INT32)(2U)) + -16;
  * (((_UINT32 *)(img) + 16384LL) + 1786LL) = _I4SHL((_INT32)(1U), *(((_INT32 *)(img) + 16384LL) + 1781LL) + -1);
  * (((_INT32 *)(img) + 16384LL) + 1787LL) = _I4SHL((_INT32)(1U), *(((_INT32 *)(img) + 16384LL) + 1781LL)) + -1;
  if(*(((_INT32 *)(img) + 16384LL) + 1791LL) != (_INT32)(0U))
  {
    * (((_INT32 *)(img) + 16384LL) + 1782LL) = (input) -> BitDepthChroma;
    * (((_INT32 *)(img) + 16384LL) + 1788LL) = _I4SHL((_INT32)(1U), *(((_INT32 *)(img) + 16384LL) + 1782LL)) + -1;
    * (((_INT32 *)(img) + 16384LL) + 1789LL) = _I4SHL((_INT32)(1U), *(((_INT32 *)(img) + 16384LL) + 1791LL)) & -2;
    * (((_INT32 *)(img) + 16384LL) + 1790LL) = _I4SHL(*(((_INT32 *)(img) + 16384LL) + 1789LL), (_INT32)(1U));
    if(((_UINT32)(*(((_INT32 *)(img) + 16384LL) + 1791LL)) + (_UINT32)(-1)) <= 1U)
    {
      __cselect_preg_w2c_1 = 8U;
    }
    else
    {
      __cselect_preg_w2c_1 = 16U;
    }
    * (((_INT32 *)(img) + 16384LL) + 1793LL) = __cselect_preg_w2c_1;
    if(((_UINT32)(*(((_INT32 *)(img) + 16384LL) + 1791LL)) + (_UINT32)(-2)) <= 1U)
    {
      __cselect_preg_w2c_2 = 16U;
    }
    else
    {
      __cselect_preg_w2c_2 = 8U;
    }
    * (((_INT32 *)(img) + 16384LL) + 1794LL) = __cselect_preg_w2c_2;
    * (((_INT32 *)(img) + 16384LL) + 1784LL) = (*(((_INT32 *)(img) + 16384LL) + 1782LL) * (_INT32)(6U)) + -48;
    if(*(((_INT32 *)(img) + 16384LL) + 1797LL) != (_INT32)(0U))
    {
      * (((_INT32 *)(img) + 16384LL) + 1784LL) = *(((_INT32 *)(img) + 16384LL) + 1784LL) + (_INT32)(6U);
    }
    (((struct anonymous_w2c_22 *)((_UINT8 *)(img) + 72716U))[0U]).number = (active_pps) -> cb_qp_index_offset;
    (((struct anonymous_w2c_22 *)((_UINT8 *)(img) + 72716U))[1U]).number = (active_pps) -> cr_qp_index_offset;
  }
  else
  {
    * (((_INT32 *)(img) + 16384LL) + 1782LL) = 0U;
    * (((_INT32 *)(img) + 16384LL) + 1788LL) = 0U;
    * (((_INT32 *)(img) + 16384LL) + 1789LL) = 0U;
    * (((_INT32 *)(img) + 16384LL) + 1790LL) = 0U;
    * (((_INT32 *)(img) + 16384LL) + 1793LL) = 0U;
    * (((_INT32 *)(img) + 16384LL) + 1794LL) = 0U;
    * (((_INT32 *)(img) + 16384LL) + 1784LL) = 0U;
    * (((_INT32 *)(img) + 16384LL) + 1784LL) = 0U;
    (((struct anonymous_w2c_22 *)((_UINT8 *)(img) + 72716U))[0U]).number = 0U;
    (((struct anonymous_w2c_22 *)((_UINT8 *)(img) + 72716U))[1U]).number = 0U;
  }
  (img) -> num_ref_frames = (active_sps) -> num_ref_frames;
  if((active_sps) -> frame_mbs_only_flag != 0U)
  {
    __cselect_preg_w2c_3 = (active_sps) -> num_ref_frames;
  }
  else
  {
    __cselect_preg_w2c_3 = (active_sps) -> num_ref_frames * 2U;
  }
  (img) -> max_num_references = __cselect_preg_w2c_3;
  * (((_INT32 *)(img) + 16384LL) + 1710LL) = (input) -> num_ref_frames;
  * (((_INT32 *)(img) + 16384LL) + 1775LL) = 0U;
  (img) -> framerate = (_IEEE32)((input) -> FrameRate);
  get_mem_mv((_INT16 *******)(struct anonymous_w2c_22 *)((_UINT8 *)(img) + 71920U));
  get_mem_mv((_INT16 *******)(struct anonymous_w2c_22 *)((_UINT8 *)(img) + 71928U));
  if((input) -> BiPredMotionEstimation != (_INT32)(0U))
  {
    get_mem_mv((_INT16 *******)(struct anonymous_w2c_22 *)((_UINT8 *)(img) + 71936U));
    get_mem_mv((_INT16 *******)(struct anonymous_w2c_22 *)((_UINT8 *)(img) + 71944U));
  }
  get_mem_ACcoeff((_INT32 *****)(struct anonymous_w2c_22 *)((_UINT8 *)(img) + 14136U));
  get_mem_DCcoeff((_INT32 ****)(struct anonymous_w2c_22 *)((_UINT8 *)(img) + 14144U));
  if((input) -> MbInterlace != (_INT32)(0U))
  {
    get_mem_mv(&rddata_top_frame_mb.pred_mv);
    get_mem_mv(&rddata_top_frame_mb.all_mv);
    get_mem_mv(&rddata_bot_frame_mb.pred_mv);
    get_mem_mv(&rddata_bot_frame_mb.all_mv);
    get_mem_mv(&rddata_top_field_mb.pred_mv);
    get_mem_mv(&rddata_top_field_mb.all_mv);
    get_mem_mv(&rddata_bot_field_mb.pred_mv);
    get_mem_mv(&rddata_bot_field_mb.all_mv);
    if((input) -> BiPredMotionEstimation != (_INT32)(0U))
    {
      get_mem_mv(&rddata_top_frame_mb.bipred_mv1);
      get_mem_mv(&rddata_top_frame_mb.bipred_mv2);
      get_mem_mv(&rddata_bot_frame_mb.bipred_mv1);
      get_mem_mv(&rddata_bot_frame_mb.bipred_mv2);
      get_mem_mv(&rddata_top_field_mb.bipred_mv1);
      get_mem_mv(&rddata_top_field_mb.bipred_mv2);
      get_mem_mv(&rddata_bot_field_mb.bipred_mv1);
      get_mem_mv(&rddata_bot_field_mb.bipred_mv2);
    }
    get_mem_ACcoeff(&rddata_top_frame_mb.cofAC);
    get_mem_DCcoeff(&rddata_top_frame_mb.cofDC);
    get_mem_ACcoeff(&rddata_bot_frame_mb.cofAC);
    get_mem_DCcoeff(&rddata_bot_frame_mb.cofDC);
    get_mem_ACcoeff(&rddata_top_field_mb.cofAC);
    get_mem_DCcoeff(&rddata_top_field_mb.cofDC);
    get_mem_ACcoeff(&rddata_bot_field_mb.cofAC);
    get_mem_DCcoeff(&rddata_bot_field_mb.cofDC);
  }
  if(*(((_INT32 *)(img) + 16384LL) + 1787LL) > *(((_INT32 *)(img) + 16384LL) + 1788LL))
  {
    byte_abs_range = (*(((_INT32 *)(img) + 16384LL) + 1787LL) * (_INT32)(2U)) + (_INT32)(2U);
  }
  else
  {
    byte_abs_range = (*(((_INT32 *)(img) + 16384LL) + 1788LL) * (_INT32)(2U)) + (_INT32)(2U);
  }
  __comma_preg = (_UINT64)(_UINT64) calloc((_UINT64) byte_abs_range, 4U);
  * (((_INT32 **)(img) + 8192LL) + 780LL) = (_INT32 *) __comma_preg;
  if((_UINT64)(*(((_INT32 **)(img) + 8192LL) + 780LL)) == (_UINT64)(0U))
  {
    no_mem_exit("init_img: img->quad");
  }
  * (((_INT32 **)(img) + 8192LL) + 780LL) = *(((_INT32 **)(img) + 8192LL) + 780LL) + (_INT64)((_UINT64) byte_abs_range / 2U);
  _ub0_preg = ((_INT32)((_UINT64) byte_abs_range) / (_INT32)(2U)) + -1;
  for(i_preg = 0U; i_preg <= _ub0_preg; i_preg = i_preg + (_INT32)(1U))
  {
    * ((img) -> quad + (_INT64)(-i_preg)) = i_preg * i_preg;
    * ((img) -> quad + (_INT64)(i_preg)) = *((img) -> quad + (_INT64)(-i_preg));
  }
  (img) -> width = (input) -> img_width + *(((_INT32 *)(img) + 16384LL) + 1798LL);
  (img) -> height = (input) -> img_height + *(((_INT32 *)(img) + 16384LL) + 1799LL);
  if(*(((_INT32 *)(img) + 16384LL) + 1791LL) != (_INT32)(0U))
  {
    (img) -> width_cr = (img) -> width / ((_INT32)(16U) / (mb_width_cr_w2c_6527)[*(((_INT32 *)(img) + 16384LL) + 1791LL)]);
    (img) -> height_cr = (img) -> height / ((_INT32)(16U) / (mb_height_cr_w2c_6528)[*(((_INT32 *)(img) + 16384LL) + 1791LL)]);
    (input) -> img_width_cr = (input) -> img_width / ((_INT32)(16U) / (mb_width_cr_w2c_6527)[*(((_INT32 *)(img) + 16384LL) + 1791LL)]);
    (input) -> img_height_cr = (input) -> img_height / ((_INT32)(16U) / (mb_height_cr_w2c_6528)[*(((_INT32 *)(img) + 16384LL) + 1791LL)]);
  }
  else
  {
    (img) -> width_cr = 0U;
    (img) -> height_cr = 0U;
    (input) -> img_width_cr = 0U;
    (input) -> img_height_cr = 0U;
  }
  (img) -> height_cr_frame = (img) -> height_cr;
  * (((_UINT32 *)(img) + 16384LL) + 1733LL) = ((input) -> img_width + *(((_INT32 *)(img) + 16384LL) + 1798LL)) / (_INT32)(16U);
  * (((_UINT32 *)(img) + 16384LL) + 1735LL) = ((input) -> img_height + *(((_INT32 *)(img) + 16384LL) + 1799LL)) / (_INT32)(16U);
  * (((_UINT32 *)(img) + 16384LL) + 1738LL) = *(((_UINT32 *)(img) + 16384LL) + 1733LL) ** (((_UINT32 *)(img) + 16384LL) + 1735LL);
  if((active_sps) -> frame_mbs_only_flag != 0U)
  {
    __cselect_preg_w2c_4 = *(((_UINT32 *)(img) + 16384LL) + 1735LL);
  }
  else
  {
    __cselect_preg_w2c_4 = *(((_UINT32 *)(img) + 16384LL) + 1735LL) / 2U;
  }
  * (((_UINT32 *)(img) + 16384LL) + 1734LL) = __cselect_preg_w2c_4;
  __comma_preg_w2c_0 = (_UINT64)(_UINT64) calloc(*(((_UINT32 *)(img) + 16384LL) + 1738LL), 632U);
  (img) -> mb_data = (struct macroblock *) __comma_preg_w2c_0;
  if((_UINT64)((img) -> mb_data) == (_UINT64)(0U))
  {
    no_mem_exit("init_img: img->mb_data");
  }
  if((input) -> UseConstrainedIntraPred != (_INT32)(0U))
  {
    __comma_preg_w2c_1 = (_UINT64)(_UINT64) calloc(*(((_UINT32 *)(img) + 16384LL) + 1738LL), 4U);
    * (((_INT32 **)(img) + 8192LL) + 781LL) = (_INT32 *) __comma_preg_w2c_1;
    if((_UINT64)(*(((_INT32 **)(img) + 8192LL) + 781LL)) == (_UINT64)(0U))
    {
      no_mem_exit("init_img: img->intra_block");
    }
  }
  get_mem2Dint((_INT32 ***)(struct anonymous_w2c_22 *)((_UINT8 *)(img) + 104U), (img) -> width / (_INT32)(4U), (img) -> height / (_INT32)(4U));
  get_mem2Dint((_INT32 ***)(struct anonymous_w2c_22 *)((_UINT8 *)(img) + 112U), (img) -> width / (_INT32)(4U), (img) -> height / (_INT32)(4U));
  get_mem2Dint(&rddata_top_frame_mb.ipredmode, (img) -> width / (_INT32)(4U), (img) -> height / (_INT32)(4U));
  if((input) -> MbInterlace != (_INT32)(0U))
  {
    get_mem2Dint(&rddata_bot_frame_mb.ipredmode, (img) -> width / (_INT32)(4U), (img) -> height / (_INT32)(4U));
    get_mem2Dint(&rddata_top_field_mb.ipredmode, (img) -> width / (_INT32)(4U), (img) -> height / (_INT32)(4U));
    get_mem2Dint(&rddata_bot_field_mb.ipredmode, (img) -> width / (_INT32)(4U), (img) -> height / (_INT32)(4U));
  }
  get_mem3Dint((_INT32 ****)(struct anonymous_w2c_22 *)((_UINT8 *)(img) + 128U), (_INT32) * (((_UINT32 *)(img) + 16384LL) + 1738LL), (_INT32) 4U, *(((_INT32 *)(img) + 16384LL) + 1789LL) + (_INT32)(4U));
  CAVLC_init();
  i_preg_w2c_0 = 0U;
  while(i_preg_w2c_0 < ((img) -> width / (_INT32)(4U)))
  {
    j_preg = 0U;
    while(j_preg < ((img) -> height / (_INT32)(4U)))
    {
      * (*((img) -> ipredmode + (_INT64)(i_preg_w2c_0)) + (_INT64)(j_preg)) = -1LL;
      * (*((img) -> ipredmode8x8 + (_INT64)(i_preg_w2c_0)) + (_INT64)(j_preg)) = -1LL;
      j_preg = j_preg + (_INT32)(1U);
    }
    i_preg_w2c_0 = i_preg_w2c_0 + (_INT32)(1U);
  }
  (img) -> mb_y_upd = 0U;
  RandomIntraInit((img) -> width / (_INT32)(16U), (img) -> height / (_INT32)(16U), (input) -> RandomIntraMBRefresh);
  InitSEIMessages();
  if((input) -> LFSendParameters != (_INT32)(0U))
  {
    (input) -> LFAlphaC0Offset = _I4SHL((input) -> LFAlphaC0Offset, (_INT32)(1U));
    (input) -> LFBetaOffset = _I4SHL((input) -> LFBetaOffset, (_INT32)(1U));
  }
  else
  {
    (input) -> LFDisableIdc = 0U;
    (input) -> LFAlphaC0Offset = 0U;
    (input) -> LFBetaOffset = 0U;
  }
  return;
} /* init_img */


extern void free_img()
{
  
  
  CloseSEIMessages();
  free_mem_mv(*(((_INT16 *******)(img) + 8192LL) + 798LL));
  free_mem_mv(*(((_INT16 *******)(img) + 8192LL) + 799LL));
  if((input) -> BiPredMotionEstimation != (_INT32)(0U))
  {
    free_mem_mv(*(((_INT16 *******)(img) + 8192LL) + 800LL));
    free_mem_mv(*(((_INT16 *******)(img) + 8192LL) + 801LL));
  }
  free_mem_ACcoeff((img) -> cofAC);
  free_mem_DCcoeff((img) -> cofDC);
  if((input) -> MbInterlace != (_INT32)(0U))
  {
    free_mem_mv((rddata_top_frame_mb).pred_mv);
    free_mem_mv((rddata_top_frame_mb).all_mv);
    free_mem_mv((rddata_bot_frame_mb).pred_mv);
    free_mem_mv((rddata_bot_frame_mb).all_mv);
    free_mem_mv((rddata_top_field_mb).pred_mv);
    free_mem_mv((rddata_top_field_mb).all_mv);
    free_mem_mv((rddata_bot_field_mb).pred_mv);
    free_mem_mv((rddata_bot_field_mb).all_mv);
    if((input) -> BiPredMotionEstimation != (_INT32)(0U))
    {
      free_mem_mv((rddata_top_frame_mb).bipred_mv1);
      free_mem_mv((rddata_top_frame_mb).bipred_mv2);
      free_mem_mv((rddata_bot_frame_mb).bipred_mv1);
      free_mem_mv((rddata_bot_frame_mb).bipred_mv2);
      free_mem_mv((rddata_top_field_mb).bipred_mv1);
      free_mem_mv((rddata_top_field_mb).bipred_mv2);
      free_mem_mv((rddata_bot_field_mb).bipred_mv1);
      free_mem_mv((rddata_bot_field_mb).bipred_mv2);
    }
    free_mem_ACcoeff((rddata_top_frame_mb).cofAC);
    free_mem_DCcoeff((rddata_top_frame_mb).cofDC);
    free_mem_ACcoeff((rddata_bot_frame_mb).cofAC);
    free_mem_DCcoeff((rddata_bot_frame_mb).cofDC);
    free_mem_ACcoeff((rddata_top_field_mb).cofAC);
    free_mem_DCcoeff((rddata_top_field_mb).cofDC);
    free_mem_ACcoeff((rddata_bot_field_mb).cofAC);
    free_mem_DCcoeff((rddata_bot_field_mb).cofDC);
  }
  if(*(((_INT32 *)(img) + 16384LL) + 1787LL) > *(((_INT32 *)(img) + 16384LL) + 1788LL))
  {
    free((void *)(((_UINT64)(*(((_INT32 **)(img) + 8192LL) + 780LL)) - ((_UINT64)((_INT64)(*(((_INT32 *)(img) + 16384LL) + 1787LL))) * (_UINT64)(4U))) + (_UINT64)(-4LL)));
  }
  else
  {
    free((void *)(((_UINT64)(*(((_INT32 **)(img) + 8192LL) + 780LL)) - ((_UINT64)((_INT64)(*(((_INT32 *)(img) + 16384LL) + 1788LL))) * (_UINT64)(4U))) + (_UINT64)(-4LL)));
  }
  if((input) -> MbInterlace != (_INT32)(0U))
  {
    free_mem2Dint((rddata_bot_frame_mb).ipredmode);
    free_mem2Dint((rddata_top_field_mb).ipredmode);
    free_mem2Dint((rddata_bot_field_mb).ipredmode);
  }
  return;
} /* free_img */


extern struct anonymous_w2c_3 * malloc_picture()
{
  
  register _UINT64 __comma_preg;
  
  __comma_preg = (_UINT64)(_UINT64) calloc(1U, 824U);
  if((_UINT64)((struct anonymous_w2c_3 *) __comma_preg) == (_UINT64)(0U))
  {
    no_mem_exit("malloc_picture: Picture structure");
  }
  return(struct anonymous_w2c_3 *) __comma_preg;
} /* malloc_picture */


extern void free_picture(
  struct anonymous_w2c_3 * pic)
{
  
  
  if((_UINT64)(pic) != (_UINT64)(0U))
  {
    free_slice_list(pic);
    free(pic);
  }
  return;
} /* free_picture */


extern void report_frame_statistic()
{
  
  register _UINT64 __comma_preg;
  register _UINT64 __comma_preg_w2c_0;
  register _UINT64 __comma_preg_w2c_1;
  register _INT64 __comma_preg_w2c_2;
  register _UINT64 __comma_preg_w2c_3;
  register _INT32 i_preg;
  register _UINT64 __comma_preg_w2c_4;
  register _UINT64 __comma_preg_w2c_5;
  register _INT32 __cselect_preg;
  register _INT32 i_preg_w2c_0;
  register _INT32 i_preg_w2c_1;
  struct _IO_FILE * p_stat_frm;
  static _INT32 last_mode_use_w2c_6744[5LL][15LL];
  static _INT32 last_b8_mode_0_w2c_6745[5LL][2LL];
  static _INT32 last_mode_chroma_use_w2c_6746[4LL];
  static _INT32 last_bit_ctr_n_w2c_6747;
  _INT8 name[20LL];
  _INT32 bitcounter;
  _INT64 now;
  _INT8 string[1000LL];
  
  __comma_preg = (_UINT64)(_UINT64) fopen("stat_frame.dat", "r");
  if((_UINT64)((struct _IO_FILE *) __comma_preg) == (_UINT64)(0U))
  {
    __comma_preg_w2c_0 = (_UINT64)(_UINT64) fopen("stat_frame.dat", "a");
    p_stat_frm = (struct _IO_FILE *) __comma_preg_w2c_0;
    if((_UINT64)((struct _IO_FILE *) __comma_preg_w2c_0) == (_UINT64)(0U))
    {
      snprintf(errortext, 300U, "Error open file %s  \n", "stat_frame.dat.dat");
      error(errortext, (_INT32) 500U);
    }
    else
    {
      fprintf((struct _IO_FILE *) __comma_preg_w2c_0, " --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- \n");
      fprintf((struct _IO_FILE *) __comma_preg_w2c_0, "|            Encoder statistics. This file is generated during first encoding session, new sessions will be appended                                                                                                                                                                                                                                                                                                                                                              |\n");
      fprintf((struct _IO_FILE *) __comma_preg_w2c_0, " --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- \n");
    }
  }
  else
  {
    fclose((struct _IO_FILE *) __comma_preg);
    __comma_preg_w2c_1 = (_UINT64)(_UINT64) fopen("stat_frame.dat", "a");
    p_stat_frm = (struct _IO_FILE *) __comma_preg_w2c_1;
    if((_UINT64)((struct _IO_FILE *) __comma_preg_w2c_1) == (_UINT64)(0U))
    {
      snprintf(errortext, 300U, "Error open file %s  \n", "stat_frame.dat.dat");
      error(errortext, (_INT32) 500U);
    }
  }
  if(frame_statistic_start != (_INT32)(0U))
  {
    fprintf(p_stat_frm, "|  ver   | Date  | Time  |    Sequence        |Frm | QP |P/MbInt|   Bits   |  SNRY  |  SNRU  |  SNRV  |  I4  |  I8  | I16  | IC0  | IC1  | IC2  | IC3  | PI4  | PI8  | PI16 |  P0  |  P1  |  P2  |  P3  | P1*8*| P1*4*| P2*8*| P2*4*| P3*8*| P3*4*|  P8  | P8:4 | P4*8*| P4*4*| P8:5 | P8:6 | P8:7 | BI4  | BI8  | BI16 |  B0  |  B1  |  B2  |  B3  | B0*8*| B0*4*| B1*8*| B1*4*| B2*8*| B2*4*| B3*8*| B3*4*|  B8  | B8:0 |B80*8*|B80*4*| B8:4 | B4*8*| B4*4*| B8:5 | B8:6 | B8:7 |\n");
    fprintf(p_stat_frm, " --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- \n");
  }
  fprintf(p_stat_frm, "|%4s/%s", "9.3", "(FRExt)");
  __comma_preg_w2c_2 = time((_INT64 *) 0U);
  now = __comma_preg_w2c_2;
  time(&now);
  __comma_preg_w2c_3 = (_UINT64)(_UINT64) localtime(&now);
  strftime(string, 1000U, "%d-%b-%Y", (const struct tm_w2c_0 *)(struct tm *) __comma_preg_w2c_3);
  fprintf(p_stat_frm, "| %1.5s |", string);
  strftime(string, 1000U, "%H:%M:%S", (const struct tm_w2c_0 *)(struct tm *) __comma_preg_w2c_3);
  fprintf(p_stat_frm, " %1.5s |", string);
  for(i_preg = 0U; i_preg <= (_INT32)(19U); i_preg = i_preg + (_INT32)(1U))
  {
    __comma_preg_w2c_4 = strlen((_INT8 *)(struct anonymous_w2c_8 *)((_UINT8 *)(input) + 224U));
    if(((_INT32)((_UINT32)(__comma_preg_w2c_4)) + -20) >= (_INT32)(0U))
    {
      __comma_preg_w2c_5 = strlen((_INT8 *)(struct anonymous_w2c_8 *)((_UINT8 *)(input) + 224U));
      __cselect_preg = (_INT32)((_UINT32)(__comma_preg_w2c_5)) + -20;
    }
    else
    {
      __cselect_preg = 0U;
    }
    (name)[(_INT64)(i_preg)] = *(_INT8 *)(&((struct anonymous_w2c_8 *)((_UINT8 *)(input) + 224U))[__cselect_preg + i_preg]);
  }
  fprintf(p_stat_frm, "%20.20s|", name);
  fprintf(p_stat_frm, "%3d |", frame_no);
  fprintf(p_stat_frm, "%3d |", (img) -> qp);
  fprintf(p_stat_frm, "  %d/%d  |", (input) -> PicInterlace, (input) -> MbInterlace);
  if(*(((_UINT32 *)(img) + 16384LL) + 1732LL) == 0U)
  {
    bitcounter = (stats) -> bit_ctr_I;
  }
  else
  {
    bitcounter = (stats) -> bit_ctr_n - last_bit_ctr_n_w2c_6747;
    last_bit_ctr_n_w2c_6747 = (stats) -> bit_ctr_n;
  }
  fprintf(p_stat_frm, " %9d|", bitcounter);
  fprintf(p_stat_frm, " %2.4f| %2.4f| %2.4f|", (_IEEE64)((snr) -> snr_y), (_IEEE64)((snr) -> snr_u), (_IEEE64)((snr) -> snr_v));
  fprintf(p_stat_frm, " %5d|", (((struct anonymous_w2c_16 *)((_UINT8 *)(stats) + 728U))[2U][9U]).quant0 - (last_mode_use_w2c_6744)[2U][9U]);
  fprintf(p_stat_frm, " %5d|", (((struct anonymous_w2c_16 *)((_UINT8 *)(stats) + 728U))[2U][13U]).quant0 - (last_mode_use_w2c_6744)[2U][13U]);
  fprintf(p_stat_frm, " %5d|", (((struct anonymous_w2c_16 *)((_UINT8 *)(stats) + 728U))[2U][10U]).quant0 - (last_mode_use_w2c_6744)[2U][10U]);
  fprintf(p_stat_frm, " %5d|", (((struct anonymous_w2c_16 *)((_UINT8 *)(stats) + 672U))[0U]).quant0 - (last_mode_chroma_use_w2c_6746)[0U]);
  fprintf(p_stat_frm, " %5d|", (((struct anonymous_w2c_16 *)((_UINT8 *)(stats) + 672U))[1U]).quant0 - (last_mode_chroma_use_w2c_6746)[1U]);
  fprintf(p_stat_frm, " %5d|", (((struct anonymous_w2c_16 *)((_UINT8 *)(stats) + 672U))[2U]).quant0 - (last_mode_chroma_use_w2c_6746)[2U]);
  fprintf(p_stat_frm, " %5d|", (((struct anonymous_w2c_16 *)((_UINT8 *)(stats) + 672U))[3U]).quant0 - (last_mode_chroma_use_w2c_6746)[3U]);
  fprintf(p_stat_frm, " %5d|", (((struct anonymous_w2c_16 *)((_UINT8 *)(stats) + 728U))[0U][9U]).quant0 - (last_mode_use_w2c_6744)[0U][9U]);
  fprintf(p_stat_frm, " %5d|", (((struct anonymous_w2c_16 *)((_UINT8 *)(stats) + 728U))[0U][13U]).quant0 - (last_mode_use_w2c_6744)[0U][13U]);
  fprintf(p_stat_frm, " %5d|", (((struct anonymous_w2c_16 *)((_UINT8 *)(stats) + 728U))[0U][10U]).quant0 - (last_mode_use_w2c_6744)[0U][10U]);
  fprintf(p_stat_frm, " %5d|", (((struct anonymous_w2c_16 *)((_UINT8 *)(stats) + 728U))[0U][0U]).quant0 - (last_mode_use_w2c_6744)[0U][0U]);
  fprintf(p_stat_frm, " %5d|", (((struct anonymous_w2c_16 *)((_UINT8 *)(stats) + 728U))[0U][1U]).quant0 - (last_mode_use_w2c_6744)[0U][1U]);
  fprintf(p_stat_frm, " %5d|", (((struct anonymous_w2c_16 *)((_UINT8 *)(stats) + 728U))[0U][2U]).quant0 - (last_mode_use_w2c_6744)[0U][2U]);
  fprintf(p_stat_frm, " %5d|", (((struct anonymous_w2c_16 *)((_UINT8 *)(stats) + 728U))[0U][3U]).quant0 - (last_mode_use_w2c_6744)[0U][3U]);
  fprintf(p_stat_frm, " %5d|", (((struct anonymous_w2c_16 *)((_UINT8 *)(stats) + 72U))[0U][1U]).quant0);
  fprintf(p_stat_frm, " %5d|", (((struct anonymous_w2c_16 *)((_UINT8 *)(stats) + 372U))[0U][1U]).quant0);
  fprintf(p_stat_frm, " %5d|", (((struct anonymous_w2c_16 *)((_UINT8 *)(stats) + 72U))[0U][2U]).quant0);
  fprintf(p_stat_frm, " %5d|", (((struct anonymous_w2c_16 *)((_UINT8 *)(stats) + 372U))[0U][2U]).quant0);
  fprintf(p_stat_frm, " %5d|", (((struct anonymous_w2c_16 *)((_UINT8 *)(stats) + 72U))[0U][3U]).quant0);
  fprintf(p_stat_frm, " %5d|", (((struct anonymous_w2c_16 *)((_UINT8 *)(stats) + 372U))[0U][3U]).quant0);
  fprintf(p_stat_frm, " %5d|", (((struct anonymous_w2c_16 *)((_UINT8 *)(stats) + 728U))[0U][8U]).quant0 - (last_mode_use_w2c_6744)[0U][8U]);
  fprintf(p_stat_frm, " %5d|", (((struct anonymous_w2c_16 *)((_UINT8 *)(stats) + 728U))[0U][4U]).quant0 - (last_mode_use_w2c_6744)[0U][4U]);
  fprintf(p_stat_frm, " %5d|", (((struct anonymous_w2c_16 *)((_UINT8 *)(stats) + 72U))[0U][4U]).quant0);
  fprintf(p_stat_frm, " %5d|", (((struct anonymous_w2c_16 *)((_UINT8 *)(stats) + 372U))[0U][4U]).quant0);
  fprintf(p_stat_frm, " %5d|", (((struct anonymous_w2c_16 *)((_UINT8 *)(stats) + 728U))[0U][5U]).quant0 - (last_mode_use_w2c_6744)[0U][5U]);
  fprintf(p_stat_frm, " %5d|", (((struct anonymous_w2c_16 *)((_UINT8 *)(stats) + 728U))[0U][6U]).quant0 - (last_mode_use_w2c_6744)[0U][6U]);
  fprintf(p_stat_frm, " %5d|", (((struct anonymous_w2c_16 *)((_UINT8 *)(stats) + 728U))[0U][7U]).quant0 - (last_mode_use_w2c_6744)[0U][7U]);
  fprintf(p_stat_frm, " %5d|", (((struct anonymous_w2c_16 *)((_UINT8 *)(stats) + 728U))[1U][9U]).quant0 - (last_mode_use_w2c_6744)[1U][9U]);
  fprintf(p_stat_frm, " %5d|", (((struct anonymous_w2c_16 *)((_UINT8 *)(stats) + 728U))[1U][13U]).quant0 - (last_mode_use_w2c_6744)[1U][13U]);
  fprintf(p_stat_frm, " %5d|", (((struct anonymous_w2c_16 *)((_UINT8 *)(stats) + 728U))[1U][10U]).quant0 - (last_mode_use_w2c_6744)[1U][10U]);
  fprintf(p_stat_frm, " %5d|", (((struct anonymous_w2c_16 *)((_UINT8 *)(stats) + 728U))[1U][0U]).quant0 - (last_mode_use_w2c_6744)[1U][0U]);
  fprintf(p_stat_frm, " %5d|", (((struct anonymous_w2c_16 *)((_UINT8 *)(stats) + 728U))[1U][1U]).quant0 - (last_mode_use_w2c_6744)[1U][1U]);
  fprintf(p_stat_frm, " %5d|", (((struct anonymous_w2c_16 *)((_UINT8 *)(stats) + 728U))[1U][2U]).quant0 - (last_mode_use_w2c_6744)[1U][2U]);
  fprintf(p_stat_frm, " %5d|", (((struct anonymous_w2c_16 *)((_UINT8 *)(stats) + 728U))[1U][3U]).quant0 - (last_mode_use_w2c_6744)[1U][3U]);
  fprintf(p_stat_frm, " %5d|", (((struct anonymous_w2c_16 *)((_UINT8 *)(stats) + 72U))[1U][0U]).quant0);
  fprintf(p_stat_frm, " %5d|", (((struct anonymous_w2c_16 *)((_UINT8 *)(stats) + 372U))[1U][0U]).quant0);
  fprintf(p_stat_frm, " %5d|", (((struct anonymous_w2c_16 *)((_UINT8 *)(stats) + 72U))[1U][1U]).quant0);
  fprintf(p_stat_frm, " %5d|", (((struct anonymous_w2c_16 *)((_UINT8 *)(stats) + 372U))[1U][1U]).quant0);
  fprintf(p_stat_frm, " %5d|", (((struct anonymous_w2c_16 *)((_UINT8 *)(stats) + 72U))[1U][2U]).quant0);
  fprintf(p_stat_frm, " %5d|", (((struct anonymous_w2c_16 *)((_UINT8 *)(stats) + 372U))[1U][2U]).quant0);
  fprintf(p_stat_frm, " %5d|", (((struct anonymous_w2c_16 *)((_UINT8 *)(stats) + 72U))[1U][3U]).quant0);
  fprintf(p_stat_frm, " %5d|", (((struct anonymous_w2c_16 *)((_UINT8 *)(stats) + 372U))[1U][3U]).quant0);
  fprintf(p_stat_frm, " %5d|", (((struct anonymous_w2c_16 *)((_UINT8 *)(stats) + 728U))[1U][8U]).quant0 - (last_mode_use_w2c_6744)[1U][8U]);
  fprintf(p_stat_frm, " %5d|", ((((struct anonymous_w2c_16 *)((_UINT8 *)(stats) + 32U))[1U][0U]).quant0 + (((struct anonymous_w2c_16 *)((_UINT8 *)(stats) + 32U))[1U][1U]).quant0) - ((last_b8_mode_0_w2c_6745)[1U][0U] + (last_b8_mode_0_w2c_6745)[1U][1U]));
  fprintf(p_stat_frm, " %5d|", (((struct anonymous_w2c_16 *)((_UINT8 *)(stats) + 32U))[1U][1U]).quant0 - (last_b8_mode_0_w2c_6745)[1U][1U]);
  fprintf(p_stat_frm, " %5d|", (((struct anonymous_w2c_16 *)((_UINT8 *)(stats) + 32U))[1U][0U]).quant0 - (last_b8_mode_0_w2c_6745)[1U][0U]);
  fprintf(p_stat_frm, " %5d|", (((struct anonymous_w2c_16 *)((_UINT8 *)(stats) + 728U))[1U][4U]).quant0 - (last_mode_use_w2c_6744)[1U][4U]);
  fprintf(p_stat_frm, " %5d|", (((struct anonymous_w2c_16 *)((_UINT8 *)(stats) + 72U))[1U][4U]).quant0);
  fprintf(p_stat_frm, " %5d|", (((struct anonymous_w2c_16 *)((_UINT8 *)(stats) + 372U))[1U][4U]).quant0);
  fprintf(p_stat_frm, " %5d|", (((struct anonymous_w2c_16 *)((_UINT8 *)(stats) + 728U))[1U][5U]).quant0 - (last_mode_use_w2c_6744)[1U][5U]);
  fprintf(p_stat_frm, " %5d|", (((struct anonymous_w2c_16 *)((_UINT8 *)(stats) + 728U))[1U][6U]).quant0 - (last_mode_use_w2c_6744)[1U][6U]);
  fprintf(p_stat_frm, " %5d|", (((struct anonymous_w2c_16 *)((_UINT8 *)(stats) + 728U))[1U][7U]).quant0 - (last_mode_use_w2c_6744)[1U][7U]);
  fprintf(p_stat_frm, "\n");
  (last_mode_use_w2c_6744)[2U][9U] = (((struct anonymous_w2c_16 *)((_UINT8 *)(stats) + 728U))[2U][9U]).quant0;
  (last_mode_use_w2c_6744)[2U][13U] = (((struct anonymous_w2c_16 *)((_UINT8 *)(stats) + 728U))[2U][13U]).quant0;
  (last_mode_use_w2c_6744)[2U][10U] = (((struct anonymous_w2c_16 *)((_UINT8 *)(stats) + 728U))[2U][10U]).quant0;
  for(i_preg_w2c_0 = 0U; i_preg_w2c_0 <= (_INT32)(14U); i_preg_w2c_0 = i_preg_w2c_0 + (_INT32)(1U))
  {
    (last_mode_use_w2c_6744)[0U][(_INT64)(i_preg_w2c_0)] = (((struct anonymous_w2c_16 *)((_UINT8 *)(stats) + 728U))[0U][(_INT64)(i_preg_w2c_0)]).quant0;
    (last_mode_use_w2c_6744)[1U][(_INT64)(i_preg_w2c_0)] = (((struct anonymous_w2c_16 *)((_UINT8 *)(stats) + 728U))[1U][(_INT64)(i_preg_w2c_0)]).quant0;
    (((struct anonymous_w2c_16 *)((_UINT8 *)(stats) + 72U))[0U][(_INT64)(i_preg_w2c_0)]).quant0 = 0U;
    (((struct anonymous_w2c_16 *)((_UINT8 *)(stats) + 72U))[1U][(_INT64)(i_preg_w2c_0)]).quant0 = 0U;
    (((struct anonymous_w2c_16 *)((_UINT8 *)(stats) + 372U))[0U][(_INT64)(i_preg_w2c_0)]).quant0 = 0U;
    (((struct anonymous_w2c_16 *)((_UINT8 *)(stats) + 372U))[1U][(_INT64)(i_preg_w2c_0)]).quant0 = 0U;
  }
  (last_b8_mode_0_w2c_6745)[1U][0U] = (((struct anonymous_w2c_16 *)((_UINT8 *)(stats) + 32U))[1U][0U]).quant0;
  (last_b8_mode_0_w2c_6745)[1U][1U] = (((struct anonymous_w2c_16 *)((_UINT8 *)(stats) + 32U))[1U][1U]).quant0;
  for(i_preg_w2c_1 = 0U; i_preg_w2c_1 <= (_INT32)(3U); i_preg_w2c_1 = i_preg_w2c_1 + (_INT32)(1U))
  {
    (last_mode_chroma_use_w2c_6746)[(_INT64)(i_preg_w2c_1)] = (((struct anonymous_w2c_16 *)((_UINT8 *)(stats) + 672U))[(_INT64)(i_preg_w2c_1)]).quant0;
  }
  frame_statistic_start = 0U;
  fclose(p_stat_frm);
  return;
} /* report_frame_statistic */


extern void report()
{
  
  register _INT32 j_preg;
  register _INT32 j_preg_w2c_0;
  register _INT32 i_preg;
  register _INT32 __cselect_preg_w2c_0;
  register _INT32 __cselect_preg_w2c_1;
  register _INT32 __cselect_preg_w2c_2;
  register _INT32 j_preg_w2c_1;
  register _INT32 whiledo_var_preg;
  register _UINT64 __comma_preg_w2c_2;
  register _UINT64 __comma_preg_w2c_3;
  register _UINT64 __cselect_preg_w2c_3;
  register _UINT64 __comma_preg_w2c_4;
  register _UINT64 __comma_preg_w2c_5;
  register _UINT64 __cselect_preg_w2c_4;
  register _UINT64 __comma_preg_w2c_6;
  register _UINT64 __comma_preg_w2c_7;
  register _UINT64 __cselect_preg_w2c_5;
  register _INT32 __cselect_preg_w2c_6;
  register _UINT64 __comma_preg_w2c_8;
  register _INT32 __cselect_preg_w2c_7;
  register _INT32 __cselect_preg_w2c_8;
  register _INT32 __cselect_preg_w2c_9;
  register _IEEE64 __cselect_preg_w2c_10;
  register _UINT64 __comma_preg_w2c_9;
  register _UINT64 __comma_preg_w2c_10;
  register _UINT64 __comma_preg_w2c_11;
  register _INT64 __comma_preg_w2c_12;
  register _UINT64 __comma_preg_w2c_13;
  register _INT32 i_preg_w2c_0;
  register _UINT64 __comma_preg_w2c_14;
  register _UINT64 __comma_preg;
  register _INT32 __cselect_preg;
  register _UINT64 __comma_preg_w2c_0;
  register _UINT64 __comma_preg_w2c_1;
  _INT32 bit_use[5LL][2LL];
  _INT8 name[20LL];
  _INT32 total_bits;
  _IEEE32 frame_rate_w2c_0;
  _IEEE32 mean_motion_info_bit_use[2LL];
  _INT64 now;
  _INT8 string[1000LL];
  _INT8 seqtype[80LL];
  _INT32 _temp__switch_index0;
  _INT32 _temp__switch_index_w2c_1;
  
  (bit_use)[2U][0U] = Iframe_ctr;
  (bit_use)[0U][0U] = _I4MAX(Pframe_ctr, (_INT32)(1U));
  (bit_use)[1U][0U] = Bframe_ctr;
  for(j_preg = 0U; j_preg <= (_INT32)(4U); j_preg = j_preg + (_INT32)(1U))
  {
    (bit_use)[(_INT64)(j_preg)][1U] = 0U;
  }
  for(j_preg_w2c_0 = 0U; j_preg_w2c_0 <= (_INT32)(4U); j_preg_w2c_0 = j_preg_w2c_0 + (_INT32)(1U))
  {
    for(i_preg = 0U; i_preg <= (_INT32)(14U); i_preg = i_preg + (_INT32)(1U))
    {
      (bit_use)[(_INT64)(j_preg_w2c_0)][1U] = (((struct anonymous_w2c_16 *)((_UINT8 *)(stats) + 1028U))[(_INT64)(j_preg_w2c_0)][(_INT64)(i_preg)]).quant0 + (bit_use)[(_INT64)(j_preg_w2c_0)][1U];
    }
    (bit_use)[(_INT64)(j_preg_w2c_0)][1U] = (((struct anonymous_w2c_16 *)((_UINT8 *)(stats) + 1368U))[(_INT64)(j_preg_w2c_0)]).quant0 + (bit_use)[(_INT64)(j_preg_w2c_0)][1U];
    (bit_use)[(_INT64)(j_preg_w2c_0)][1U] = (((struct anonymous_w2c_16 *)((_UINT8 *)(stats) + 1348U))[(_INT64)(j_preg_w2c_0)]).quant0 + (bit_use)[(_INT64)(j_preg_w2c_0)][1U];
    (bit_use)[(_INT64)(j_preg_w2c_0)][1U] = (((struct anonymous_w2c_16 *)((_UINT8 *)(stats) + 1388U))[(_INT64)(j_preg_w2c_0)]).quant0 + (bit_use)[(_INT64)(j_preg_w2c_0)][1U];
    (bit_use)[(_INT64)(j_preg_w2c_0)][1U] = (((struct anonymous_w2c_16 *)((_UINT8 *)(stats) + 1408U))[(_INT64)(j_preg_w2c_0)]).quant0 + (bit_use)[(_INT64)(j_preg_w2c_0)][1U];
    (bit_use)[(_INT64)(j_preg_w2c_0)][1U] = (((struct anonymous_w2c_16 *)((_UINT8 *)(stats) + 1428U))[(_INT64)(j_preg_w2c_0)]).quant0 + (bit_use)[(_INT64)(j_preg_w2c_0)][1U];
    (bit_use)[(_INT64)(j_preg_w2c_0)][1U] = (((struct anonymous_w2c_16 *)((_UINT8 *)(stats) + 1448U))[(_INT64)(j_preg_w2c_0)]).quant0 + (bit_use)[(_INT64)(j_preg_w2c_0)][1U];
    (bit_use)[(_INT64)(j_preg_w2c_0)][1U] = (((struct anonymous_w2c_16 *)((_UINT8 *)(stats) + 1328U))[(_INT64)(j_preg_w2c_0)]).quant0 + (bit_use)[(_INT64)(j_preg_w2c_0)][1U];
  }
  frame_rate_w2c_0 = ((_IEEE32)(((input) -> successive_Bframe + (_INT32)(1U))) * (img) -> framerate) / (_IEEE32)(((input) -> jumpd + (_INT32)(1U)));
  (stats) -> bitrate_I = ((_IEEE32)((stats) -> bit_ctr_I) * frame_rate_w2c_0) / (_IEEE32)(((input) -> no_frames + Bframe_ctr));
  (stats) -> bitrate_P = ((_IEEE32)((stats) -> bit_ctr_P) * frame_rate_w2c_0) / (_IEEE32)(((input) -> no_frames + Bframe_ctr));
  (stats) -> bitrate_B = ((_IEEE32)((stats) -> bit_ctr_B) * frame_rate_w2c_0) / (_IEEE32)(((input) -> no_frames + Bframe_ctr));
  fprintf(stdout, "-------------------------------------------------------------------------------\n");
  fprintf(stdout, " Freq. for encoded bitstream       : %1.0f\n", (_IEEE64)((img) -> framerate / (_IEEE32)(((input) -> jumpd + (_INT32)(1U)))));
  if((input) -> hadamard != (_INT32)(0U))
  {
    if((input) -> hadamardqpel != (_INT32)(0U))
    {
      fprintf(stdout, " Hadamard transform                : Used for QPel\n");
    }
    else
    {
      fprintf(stdout, " Hadamard transform                : Used\n");
    }
  }
  else
  {
    fprintf(stdout, " Hadamard transform                : Not used\n");
  }
  fprintf(stdout, " Image format                      : %dx%d\n", (input) -> img_width, (input) -> img_height);
  if((input) -> intra_upd != (_INT32)(0U))
  {
    fprintf(stdout, " Error robustness                  : On\n");
  }
  else
  {
    fprintf(stdout, " Error robustness                  : Off\n");
  }
  fprintf(stdout, " Search range                      : %d\n", (input) -> search_range);
  fprintf(stdout, " Total number of references        : %d\n", (input) -> num_ref_frames);
  if((input) -> P_List0_refs != (_INT32)(0U))
  {
    __cselect_preg_w2c_0 = (input) -> P_List0_refs;
  }
  else
  {
    __cselect_preg_w2c_0 = (input) -> num_ref_frames;
  }
  fprintf(stdout, " References for P slices           : %d\n", __cselect_preg_w2c_0);
  if((input) -> successive_Bframe != (_INT32)(0U))
  {
    if((input) -> B_List0_refs != (_INT32)(0U))
    {
      __cselect_preg_w2c_1 = (input) -> B_List0_refs;
    }
    else
    {
      __cselect_preg_w2c_1 = (input) -> num_ref_frames;
    }
    fprintf(stdout, " List0 references for B slices     : %d\n", __cselect_preg_w2c_1);
    if((input) -> B_List1_refs != (_INT32)(0U))
    {
      __cselect_preg_w2c_2 = (input) -> B_List1_refs;
    }
    else
    {
      __cselect_preg_w2c_2 = (input) -> num_ref_frames;
    }
    fprintf(stdout, " List1 references for B slices     : %d\n", __cselect_preg_w2c_2);
  }
  fprintf(stdout, " Total encoding time for the seq.  : %.3f sec \n", (_IEEE64)(tot_time) * 1.00000000000000002082e-03);
  fprintf(stdout, " Total ME time for sequence        : %.3f sec \n", (_IEEE64)(me_tot_time) * 1.00000000000000002082e-03);
  fprintf(stdout, " Sequence type                     :");
  if(((input) -> successive_Bframe > (_INT32)(0U)) && ((input) -> PyramidCoding != (_INT32)(0U)))
  {
    fprintf(stdout, " Pyramid (QP: I %d, P %d, B %d) \n", (input) -> qp0, (input) -> qpN, (input) -> qpB);
  }
  else
  {
    if((input) -> successive_Bframe > (_INT32)(0U))
    {
      memcpy(seqtype, "I", (_INT64) 2U);
      for(j_preg_w2c_1 = 0U; j_preg_w2c_1 <= (_INT32)(1U); j_preg_w2c_1 = j_preg_w2c_1 + (_INT32)(1U))
      {
        whiledo_var_preg = 0U;
        while(((input)[309LL]).ProfileIDC > whiledo_var_preg)
        {
          if(((input)[329LL]).ProfileIDC != (_INT32)(0U))
          {
            __comma_preg_w2c_2 = strlen(seqtype);
            if(((_INT32)(79U) - (_INT32)((_UINT32)(__comma_preg_w2c_2))) >= (_INT32)(0U))
            {
              __comma_preg_w2c_3 = strlen(seqtype);
              __cselect_preg_w2c_3 = (_INT64)((-(_INT32)((_UINT32)(__comma_preg_w2c_3)))) + (_INT64)(79U);
            }
            else
            {
              __cselect_preg_w2c_3 = 0U;
            }
            strncat(seqtype, "-RB", __cselect_preg_w2c_3);
          }
          else
          {
            __comma_preg_w2c_4 = strlen(seqtype);
            if(((_INT32)(79U) - (_INT32)((_UINT32)(__comma_preg_w2c_4))) >= (_INT32)(0U))
            {
              __comma_preg_w2c_5 = strlen(seqtype);
              __cselect_preg_w2c_4 = (_INT64)((-(_INT32)((_UINT32)(__comma_preg_w2c_5)))) + (_INT64)(79U);
            }
            else
            {
              __cselect_preg_w2c_4 = 0U;
            }
            strncat(seqtype, "-B", __cselect_preg_w2c_4);
          }
          whiledo_var_preg = whiledo_var_preg + (_INT32)(1U);
        }
        __comma_preg_w2c_6 = strlen(seqtype);
        if(((_INT32)(79U) - (_INT32)((_UINT32)(__comma_preg_w2c_6))) >= (_INT32)(0U))
        {
          __comma_preg_w2c_7 = strlen(seqtype);
          __cselect_preg_w2c_5 = (_INT64)((-(_INT32)((_UINT32)(__comma_preg_w2c_7)))) + (_INT64)(79U);
        }
        else
        {
          __cselect_preg_w2c_5 = 0U;
        }
        strncat(seqtype, "-P", __cselect_preg_w2c_5);
      }
      if((input) -> BRefPictures != (_INT32)(0U))
      {
        if(((input) -> qpB + (input) -> qpBRSOffset) >= (_INT32)(0U))
        {
          __cselect_preg_w2c_6 = _I4MIN((input) -> qpB + (input) -> qpBRSOffset, (_INT32)(51U));
        }
        else
        {
          __cselect_preg_w2c_6 = 0U;
        }
        fprintf(stdout, " %s (QP: I %d, P %d, RB %d) \n", seqtype, (input) -> qp0, (input) -> qpN, __cselect_preg_w2c_6);
      }
      else
      {
        fprintf(stdout, " %s (QP: I %d, P %d, B %d) \n", seqtype, (input) -> qp0, (input) -> qpN, (input) -> qpB);
      }
    }
    else
    {
      if(((input) -> successive_Bframe == (_INT32)(0U)) && ((input) -> sp_periodicity == (_INT32)(0U)))
      {
        fprintf(stdout, " IPPP (QP: I %d, P %d) \n", (input) -> qp0, (input) -> qpN);
      }
      else
      {
        fprintf(stdout, " I-P-P-SP-P (QP: I %d, P %d, SP (%d, %d)) \n", (input) -> qp0, (input) -> qpN, (input) -> qpsp, (input) -> qpsp_pred);
      }
    }
  }
  if((input) -> symbol_mode == (_INT32)(0U))
  {
    fprintf(stdout, " Entropy coding method             : CAVLC\n");
  }
  else
  {
    fprintf(stdout, " Entropy coding method             : CABAC\n");
  }
  fprintf(stdout, " Profile/Level IDC                 : (%d,%d)\n", (input) -> ProfileIDC, (input) -> LevelIDC);
  if((input) -> full_search == (_INT32)(2U))
  {
    fprintf(stdout, " Search range restrictions         : none\n");
  }
  else
  {
    if((input) -> full_search == (_INT32)(1U))
    {
      fprintf(stdout, " Search range restrictions         : older reference frames\n");
    }
    else
    {
      fprintf(stdout, " Search range restrictions         : smaller blocks and older reference frames\n");
    }
  }
  if((input) -> rdopt != (_INT32)(0U))
  {
    fprintf(stdout, " RD-optimized mode decision        : used\n");
  }
  else
  {
    fprintf(stdout, " RD-optimized mode decision        : not used\n");
  }
  _temp__switch_index0 = (input) -> partition_mode;
  if(_temp__switch_index0 == (_INT32)(0U))
    goto _4098;
  if(!(_temp__switch_index0 != (_INT32)(1U)))
    goto _44290;
  goto _4866;
  _4098 :;
  fprintf(stdout, " Data Partitioning Mode            : 1 partition \n");
  goto _4354;
  _44290 :;
  fprintf(stdout, " Data Partitioning Mode            : 3 partitions \n");
  goto _4354;
  _4866 :;
  fprintf(stdout, " Data Partitioning Mode            : not supported\n");
  _4354 :;
  _temp__switch_index_w2c_1 = (input) -> of_mode;
  if(_temp__switch_index_w2c_1 == (_INT32)(0U))
    goto _5378;
  if(!(_temp__switch_index_w2c_1 != (_INT32)(1U)))
    goto _44034;
  goto _6146;
  _5378 :;
  fprintf(stdout, " Output File Format                : H.264 Bit Stream File Format \n");
  goto _5634;
  _44034 :;
  fprintf(stdout, " Output File Format                : RTP Packet File Format \n");
  goto _5634;
  _6146 :;
  fprintf(stdout, " Output File Format                : not supported\n");
  _5634 :;
  if((input) -> residue_transform_flag != (_INT32)(0U))
  {
    fprintf(stdout, " Residue Color Transform           : used\n");
  }
  else
  {
    fprintf(stdout, " Residue Color Transform           : not used\n");
  }
  fprintf(stdout, "------------------ Average data all frames  -----------------------------------\n");
  fprintf(stdout, " SNR Y(dB)                         : %5.2f\n", (_IEEE64)((snr) -> snr_ya));
  fprintf(stdout, " SNR U(dB)                         : %5.2f\n", (_IEEE64)((snr) -> snr_ua));
  fprintf(stdout, " SNR V(dB)                         : %5.2f\n", (_IEEE64)((snr) -> snr_va));
  if(Bframe_ctr != (_INT32)(0U))
  {
    total_bits = (stats) -> bit_ctr_parametersets + ((stats) -> bit_ctr_B + ((stats) -> bit_ctr_I + (stats) -> bit_ctr_P));
    fprintf(stdout, " Total bits                        : %d (I %5d, P %5d, B %d NVB %d) \n", total_bits, (stats) -> bit_ctr_I, (stats) -> bit_ctr_P, (stats) -> bit_ctr_B, (stats) -> bit_ctr_parametersets);
    frame_rate_w2c_0 = ((_IEEE32)(((input) -> successive_Bframe + (_INT32)(1U))) * (img) -> framerate) / (_IEEE32)(((input) -> jumpd + (_INT32)(1U)));
    (stats) -> bitrate = ((_IEEE32)(total_bits) * frame_rate_w2c_0) / (_IEEE32)(((input) -> no_frames + Bframe_ctr));
    fprintf(stdout, " Bit rate (kbit/s)  @ %2.2f Hz     : %5.2f\n", (_IEEE64)(frame_rate_w2c_0), (_IEEE64)((stats) -> bitrate / 1.0e+03F));
  }
  else
  {
    if((input) -> sp_periodicity == (_INT32)(0U))
    {
      total_bits = (stats) -> bit_ctr_parametersets + ((stats) -> bit_ctr_I + (stats) -> bit_ctr_P);
      fprintf(stdout, " Total bits                        : %d (I %5d, P %5d, NVB %d) \n", total_bits, (stats) -> bit_ctr_I, (stats) -> bit_ctr_P, (stats) -> bit_ctr_parametersets);
      frame_rate_w2c_0 = (img) -> framerate / (_IEEE32)(((input) -> jumpd + (_INT32)(1U)));
      (stats) -> bitrate = ((_IEEE32)(total_bits) * frame_rate_w2c_0) / (_IEEE32)((input) -> no_frames);
      fprintf(stdout, " Bit rate (kbit/s)  @ %2.2f Hz     : %5.2f\n", (_IEEE64)(frame_rate_w2c_0), (_IEEE64)((stats) -> bitrate / 1.0e+03F));
    }
    else
    {
      total_bits = (stats) -> bit_ctr_parametersets + ((stats) -> bit_ctr_I + (stats) -> bit_ctr_P);
      fprintf(stdout, " Total bits                        : %d (I %5d, P %5d, NVB %d) \n", total_bits, (stats) -> bit_ctr_I, (stats) -> bit_ctr_P, (stats) -> bit_ctr_parametersets);
      frame_rate_w2c_0 = (img) -> framerate / (_IEEE32)(((input) -> jumpd + (_INT32)(1U)));
      (stats) -> bitrate = ((_IEEE32)(total_bits) * frame_rate_w2c_0) / (_IEEE32)((input) -> no_frames);
      fprintf(stdout, " Bit rate (kbit/s)  @ %2.2f Hz     : %5.2f\n", (_IEEE64)(frame_rate_w2c_0), (_IEEE64)((stats) -> bitrate / 1.0e+03F));
    }
  }
  fprintf(stdout, " Bits to avoid Startcode Emulation : %d \n", (stats) -> bit_ctr_emulationprevention);
  fprintf(stdout, " Bits for parameter sets           : %d \n", (stats) -> bit_ctr_parametersets);
  fprintf(stdout, "-------------------------------------------------------------------------------\n");
  fprintf(stdout, "Exit JM %s encoder ver %s ", "9 (FRExt)", "9.3");
  fprintf(stdout, "\n");
  __comma_preg_w2c_8 = (_UINT64)(_UINT64) fopen("stats.dat", "wt");
  p_stat = (struct _IO_FILE *) __comma_preg_w2c_8;
  if((_UINT64)((struct _IO_FILE *) __comma_preg_w2c_8) == (_UINT64)(0U))
  {
    snprintf(errortext, 300U, "Error open file %s", "stats.dat");
    error(errortext, (_INT32) 500U);
  }
  fprintf(p_stat, " -------------------------------------------------------------- \n");
  fprintf(p_stat, "  This file contains statistics for the last encoded sequence   \n");
  fprintf(p_stat, " -------------------------------------------------------------- \n");
  fprintf(p_stat, " Sequence                     : %s\n", (_INT8 *)(struct anonymous_w2c_8 *)((_UINT8 *)(input) + 224U));
  fprintf(p_stat, " No.of coded pictures         : %4d\n", (input) -> no_frames + Bframe_ctr);
  fprintf(p_stat, " Freq. for encoded bitstream  : %4.0f\n", (_IEEE64)(frame_rate_w2c_0));
  fprintf(p_stat, " I Slice Bitrate(kb/s)        : %6.2f\n", (_IEEE64)((stats) -> bitrate_I / 1.0e+03F));
  fprintf(p_stat, " P Slice Bitrate(kb/s)        : %6.2f\n", (_IEEE64)((stats) -> bitrate_P / 1.0e+03F));
  if((input) -> successive_Bframe != (_INT32)(0U))
  {
    fprintf(p_stat, " B Slice Bitrate(kb/s)        : %6.2f\n", (_IEEE64)((stats) -> bitrate_B / 1.0e+03F));
  }
  fprintf(p_stat, " Total Bitrate(kb/s)          : %6.2f\n", (_IEEE64)((stats) -> bitrate / 1.0e+03F));
  if((input) -> hadamard != (_INT32)(0U))
  {
    if((input) -> hadamardqpel != (_INT32)(0U))
    {
      fprintf(p_stat, " Hadamard transform           : Used for QPel\n");
    }
    else
    {
      fprintf(p_stat, " Hadamard transform           : Used\n");
    }
  }
  else
  {
    fprintf(p_stat, " Hadamard transform           : Not used\n");
  }
  fprintf(p_stat, " Image format                 : %dx%d\n", (input) -> img_width, (input) -> img_height);
  if((input) -> intra_upd != (_INT32)(0U))
  {
    fprintf(p_stat, " Error robustness             : On\n");
  }
  else
  {
    fprintf(p_stat, " Error robustness             : Off\n");
  }
  fprintf(p_stat, " Search range                 : %d\n", (input) -> search_range);
  fprintf(p_stat, " Total number of references   : %d\n", (input) -> num_ref_frames);
  if((input) -> P_List0_refs != (_INT32)(0U))
  {
    __cselect_preg_w2c_7 = (input) -> P_List0_refs;
  }
  else
  {
    __cselect_preg_w2c_7 = (input) -> num_ref_frames;
  }
  fprintf(p_stat, " References for P slices      : %d\n", __cselect_preg_w2c_7);
  if((input) -> successive_Bframe != (_INT32)(0U))
  {
    if((input) -> B_List0_refs != (_INT32)(0U))
    {
      __cselect_preg_w2c_8 = (input) -> B_List0_refs;
    }
    else
    {
      __cselect_preg_w2c_8 = (input) -> num_ref_frames;
    }
    fprintf(p_stat, " List0 refs for B slices      : %d\n", __cselect_preg_w2c_8);
    if((input) -> B_List1_refs != (_INT32)(0U))
    {
      __cselect_preg_w2c_9 = (input) -> B_List1_refs;
    }
    else
    {
      __cselect_preg_w2c_9 = (input) -> num_ref_frames;
    }
    fprintf(p_stat, " List1 refs for B slices      : %d\n", __cselect_preg_w2c_9);
  }
  if((input) -> symbol_mode == (_INT32)(0U))
  {
    fprintf(p_stat, " Entropy coding method        : CAVLC\n");
  }
  else
  {
    fprintf(p_stat, " Entropy coding method        : CABAC\n");
  }
  fprintf(p_stat, " Profile/Level IDC            : (%d,%d)\n", (input) -> ProfileIDC, (input) -> LevelIDC);
  if((input) -> MbInterlace != (_INT32)(0U))
  {
    fprintf(p_stat, " MB Field Coding : On \n");
  }
  if((input) -> full_search == (_INT32)(2U))
  {
    fprintf(p_stat, " Search range restrictions    : none\n");
  }
  else
  {
    if((input) -> full_search == (_INT32)(1U))
    {
      fprintf(p_stat, " Search range restrictions    : older reference frames\n");
    }
    else
    {
      fprintf(p_stat, " Search range restrictions    : smaller blocks and older reference frames\n");
    }
  }
  if((input) -> rdopt != (_INT32)(0U))
  {
    fprintf(p_stat, " RD-optimized mode decision   : used\n");
  }
  else
  {
    fprintf(p_stat, " RD-optimized mode decision   : not used\n");
  }
  fprintf(p_stat, " ---------------------|----------------|---------------|\n");
  fprintf(p_stat, "     Item             |     Intra      |   All frames  |\n");
  fprintf(p_stat, " ---------------------|----------------|---------------|\n");
  fprintf(p_stat, " SNR Y(dB)            |");
  fprintf(p_stat, " %5.2f          |", (_IEEE64)((snr) -> snr_y1));
  fprintf(p_stat, " %5.2f         |\n", (_IEEE64)((snr) -> snr_ya));
  fprintf(p_stat, " SNR U/V (dB)         |");
  fprintf(p_stat, " %5.2f/%5.2f    |", (_IEEE64)((snr) -> snr_u1), (_IEEE64)((snr) -> snr_v1));
  fprintf(p_stat, " %5.2f/%5.2f   |\n", (_IEEE64)((snr) -> snr_ua), (_IEEE64)((snr) -> snr_va));
  fprintf(p_stat, " Average quant        |");
  fprintf(p_stat, " %5d          |", _I4ABS((input) -> qp0));
  if((_IEEE32)((stats) -> quant0) < 1.0F)
  {
    __cselect_preg_w2c_10 = 1.0;
  }
  else
  {
    __cselect_preg_w2c_10 = (_IEEE64)((_IEEE32)((stats) -> quant0));
  }
  fprintf(p_stat, " %5.2f         |\n", (_IEEE64)((_IEEE32)((stats) -> quant1)) / __cselect_preg_w2c_10);
  fprintf(p_stat, "\n ---------------------|----------------|---------------|---------------|\n");
  fprintf(p_stat, "     SNR              |        I       |       P       |       B       |\n");
  fprintf(p_stat, " ---------------------|----------------|---------------|---------------|\n");
  fprintf(p_stat, " SNR Y(dB)            |      %5.3f    |     %5.3f    |     %5.3f    |\n", (_IEEE64)((((struct anonymous_w2c_91 *)((_UINT8 *)(snr) + 24U))[2U]).snr_y), (_IEEE64)((((struct anonymous_w2c_91 *)((_UINT8 *)(snr) + 24U))[0U]).snr_y), (_IEEE64)((((struct anonymous_w2c_91 *)((_UINT8 *)(snr) + 24U))[1U]).snr_y));
  fprintf(p_stat, " SNR U(dB)            |      %5.3f    |     %5.3f    |     %5.3f    |\n", (_IEEE64)((((struct anonymous_w2c_91 *)((_UINT8 *)(snr) + 36U))[2U]).snr_y), (_IEEE64)((((struct anonymous_w2c_91 *)((_UINT8 *)(snr) + 36U))[0U]).snr_y), (_IEEE64)((((struct anonymous_w2c_91 *)((_UINT8 *)(snr) + 36U))[1U]).snr_y));
  fprintf(p_stat, " SNR V(dB)            |      %5.3f    |     %5.3f    |     %5.3f    |\n", (_IEEE64)((((struct anonymous_w2c_91 *)((_UINT8 *)(snr) + 48U))[2U]).snr_y), (_IEEE64)((((struct anonymous_w2c_91 *)((_UINT8 *)(snr) + 48U))[0U]).snr_y), (_IEEE64)((((struct anonymous_w2c_91 *)((_UINT8 *)(snr) + 48U))[1U]).snr_y));
  fprintf(p_stat, "\n ---------------------|----------------|\n");
  fprintf(p_stat, "   Intra              |   Mode used    |\n");
  fprintf(p_stat, " ---------------------|----------------|\n");
  fprintf(p_stat, " Mode 0  intra 4x4    |  %5d         |\n", (((struct anonymous_w2c_16 *)((_UINT8 *)(stats) + 728U))[2U][9U]).quant0);
  fprintf(p_stat, " Mode 1  intra 8x8    |  %5d         |\n", (((struct anonymous_w2c_16 *)((_UINT8 *)(stats) + 728U))[2U][13U]).quant0);
  fprintf(p_stat, " Mode 2+ intra 16x16  |  %5d         |\n", (((struct anonymous_w2c_16 *)((_UINT8 *)(stats) + 728U))[2U][10U]).quant0);
  fprintf(p_stat, "\n ---------------------|----------------|-----------------|\n");
  fprintf(p_stat, "   Inter              |   Mode used    | MotionInfo bits |\n");
  fprintf(p_stat, " ---------------------|----------------|-----------------|");
  fprintf(p_stat, "\n Mode  0  (copy)      |  %5d         |    %8.2f     |", (((struct anonymous_w2c_16 *)((_UINT8 *)(stats) + 728U))[0U][0U]).quant0, (_IEEE64)((_IEEE32)((((struct anonymous_w2c_16 *)((_UINT8 *)(stats) + 1028U))[0U][0U]).quant0) / (_IEEE32)((bit_use)[0U][0U])));
  fprintf(p_stat, "\n Mode  1  (16x16)     |  %5d         |    %8.2f     |", (((struct anonymous_w2c_16 *)((_UINT8 *)(stats) + 728U))[0U][1U]).quant0, (_IEEE64)((_IEEE32)((((struct anonymous_w2c_16 *)((_UINT8 *)(stats) + 1028U))[0U][1U]).quant0) / (_IEEE32)((bit_use)[0U][0U])));
  fprintf(p_stat, "\n Mode  2  (16x8)      |  %5d         |    %8.2f     |", (((struct anonymous_w2c_16 *)((_UINT8 *)(stats) + 728U))[0U][2U]).quant0, (_IEEE64)((_IEEE32)((((struct anonymous_w2c_16 *)((_UINT8 *)(stats) + 1028U))[0U][2U]).quant0) / (_IEEE32)((bit_use)[0U][0U])));
  fprintf(p_stat, "\n Mode  3  (8x16)      |  %5d         |    %8.2f     |", (((struct anonymous_w2c_16 *)((_UINT8 *)(stats) + 728U))[0U][3U]).quant0, (_IEEE64)((_IEEE32)((((struct anonymous_w2c_16 *)((_UINT8 *)(stats) + 1028U))[0U][3U]).quant0) / (_IEEE32)((bit_use)[0U][0U])));
  fprintf(p_stat, "\n Mode  4  (8x8)       |  %5d         |    %8.2f     |", (((struct anonymous_w2c_16 *)((_UINT8 *)(stats) + 728U))[0U][8U]).quant0, (_IEEE64)((_IEEE32)((((struct anonymous_w2c_16 *)((_UINT8 *)(stats) + 1028U))[0U][8U]).quant0) / (_IEEE32)((bit_use)[0U][0U])));
  fprintf(p_stat, "\n Mode  5  intra 4x4   |  %5d         |-----------------|", (((struct anonymous_w2c_16 *)((_UINT8 *)(stats) + 728U))[0U][9U]).quant0);
  fprintf(p_stat, "\n Mode  6  intra 8x8   |  %5d         |", (((struct anonymous_w2c_16 *)((_UINT8 *)(stats) + 728U))[0U][13U]).quant0);
  fprintf(p_stat, "\n Mode  7+ intra 16x16 |  %5d         |", (((struct anonymous_w2c_16 *)((_UINT8 *)(stats) + 728U))[0U][10U]).quant0);
  (mean_motion_info_bit_use)[0U] = (_IEEE32)(((((struct anonymous_w2c_16 *)((_UINT8 *)(stats) + 1028U))[0U][8U]).quant0 + ((((struct anonymous_w2c_16 *)((_UINT8 *)(stats) + 1028U))[0U][3U]).quant0 + ((((struct anonymous_w2c_16 *)((_UINT8 *)(stats) + 1028U))[0U][2U]).quant0 + ((((struct anonymous_w2c_16 *)((_UINT8 *)(stats) + 1028U))[0U][0U]).quant0 + (((struct anonymous_w2c_16 *)((_UINT8 *)(stats) + 1028U))[0U][1U]).quant0))))) / (_IEEE32)((bit_use)[0U][0U]);
  if(((input) -> successive_Bframe != (_INT32)(0U)) && (Bframe_ctr != (_INT32)(0U)))
  {
    fprintf(p_stat, "\n\n ---------------------|----------------|-----------------|\n");
    fprintf(p_stat, "   B frame            |   Mode used    | MotionInfo bits |\n");
    fprintf(p_stat, " ---------------------|----------------|-----------------|");
    fprintf(p_stat, "\n Mode  0  (copy)      |  %5d         |    %8.2f     |", (((struct anonymous_w2c_16 *)((_UINT8 *)(stats) + 728U))[1U][0U]).quant0, (_IEEE64)((_IEEE32)((((struct anonymous_w2c_16 *)((_UINT8 *)(stats) + 1028U))[1U][0U]).quant0) / (_IEEE32)(Bframe_ctr)));
    fprintf(p_stat, "\n Mode  1  (16x16)     |  %5d         |    %8.2f     |", (((struct anonymous_w2c_16 *)((_UINT8 *)(stats) + 728U))[1U][1U]).quant0, (_IEEE64)((_IEEE32)((((struct anonymous_w2c_16 *)((_UINT8 *)(stats) + 1028U))[1U][1U]).quant0) / (_IEEE32)(Bframe_ctr)));
    fprintf(p_stat, "\n Mode  2  (16x8)      |  %5d         |    %8.2f     |", (((struct anonymous_w2c_16 *)((_UINT8 *)(stats) + 728U))[1U][2U]).quant0, (_IEEE64)((_IEEE32)((((struct anonymous_w2c_16 *)((_UINT8 *)(stats) + 1028U))[1U][2U]).quant0) / (_IEEE32)(Bframe_ctr)));
    fprintf(p_stat, "\n Mode  3  (8x16)      |  %5d         |    %8.2f     |", (((struct anonymous_w2c_16 *)((_UINT8 *)(stats) + 728U))[1U][3U]).quant0, (_IEEE64)((_IEEE32)((((struct anonymous_w2c_16 *)((_UINT8 *)(stats) + 1028U))[1U][3U]).quant0) / (_IEEE32)(Bframe_ctr)));
    fprintf(p_stat, "\n Mode  4  (8x8)       |  %5d         |    %8.2f     |", (((struct anonymous_w2c_16 *)((_UINT8 *)(stats) + 728U))[1U][8U]).quant0, (_IEEE64)((_IEEE32)((((struct anonymous_w2c_16 *)((_UINT8 *)(stats) + 1028U))[1U][8U]).quant0) / (_IEEE32)(Bframe_ctr)));
    fprintf(p_stat, "\n Mode  5  intra 4x4   |  %5d         |-----------------|", (((struct anonymous_w2c_16 *)((_UINT8 *)(stats) + 728U))[1U][9U]).quant0);
    fprintf(p_stat, "\n Mode  6  intra 8x8   |  %5d         |", (((struct anonymous_w2c_16 *)((_UINT8 *)(stats) + 728U))[1U][13U]).quant0);
    fprintf(p_stat, "\n Mode  7+ intra 16x16 |  %5d         |", (((struct anonymous_w2c_16 *)((_UINT8 *)(stats) + 728U))[1U][10U]).quant0);
    (mean_motion_info_bit_use)[1U] = (_IEEE32)(((((struct anonymous_w2c_16 *)((_UINT8 *)(stats) + 1028U))[1U][8U]).quant0 + ((((struct anonymous_w2c_16 *)((_UINT8 *)(stats) + 1028U))[1U][3U]).quant0 + ((((struct anonymous_w2c_16 *)((_UINT8 *)(stats) + 1028U))[1U][2U]).quant0 + ((((struct anonymous_w2c_16 *)((_UINT8 *)(stats) + 1028U))[1U][0U]).quant0 + (((struct anonymous_w2c_16 *)((_UINT8 *)(stats) + 1028U))[1U][1U]).quant0))))) / (_IEEE32)(Bframe_ctr);
  }
  fprintf(p_stat, "\n\n ---------------------|----------------|----------------|----------------|\n");
  fprintf(p_stat, "  Bit usage:          |      Intra     |      Inter     |    B frame     |\n");
  fprintf(p_stat, " ---------------------|----------------|----------------|----------------|\n");
  fprintf(p_stat, " Header               |");
  fprintf(p_stat, " %10.2f     |", (_IEEE64)((_IEEE32)((((struct anonymous_w2c_16 *)((_UINT8 *)(stats) + 1368U))[2U]).quant0) / (_IEEE32)((bit_use)[2U][0U])));
  fprintf(p_stat, " %10.2f     |", (_IEEE64)((_IEEE32)((((struct anonymous_w2c_16 *)((_UINT8 *)(stats) + 1368U))[0U]).quant0) / (_IEEE32)((bit_use)[0U][0U])));
  if(((input) -> successive_Bframe != (_INT32)(0U)) && (Bframe_ctr != (_INT32)(0U)))
  {
    fprintf(p_stat, " %10.2f     |", (_IEEE64)((_IEEE32)((((struct anonymous_w2c_16 *)((_UINT8 *)(stats) + 1368U))[1U]).quant0) / (_IEEE32)(Bframe_ctr)));
  }
  else
  {
    fprintf(p_stat, " %10.2f     |", 0.0);
  }
  fprintf(p_stat, "\n");
  fprintf(p_stat, " Mode                 |");
  fprintf(p_stat, " %10.2f     |", (_IEEE64)((_IEEE32)((((struct anonymous_w2c_16 *)((_UINT8 *)(stats) + 1348U))[2U]).quant0) / (_IEEE32)((bit_use)[2U][0U])));
  fprintf(p_stat, " %10.2f     |", (_IEEE64)((_IEEE32)((((struct anonymous_w2c_16 *)((_UINT8 *)(stats) + 1348U))[0U]).quant0) / (_IEEE32)((bit_use)[0U][0U])));
  if(((input) -> successive_Bframe != (_INT32)(0U)) && (Bframe_ctr != (_INT32)(0U)))
  {
    fprintf(p_stat, " %10.2f     |", (_IEEE64)((_IEEE32)((((struct anonymous_w2c_16 *)((_UINT8 *)(stats) + 1348U))[1U]).quant0) / (_IEEE32)(Bframe_ctr)));
  }
  else
  {
    fprintf(p_stat, " %10.2f     |", 0.0);
  }
  fprintf(p_stat, "\n");
  fprintf(p_stat, " Motion Info          |");
  fprintf(p_stat, "        ./.     |");
  fprintf(p_stat, " %10.2f     |", (_IEEE64)((mean_motion_info_bit_use)[0U]));
  if(((input) -> successive_Bframe != (_INT32)(0U)) && (Bframe_ctr != (_INT32)(0U)))
  {
    fprintf(p_stat, " %10.2f     |", (_IEEE64)((mean_motion_info_bit_use)[1U]));
  }
  else
  {
    fprintf(p_stat, " %10.2f     |", 0.0);
  }
  fprintf(p_stat, "\n");
  fprintf(p_stat, " CBP Y/C              |");
  fprintf(p_stat, " %10.2f     |", (_IEEE64)((_IEEE32)((((struct anonymous_w2c_16 *)((_UINT8 *)(stats) + 1388U))[2U]).quant0) / (_IEEE32)((bit_use)[2U][0U])));
  fprintf(p_stat, " %10.2f     |", (_IEEE64)((_IEEE32)((((struct anonymous_w2c_16 *)((_UINT8 *)(stats) + 1388U))[0U]).quant0) / (_IEEE32)((bit_use)[0U][0U])));
  if(((input) -> successive_Bframe != (_INT32)(0U)) && ((bit_use)[1U][0U] != (_INT32)(0U)))
  {
    fprintf(p_stat, " %10.2f     |", (_IEEE64)((_IEEE32)((((struct anonymous_w2c_16 *)((_UINT8 *)(stats) + 1388U))[1U]).quant0) / (_IEEE32)((bit_use)[1U][0U])));
  }
  else
  {
    fprintf(p_stat, " %10.2f     |", 0.0);
  }
  fprintf(p_stat, "\n");
  if(((input) -> successive_Bframe != (_INT32)(0U)) && (Bframe_ctr != (_INT32)(0U)))
  {
    fprintf(p_stat, " Coeffs. Y            | %10.2f     | %10.2f     | %10.2f     |\n", (_IEEE64)((_IEEE32)((((struct anonymous_w2c_16 *)((_UINT8 *)(stats) + 1408U))[2U]).quant0) / (_IEEE32)((bit_use)[2U][0U])), (_IEEE64)((_IEEE32)((((struct anonymous_w2c_16 *)((_UINT8 *)(stats) + 1408U))[0U]).quant0) / (_IEEE32)((bit_use)[0U][0U])), (_IEEE64)((_IEEE32)((((struct anonymous_w2c_16 *)((_UINT8 *)(stats) + 1408U))[1U]).quant0) / (_IEEE32)(Bframe_ctr)));
  }
  else
  {
    fprintf(p_stat, " Coeffs. Y            | %10.2f     | %10.2f     | %10.2f     |\n", (_IEEE64)((_IEEE32)((((struct anonymous_w2c_16 *)((_UINT8 *)(stats) + 1408U))[2U]).quant0) / (_IEEE32)((bit_use)[2U][0U])), (_IEEE64)((_IEEE32)((((struct anonymous_w2c_16 *)((_UINT8 *)(stats) + 1408U))[0U]).quant0) / (_IEEE32)((bit_use)[0U][0U])), 0.0);
  }
  if(((input) -> successive_Bframe != (_INT32)(0U)) && (Bframe_ctr != (_INT32)(0U)))
  {
    fprintf(p_stat, " Coeffs. C            | %10.2f     | %10.2f     | %10.2f     |\n", (_IEEE64)((_IEEE32)((((struct anonymous_w2c_16 *)((_UINT8 *)(stats) + 1428U))[2U]).quant0) / (_IEEE32)((bit_use)[2U][0U])), (_IEEE64)((_IEEE32)((((struct anonymous_w2c_16 *)((_UINT8 *)(stats) + 1428U))[0U]).quant0) / (_IEEE32)((bit_use)[0U][0U])), (_IEEE64)((_IEEE32)((((struct anonymous_w2c_16 *)((_UINT8 *)(stats) + 1428U))[1U]).quant0) / (_IEEE32)(Bframe_ctr)));
  }
  else
  {
    fprintf(p_stat, " Coeffs. C            | %10.2f     | %10.2f     | %10.2f     |\n", (_IEEE64)((_IEEE32)((((struct anonymous_w2c_16 *)((_UINT8 *)(stats) + 1428U))[2U]).quant0) / (_IEEE32)((bit_use)[2U][0U])), (_IEEE64)((_IEEE32)((((struct anonymous_w2c_16 *)((_UINT8 *)(stats) + 1428U))[0U]).quant0) / (_IEEE32)((bit_use)[0U][0U])), 0.0);
  }
  if(((input) -> successive_Bframe != (_INT32)(0U)) && (Bframe_ctr != (_INT32)(0U)))
  {
    fprintf(p_stat, " Delta quant          | %10.2f     | %10.2f     | %10.2f     |\n", (_IEEE64)((_IEEE32)((((struct anonymous_w2c_16 *)((_UINT8 *)(stats) + 1448U))[2U]).quant0) / (_IEEE32)((bit_use)[2U][0U])), (_IEEE64)((_IEEE32)((((struct anonymous_w2c_16 *)((_UINT8 *)(stats) + 1448U))[0U]).quant0) / (_IEEE32)((bit_use)[0U][0U])), (_IEEE64)((_IEEE32)((((struct anonymous_w2c_16 *)((_UINT8 *)(stats) + 1448U))[1U]).quant0) / (_IEEE32)(Bframe_ctr)));
  }
  else
  {
    fprintf(p_stat, " Delta quant          | %10.2f     | %10.2f     | %10.2f     |\n", (_IEEE64)((_IEEE32)((((struct anonymous_w2c_16 *)((_UINT8 *)(stats) + 1448U))[2U]).quant0) / (_IEEE32)((bit_use)[2U][0U])), (_IEEE64)((_IEEE32)((((struct anonymous_w2c_16 *)((_UINT8 *)(stats) + 1448U))[0U]).quant0) / (_IEEE32)((bit_use)[0U][0U])), 0.0);
  }
  if(((input) -> successive_Bframe != (_INT32)(0U)) && (Bframe_ctr != (_INT32)(0U)))
  {
    fprintf(p_stat, " Stuffing Bits        | %10.2f     | %10.2f     | %10.2f     |\n", (_IEEE64)((_IEEE32)((((struct anonymous_w2c_16 *)((_UINT8 *)(stats) + 1328U))[2U]).quant0) / (_IEEE32)((bit_use)[2U][0U])), (_IEEE64)((_IEEE32)((((struct anonymous_w2c_16 *)((_UINT8 *)(stats) + 1328U))[0U]).quant0) / (_IEEE32)((bit_use)[0U][0U])), (_IEEE64)((_IEEE32)((((struct anonymous_w2c_16 *)((_UINT8 *)(stats) + 1328U))[1U]).quant0) / (_IEEE32)(Bframe_ctr)));
  }
  else
  {
    fprintf(p_stat, " Stuffing Bits        | %10.2f     | %10.2f     | %10.2f     |\n", (_IEEE64)((_IEEE32)((((struct anonymous_w2c_16 *)((_UINT8 *)(stats) + 1328U))[2U]).quant0) / (_IEEE32)((bit_use)[2U][0U])), (_IEEE64)((_IEEE32)((((struct anonymous_w2c_16 *)((_UINT8 *)(stats) + 1328U))[0U]).quant0) / (_IEEE32)((bit_use)[0U][0U])), 0.0);
  }
  fprintf(p_stat, " ---------------------|----------------|----------------|----------------|\n");
  fprintf(p_stat, " average bits/frame   |");
  fprintf(p_stat, " %10.2f     |", (_IEEE64)((_IEEE32)((bit_use)[2U][1U]) / (_IEEE32)((bit_use)[2U][0U])));
  fprintf(p_stat, " %10.2f     |", (_IEEE64)((_IEEE32)((bit_use)[0U][1U]) / (_IEEE32)((bit_use)[0U][0U])));
  if(((input) -> successive_Bframe != (_INT32)(0U)) && (Bframe_ctr != (_INT32)(0U)))
  {
    fprintf(p_stat, " %10.2f     |", (_IEEE64)((_IEEE32)((bit_use)[1U][1U]) / (_IEEE32)(Bframe_ctr)));
  }
  else
  {
    fprintf(p_stat, " %10.2f     |", 0.0);
  }
  fprintf(p_stat, "\n");
  fprintf(p_stat, " ---------------------|----------------|----------------|----------------|\n");
  fclose(p_stat);
  __comma_preg_w2c_9 = (_UINT64)(_UINT64) fopen("log.dat", "r");
  p_log = (struct _IO_FILE *) __comma_preg_w2c_9;
  if((_UINT64)((struct _IO_FILE *) __comma_preg_w2c_9) == (_UINT64)(0U))
  {
    __comma_preg_w2c_10 = (_UINT64)(_UINT64) fopen("log.dat", "a");
    p_log = (struct _IO_FILE *) __comma_preg_w2c_10;
    if((_UINT64)((struct _IO_FILE *) __comma_preg_w2c_10) == (_UINT64)(0U))
    {
      snprintf(errortext, 300U, "Error open file %s  \n", "log.dat");
      error(errortext, (_INT32) 500U);
    }
    else
    {
      fprintf((struct _IO_FILE *) __comma_preg_w2c_10, " ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- \n");
      fprintf(p_log, "|            Encoder statistics. This file is generated during first encoding session, new sessions will be appended                                                                                                                                                            |\n");
      fprintf(p_log, " ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- \n");
      fprintf(p_log, "|    ver    | Date  | Time  |    Sequence        | #Img |P/MbInt| QPI| QPP| QPB| Format  |Iperiod| #B | Hdmd | S.R |#Ref | Freq |Coding|RD-opt|Intra upd|8x8Tr|SNRY 1|SNRU 1|SNRV 1|SNRY N|SNRU N|SNRV N|#Bitr I|#Bitr P|#Bitr B|#Bitr IPB|     Total Time   |      Me Time     |\n");
      fprintf(p_log, " ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- \n");
    }
  }
  else
  {
    fclose((struct _IO_FILE *) __comma_preg_w2c_9);
    __comma_preg_w2c_11 = (_UINT64)(_UINT64) fopen("log.dat", "a");
    p_log = (struct _IO_FILE *) __comma_preg_w2c_11;
    if((_UINT64)((struct _IO_FILE *) __comma_preg_w2c_11) == (_UINT64)(0U))
    {
      snprintf(errortext, 300U, "Error open file %s  \n", "log.dat");
      error(errortext, (_INT32) 500U);
    }
  }
  fprintf(p_log, "|%s/%-4s", "9.3", "(FRExt)");
  __comma_preg_w2c_12 = time((_INT64 *) 0U);
  now = __comma_preg_w2c_12;
  time(&now);
  __comma_preg_w2c_13 = (_UINT64)(_UINT64) localtime(&now);
  strftime(string, 1000U, "%d-%b-%Y", (const struct tm_w2c_0 *)(struct tm *) __comma_preg_w2c_13);
  fprintf(p_log, "| %1.5s |", string);
  strftime(string, 1000U, "%H:%M:%S", (const struct tm_w2c_0 *)(struct tm *) __comma_preg_w2c_13);
  fprintf(p_log, " %1.5s |", string);
  for(i_preg_w2c_0 = 0U; i_preg_w2c_0 <= (_INT32)(19U); i_preg_w2c_0 = i_preg_w2c_0 + (_INT32)(1U))
  {
    __comma_preg_w2c_14 = strlen((_INT8 *)(struct anonymous_w2c_8 *)((_UINT8 *)(input) + 224U));
    if((_INT32)(__comma_preg_w2c_14) > (_INT32)(19U))
    {
      __comma_preg = strlen((_INT8 *)(struct anonymous_w2c_8 *)((_UINT8 *)(input) + 224U));
      __cselect_preg = (_INT32)(__comma_preg) + -20;
    }
    else
    {
      __cselect_preg = 0U;
    }
    (name)[(_INT64)(i_preg_w2c_0)] = *(_INT8 *)(&((struct anonymous_w2c_8 *)((_UINT8 *)(input) + 224U))[__cselect_preg + i_preg_w2c_0]);
  }
  fprintf(p_log, "%20.20s|", name);
  fprintf(p_log, "%5d |", (input) -> no_frames);
  fprintf(p_log, "  %d/%d  |", (input) -> PicInterlace, (input) -> MbInterlace);
  fprintf(p_log, " %-3d|", (input) -> qp0);
  fprintf(p_log, " %-3d|", (input) -> qpN);
  fprintf(p_log, " %-3d|", (input) -> qpB);
  fprintf(p_log, "%4dx%-4d|", (input) -> img_width, (input) -> img_height);
  fprintf(p_log, "  %3d  |", (input) -> intra_period);
  fprintf(p_log, "%3d |", (input) -> successive_Bframe);
  if((input) -> hadamard == (_INT32)(1U))
  {
    fprintf(p_log, "  ON  |");
  }
  else
  {
    fprintf(p_log, "  OFF |");
  }
  fprintf(p_log, " %3d |", (input) -> search_range);
  fprintf(p_log, " %2d  |", (input) -> num_ref_frames);
  fprintf(p_log, " %3.2f|", (_IEEE64)(((_IEEE32)(((input) -> successive_Bframe + (_INT32)(1U))) * (img) -> framerate) / (_IEEE32)(((input) -> jumpd + (_INT32)(1U)))));
  if((input) -> symbol_mode == (_INT32)(0U))
  {
    fprintf(p_log, " CAVLC|");
  }
  else
  {
    fprintf(p_log, " CABAC|");
  }
  fprintf(p_log, "   %d  |", (input) -> rdopt);
  if((input) -> intra_upd == (_INT32)(1U))
  {
    fprintf(p_log, "   ON    |");
  }
  else
  {
    fprintf(p_log, "   OFF   |");
  }
  fprintf(p_log, "  %d  |", (input) -> AllowTransform8x8);
  fprintf(p_log, "%-5.3f|", (_IEEE64)((snr) -> snr_y1));
  fprintf(p_log, "%-5.3f|", (_IEEE64)((snr) -> snr_u1));
  fprintf(p_log, "%-5.3f|", (_IEEE64)((snr) -> snr_v1));
  fprintf(p_log, "%-5.3f|", (_IEEE64)((snr) -> snr_ya));
  fprintf(p_log, "%-5.3f|", (_IEEE64)((snr) -> snr_ua));
  fprintf(p_log, "%-5.3f|", (_IEEE64)((snr) -> snr_va));
  fprintf(p_log, "%7.0f|", (_IEEE64)((stats) -> bitrate_I));
  fprintf(p_log, "%7.0f|", (_IEEE64)((stats) -> bitrate_P));
  fprintf(p_log, "%7.0f|", (_IEEE64)((stats) -> bitrate_B));
  fprintf(p_log, "%9.0f|", (_IEEE64)((stats) -> bitrate));
  fprintf(p_log, "   %12d   |", tot_time);
  fprintf(p_log, "   %12d   |\n", me_tot_time);
  fclose(p_log);
  __comma_preg_w2c_0 = (_UINT64)(_UINT64) fopen("data.txt", "a");
  p_log = (struct _IO_FILE *) __comma_preg_w2c_0;
  if(((input) -> successive_Bframe != (_INT32)(0U)) && (Bframe_ctr != (_INT32)(0U)))
  {
    fprintf(p_log, "%3d %2d %2d %2.2f %2.2f %2.2f %5d %2.2f %2.2f %2.2f %5d %2.2f %2.2f %2.2f %5d %5d %.3f\n", (input) -> no_frames, (input) -> qp0, (input) -> qpN, (_IEEE64)((snr) -> snr_y1), (_IEEE64)((snr) -> snr_u1), (_IEEE64)((snr) -> snr_v1), (stats) -> bit_ctr_I, 0.0, 0.0, 0.0, (_INT32) 0U, (_IEEE64)((snr) -> snr_ya), (_IEEE64)((snr) -> snr_ua), (_IEEE64)((snr) -> snr_va), ((stats) -> bit_ctr + (stats) -> bit_ctr_I) / ((input) -> no_frames + Bframe_ctr), (stats) -> bit_ctr_B / Bframe_ctr, ((_IEEE64)(tot_time) * 1.00000000000000002082e-03) / (_IEEE64)(((input) -> no_frames + Bframe_ctr)));
  }
  else
  {
    if((input) -> no_frames != (_INT32)(0U))
    {
      fprintf(p_log, "%3d %2d %2d %2.2f %2.2f %2.2f %5d %2.2f %2.2f %2.2f %5d %2.2f %2.2f %2.2f %5d %5d %.3f\n", (input) -> no_frames, (input) -> qp0, (input) -> qpN, (_IEEE64)((snr) -> snr_y1), (_IEEE64)((snr) -> snr_u1), (_IEEE64)((snr) -> snr_v1), (stats) -> bit_ctr_I, 0.0, 0.0, 0.0, (_INT32) 0U, (_IEEE64)((snr) -> snr_ya), (_IEEE64)((snr) -> snr_ua), (_IEEE64)((snr) -> snr_va), ((stats) -> bit_ctr + (stats) -> bit_ctr_I) / (input) -> no_frames, (_INT32) 0U, ((_IEEE64)(tot_time) * 1.00000000000000002082e-03) / (_IEEE64)((input) -> no_frames));
    }
  }
  fclose(p_log);
  if((input) -> ReportFrameStats != (_INT32)(0U))
  {
    __comma_preg_w2c_1 = (_UINT64)(_UINT64) fopen("stat_frame.dat", "a");
    p_log = (struct _IO_FILE *) __comma_preg_w2c_1;
    if((_UINT64)((struct _IO_FILE *) __comma_preg_w2c_1) == (_UINT64)(0U))
    {
      snprintf(errortext, 300U, "Error open file %s  \n", "stat_frame.dat.dat");
    }
    else
    {
      fprintf((struct _IO_FILE *) __comma_preg_w2c_1, " --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- \n");
      fclose(p_log);
    }
  }
  return;
} /* report */


extern void information_init()
{
  
  _INT8 yuv_types[4LL][10LL];
  static _INT8 yuv_typesinit[4LL][10LL] = {"YUV 4:0:0", "YUV 4:2:0", "YUV 4:2:2", "YUV 4:4:4"};
  
  ;
  printf("------------------------------- JM %s %s --------------------------------\n", "9.3", "(FRExt)");
  printf(" Input YUV file                    : %s \n", (_INT8 *)(struct anonymous_w2c_8 *)((_UINT8 *)(input) + 224U));
  printf(" Output H.264 bitstream            : %s \n", (_INT8 *)(struct anonymous_w2c_8 *)((_UINT8 *)(input) + 424U));
  if(p_dec != -1)
  {
    printf(" Output YUV file                   : %s \n", (_INT8 *)(struct anonymous_w2c_8 *)((_UINT8 *)(input) + 624U));
  }
  printf(" YUV Format                        : %s \n", (_INT8 *)(yuv_types) + (*(((_INT32 *)(img) + 16384LL) + 1791LL) * 10U));
  printf(" Frames to be encoded I-P/B        : %d/%d\n", (input) -> no_frames, (input) -> successive_Bframe * ((input) -> no_frames + -1));
  printf(" PicInterlace / MbInterlace        : %d/%d\n", (input) -> PicInterlace, (input) -> MbInterlace);
  printf(" Transform8x8Mode                  : %d\n", (input) -> AllowTransform8x8);
  printf("-------------------------------------------------------------------------------\n");
  printf("  Frame  Bit/pic WP QP   SnrY    SnrU    SnrV    Time(ms) MET(ms) Frm/Fld   I D\n");
  printf("-------------------------------------------------------------------------------\n");
  return;
} /* information_init */


extern _INT32 init_orig_buffers()
{
  
  register _INT32 __comma_preg;
  register _INT32 __comma_preg_w2c_0;
  register _UINT64 __comma_preg_w2c_1;
  register _UINT64 __comma_preg_w2c_2;
  register _INT32 __comma_preg_w2c_3;
  register _INT32 __comma_preg_w2c_4;
  _INT32 memory_size;
  
  __comma_preg = get_mem2Dpel(&imgY_org_frm, (img) -> height, (img) -> width);
  memory_size = __comma_preg;
  if(*(((_INT32 *)(img) + 16384LL) + 1791LL) != (_INT32)(0U))
  {
    __comma_preg_w2c_0 = get_mem3Dpel(&imgUV_org_frm, (_INT32) 2U, (img) -> height_cr, (img) -> width_cr);
    memory_size = memory_size + __comma_preg_w2c_0;
  }
  if((active_sps) -> frame_mbs_only_flag == 0U)
  {
    init_top_bot_planes(imgY_org_frm, (img) -> height, (img) -> width, &imgY_org_top, &imgY_org_bot);
    if(*(((_INT32 *)(img) + 16384LL) + 1791LL) != (_INT32)(0U))
    {
      __comma_preg_w2c_1 = (_UINT64)(_UINT64) calloc(2U, 8U);
      imgUV_org_top = (_UINT16 ***) __comma_preg_w2c_1;
      if((_UINT64)((_UINT16 ***) __comma_preg_w2c_1) == (_UINT64)(0U))
      {
        no_mem_exit("init_global_buffers: imgUV_org_top");
      }
      __comma_preg_w2c_2 = (_UINT64)(_UINT64) calloc(2U, 8U);
      imgUV_org_bot = (_UINT16 ***) __comma_preg_w2c_2;
      if((_UINT64)((_UINT16 ***) __comma_preg_w2c_2) == (_UINT64)(0U))
      {
        no_mem_exit("init_global_buffers: imgUV_org_bot");
      }
      __comma_preg_w2c_3 = init_top_bot_planes(*imgUV_org_frm, (img) -> height_cr, (img) -> width_cr, imgUV_org_top, imgUV_org_bot);
      memory_size = ((_INT32)((_UINT32) memory_size) + __comma_preg_w2c_3) + (_INT32)(32U);
      __comma_preg_w2c_4 = init_top_bot_planes(*(imgUV_org_frm + 1LL), (img) -> height_cr, (img) -> width_cr, imgUV_org_top + 1U, imgUV_org_bot + 1U);
      memory_size = memory_size + __comma_preg_w2c_4;
    }
  }
  return memory_size;
} /* init_orig_buffers */


extern _INT32 init_global_buffers()
{
  
  register _UINT64 __comma_preg;
  register _UINT64 __comma_preg_w2c_0;
  register _INT32 __comma_preg_w2c_1;
  register _INT32 __comma_preg_w2c_2;
  register _INT32 __comma_preg_w2c_3;
  register _INT32 __comma_preg_w2c_4;
  register _INT32 __comma_preg_w2c_5;
  register _INT32 __comma_preg_w2c_6;
  register _INT32 __comma_preg_w2c_7;
  register _INT32 __comma_preg_w2c_8;
  register _UINT64 __comma_preg_w2c_9;
  register _INT32 whiledo_var_preg;
  register _INT32 __comma_preg_w2c_10;
  register _INT32 __comma_preg_w2c_11;
  register _INT32 __comma_preg_w2c_12;
  register _INT32 __comma_preg_w2c_13;
  register _INT32 __comma_preg_w2c_14;
  register _INT32 __comma_preg_w2c_15;
  register _INT32 __comma_preg_w2c_16;
  register _INT32 __comma_preg_w2c_17;
  register _INT32 __comma_preg_w2c_18;
  register _INT32 __comma_preg_w2c_19;
  register _INT32 __comma_preg_w2c_20;
  _INT32 memory_size;
  
  __comma_preg = (_UINT64)(_UINT64) malloc((_UINT64)((img) -> max_num_references) * (_UINT64)(8U));
  last_P_no_frm = (_INT32 *) __comma_preg;
  if((_UINT64)((_INT32 *) __comma_preg) == (_UINT64)(0U))
  {
    no_mem_exit("init_global_buffers: last_P_no");
  }
  if((active_sps) -> frame_mbs_only_flag == 0U)
  {
    __comma_preg_w2c_0 = (_UINT64)(_UINT64) malloc((_UINT64)((img) -> max_num_references) * (_UINT64)(16U));
    last_P_no_fld = (_INT32 *) __comma_preg_w2c_0;
    if((_UINT64)((_INT32 *) __comma_preg_w2c_0) == (_UINT64)(0U))
    {
      no_mem_exit("init_global_buffers: last_P_no");
    }
  }
  __comma_preg_w2c_1 = init_orig_buffers();
  memory_size = __comma_preg_w2c_1;
  if((((input) -> WeightedPrediction != (_INT32)(0U)) || ((input) -> WeightedBiprediction != (_INT32)(0U))) || ((input) -> GenerateMultiplePPS != (_INT32)(0U)))
  {
    __comma_preg_w2c_2 = get_mem3Dint(&wp_weight, (_INT32) 6U, (_INT32) 15U, (_INT32) 3U);
    memory_size = memory_size + __comma_preg_w2c_2;
    __comma_preg_w2c_3 = get_mem3Dint(&wp_offset, (_INT32) 6U, (_INT32) 15U, (_INT32) 3U);
    memory_size = memory_size + __comma_preg_w2c_3;
    __comma_preg_w2c_4 = get_mem4Dint(&wbp_weight, (_INT32) 6U, (_INT32) 15U, (_INT32) 15U, (_INT32) 3U);
    memory_size = memory_size + __comma_preg_w2c_4;
  }
  if(((input) -> successive_Bframe != (_INT32)(0U)) || ((input) -> BRefPictures > (_INT32)(0U)))
  {
    __comma_preg_w2c_5 = get_mem3Dshort(&direct_ref_idx, (_INT32) 2U, (img) -> width / (_INT32)(4U), (img) -> height / (_INT32)(4U));
    memory_size = memory_size + __comma_preg_w2c_5;
    __comma_preg_w2c_6 = get_mem2Dshort(&direct_pdir, (img) -> width / (_INT32)(4U), (img) -> height / (_INT32)(4U));
    memory_size = memory_size + __comma_preg_w2c_6;
  }
  __comma_preg_w2c_7 = get_mem2Dint(&img4Y_tmp, (img) -> height + (_INT32)(8U), ((img) -> width * (_INT32)(4U)) + (_INT32)(32U));
  memory_size = memory_size + __comma_preg_w2c_7;
  if((input) -> rdopt == (_INT32)(2U))
  {
    __comma_preg_w2c_8 = get_mem2Dint((_INT32 ***) decs, (_INT32) 16U, (_INT32) 16U);
    memory_size = memory_size + __comma_preg_w2c_8;
    __comma_preg_w2c_9 = (_UINT64)(_UINT64) calloc((_UINT64)(input) -> NoOfDecoders, 8U);
    (decs) -> decref = (_UINT16 ****) __comma_preg_w2c_9;
    if((_UINT64)((decs) -> decref) == (_UINT64)(0U))
    {
      no_mem_exit("init_global_buffers: decref");
    }
    whiledo_var_preg = 0U;
    _10242 :;
    while((input) -> NoOfDecoders > whiledo_var_preg)
    {
      _514 :;
      __comma_preg_w2c_10 = get_mem3Dpel((decs) -> decref + (_INT64)(whiledo_var_preg), (img) -> max_num_references + (_INT32)(1U), (img) -> height, (img) -> width);
      memory_size = memory_size + __comma_preg_w2c_10;
      _12034 :;
      whiledo_var_preg = whiledo_var_preg + (_INT32)(1U);
    }
    _770 :;
    __comma_preg_w2c_11 = get_mem2Dpel((_UINT16 ***)(struct anonymous_w2c_143 *)((_UINT8 *)(decs) + 32U), (_INT32) 4U, (_INT32) 4U);
    memory_size = memory_size + __comma_preg_w2c_11;
    __comma_preg_w2c_12 = get_mem3Dpel((_UINT16 ****)(struct anonymous_w2c_143 *)((_UINT8 *)(decs) + 8U), (input) -> NoOfDecoders, (img) -> height, (img) -> width);
    memory_size = memory_size + __comma_preg_w2c_12;
    __comma_preg_w2c_13 = get_mem3Dpel((_UINT16 ****)(struct anonymous_w2c_143 *)((_UINT8 *)(decs) + 24U), (input) -> NoOfDecoders, (img) -> height, (img) -> width);
    memory_size = memory_size + __comma_preg_w2c_13;
    __comma_preg_w2c_14 = get_mem2D((_UINT8 ***)(struct anonymous_w2c_143 *)((_UINT8 *)(decs) + 40U), (img) -> height / (_INT32)(16U), (img) -> width / (_INT32)(16U));
    memory_size = memory_size + __comma_preg_w2c_14;
    __comma_preg_w2c_15 = get_mem2D((_UINT8 ***)(struct anonymous_w2c_143 *)((_UINT8 *)(decs) + 48U), (img) -> width / (_INT32)(16U), (img) -> height / (_INT32)(16U));
    memory_size = memory_size + __comma_preg_w2c_15;
  }
  if((input) -> RestrictRef != (_INT32)(0U))
  {
    __comma_preg_w2c_16 = get_mem2D(&pixel_map, (img) -> height, (img) -> width);
    memory_size = memory_size + __comma_preg_w2c_16;
    __comma_preg_w2c_17 = get_mem2D(&refresh_map, (img) -> height / (_INT32)(8U), (img) -> width / (_INT32)(8U));
    memory_size = memory_size + __comma_preg_w2c_17;
  }
  if((active_sps) -> frame_mbs_only_flag == 0U)
  {
    __comma_preg_w2c_18 = get_mem2Dpel(&imgY_com, (img) -> height, (img) -> width);
    memory_size = memory_size + __comma_preg_w2c_18;
    if(*(((_INT32 *)(img) + 16384LL) + 1791LL) != (_INT32)(0U))
    {
      __comma_preg_w2c_19 = get_mem3Dpel(&imgUV_com, (_INT32) 2U, (img) -> height_cr, (img) -> width_cr);
      memory_size = memory_size + __comma_preg_w2c_19;
    }
  }
  if((input) -> FMEnable != (_INT32)(0U))
  {
    __comma_preg_w2c_20 = get_mem_FME();
    memory_size = memory_size + __comma_preg_w2c_20;
  }
  if((input) -> RCEnable != (_INT32)(0U))
  {
    rc_alloc();
  }
  return memory_size;
} /* init_global_buffers */


extern void free_orig_planes()
{
  
  
  free_mem2Dpel(imgY_org_frm);
  if(*(((_INT32 *)(img) + 16384LL) + 1791LL) != (_INT32)(0U))
  {
    free_mem3Dpel(imgUV_org_frm, (_INT32) 2U);
  }
  if((active_sps) -> frame_mbs_only_flag == 0U)
  {
    free_top_bot_planes(imgY_org_top, imgY_org_bot);
    if(*(((_INT32 *)(img) + 16384LL) + 1791LL) != (_INT32)(0U))
    {
      free_top_bot_planes(*imgUV_org_top, *imgUV_org_bot);
      free_top_bot_planes(*(imgUV_org_top + 1LL), *(imgUV_org_bot + 1LL));
      free(imgUV_org_top);
      free(imgUV_org_bot);
    }
  }
  return;
} /* free_orig_planes */


extern void free_global_buffers()
{
  
  register _INT32 whiledo_var_preg;
  register _INT32 i_preg;
  
  free(last_P_no_frm);
  free(last_P_no_fld);
  free_orig_planes();
  if((((input) -> WeightedPrediction != (_INT32)(0U)) || ((input) -> WeightedBiprediction != (_INT32)(0U))) || ((input) -> GenerateMultiplePPS != (_INT32)(0U)))
  {
    free_mem3Dint(wp_weight, (_INT32) 6U);
    free_mem3Dint(wp_offset, (_INT32) 6U);
    free_mem4Dint(wbp_weight, (_INT32) 6U, (_INT32) 15U);
  }
  if(((input) -> successive_Bframe != (_INT32)(0U)) || ((input) -> BRefPictures > (_INT32)(0U)))
  {
    free_mem3Dshort(direct_ref_idx, (_INT32) 2U);
    free_mem2Dshort(direct_pdir);
  }
  free_mem2Dint(img4Y_tmp);
  free_mem2Dint((img) -> ipredmode);
  free_mem2Dint((img) -> ipredmode8x8);
  free((img) -> mb_data);
  free_mem2Dint((rddata_top_frame_mb).ipredmode);
  if((input) -> UseConstrainedIntraPred != (_INT32)(0U))
  {
    free(*(((_INT32 **)(img) + 8192LL) + 781LL));
  }
  if((input) -> rdopt == (_INT32)(2U))
  {
    free(*(decs) -> resY);
    free((decs) -> resY);
    free(*(decs) -> RefBlock);
    free((decs) -> RefBlock);
    whiledo_var_preg = 0U;
    _9218 :;
    while((input) -> NoOfDecoders > whiledo_var_preg)
    {
      _514 :;
      free(** ((decs) -> decY + (_INT64)(whiledo_var_preg)));
      free(*((decs) -> decY + (_INT64)(whiledo_var_preg)));
      free(** ((decs) -> decY_best + (_INT64)(whiledo_var_preg)));
      free(*((decs) -> decY_best + (_INT64)(whiledo_var_preg)));
      i_preg = 0U;
      _9730 :;
      while(i_preg < ((img) -> max_num_references + (_INT32)(1U)))
      {
        _1026 :;
        free(** (*((decs) -> decref + (_INT64)(whiledo_var_preg)) + (_INT64)(i_preg)));
        free(*(*((decs) -> decref + (_INT64)(whiledo_var_preg)) + (_INT64)(i_preg)));
        _11522 :;
        i_preg = i_preg + (_INT32)(1U);
      }
      _1282 :;
      free(*((decs) -> decref + (_INT64)(whiledo_var_preg)));
      _11778 :;
      whiledo_var_preg = whiledo_var_preg + (_INT32)(1U);
    }
    _1538 :;
    free((decs) -> decY);
    free((decs) -> decY_best);
    free((decs) -> decref);
    free(*(decs) -> status_map);
    free((decs) -> status_map);
    free(*(decs) -> dec_mb_mode);
    free((decs) -> dec_mb_mode);
  }
  if((input) -> RestrictRef != (_INT32)(0U))
  {
    free(*pixel_map);
    free(pixel_map);
    free(*refresh_map);
    free(refresh_map);
  }
  if((active_sps) -> frame_mbs_only_flag == 0U)
  {
    free_mem2Dpel(imgY_com);
    if(*(((_INT32 *)(img) + 16384LL) + 1791LL) != (_INT32)(0U))
    {
      free_mem3Dpel(imgUV_com, (_INT32) 2U);
    }
  }
  free_mem3Dint((img) -> nz_coeff, (_INT32) * (((_UINT32 *)(img) + 16384LL) + 1738LL));
  if((input) -> FMEnable != (_INT32)(0U))
  {
    free_mem_FME();
  }
  if((input) -> RCEnable != (_INT32)(0U))
  {
    rc_free();
  }
  return;
} /* free_global_buffers */


extern _INT32 get_mem_mv(
  _INT16 ******* mv)
{
  
  register _UINT64 __comma_preg;
  register _INT32 i_preg;
  register _UINT64 __comma_preg_w2c_0;
  register _INT32 j_preg;
  register _UINT64 __comma_preg_w2c_1;
  register _INT32 k_preg;
  register _UINT64 __comma_preg_w2c_2;
  register _INT32 whiledo_var_preg;
  register _UINT64 __comma_preg_w2c_3;
  register _INT32 m_preg;
  register _UINT64 __comma_preg_w2c_4;
  
  __comma_preg = (_UINT64)(_UINT64) calloc(4U, 8U);
  * mv = (_INT16 ******) __comma_preg;
  if((_UINT64)((_INT16 ******) __comma_preg) == (_UINT64)(0U))
  {
    no_mem_exit("get_mem_mv: mv");
  }
  for(i_preg = 0U; i_preg <= (_INT32)(3U); i_preg = i_preg + (_INT32)(1U))
  {
    __comma_preg_w2c_0 = (_UINT64)(_UINT64) calloc(4U, 8U);
    ((mv)[0])[(_INT64)(i_preg)] = (_INT16 *****) __comma_preg_w2c_0;
    if((_UINT64)(((mv)[0])[(_INT64)(i_preg)]) == (_UINT64)(0U))
    {
      no_mem_exit("get_mem_mv: mv");
    }
    for(j_preg = 0U; j_preg <= (_INT32)(3U); j_preg = j_preg + (_INT32)(1U))
    {
      __comma_preg_w2c_1 = (_UINT64)(_UINT64) calloc(2U, 8U);
      * (((mv)[0])[(_INT64)(i_preg)] + (_INT64)(j_preg)) = (_INT16 ****) __comma_preg_w2c_1;
      if((_UINT64)(*(((mv)[0])[(_INT64)(i_preg)] + (_INT64)(j_preg))) == (_UINT64)(0U))
      {
        no_mem_exit("get_mem_mv: mv");
      }
      for(k_preg = 0U; k_preg <= (_INT32)(1U); k_preg = k_preg + (_INT32)(1U))
      {
        __comma_preg_w2c_2 = (_UINT64)(_UINT64) calloc((_UINT64)((img)[9LL]).number, 8U);
        * (*(((mv)[0])[(_INT64)(i_preg)] + (_INT64)(j_preg)) + (_INT64)(k_preg)) = (_INT16 ***) __comma_preg_w2c_2;
        if((_UINT64)(*(*(((mv)[0])[(_INT64)(i_preg)] + (_INT64)(j_preg)) + (_INT64)(k_preg))) == (_UINT64)(0U))
        {
          no_mem_exit("get_mem_mv: mv");
        }
        whiledo_var_preg = 0U;
        while(((img)[9LL]).number > whiledo_var_preg)
        {
          __comma_preg_w2c_3 = (_UINT64)(_UINT64) calloc(9U, 8U);
          * (*(*(((mv)[0])[(_INT64)(i_preg)] + (_INT64)(j_preg)) + (_INT64)(k_preg)) + (_INT64)(whiledo_var_preg)) = (_INT16 **) __comma_preg_w2c_3;
          if((_UINT64)(*(*(*(((mv)[0])[(_INT64)(i_preg)] + (_INT64)(j_preg)) + (_INT64)(k_preg)) + (_INT64)(whiledo_var_preg))) == (_UINT64)(0U))
          {
            no_mem_exit("get_mem_mv: mv");
          }
          for(m_preg = 0U; m_preg <= (_INT32)(8U); m_preg = m_preg + (_INT32)(1U))
          {
            __comma_preg_w2c_4 = (_UINT64)(_UINT64) calloc(2U, 2U);
            * (*(*(*(((mv)[0])[(_INT64)(i_preg)] + (_INT64)(j_preg)) + (_INT64)(k_preg)) + (_INT64)(whiledo_var_preg)) + (_INT64)(m_preg)) = (_INT16 *) __comma_preg_w2c_4;
            if((_UINT64)(*(*(*(*(((mv)[0])[(_INT64)(i_preg)] + (_INT64)(j_preg)) + (_INT64)(k_preg)) + (_INT64)(whiledo_var_preg)) + (_INT64)(m_preg))) == (_UINT64)(0U))
            {
              no_mem_exit("get_mem_mv: mv");
            }
          }
          whiledo_var_preg = whiledo_var_preg + (_INT32)(1U);
        }
      }
    }
  }
  return(_INT32)((_UINT64)((img) -> max_num_references) * (_UINT64)(576U));
} /* get_mem_mv */

