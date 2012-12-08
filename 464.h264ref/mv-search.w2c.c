/*******************************************************
 * C file translated from WHIRL Sat Dec  8 15:03:08 2012
 *******************************************************/

/* Include file-level type and variable decls */
#include "mv-search.w2c.h"


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


extern void InitializeFastFullIntegerSearch()
{
  
  register _UINT64 __comma_preg;
  register _INT32 list_preg;
  register _UINT64 __comma_preg_w2c_0;
  register _INT32 whiledo_var_preg;
  register _UINT64 __comma_preg_w2c_1;
  register _INT32 j_preg;
  register _UINT64 __comma_preg_w2c_2;
  register _INT32 k_preg;
  register _UINT64 __comma_preg_w2c_3;
  register _UINT64 __comma_preg_w2c_4;
  register _UINT64 __comma_preg_w2c_5;
  register _UINT64 __comma_preg_w2c_6;
  register _UINT64 __comma_preg_w2c_7;
  register _UINT64 __comma_preg_w2c_8;
  register _INT32 list_preg_w2c_0;
  register _UINT64 __comma_preg_w2c_9;
  register _UINT64 __comma_preg_w2c_10;
  register _UINT64 __comma_preg_w2c_11;
  register _UINT64 __comma_preg_w2c_12;
  register _UINT64 __comma_preg_w2c_13;
  register _INT32 list_preg_w2c_1;
  register _INT32 whiledo_var_preg_w2c_0;
  register _INT32 list_preg_w2c_2;
  register _INT32 whiledo_var_preg_w2c_1;
  _INT32 search_range;
  
  search_range = (input) -> search_range;
  __comma_preg = (_UINT64)(_UINT64) malloc(16U);
  BlockSAD = (_INT32 *****) __comma_preg;
  if((_UINT64)((_INT32 *****) __comma_preg) == (_UINT64)(0U))
  {
    no_mem_exit("InitializeFastFullIntegerSearch: BlockSAD");
  }
  for(list_preg = 0U; list_preg <= (_INT32)(1U); list_preg = list_preg + (_INT32)(1U))
  {
    __comma_preg_w2c_0 = (_UINT64)(_UINT64) malloc(((_UINT64)(((img)[9LL]).number) * (_UINT64)(8U)) + (_UINT64)(8U));
    (BlockSAD)[(_INT64)(list_preg)] = (_INT32 ****) __comma_preg_w2c_0;
    if((_UINT64)((_INT32 ****) __comma_preg_w2c_0) == (_UINT64)(0U))
    {
      no_mem_exit("InitializeFastFullIntegerSearch: BlockSAD");
    }
    whiledo_var_preg = 0U;
    while(((img)[9LL]).number >= whiledo_var_preg)
    {
      __comma_preg_w2c_1 = (_UINT64)(_UINT64) malloc(64U);
      * ((BlockSAD)[(_INT64)(list_preg)] + (_INT64)(whiledo_var_preg)) = (_INT32 ***) __comma_preg_w2c_1;
      if((_UINT64)(*((BlockSAD)[(_INT64)(list_preg)] + (_INT64)(whiledo_var_preg))) == (_UINT64)(0U))
      {
        no_mem_exit("InitializeFastFullIntegerSearch: BlockSAD");
      }
      for(j_preg = 0U; j_preg <= 6; j_preg = j_preg + (_INT32)(1U))
      {
        __comma_preg_w2c_2 = (_UINT64)(_UINT64) malloc(128U);
        * ((*((BlockSAD)[(_INT64)(list_preg)] + (_INT64)(whiledo_var_preg)) + (_INT64)(j_preg)) + 1LL) = (_INT32 **) __comma_preg_w2c_2;
        if((_UINT64)(*((*((BlockSAD)[(_INT64)(list_preg)] + (_INT64)(whiledo_var_preg)) + (_INT64)(j_preg)) + 1LL)) == (_UINT64)(0U))
        {
          no_mem_exit("InitializeFastFullIntegerSearch: BlockSAD");
        }
        for(k_preg = 0U; k_preg <= (_INT32)(15U); k_preg = k_preg + (_INT32)(1U))
        {
          __comma_preg_w2c_3 = (_UINT64)(_UINT64) malloc((_UINT64)((_INT64)(((search_range * (_INT32)(2U)) + (_INT32)(1U)) * ((search_range * (_INT32)(2U)) + (_INT32)(1U)))) * (_UINT64)(4U));
          * (*((*((BlockSAD)[(_INT64)(list_preg)] + (_INT64)(whiledo_var_preg)) + (_INT64)(j_preg)) + 1LL) + (_INT64)(k_preg)) = (_INT32 *) __comma_preg_w2c_3;
          if((_UINT64)(*(*((*((BlockSAD)[(_INT64)(list_preg)] + (_INT64)(whiledo_var_preg)) + (_INT64)(j_preg)) + 1LL) + (_INT64)(k_preg))) == (_UINT64)(0U))
          {
            no_mem_exit("InitializeFastFullIntegerSearch: BlockSAD");
          }
        }
      }
      whiledo_var_preg = whiledo_var_preg + (_INT32)(1U);
    }
  }
  __comma_preg_w2c_4 = (_UINT64)(_UINT64) malloc(16U);
  search_setup_done = (_INT32 **) __comma_preg_w2c_4;
  if((_UINT64)((_INT32 **) __comma_preg_w2c_4) == (_UINT64)(0U))
  {
    no_mem_exit("InitializeFastFullIntegerSearch: search_setup_done");
  }
  __comma_preg_w2c_5 = (_UINT64)(_UINT64) malloc(16U);
  search_center_x = (_INT32 **) __comma_preg_w2c_5;
  if((_UINT64)((_INT32 **) __comma_preg_w2c_5) == (_UINT64)(0U))
  {
    no_mem_exit("InitializeFastFullIntegerSearch: search_center_x");
  }
  __comma_preg_w2c_6 = (_UINT64)(_UINT64) malloc(16U);
  search_center_y = (_INT32 **) __comma_preg_w2c_6;
  if((_UINT64)((_INT32 **) __comma_preg_w2c_6) == (_UINT64)(0U))
  {
    no_mem_exit("InitializeFastFullIntegerSearch: search_center_y");
  }
  __comma_preg_w2c_7 = (_UINT64)(_UINT64) malloc(16U);
  pos_00 = (_INT32 **) __comma_preg_w2c_7;
  if((_UINT64)((_INT32 **) __comma_preg_w2c_7) == (_UINT64)(0U))
  {
    no_mem_exit("InitializeFastFullIntegerSearch: pos_00");
  }
  __comma_preg_w2c_8 = (_UINT64)(_UINT64) malloc(16U);
  max_search_range = (_INT32 **) __comma_preg_w2c_8;
  if((_UINT64)((_INT32 **) __comma_preg_w2c_8) == (_UINT64)(0U))
  {
    no_mem_exit("InitializeFastFullIntegerSearch: max_search_range");
  }
  for(list_preg_w2c_0 = 0U; list_preg_w2c_0 <= (_INT32)(1U); list_preg_w2c_0 = list_preg_w2c_0 + (_INT32)(1U))
  {
    __comma_preg_w2c_9 = (_UINT64)(_UINT64) malloc(((_UINT64)(((img)[9LL]).number) * (_UINT64)(4U)) + (_UINT64)(4U));
    (search_setup_done)[(_INT64)(list_preg_w2c_0)] = (_INT32 *) __comma_preg_w2c_9;
    if((_UINT64)((_INT32 *) __comma_preg_w2c_9) == (_UINT64)(0U))
    {
      no_mem_exit("InitializeFastFullIntegerSearch: search_setup_done");
    }
    __comma_preg_w2c_10 = (_UINT64)(_UINT64) malloc(((_UINT64)(((img)[9LL]).number) * (_UINT64)(4U)) + (_UINT64)(4U));
    (search_center_x)[(_INT64)(list_preg_w2c_0)] = (_INT32 *) __comma_preg_w2c_10;
    if((_UINT64)((_INT32 *) __comma_preg_w2c_10) == (_UINT64)(0U))
    {
      no_mem_exit("InitializeFastFullIntegerSearch: search_center_x");
    }
    __comma_preg_w2c_11 = (_UINT64)(_UINT64) malloc(((_UINT64)(((img)[9LL]).number) * (_UINT64)(4U)) + (_UINT64)(4U));
    (search_center_y)[(_INT64)(list_preg_w2c_0)] = (_INT32 *) __comma_preg_w2c_11;
    if((_UINT64)((_INT32 *) __comma_preg_w2c_11) == (_UINT64)(0U))
    {
      no_mem_exit("InitializeFastFullIntegerSearch: search_center_y");
    }
    __comma_preg_w2c_12 = (_UINT64)(_UINT64) malloc(((_UINT64)(((img)[9LL]).number) * (_UINT64)(4U)) + (_UINT64)(4U));
    (pos_00)[(_INT64)(list_preg_w2c_0)] = (_INT32 *) __comma_preg_w2c_12;
    if((_UINT64)((_INT32 *) __comma_preg_w2c_12) == (_UINT64)(0U))
    {
      no_mem_exit("InitializeFastFullIntegerSearch: pos_00");
    }
    __comma_preg_w2c_13 = (_UINT64)(_UINT64) malloc(((_UINT64)(((img)[9LL]).number) * (_UINT64)(4U)) + (_UINT64)(4U));
    (max_search_range)[(_INT64)(list_preg_w2c_0)] = (_INT32 *) __comma_preg_w2c_13;
    if((_UINT64)((_INT32 *) __comma_preg_w2c_13) == (_UINT64)(0U))
    {
      no_mem_exit("InitializeFastFullIntegerSearch: max_search_range");
    }
  }
  if((input) -> full_search == (_INT32)(2U))
  {
    for(list_preg_w2c_1 = 0U; list_preg_w2c_1 <= (_INT32)(1U); list_preg_w2c_1 = list_preg_w2c_1 + (_INT32)(1U))
    {
      whiledo_var_preg_w2c_0 = 0U;
      while(((img)[9LL]).number >= whiledo_var_preg_w2c_0)
      {
        * ((max_search_range)[(_INT64)(list_preg_w2c_1)] + (_INT64)(whiledo_var_preg_w2c_0)) = search_range;
        whiledo_var_preg_w2c_0 = whiledo_var_preg_w2c_0 + (_INT32)(1U);
      }
    }
  }
  else
  {
    for(list_preg_w2c_2 = 0U; list_preg_w2c_2 <= (_INT32)(1U); list_preg_w2c_2 = list_preg_w2c_2 + (_INT32)(1U))
    {
      * ((max_search_range)[(_INT64)(list_preg_w2c_2)] + ((img)[9LL]).number) = search_range;
      * (max_search_range)[(_INT64)(list_preg_w2c_2)] = *((max_search_range)[(_INT64)(list_preg_w2c_2)] + ((img)[9LL]).number);
      whiledo_var_preg_w2c_1 = 0U;
      while(((img)[9LL]).number > (whiledo_var_preg_w2c_1 + (_INT32)(1U)))
      {
        * (((max_search_range)[(_INT64)(list_preg_w2c_2)] + (_INT64)(whiledo_var_preg_w2c_1)) + 1LL) = search_range / (_INT32)(2U);
        whiledo_var_preg_w2c_1 = whiledo_var_preg_w2c_1 + (_INT32)(1U);
      }
    }
  }
  return;
} /* InitializeFastFullIntegerSearch */


extern void ClearFastFullIntegerSearch()
{
  
  register _INT32 list_preg;
  register _INT32 whiledo_var_preg;
  register _INT32 j_preg;
  register _INT32 k_preg;
  register _INT32 list_preg_w2c_0;
  
  for(list_preg = 0U; list_preg <= (_INT32)(1U); list_preg = list_preg + (_INT32)(1U))
  {
    whiledo_var_preg = 0U;
    while(((img)[9LL]).number >= whiledo_var_preg)
    {
      for(j_preg = 0U; j_preg <= 6; j_preg = j_preg + (_INT32)(1U))
      {
        for(k_preg = 0U; k_preg <= (_INT32)(15U); k_preg = k_preg + (_INT32)(1U))
        {
          free(*(*((*((BlockSAD)[(_INT64)(list_preg)] + (_INT64)(whiledo_var_preg)) + (_INT64)(j_preg)) + 1LL) + (_INT64)(k_preg)));
        }
        free(*((*((BlockSAD)[(_INT64)(list_preg)] + (_INT64)(whiledo_var_preg)) + (_INT64)(j_preg)) + 1LL));
      }
      free(*((BlockSAD)[(_INT64)(list_preg)] + (_INT64)(whiledo_var_preg)));
      whiledo_var_preg = whiledo_var_preg + (_INT32)(1U);
    }
    free((BlockSAD)[(_INT64)(list_preg)]);
  }
  free(BlockSAD);
  for(list_preg_w2c_0 = 0U; list_preg_w2c_0 <= (_INT32)(1U); list_preg_w2c_0 = list_preg_w2c_0 + (_INT32)(1U))
  {
    free((search_setup_done)[(_INT64)(list_preg_w2c_0)]);
    free((search_center_x)[(_INT64)(list_preg_w2c_0)]);
    free((search_center_y)[(_INT64)(list_preg_w2c_0)]);
    free((pos_00)[(_INT64)(list_preg_w2c_0)]);
    free((max_search_range)[(_INT64)(list_preg_w2c_0)]);
  }
  free(search_setup_done);
  free(search_center_x);
  free(search_center_y);
  free(pos_00);
  free(max_search_range);
  return;
} /* ClearFastFullIntegerSearch */


extern void ResetFastFullIntegerSearch()
{
  
  register _INT32 list_preg;
  register _INT32 whiledo_var_preg;
  
  for(list_preg = 0U; list_preg <= (_INT32)(1U); list_preg = list_preg + (_INT32)(1U))
  {
    whiledo_var_preg = 0U;
    while(((img)[9LL]).number >= whiledo_var_preg)
    {
      * ((search_setup_done)[(_INT64)(list_preg)] + (_INT64)(whiledo_var_preg)) = 0U;
      whiledo_var_preg = whiledo_var_preg + (_INT32)(1U);
    }
  }
  return;
} /* ResetFastFullIntegerSearch */


extern void SetupLargerBlocks(
  _INT32 list,
  _INT32 refindex,
  _INT32 max_pos)
{
  
  register _INT32 pos_preg_w2c_0;
  register _INT32 pos_preg_w2c_1;
  register _INT32 pos_preg_w2c_2;
  register _INT32 pos_preg_w2c_3;
  register _INT32 pos_preg_w2c_4;
  register _INT32 pos_preg_w2c_5;
  register _INT32 pos_preg_w2c_6;
  register _INT32 pos_preg_w2c_7;
  register _INT32 pos_preg_w2c_8;
  register _INT32 pos_preg_w2c_9;
  register _INT32 pos_preg_w2c_10;
  register _INT32 pos_preg_w2c_11;
  register _INT32 pos_preg_w2c_12;
  register _INT32 pos_preg_w2c_13;
  register _INT32 pos_preg_w2c_14;
  register _INT32 pos_preg_w2c_15;
  register _INT32 pos_preg_w2c_16;
  register _INT32 pos_preg_w2c_17;
  register _INT32 pos_preg_w2c_18;
  register _INT32 pos_preg_w2c_19;
  register _INT32 pos_preg_w2c_20;
  register _INT32 pos_preg_w2c_21;
  register _INT32 pos_preg_w2c_22;
  register _INT32 pos_preg_w2c_23;
  register _INT32 pos_preg;
  _INT32 ** _bo;
  _INT32 ** _bi;
  _INT32 * _o;
  _INT32 * _i;
  _INT32 * _j;
  
  _bo = *(*(*(BlockSAD + (_UINT64) list) + (_UINT64) refindex) + 6LL);
  _bi = *(*(*(BlockSAD + (_UINT64) list) + (_UINT64) refindex) + 7LL);
  _o = *_bo;
  _i = *_bi;
  _j = *(_bi + 4LL);
  for(pos_preg_w2c_0 = 0U; pos_preg_w2c_0 <= (max_pos + -1); pos_preg_w2c_0 = pos_preg_w2c_0 + (_INT32)(1U))
  {
    (_o)[(_INT64)(pos_preg_w2c_0)] = (_i)[(_INT64)(pos_preg_w2c_0)] + (_j)[(_INT64)(pos_preg_w2c_0)];
  }
  _o = *(_bo + 1LL);
  _i = *(_bi + 1LL);
  _j = *(_bi + 5LL);
  for(pos_preg_w2c_1 = 0U; pos_preg_w2c_1 <= (max_pos + -1); pos_preg_w2c_1 = pos_preg_w2c_1 + (_INT32)(1U))
  {
    (_o)[(_INT64)(pos_preg_w2c_1)] = (_i)[(_INT64)(pos_preg_w2c_1)] + (_j)[(_INT64)(pos_preg_w2c_1)];
  }
  _o = *(_bo + 2LL);
  _i = *(_bi + 2LL);
  _j = *(_bi + 6LL);
  for(pos_preg_w2c_2 = 0U; pos_preg_w2c_2 <= (max_pos + -1); pos_preg_w2c_2 = pos_preg_w2c_2 + (_INT32)(1U))
  {
    (_o)[(_INT64)(pos_preg_w2c_2)] = (_i)[(_INT64)(pos_preg_w2c_2)] + (_j)[(_INT64)(pos_preg_w2c_2)];
  }
  _o = *(_bo + 3LL);
  _i = *(_bi + 3LL);
  _j = *(_bi + 7LL);
  for(pos_preg_w2c_3 = 0U; pos_preg_w2c_3 <= (max_pos + -1); pos_preg_w2c_3 = pos_preg_w2c_3 + (_INT32)(1U))
  {
    (_o)[(_INT64)(pos_preg_w2c_3)] = (_i)[(_INT64)(pos_preg_w2c_3)] + (_j)[(_INT64)(pos_preg_w2c_3)];
  }
  _o = *(_bo + 8LL);
  _i = *(_bi + 8LL);
  _j = *(_bi + 12LL);
  for(pos_preg_w2c_4 = 0U; pos_preg_w2c_4 <= (max_pos + -1); pos_preg_w2c_4 = pos_preg_w2c_4 + (_INT32)(1U))
  {
    (_o)[(_INT64)(pos_preg_w2c_4)] = (_i)[(_INT64)(pos_preg_w2c_4)] + (_j)[(_INT64)(pos_preg_w2c_4)];
  }
  _o = *(_bo + 9LL);
  _i = *(_bi + 9LL);
  _j = *(_bi + 13LL);
  for(pos_preg_w2c_5 = 0U; pos_preg_w2c_5 <= (max_pos + -1); pos_preg_w2c_5 = pos_preg_w2c_5 + (_INT32)(1U))
  {
    (_o)[(_INT64)(pos_preg_w2c_5)] = (_i)[(_INT64)(pos_preg_w2c_5)] + (_j)[(_INT64)(pos_preg_w2c_5)];
  }
  _o = *(_bo + 10LL);
  _i = *(_bi + 10LL);
  _j = *(_bi + 14LL);
  for(pos_preg_w2c_6 = 0U; pos_preg_w2c_6 <= (max_pos + -1); pos_preg_w2c_6 = pos_preg_w2c_6 + (_INT32)(1U))
  {
    (_o)[(_INT64)(pos_preg_w2c_6)] = (_i)[(_INT64)(pos_preg_w2c_6)] + (_j)[(_INT64)(pos_preg_w2c_6)];
  }
  _o = *(_bo + 11LL);
  _i = *(_bi + 11LL);
  _j = *(_bi + 15LL);
  for(pos_preg_w2c_7 = 0U; pos_preg_w2c_7 <= (max_pos + -1); pos_preg_w2c_7 = pos_preg_w2c_7 + (_INT32)(1U))
  {
    (_o)[(_INT64)(pos_preg_w2c_7)] = (_i)[(_INT64)(pos_preg_w2c_7)] + (_j)[(_INT64)(pos_preg_w2c_7)];
  }
  _bo = *(*(*(BlockSAD + (_UINT64) list) + (_UINT64) refindex) + 5LL);
  _bi = *(*(*(BlockSAD + (_UINT64) list) + (_UINT64) refindex) + 7LL);
  _o = *_bo;
  _i = *_bi;
  _j = *(_bi + 1LL);
  for(pos_preg_w2c_8 = 0U; pos_preg_w2c_8 <= (max_pos + -1); pos_preg_w2c_8 = pos_preg_w2c_8 + (_INT32)(1U))
  {
    (_o)[(_INT64)(pos_preg_w2c_8)] = (_i)[(_INT64)(pos_preg_w2c_8)] + (_j)[(_INT64)(pos_preg_w2c_8)];
  }
  _o = *(_bo + 2LL);
  _i = *(_bi + 2LL);
  _j = *(_bi + 3LL);
  for(pos_preg_w2c_9 = 0U; pos_preg_w2c_9 <= (max_pos + -1); pos_preg_w2c_9 = pos_preg_w2c_9 + (_INT32)(1U))
  {
    (_o)[(_INT64)(pos_preg_w2c_9)] = (_i)[(_INT64)(pos_preg_w2c_9)] + (_j)[(_INT64)(pos_preg_w2c_9)];
  }
  _o = *(_bo + 4LL);
  _i = *(_bi + 4LL);
  _j = *(_bi + 5LL);
  for(pos_preg_w2c_10 = 0U; pos_preg_w2c_10 <= (max_pos + -1); pos_preg_w2c_10 = pos_preg_w2c_10 + (_INT32)(1U))
  {
    (_o)[(_INT64)(pos_preg_w2c_10)] = (_i)[(_INT64)(pos_preg_w2c_10)] + (_j)[(_INT64)(pos_preg_w2c_10)];
  }
  _o = *(_bo + 6LL);
  _i = *(_bi + 6LL);
  _j = *(_bi + 7LL);
  for(pos_preg_w2c_11 = 0U; pos_preg_w2c_11 <= (max_pos + -1); pos_preg_w2c_11 = pos_preg_w2c_11 + (_INT32)(1U))
  {
    (_o)[(_INT64)(pos_preg_w2c_11)] = (_i)[(_INT64)(pos_preg_w2c_11)] + (_j)[(_INT64)(pos_preg_w2c_11)];
  }
  _o = *(_bo + 8LL);
  _i = *(_bi + 8LL);
  _j = *(_bi + 9LL);
  for(pos_preg_w2c_12 = 0U; pos_preg_w2c_12 <= (max_pos + -1); pos_preg_w2c_12 = pos_preg_w2c_12 + (_INT32)(1U))
  {
    (_o)[(_INT64)(pos_preg_w2c_12)] = (_i)[(_INT64)(pos_preg_w2c_12)] + (_j)[(_INT64)(pos_preg_w2c_12)];
  }
  _o = *(_bo + 10LL);
  _i = *(_bi + 10LL);
  _j = *(_bi + 11LL);
  for(pos_preg_w2c_13 = 0U; pos_preg_w2c_13 <= (max_pos + -1); pos_preg_w2c_13 = pos_preg_w2c_13 + (_INT32)(1U))
  {
    (_o)[(_INT64)(pos_preg_w2c_13)] = (_i)[(_INT64)(pos_preg_w2c_13)] + (_j)[(_INT64)(pos_preg_w2c_13)];
  }
  _o = *(_bo + 12LL);
  _i = *(_bi + 12LL);
  _j = *(_bi + 13LL);
  for(pos_preg_w2c_14 = 0U; pos_preg_w2c_14 <= (max_pos + -1); pos_preg_w2c_14 = pos_preg_w2c_14 + (_INT32)(1U))
  {
    (_o)[(_INT64)(pos_preg_w2c_14)] = (_i)[(_INT64)(pos_preg_w2c_14)] + (_j)[(_INT64)(pos_preg_w2c_14)];
  }
  _o = *(_bo + 14LL);
  _i = *(_bi + 14LL);
  _j = *(_bi + 15LL);
  for(pos_preg_w2c_15 = 0U; pos_preg_w2c_15 <= (max_pos + -1); pos_preg_w2c_15 = pos_preg_w2c_15 + (_INT32)(1U))
  {
    (_o)[(_INT64)(pos_preg_w2c_15)] = (_i)[(_INT64)(pos_preg_w2c_15)] + (_j)[(_INT64)(pos_preg_w2c_15)];
  }
  _bo = *(*(*(BlockSAD + (_UINT64) list) + (_UINT64) refindex) + 4LL);
  _bi = *(*(*(BlockSAD + (_UINT64) list) + (_UINT64) refindex) + 6LL);
  _o = *_bo;
  _i = *_bi;
  _j = *(_bi + 1LL);
  for(pos_preg_w2c_16 = 0U; pos_preg_w2c_16 <= (max_pos + -1); pos_preg_w2c_16 = pos_preg_w2c_16 + (_INT32)(1U))
  {
    (_o)[(_INT64)(pos_preg_w2c_16)] = (_i)[(_INT64)(pos_preg_w2c_16)] + (_j)[(_INT64)(pos_preg_w2c_16)];
  }
  _o = *(_bo + 2LL);
  _i = *(_bi + 2LL);
  _j = *(_bi + 3LL);
  for(pos_preg_w2c_17 = 0U; pos_preg_w2c_17 <= (max_pos + -1); pos_preg_w2c_17 = pos_preg_w2c_17 + (_INT32)(1U))
  {
    (_o)[(_INT64)(pos_preg_w2c_17)] = (_i)[(_INT64)(pos_preg_w2c_17)] + (_j)[(_INT64)(pos_preg_w2c_17)];
  }
  _o = *(_bo + 8LL);
  _i = *(_bi + 8LL);
  _j = *(_bi + 9LL);
  for(pos_preg_w2c_18 = 0U; pos_preg_w2c_18 <= (max_pos + -1); pos_preg_w2c_18 = pos_preg_w2c_18 + (_INT32)(1U))
  {
    (_o)[(_INT64)(pos_preg_w2c_18)] = (_i)[(_INT64)(pos_preg_w2c_18)] + (_j)[(_INT64)(pos_preg_w2c_18)];
  }
  _o = *(_bo + 10LL);
  _i = *(_bi + 10LL);
  _j = *(_bi + 11LL);
  for(pos_preg_w2c_19 = 0U; pos_preg_w2c_19 <= (max_pos + -1); pos_preg_w2c_19 = pos_preg_w2c_19 + (_INT32)(1U))
  {
    (_o)[(_INT64)(pos_preg_w2c_19)] = (_i)[(_INT64)(pos_preg_w2c_19)] + (_j)[(_INT64)(pos_preg_w2c_19)];
  }
  _bo = *(*(*(BlockSAD + (_UINT64) list) + (_UINT64) refindex) + 3LL);
  _bi = *(*(*(BlockSAD + (_UINT64) list) + (_UINT64) refindex) + 4LL);
  _o = *_bo;
  _i = *_bi;
  _j = *(_bi + 8LL);
  for(pos_preg_w2c_20 = 0U; pos_preg_w2c_20 <= (max_pos + -1); pos_preg_w2c_20 = pos_preg_w2c_20 + (_INT32)(1U))
  {
    (_o)[(_INT64)(pos_preg_w2c_20)] = (_i)[(_INT64)(pos_preg_w2c_20)] + (_j)[(_INT64)(pos_preg_w2c_20)];
  }
  _o = *(_bo + 2LL);
  _i = *(_bi + 2LL);
  _j = *(_bi + 10LL);
  for(pos_preg_w2c_21 = 0U; pos_preg_w2c_21 <= (max_pos + -1); pos_preg_w2c_21 = pos_preg_w2c_21 + (_INT32)(1U))
  {
    (_o)[(_INT64)(pos_preg_w2c_21)] = (_i)[(_INT64)(pos_preg_w2c_21)] + (_j)[(_INT64)(pos_preg_w2c_21)];
  }
  _bo = *(*(*(BlockSAD + (_UINT64) list) + (_UINT64) refindex) + 2LL);
  _bi = *(*(*(BlockSAD + (_UINT64) list) + (_UINT64) refindex) + 4LL);
  _o = *_bo;
  _i = *_bi;
  _j = *(_bi + 2LL);
  for(pos_preg_w2c_22 = 0U; pos_preg_w2c_22 <= (max_pos + -1); pos_preg_w2c_22 = pos_preg_w2c_22 + (_INT32)(1U))
  {
    (_o)[(_INT64)(pos_preg_w2c_22)] = (_i)[(_INT64)(pos_preg_w2c_22)] + (_j)[(_INT64)(pos_preg_w2c_22)];
  }
  _o = *(_bo + 8LL);
  _i = *(_bi + 8LL);
  _j = *(_bi + 10LL);
  for(pos_preg_w2c_23 = 0U; pos_preg_w2c_23 <= (max_pos + -1); pos_preg_w2c_23 = pos_preg_w2c_23 + (_INT32)(1U))
  {
    (_o)[(_INT64)(pos_preg_w2c_23)] = (_i)[(_INT64)(pos_preg_w2c_23)] + (_j)[(_INT64)(pos_preg_w2c_23)];
  }
  _bo = *(*(*(BlockSAD + (_UINT64) list) + (_UINT64) refindex) + 1LL);
  _bi = *(*(*(BlockSAD + (_UINT64) list) + (_UINT64) refindex) + 3LL);
  _o = *_bo;
  _i = *_bi;
  _j = *(_bi + 2LL);
  for(pos_preg = 0U; pos_preg <= (max_pos + -1); pos_preg = pos_preg + (_INT32)(1U))
  {
    (_o)[(_INT64)(pos_preg)] = (_i)[(_INT64)(pos_preg)] + (_j)[(_INT64)(pos_preg)];
  }
  return;
} /* SetupLargerBlocks */


extern void SetupFastFullPelSearch(
  _INT16 ref,
  _INT32 list)
{
  
  register _INT32 __cselect_preg;
  register _INT32 __cselect_preg_w2c_0;
  register _INT32 _ub0_preg;
  register _INT32 y_preg;
  register _INT32 _temp_2_preg;
  register _INT32 _ub1_preg;
  register _INT32 x_preg;
  register _INT32 pos_preg;
  register _INT32 _ub2_preg;
  register _INT32 pos_preg_w2c_0;
  register _INT32 blky_preg;
  register _INT32 y_preg_w2c_0;
  register _UINT64 __comma_preg;
  _INT16 pmv[2LL];
  _UINT16 orig_blocks[256LL];
  _UINT16 * orgptr;
  _INT32 offset_x;
  _INT32 offset_y;
  _INT32 x;
  _INT32 y;
  _INT32 range_partly_outside;
  _INT32 abs_x;
  _INT32 abs_y;
  _INT32 LineSadBlk0;
  _INT32 LineSadBlk_w2c_1;
  _INT32 LineSadBlk_w2c_2;
  _INT32 LineSadBlk_w2c_3;
  _INT32 max_width;
  _INT32 max_height;
  _INT32 img_width;
  _INT32 img_height;
  struct storable_picture * ref_picture;
  _UINT16 * ref_pic;
  _INT32 ** block_sad;
  _INT32 search_range;
  
  orgptr = orig_blocks;
  block_sad = *(*(*(BlockSAD + (_UINT64) list) + (_UINT64) ref) + 7LL);
  search_range = *(*(max_search_range + (_UINT64) list) + (_UINT64) ref);
  if((*(((_INT32 *)(img) + 16384LL) + 1716LL) != (_INT32)(0U)) && ((((img) -> mb_data + (img) -> current_mb_nr)) -> mb_field != (_INT32)(0U)))
  {
    if((img) -> current_mb_nr & (_INT32)(1U))
    {
      __cselect_preg = 4U;
    }
    else
    {
      __cselect_preg = 2U;
    }
    __cselect_preg_w2c_0 = __cselect_preg;
  }
  else
  {
    __cselect_preg_w2c_0 = 0U;
  }
  ref_picture = *((listX)[__cselect_preg_w2c_0 + (_INT32)((_UINT64) list)] + (_UINT64) ref);
  if((((((active_pps) -> weighted_pred_flag != 0U) && (((img) -> type == (_INT32)(0U)) || ((img) -> type == (_INT32)(3U)))) || (((active_pps) -> weighted_bipred_idc != 0U) && ((img) -> type == (_INT32)(1U)))) != (_INT32)(0U)) && ((input) -> UseWeightedReferenceME != (_INT32)(0U)))
  {
    ref_pic = (ref_picture) -> imgY_11_w;
  }
  else
  {
    ref_pic = (ref_picture) -> imgY_11;
  }
  max_width = (ref_picture) -> size_x + -17;
  max_height = (ref_picture) -> size_y + -17;
  img_width = (ref_picture) -> size_x;
  img_height = (ref_picture) -> size_y;
  SetMotionVectorPredictor(pmv, (enc_picture) -> ref_idx, (enc_picture) -> mv, (_INT16)(_INT32)((_UINT64) ref), (_INT32)((_UINT64) list), (_INT32) 0U, (_INT32) 0U, (_INT32) 16U, (_INT32) 16U);
  * (*(search_center_x + (_UINT64) list) + (_UINT64) ref) = (_INT16)((_INT32)((pmv)[0U]) / (_INT32)(4U));
  * (*(search_center_y + (_UINT64) list) + (_UINT64) ref) = (_INT16)((_INT32)((pmv)[1U]) / (_INT32)(4U));
  if((input) -> rdopt == (_INT32)(0U))
  {
    * (*(search_center_x + (_UINT64) list) + (_UINT64) ref) = _I4MAX(_I4MIN(*(*(search_center_x + (_UINT64) list) + (_UINT64) ref), search_range), -search_range);
    * (*(search_center_y + (_UINT64) list) + (_UINT64) ref) = _I4MAX(_I4MIN(*(*(search_center_y + (_UINT64) list) + (_UINT64) ref), search_range), -search_range);
  }
  * (*(search_center_x + (_UINT64) list) + (_UINT64) ref) = *(*(search_center_x + (_UINT64) list) + (_UINT64) ref) + (img) -> opix_x;
  * (*(search_center_y + (_UINT64) list) + (_UINT64) ref) = *(*(search_center_y + (_UINT64) list) + (_UINT64) ref) + (img) -> opix_y;
  offset_x = *(*(search_center_x + (_UINT64) list) + (_UINT64) ref);
  offset_y = *(*(search_center_y + (_UINT64) list) + (_UINT64) ref);
  y = (img) -> opix_y;
  _ub0_preg = (((img)[43LL]).number - y) + 15;
  for(y_preg = 0U; y_preg <= _ub0_preg; y_preg = y_preg + (_INT32)(1U))
  {
    x = ((img)[42LL]).number;
    _temp_2_preg = ((img)[42LL]).number + (_INT32)(16U);
    _ub1_preg = (((img)[42LL]).number - x) + 15;
    for(x_preg = 0U; x_preg <= _ub1_preg; x_preg = x_preg + (_INT32)(1U))
    {
      (orgptr)[(_UINT64)(x_preg)] = *((imgY_org)[(_INT64)(y + y_preg)] + (_INT64)(x + x_preg));
    }
    orgptr = orgptr + (_UINT64)(((x < _temp_2_preg) ? (_temp_2_preg - x) : 0U));
  }
  if((((offset_x >= search_range) && (offset_x <= (max_width - search_range))) && (offset_y >= search_range)) && (offset_y <= (max_height - search_range)))
  {
    range_partly_outside = 0U;
    PelYline_11 = &FastLine16Y_11;
  }
  else
  {
    range_partly_outside = 1U;
  }
  if((input) -> rdopt == (_INT32)(0U))
  {
    pos_preg = 0U;
    while(pos_preg < (((search_range * (_INT32)(2U)) + (_INT32)(1U)) * ((search_range * (_INT32)(2U)) + (_INT32)(1U))))
    {
      if((*(spiral_search_x + (_INT64)(pos_preg)) == ((img) -> opix_x - offset_x)) && (*(spiral_search_y + (_INT64)(pos_preg)) == ((img) -> opix_y - offset_y)))
      {
        * (*(pos_00 + (_UINT64) list) + (_UINT64) ref) = pos_preg;
        goto _2306;
      }
      pos_preg = pos_preg + (_INT32)(1U);
    }
    _2306 :;
  }
  _ub2_preg = (((search_range * (_INT32)(2U)) + (_INT32)(1U)) * ((search_range * (_INT32)(2U)) + (_INT32)(1U))) + -1;
  for(pos_preg_w2c_0 = 0U; pos_preg_w2c_0 <= _ub2_preg; pos_preg_w2c_0 = pos_preg_w2c_0 + (_INT32)(1U))
  {
    abs_y = (spiral_search_y)[(_INT64)(pos_preg_w2c_0)] + offset_y;
    abs_x = (spiral_search_x)[(_INT64)(pos_preg_w2c_0)] + offset_x;
    if(range_partly_outside != (_INT32)(0U))
    {
      if((((abs_y >= (_INT32)(0U)) && (abs_y <= max_height)) && (abs_x >= (_INT32)(0U))) && (abs_x <= max_width))
      {
        PelYline_11 = &FastLine16Y_11;
      }
      else
      {
        PelYline_11 = &UMVLine16Y_11;
      }
    }
    for(blky_preg = 0U; blky_preg <= (_INT32)(3U); blky_preg = blky_preg + (_INT32)(1U))
    {
      LineSadBlk_w2c_3 = 0U;
      LineSadBlk_w2c_2 = 0U;
      LineSadBlk_w2c_1 = 0U;
      LineSadBlk0 = 0U;
      for(y_preg_w2c_0 = 0U; y_preg_w2c_0 <= (_INT32)(3U); y_preg_w2c_0 = y_preg_w2c_0 + (_INT32)(1U))
      {
        __comma_preg = (_UINT64)(_UINT64)(PelYline_11)(ref_pic, y_preg_w2c_0 + (abs_y + (blky_preg * (_INT32)(4U))), abs_x, img_height, img_width);
        LineSadBlk0 = (byte_abs)[(_INT64)((_INT32)((_UINT16 *) __comma_preg)[0] - (_INT32)(orig_blocks)[(_UINT64)(y_preg_w2c_0) + ((_UINT64)(blky_preg) * (_UINT64)(4U))])] + LineSadBlk0;
        LineSadBlk0 = (byte_abs)[(_INT64)((_INT32)((_UINT16 *) __comma_preg)[1LL] - (_INT32) * (&(orig_blocks)[(_UINT64)(y_preg_w2c_0) + ((_UINT64)(blky_preg) * (_UINT64)(4U))] + 1LL))] + LineSadBlk0;
        LineSadBlk0 = (byte_abs)[(_INT64)((_INT32)((_UINT16 *) __comma_preg)[2LL] - (_INT32) * (&(orig_blocks)[(_UINT64)(y_preg_w2c_0) + ((_UINT64)(blky_preg) * (_UINT64)(4U))] + 2LL))] + LineSadBlk0;
        LineSadBlk0 = (byte_abs)[(_INT64)((_INT32)((_UINT16 *) __comma_preg)[3LL] - (_INT32) * (&(orig_blocks)[(_UINT64)(y_preg_w2c_0) + ((_UINT64)(blky_preg) * (_UINT64)(4U))] + 3LL))] + LineSadBlk0;
        LineSadBlk_w2c_1 = (byte_abs)[(_INT64)((_INT32)((_UINT16 *) __comma_preg)[4LL] - (_INT32) * (&(orig_blocks)[(_UINT64)(y_preg_w2c_0) + ((_UINT64)(blky_preg) * (_UINT64)(4U))] + 4LL))] + LineSadBlk_w2c_1;
        LineSadBlk_w2c_1 = (byte_abs)[(_INT64)((_INT32)((_UINT16 *) __comma_preg)[5LL] - (_INT32) * (&(orig_blocks)[(_UINT64)(y_preg_w2c_0) + ((_UINT64)(blky_preg) * (_UINT64)(4U))] + 5LL))] + LineSadBlk_w2c_1;
        LineSadBlk_w2c_1 = (byte_abs)[(_INT64)((_INT32)((_UINT16 *) __comma_preg)[6LL] - (_INT32) * (&(orig_blocks)[(_UINT64)(y_preg_w2c_0) + ((_UINT64)(blky_preg) * (_UINT64)(4U))] + 6LL))] + LineSadBlk_w2c_1;
        LineSadBlk_w2c_1 = (byte_abs)[(_INT64)((_INT32)((_UINT16 *) __comma_preg)[7LL] - (_INT32) * (&(orig_blocks)[(_UINT64)(y_preg_w2c_0) + ((_UINT64)(blky_preg) * (_UINT64)(4U))] + 7LL))] + LineSadBlk_w2c_1;
        LineSadBlk_w2c_2 = (byte_abs)[(_INT64)((_INT32)((_UINT16 *) __comma_preg)[8LL] - (_INT32) * (&(orig_blocks)[(_UINT64)(y_preg_w2c_0) + ((_UINT64)(blky_preg) * (_UINT64)(4U))] + 8LL))] + LineSadBlk_w2c_2;
        LineSadBlk_w2c_2 = (byte_abs)[(_INT64)((_INT32)((_UINT16 *) __comma_preg)[9LL] - (_INT32) * (&(orig_blocks)[(_UINT64)(y_preg_w2c_0) + ((_UINT64)(blky_preg) * (_UINT64)(4U))] + 9LL))] + LineSadBlk_w2c_2;
        LineSadBlk_w2c_2 = (byte_abs)[(_INT64)((_INT32)((_UINT16 *) __comma_preg)[10LL] - (_INT32) * (&(orig_blocks)[(_UINT64)(y_preg_w2c_0) + ((_UINT64)(blky_preg) * (_UINT64)(4U))] + 10LL))] + LineSadBlk_w2c_2;
        LineSadBlk_w2c_2 = (byte_abs)[(_INT64)((_INT32)((_UINT16 *) __comma_preg)[11LL] - (_INT32) * (&(orig_blocks)[(_UINT64)(y_preg_w2c_0) + ((_UINT64)(blky_preg) * (_UINT64)(4U))] + 11LL))] + LineSadBlk_w2c_2;
        LineSadBlk_w2c_3 = (byte_abs)[(_INT64)((_INT32)((_UINT16 *) __comma_preg)[12LL] - (_INT32) * (&(orig_blocks)[(_UINT64)(y_preg_w2c_0) + ((_UINT64)(blky_preg) * (_UINT64)(4U))] + 12LL))] + LineSadBlk_w2c_3;
        LineSadBlk_w2c_3 = (byte_abs)[(_INT64)((_INT32)((_UINT16 *) __comma_preg)[13LL] - (_INT32) * (&(orig_blocks)[(_UINT64)(y_preg_w2c_0) + ((_UINT64)(blky_preg) * (_UINT64)(4U))] + 13LL))] + LineSadBlk_w2c_3;
        LineSadBlk_w2c_3 = (byte_abs)[(_INT64)((_INT32)((_UINT16 *) __comma_preg)[14LL] - (_INT32) * (&(orig_blocks)[(_UINT64)(y_preg_w2c_0) + ((_UINT64)(blky_preg) * (_UINT64)(4U))] + 14LL))] + LineSadBlk_w2c_3;
        LineSadBlk_w2c_3 = (byte_abs)[(_INT64)((_INT32)((_UINT16 *) __comma_preg)[15LL] - (_INT32) * (&(orig_blocks)[(_UINT64)(y_preg_w2c_0) + ((_UINT64)(blky_preg) * (_UINT64)(4U))] + 15LL))] + LineSadBlk_w2c_3;
      }
      * ((block_sad)[(_INT64)(blky_preg * 4U)] + (_INT64)(pos_preg_w2c_0)) = LineSadBlk0;
      * ((block_sad)[(_INT64)((blky_preg * 4U)) + 1LL] + (_INT64)(pos_preg_w2c_0)) = LineSadBlk_w2c_1;
      * ((block_sad)[(_INT64)((blky_preg * 4U)) + 2LL] + (_INT64)(pos_preg_w2c_0)) = LineSadBlk_w2c_2;
      * ((block_sad)[(_INT64)((blky_preg * 4U)) + 3LL] + (_INT64)(pos_preg_w2c_0)) = LineSadBlk_w2c_3;
    }
  }
  SetupLargerBlocks((_INT32)((_UINT64) list), (_INT32)((_UINT64) ref), ((search_range * (_INT32)(2U)) + (_INT32)(1U)) * ((search_range * (_INT32)(2U)) + (_INT32)(1U)));
  * (*(search_setup_done + (_UINT64) list) + (_UINT64) ref) = 1U;
  return;
} /* SetupFastFullPelSearch */


extern void SetMotionVectorPredictor(
  _INT16 * pmv,
  _INT16 *** refPic,
  _INT16 **** tmp_mv,
  _INT16 ref_frame,
  _INT32 list,
  _INT32 block_x,
  _INT32 block_y,
  _INT32 blockshape_x,
  _INT32 blockshape_y)
{
  
  register _INT32 __cselect_preg_w2c_13;
  register _INT32 __cselect_preg_w2c_14;
  register _INT32 __cselect_preg_w2c_15;
  register _INT32 __cselect_preg_w2c_16;
  register _INT32 __cselect_preg_w2c_17;
  register _INT32 __cselect_preg_w2c_18;
  register _INT32 __cselect_preg_w2c_19;
  register _INT32 __cselect_preg_w2c_20;
  register _INT32 __cselect_preg_w2c_21;
  register _INT32 __cselect_preg_w2c_22;
  register _INT32 __cselect_preg_w2c_23;
  register _INT32 __cselect_preg_w2c_24;
  register _INT32 __cselect_preg_w2c_25;
  register _INT32 __cselect_preg_w2c_26;
  register _INT32 __cselect_preg_w2c_27;
  register _INT32 hv_preg;
  register _INT32 __cselect_preg_w2c_28;
  register _INT32 __cselect_preg_w2c_29;
  register _INT32 __cselect_preg_w2c_30;
  register _INT32 __cselect_preg_w2c_31;
  register _INT32 __cselect_preg_w2c_32;
  register _INT32 __cselect_preg_w2c_33;
  register _INT32 __cselect_preg_w2c_34;
  register _INT32 __cselect_preg_w2c_35;
  register _INT32 __cselect_preg_w2c_36;
  register _INT32 __cselect_preg;
  register _INT32 __cselect_preg_w2c_0;
  register _INT32 __cselect_preg_w2c_1;
  register _INT32 __cselect_preg_w2c_2;
  register _INT32 __cselect_preg_w2c_3;
  register _INT32 __cselect_preg_w2c_4;
  register _INT32 __cselect_preg_w2c_5;
  register _INT32 __cselect_preg_w2c_6;
  register _INT32 __cselect_preg_w2c_7;
  register _INT32 __cselect_preg_w2c_8;
  register _INT32 __cselect_preg_w2c_9;
  register _INT32 __cselect_preg_w2c_10;
  register _INT32 __cselect_preg_w2c_11;
  register _INT32 __cselect_preg_w2c_12;
  _INT32 mb_nr;
  _INT32 mv_a;
  _INT32 mv_b;
  _INT32 mv_c;
  _INT32 pred_vec;
  _INT32 mvPredType;
  _INT32 rFrameL;
  _INT32 rFrameU;
  _INT32 rFrameUR;
  struct pix_pos block_a;
  struct pix_pos block_b;
  struct pix_pos block_c;
  struct pix_pos block_d;
  _INT32 SAD_a;
  _INT32 SAD_b;
  _INT32 SAD_c;
  _INT32 temp_pred_SAD[2LL];
  
  mb_nr = (img) -> current_mb_nr;
  pred_vec = 0U;
  SAD_a = 0U;
  SAD_b = 0U;
  SAD_c = 0U;
  if((input) -> FMEnable != (_INT32)(0U))
  {
    pred_SAD_space = 0U;
  }
  getLuma4x4Neighbour(mb_nr, block_x, block_y, -1, (_INT32) 0U, &block_a);
  getLuma4x4Neighbour(mb_nr, block_x, block_y, (_INT32) 0U, -1, &block_b);
  getLuma4x4Neighbour(mb_nr, block_x, block_y, blockshape_x, -1, &block_c);
  getLuma4x4Neighbour(mb_nr, block_x, block_y, -1, -1, &block_d);
  if((block_y * (_INT32)(4U)) > (_INT32)(0U))
  {
    if((block_x * (_INT32)(4U)) <= (_INT32)(7U))
    {
      if(block_y == (_INT32)(2U))
      {
        if(blockshape_x == (_INT32)(16U))
        {
          block_c.available = 0U;
        }
        else
        {
          block_c.available = (block_c).available & (_INT32)(1U);
        }
      }
      else
      {
        if((blockshape_x + (block_x * (_INT32)(4U))) != (_INT32)(8U))
        {
          block_c.available = (block_c).available & (_INT32)(1U);
        }
        else
        {
          block_c.available = 0U;
        }
      }
    }
    else
    {
      if((blockshape_x + (block_x * (_INT32)(4U))) != (_INT32)(16U))
      {
        block_c.available = (block_c).available & (_INT32)(1U);
      }
      else
      {
        block_c.available = 0U;
      }
    }
  }
  if((block_c).available == (_INT32)(0U))
  {
    block_c.available = (block_d).available;
    block_c.mb_addr = (block_d).mb_addr;
    block_c.x = (block_d).x;
    block_c.y = (block_d).y;
    block_c.pos_x = (block_d).pos_x;
    block_c.pos_y = (block_d).pos_y;
  }
  mvPredType = 0U;
  if(*(((_INT32 *)(img) + 16384LL) + 1716LL) == (_INT32)(0U))
  {
    if((block_a).available != (_INT32)(0U))
    {
      __cselect_preg_w2c_13 = (_INT32) * (*(*(refPic + (_UINT64) list) + (block_a).pos_x) + (block_a).pos_y);
    }
    else
    {
      __cselect_preg_w2c_13 = -1LL;
    }
    rFrameL = __cselect_preg_w2c_13;
    if((block_b).available != (_INT32)(0U))
    {
      __cselect_preg_w2c_14 = (_INT32) * (*(*(refPic + (_UINT64) list) + (block_b).pos_x) + (block_b).pos_y);
    }
    else
    {
      __cselect_preg_w2c_14 = -1LL;
    }
    rFrameU = __cselect_preg_w2c_14;
    if((block_c).available != (_INT32)(0U))
    {
      __cselect_preg_w2c_15 = (_INT32) * (*(*(refPic + (_UINT64) list) + (block_c).pos_x) + (block_c).pos_y);
    }
    else
    {
      __cselect_preg_w2c_15 = -1LL;
    }
    rFrameUR = __cselect_preg_w2c_15;
  }
  else
  {
    if((((img) -> mb_data + (img) -> current_mb_nr)) -> mb_field != (_INT32)(0U))
    {
      if((block_a).available != (_INT32)(0U))
      {
        if((((img) -> mb_data + (block_a).mb_addr)) -> mb_field != (_INT32)(0U))
        {
          __cselect_preg_w2c_16 = (_INT32) * (*(*(refPic + (_UINT64) list) + (block_a).pos_x) + (block_a).pos_y);
        }
        else
        {
          __cselect_preg_w2c_16 = (_INT32) * (*(*(refPic + (_UINT64) list) + (block_a).pos_x) + (block_a).pos_y) * (_INT32)(2U);
        }
        __cselect_preg_w2c_17 = __cselect_preg_w2c_16;
      }
      else
      {
        __cselect_preg_w2c_17 = -1LL;
      }
      rFrameL = __cselect_preg_w2c_17;
      if((block_b).available != (_INT32)(0U))
      {
        if((((img) -> mb_data + (block_b).mb_addr)) -> mb_field != (_INT32)(0U))
        {
          __cselect_preg_w2c_18 = (_INT32) * (*(*(refPic + (_UINT64) list) + (block_b).pos_x) + (block_b).pos_y);
        }
        else
        {
          __cselect_preg_w2c_18 = (_INT32) * (*(*(refPic + (_UINT64) list) + (block_b).pos_x) + (block_b).pos_y) * (_INT32)(2U);
        }
        __cselect_preg_w2c_19 = __cselect_preg_w2c_18;
      }
      else
      {
        __cselect_preg_w2c_19 = -1LL;
      }
      rFrameU = __cselect_preg_w2c_19;
      if((block_c).available != (_INT32)(0U))
      {
        if((((img) -> mb_data + (block_c).mb_addr)) -> mb_field != (_INT32)(0U))
        {
          __cselect_preg_w2c_20 = (_INT32) * (*(*(refPic + (_UINT64) list) + (block_c).pos_x) + (block_c).pos_y);
        }
        else
        {
          __cselect_preg_w2c_20 = (_INT32) * (*(*(refPic + (_UINT64) list) + (block_c).pos_x) + (block_c).pos_y) * (_INT32)(2U);
        }
        __cselect_preg_w2c_21 = __cselect_preg_w2c_20;
      }
      else
      {
        __cselect_preg_w2c_21 = -1LL;
      }
      rFrameUR = __cselect_preg_w2c_21;
    }
    else
    {
      if((block_a).available != (_INT32)(0U))
      {
        if((((img) -> mb_data + (block_a).mb_addr)) -> mb_field != (_INT32)(0U))
        {
          __cselect_preg_w2c_22 = (_INT16)(_I4ASHR((_INT32) * (*(*(refPic + (_UINT64) list) + (block_a).pos_x) + (block_a).pos_y), (_INT32)(1U)));
        }
        else
        {
          __cselect_preg_w2c_22 = (_INT32) * (*(*(refPic + (_UINT64) list) + (block_a).pos_x) + (block_a).pos_y);
        }
        __cselect_preg_w2c_23 = __cselect_preg_w2c_22;
      }
      else
      {
        __cselect_preg_w2c_23 = -1LL;
      }
      rFrameL = __cselect_preg_w2c_23;
      if((block_b).available != (_INT32)(0U))
      {
        if((((img) -> mb_data + (block_b).mb_addr)) -> mb_field != (_INT32)(0U))
        {
          __cselect_preg_w2c_24 = (_INT16)(_I4ASHR((_INT32) * (*(*(refPic + (_UINT64) list) + (block_b).pos_x) + (block_b).pos_y), (_INT32)(1U)));
        }
        else
        {
          __cselect_preg_w2c_24 = (_INT32) * (*(*(refPic + (_UINT64) list) + (block_b).pos_x) + (block_b).pos_y);
        }
        __cselect_preg_w2c_25 = __cselect_preg_w2c_24;
      }
      else
      {
        __cselect_preg_w2c_25 = -1LL;
      }
      rFrameU = __cselect_preg_w2c_25;
      if((block_c).available != (_INT32)(0U))
      {
        if((((img) -> mb_data + (block_c).mb_addr)) -> mb_field != (_INT32)(0U))
        {
          __cselect_preg_w2c_26 = (_INT16)(_I4ASHR((_INT32) * (*(*(refPic + (_UINT64) list) + (block_c).pos_x) + (block_c).pos_y), (_INT32)(1U)));
        }
        else
        {
          __cselect_preg_w2c_26 = (_INT32) * (*(*(refPic + (_UINT64) list) + (block_c).pos_x) + (block_c).pos_y);
        }
        __cselect_preg_w2c_27 = __cselect_preg_w2c_26;
      }
      else
      {
        __cselect_preg_w2c_27 = -1LL;
      }
      rFrameUR = __cselect_preg_w2c_27;
    }
  }
  if((((_INT32) ref_frame == rFrameL) && ((_INT32) ref_frame != rFrameU)) && ((_INT32) ref_frame != rFrameUR))
  {
    mvPredType = 1U;
  }
  else
  {
    if((((_INT32) ref_frame != rFrameL) && ((_INT32) ref_frame == rFrameU)) && ((_INT32) ref_frame != rFrameUR))
    {
      mvPredType = 2U;
    }
    else
    {
      if((((_INT32) ref_frame != rFrameL) && ((_INT32) ref_frame != rFrameU)) && ((_INT32) ref_frame == rFrameUR))
      {
        mvPredType = 3U;
      }
    }
  }
  if((blockshape_x == (_INT32)(8U)) && (blockshape_y == (_INT32)(16U)))
  {
    if(block_x == (_INT32)(0U))
    {
      if((_INT32) ref_frame == rFrameL)
      {
        mvPredType = 1U;
      }
    }
    else
    {
      if((_INT32) ref_frame == rFrameUR)
      {
        mvPredType = 3U;
      }
    }
  }
  else
  {
    if((blockshape_x == (_INT32)(16U)) && (blockshape_y == (_INT32)(8U)))
    {
      if(block_y == (_INT32)(0U))
      {
        if((_INT32) ref_frame == rFrameU)
        {
          mvPredType = 2U;
        }
      }
      else
      {
        if((_INT32) ref_frame == rFrameL)
        {
          mvPredType = 1U;
        }
      }
    }
  }
  for(hv_preg = 0U; hv_preg <= (_INT32)(1U); hv_preg = hv_preg + (_INT32)(1U))
  {
    if(((img) -> MbaffFrameFlag == (_INT32)(0U)) || (hv_preg == (_INT32)(0U)))
    {
      if((block_a).available != (_INT32)(0U))
      {
        __cselect_preg_w2c_28 = (_INT32) * (*(*((tmp_mv)[(_UINT64) list] + (block_a).pos_x) + (block_a).pos_y) + (_INT64)(hv_preg));
      }
      else
      {
        __cselect_preg_w2c_28 = 0U;
      }
      mv_a = __cselect_preg_w2c_28;
      if((block_b).available != (_INT32)(0U))
      {
        __cselect_preg_w2c_29 = (_INT32) * (*(*((tmp_mv)[(_UINT64) list] + (block_b).pos_x) + (block_b).pos_y) + (_INT64)(hv_preg));
      }
      else
      {
        __cselect_preg_w2c_29 = 0U;
      }
      mv_b = __cselect_preg_w2c_29;
      if((block_c).available != (_INT32)(0U))
      {
        __cselect_preg_w2c_30 = (_INT32) * (*(*((tmp_mv)[(_UINT64) list] + (block_c).pos_x) + (block_c).pos_y) + (_INT64)(hv_preg));
      }
      else
      {
        __cselect_preg_w2c_30 = 0U;
      }
      mv_c = __cselect_preg_w2c_30;
    }
    else
    {
      if(((*(struct macroblock **)(&(img)[1771LL]))[((img)[3LL]).number]).mb_field != (_INT32)(0U))
      {
        if((block_a).available != (_INT32)(0U))
        {
          if(((*(struct macroblock **)(&(img)[1771LL]))[(block_a).mb_addr]).mb_field != (_INT32)(0U))
          {
            __cselect_preg_w2c_31 = (_INT32) * (*(*((tmp_mv)[(_UINT64) list] + (block_a).pos_x) + (block_a).pos_y) + (_INT64)(hv_preg));
          }
          else
          {
            __cselect_preg_w2c_31 = (_INT16)((_INT32) * (*(*((tmp_mv)[(_UINT64) list] + (block_a).pos_x) + (block_a).pos_y) + (_INT64)(hv_preg)) / (_INT32)(2U));
          }
          __cselect_preg_w2c_32 = __cselect_preg_w2c_31;
        }
        else
        {
          __cselect_preg_w2c_32 = 0U;
        }
        mv_a = __cselect_preg_w2c_32;
        if((block_b).available != (_INT32)(0U))
        {
          if(((*(struct macroblock **)(&(img)[1771LL]))[(block_b).mb_addr]).mb_field != (_INT32)(0U))
          {
            __cselect_preg_w2c_33 = (_INT32) * (*(*((tmp_mv)[(_UINT64) list] + (block_b).pos_x) + (block_b).pos_y) + (_INT64)(hv_preg));
          }
          else
          {
            __cselect_preg_w2c_33 = (_INT16)((_INT32) * (*(*((tmp_mv)[(_UINT64) list] + (block_b).pos_x) + (block_b).pos_y) + (_INT64)(hv_preg)) / (_INT32)(2U));
          }
          __cselect_preg_w2c_34 = __cselect_preg_w2c_33;
        }
        else
        {
          __cselect_preg_w2c_34 = 0U;
        }
        mv_b = __cselect_preg_w2c_34;
        if((block_c).available != (_INT32)(0U))
        {
          if(((*(struct macroblock **)(&(img)[1771LL]))[(block_c).mb_addr]).mb_field != (_INT32)(0U))
          {
            __cselect_preg_w2c_35 = (_INT32) * (*(*((tmp_mv)[(_UINT64) list] + (block_c).pos_x) + (block_c).pos_y) + (_INT64)(hv_preg));
          }
          else
          {
            __cselect_preg_w2c_35 = (_INT16)((_INT32) * (*(*((tmp_mv)[(_UINT64) list] + (block_c).pos_x) + (block_c).pos_y) + (_INT64)(hv_preg)) / (_INT32)(2U));
          }
          __cselect_preg_w2c_36 = __cselect_preg_w2c_35;
        }
        else
        {
          __cselect_preg_w2c_36 = 0U;
        }
        mv_c = __cselect_preg_w2c_36;
      }
      else
      {
        if((block_a).available != (_INT32)(0U))
        {
          if(((*(struct macroblock **)(&(img)[1771LL]))[(block_a).mb_addr]).mb_field != (_INT32)(0U))
          {
            __cselect_preg = (_INT32) * (*(*((tmp_mv)[(_UINT64) list] + (block_a).pos_x) + (block_a).pos_y) + (_INT64)(hv_preg)) * (_INT32)(2U);
          }
          else
          {
            __cselect_preg = (_INT32) * (*(*((tmp_mv)[(_UINT64) list] + (block_a).pos_x) + (block_a).pos_y) + (_INT64)(hv_preg));
          }
          __cselect_preg_w2c_0 = __cselect_preg;
        }
        else
        {
          __cselect_preg_w2c_0 = 0U;
        }
        mv_a = __cselect_preg_w2c_0;
        if((block_b).available != (_INT32)(0U))
        {
          if(((*(struct macroblock **)(&(img)[1771LL]))[(block_b).mb_addr]).mb_field != (_INT32)(0U))
          {
            __cselect_preg_w2c_1 = (_INT32) * (*(*((tmp_mv)[(_UINT64) list] + (block_b).pos_x) + (block_b).pos_y) + (_INT64)(hv_preg)) * (_INT32)(2U);
          }
          else
          {
            __cselect_preg_w2c_1 = (_INT32) * (*(*((tmp_mv)[(_UINT64) list] + (block_b).pos_x) + (block_b).pos_y) + (_INT64)(hv_preg));
          }
          __cselect_preg_w2c_2 = __cselect_preg_w2c_1;
        }
        else
        {
          __cselect_preg_w2c_2 = 0U;
        }
        mv_b = __cselect_preg_w2c_2;
        if((block_c).available != (_INT32)(0U))
        {
          if(((*(struct macroblock **)(&(img)[1771LL]))[(block_c).mb_addr]).mb_field != (_INT32)(0U))
          {
            __cselect_preg_w2c_3 = (_INT32) * (*(*((tmp_mv)[(_UINT64) list] + (block_c).pos_x) + (block_c).pos_y) + (_INT64)(hv_preg)) * (_INT32)(2U);
          }
          else
          {
            __cselect_preg_w2c_3 = (_INT32) * (*(*((tmp_mv)[(_UINT64) list] + (block_c).pos_x) + (block_c).pos_y) + (_INT64)(hv_preg));
          }
          __cselect_preg_w2c_4 = __cselect_preg_w2c_3;
        }
        else
        {
          __cselect_preg_w2c_4 = 0U;
        }
        mv_c = __cselect_preg_w2c_4;
      }
    }
    if(((input)[823LL]).ProfileIDC != (_INT32)(0U))
    {
      if((block_a).available != (_INT32)(0U))
      {
        if((_INT32)((_UINT64) list) == (_INT32)(1U))
        {
          __cselect_preg_w2c_5 = ** (** ((all_bwmincost)[(block_a).pos_x] + (block_a).pos_y) + (_UINT64) FME_blocktype);
        }
        else
        {
          __cselect_preg_w2c_5 = ** (*(*((all_mincost)[(block_a).pos_x] + (block_a).pos_y) + (_INT32) ref_frame) + (_UINT64) FME_blocktype);
        }
        __cselect_preg_w2c_6 = __cselect_preg_w2c_5;
      }
      else
      {
        __cselect_preg_w2c_6 = 0U;
      }
      SAD_a = __cselect_preg_w2c_6;
      if((block_b).available != (_INT32)(0U))
      {
        if((_INT32)((_UINT64) list) == (_INT32)(1U))
        {
          __cselect_preg_w2c_7 = ** (** ((all_bwmincost)[(block_b).pos_x] + (block_b).pos_y) + (_UINT64) FME_blocktype);
        }
        else
        {
          __cselect_preg_w2c_7 = ** (*(*((all_mincost)[(block_b).pos_x] + (block_b).pos_y) + (_INT32) ref_frame) + (_UINT64) FME_blocktype);
        }
        __cselect_preg_w2c_8 = __cselect_preg_w2c_7;
      }
      else
      {
        __cselect_preg_w2c_8 = 0U;
      }
      SAD_b = __cselect_preg_w2c_8;
      if((block_d).available != (_INT32)(0U))
      {
        if((_INT32)((_UINT64) list) == (_INT32)(1U))
        {
          __cselect_preg_w2c_9 = ** (** ((all_bwmincost)[(block_d).pos_x] + (block_d).pos_y) + (_UINT64) FME_blocktype);
        }
        else
        {
          __cselect_preg_w2c_9 = ** (*(*((all_mincost)[(block_d).pos_x] + (block_d).pos_y) + (_INT32) ref_frame) + (_UINT64) FME_blocktype);
        }
        __cselect_preg_w2c_10 = __cselect_preg_w2c_9;
      }
      else
      {
        __cselect_preg_w2c_10 = 0U;
      }
      if((block_c).available != (_INT32)(0U))
      {
        if((_INT32)((_UINT64) list) == (_INT32)(1U))
        {
          __cselect_preg_w2c_11 = ** (** ((all_bwmincost)[(block_c).pos_x] + (block_c).pos_y) + (_UINT64) FME_blocktype);
        }
        else
        {
          __cselect_preg_w2c_11 = ** (*(*((all_mincost)[(block_c).pos_x] + (block_c).pos_y) + (_INT32) ref_frame) + (_UINT64) FME_blocktype);
        }
        __cselect_preg_w2c_12 = __cselect_preg_w2c_11;
      }
      else
      {
        __cselect_preg_w2c_12 = __cselect_preg_w2c_10;
      }
      SAD_c = __cselect_preg_w2c_12;
    }
    if(mvPredType == (_INT32)(0U))
      goto _770;
    if(mvPredType == (_INT32)(1U))
      goto _1282;
    if(mvPredType == (_INT32)(2U))
      goto _1538;
    if(!(mvPredType != (_INT32)(3U)))
      goto _42754;
    goto _1026;
    _770 :;
    if(((block_b).available == (_INT32)(0U)) && ((block_c).available == (_INT32)(0U)))
    {
      pred_vec = mv_a;
      if(((input)[823LL]).ProfileIDC != (_INT32)(0U))
      {
        (temp_pred_SAD)[(_INT64)(hv_preg)] = SAD_a;
      }
    }
    else
    {
      pred_vec = ((mv_c + (mv_a + mv_b)) - _I4MIN(mv_a, _I4MIN(mv_b, mv_c))) - _I4MAX(mv_a, _I4MAX(mv_b, mv_c));
    }
    if(((input)[823LL]).ProfileIDC != (_INT32)(0U))
    {
      if((mv_a == pred_vec) && (SAD_a != (_INT32)(0U)))
      {
        (temp_pred_SAD)[(_INT64)(hv_preg)] = SAD_a;
      }
      else
      {
        if((mv_b == pred_vec) && (SAD_b != (_INT32)(0U)))
        {
          (temp_pred_SAD)[(_INT64)(hv_preg)] = SAD_b;
        }
        else
        {
          (temp_pred_SAD)[(_INT64)(hv_preg)] = SAD_c;
        }
      }
    }
    goto _1026;
    _1282 :;
    pred_vec = mv_a;
    if(((input)[823LL]).ProfileIDC != (_INT32)(0U))
    {
      (temp_pred_SAD)[(_INT64)(hv_preg)] = SAD_a;
    }
    goto _1026;
    _1538 :;
    pred_vec = mv_b;
    if(((input)[823LL]).ProfileIDC != (_INT32)(0U))
    {
      (temp_pred_SAD)[(_INT64)(hv_preg)] = SAD_b;
    }
    goto _1026;
    _42754 :;
    pred_vec = mv_c;
    if(((input)[823LL]).ProfileIDC != (_INT32)(0U))
    {
      (temp_pred_SAD)[(_INT64)(hv_preg)] = SAD_c;
    }
    _1026 :;
    (pmv)[(_INT64)(hv_preg)] = pred_vec;
  }
  if((input) -> FMEnable != (_INT32)(0U))
  {
    pred_SAD_space = _I4MIN((temp_pred_SAD)[0U], (temp_pred_SAD)[1U]);
  }
  return;
} /* SetMotionVectorPredictor */


extern void Init_Motion_Search_Module()
{
  
  register _INT32 __cselect_preg;
  register _IEEE64 __cselect_preg_w2c_0;
  register _IEEE64 __comma_preg;
  register _IEEE64 __comma_preg_w2c_0;
  register _IEEE64 __comma_preg_w2c_1;
  register _IEEE64 __comma_preg_w2c_2;
  register _IEEE64 __comma_preg_w2c_3;
  register _UINT64 __comma_preg_w2c_4;
  register _UINT64 __comma_preg_w2c_5;
  register _UINT64 __comma_preg_w2c_6;
  register _UINT64 __comma_preg_w2c_7;
  register _UINT64 __comma_preg_w2c_8;
  register _INT32 _ub3_preg;
  register _INT32 bits_preg;
  register _INT32 _ub4_preg;
  register _INT32 i_preg_w2c_2;
  register _INT32 _ub5_preg;
  register _INT32 bits_preg_w2c_0;
  register _INT32 _ub6_preg;
  register _INT32 i_preg_w2c_3;
  register _INT32 _ub7_preg;
  register _INT32 i_preg_w2c_4;
  register _INT32 _ub8_preg;
  register _INT32 l_preg;
  register _INT32 i_preg_w2c_0;
  register _INT32 i_preg_w2c_5;
  register _INT32 i_preg_w2c_1;
  register _INT32 i_preg;
  _INT32 k;
  _INT32 search_range;
  _INT32 number_of_reference_frames;
  _INT32 max_search_points;
  
  if(*(((_INT32 *)(img) + 16384LL) + 1787LL) > *(((_INT32 *)(img) + 16384LL) + 1788LL))
  {
    __cselect_preg = (*(((_INT32 *)(img) + 16384LL) + 1787LL) * (_INT32)(2U)) + (_INT32)(2U);
  }
  else
  {
    __cselect_preg = (*(((_INT32 *)(img) + 16384LL) + 1788LL) * (_INT32)(2U)) + (_INT32)(2U);
  }
  search_range = (input) -> search_range;
  number_of_reference_frames = (img) -> max_num_references;
  max_search_points = _I4MAX(((search_range * (_INT32)(2U)) + (_INT32)(1U)) * ((search_range * (_INT32)(2U)) + (_INT32)(1U)), (_INT32)(9U));
  if(number_of_reference_frames > (_INT32)(14U))
  {
    __cselect_preg_w2c_0 = (_IEEE64)(number_of_reference_frames + (_INT32)(1U));
  }
  else
  {
    __cselect_preg_w2c_0 = 1.6e+01;
  }
  __comma_preg = log(__cselect_preg_w2c_0);
  __comma_preg_w2c_0 = log(2.0);
  __comma_preg_w2c_1 = log((_IEEE64)((search_range * (_INT32)(8U)) + (_INT32)(13U)));
  __comma_preg_w2c_2 = log(2.0);
  __comma_preg_w2c_3 = ceil((__comma_preg_w2c_1 / __comma_preg_w2c_2) + 1.00000000000000003643e-10);
  max_mvd = _I4SHL((_INT32)(1U), _I4ASHR((_I4F8TRUNC(__comma_preg_w2c_3) * (_INT32)(2U)) + (_INT32)(3U), (_INT32)(1U))) + -1;
  __comma_preg_w2c_4 = (_UINT64)(_UINT64) calloc((_UINT64) max_search_points, 4U);
  spiral_search_x = (_INT32 *) __comma_preg_w2c_4;
  if((_UINT64)((_INT32 *) __comma_preg_w2c_4) == (_UINT64)(0U))
  {
    no_mem_exit("Init_Motion_Search_Module: spiral_search_x");
  }
  __comma_preg_w2c_5 = (_UINT64)(_UINT64) calloc((_UINT64) max_search_points, 4U);
  spiral_search_y = (_INT32 *) __comma_preg_w2c_5;
  if((_UINT64)((_INT32 *) __comma_preg_w2c_5) == (_UINT64)(0U))
  {
    no_mem_exit("Init_Motion_Search_Module: spiral_search_y");
  }
  __comma_preg_w2c_6 = (_UINT64)(_UINT64) calloc((_UINT64)((_INT64)((max_mvd * (_INT32)(2U))) + (_INT64)(1U)), 4U);
  mvbits = (_INT32 *) __comma_preg_w2c_6;
  if((_UINT64)((_INT32 *) __comma_preg_w2c_6) == (_UINT64)(0U))
  {
    no_mem_exit("Init_Motion_Search_Module: mvbits");
  }
  __comma_preg_w2c_7 = (_UINT64)(_UINT64) calloc((_UINT64)((_INT64)(_I4SHL((_INT32)(1U), _I4ASHR((_I4F8TRUNC(_F8F8FLOOR((__comma_preg / __comma_preg_w2c_0) + 1.00000000000000003643e-10)) * (_INT32)(2U)) + (_INT32)(1U), (_INT32)(1U)) + (_INT32)(1U))) + -1LL), 4U);
  refbits = (_INT32 *) __comma_preg_w2c_7;
  if((_UINT64)((_INT32 *) __comma_preg_w2c_7) == (_UINT64)(0U))
  {
    no_mem_exit("Init_Motion_Search_Module: refbits");
  }
  __comma_preg_w2c_8 = (_UINT64)(_UINT64) calloc((_UINT64)(_INT64)(__cselect_preg), 4U);
  byte_abs = (_INT32 *) __comma_preg_w2c_8;
  if((_UINT64)((_INT32 *) __comma_preg_w2c_8) == (_UINT64)(0U))
  {
    no_mem_exit("Init_Motion_Search_Module: byte_abs");
  }
  get_mem4Dint(&motion_cost, (_INT32) 8U, (_INT32) 2U, (img) -> max_num_references + (_INT32)(1U), (_INT32) 4U);
  mvbits = mvbits + (_UINT64) max_mvd;
  byte_abs = byte_abs + (_INT64)(__cselect_preg / 2U);
  * mvbits = 1U;
  _ub3_preg = _I4DIVFLOOR(_I4F8TRUNC(__comma_preg_w2c_3) * (_INT32)(2U), 2U);
  for(bits_preg = 0U; bits_preg <= _ub3_preg; bits_preg = bits_preg + (_INT32)(1U))
  {
    _ub4_preg = (_I4SHL((_INT32)(1U), _I4ASHR((bits_preg * (_INT32)(2U)) + (_INT32)(3U), (_INT32)(1U))) - _I4ASHR(_I4SHL((_INT32)(1U), _I4ASHR((bits_preg * (_INT32)(2U)) + (_INT32)(3U), (_INT32)(1U))), (_INT32)(1U))) + -1;
    for(i_preg_w2c_2 = 0U; i_preg_w2c_2 <= _ub4_preg; i_preg_w2c_2 = i_preg_w2c_2 + (_INT32)(1U))
    {
      (mvbits)[(_INT64)(i_preg_w2c_2 + _I4ASHR(_I4SHL((_INT32)(1U), _I4ASHR((bits_preg * (_INT32)(2U)) + (_INT32)(3U), (_INT32)(1U))), (_INT32)(1U)))] = (bits_preg * (_INT32)(2U)) + (_INT32)(3U);
      (mvbits)[(_INT64)(-(i_preg_w2c_2 + _I4ASHR(_I4SHL((_INT32)(1U), _I4ASHR((bits_preg * (_INT32)(2U)) + (_INT32)(3U), (_INT32)(1U))), (_INT32)(1U))))] = (mvbits)[(_INT64)(i_preg_w2c_2 + _I4ASHR(_I4SHL((_INT32)(1U), _I4ASHR((bits_preg * (_INT32)(2U)) + (_INT32)(3U), (_INT32)(1U))), (_INT32)(1U)))];
    }
  }
  * refbits = 1U;
  _ub5_preg = _I4DIVFLOOR((_I4F8TRUNC(_F8F8FLOOR((__comma_preg / __comma_preg_w2c_0) + 1.00000000000000003643e-10)) * (_INT32)(2U)) + -2, 2U);
  for(bits_preg_w2c_0 = 0U; bits_preg_w2c_0 <= _ub5_preg; bits_preg_w2c_0 = bits_preg_w2c_0 + (_INT32)(1U))
  {
    _ub6_preg = (_I4SHL((_INT32)(1U), _I4ASHR((bits_preg_w2c_0 * (_INT32)(2U)) + (_INT32)(3U), (_INT32)(1U)) + (_INT32)(1U)) - _I4ASHR(_I4SHL((_INT32)(1U), _I4ASHR((bits_preg_w2c_0 * (_INT32)(2U)) + (_INT32)(3U), (_INT32)(1U)) + (_INT32)(1U)) + -1, (_INT32)(1U))) + -2;
    for(i_preg_w2c_3 = 0U; i_preg_w2c_3 <= _ub6_preg; i_preg_w2c_3 = i_preg_w2c_3 + (_INT32)(1U))
    {
      (refbits)[(_INT64)(i_preg_w2c_3 + _I4ASHR(_I4SHL((_INT32)(1U), _I4ASHR((bits_preg_w2c_0 * (_INT32)(2U)) + (_INT32)(3U), (_INT32)(1U)) + (_INT32)(1U)) + -1, (_INT32)(1U)))] = (bits_preg_w2c_0 * (_INT32)(2U)) + (_INT32)(3U);
    }
  }
  * byte_abs = 0U;
  _ub7_preg = (__cselect_preg / (_INT32)(2U)) + -2;
  for(i_preg_w2c_4 = 0U; i_preg_w2c_4 <= _ub7_preg; i_preg_w2c_4 = i_preg_w2c_4 + (_INT32)(1U))
  {
    (byte_abs)[(_INT64)((-i_preg_w2c_4)) + -1LL] = i_preg_w2c_4 + (_INT32)(1U);
    (byte_abs)[(_INT64)(i_preg_w2c_4) + 1LL] = (byte_abs)[(_INT64)((-i_preg_w2c_4)) + -1LL];
  }
  * spiral_search_y = 0U;
  * spiral_search_x = *spiral_search_y;
  k = 1U;
  _ub8_preg = _I4MAX(search_range, (_INT32)(1U)) + -1;
  for(l_preg = 0U; l_preg <= _ub8_preg; l_preg = l_preg + (_INT32)(1U))
  {
    for(i_preg_w2c_0 = 0U; i_preg_w2c_0 <= (l_preg + l_preg); i_preg_w2c_0 = i_preg_w2c_0 + (_INT32)(1U))
    {
      (spiral_search_x)[(_INT64)(k + (i_preg_w2c_0 * (_INT32)(2U)))] = i_preg_w2c_0 - l_preg;
      (spiral_search_y)[(_INT64)(k + (i_preg_w2c_0 * (_INT32)(2U)))] = -1 - l_preg;
      (spiral_search_x)[(_INT64)((k + (i_preg_w2c_0 * (_INT32)(2U)))) + 1LL] = i_preg_w2c_0 - l_preg;
      (spiral_search_y)[(_INT64)((k + (i_preg_w2c_0 * (_INT32)(2U)))) + 1LL] = l_preg + (_INT32)(1U);
    }
    i_preg_w2c_5 = _I4MAX((l_preg + l_preg) + (_INT32)(1U), (_INT32)(0U));
    for(i_preg_w2c_1 = 0U; i_preg_w2c_1 <= ((l_preg + l_preg) + 2); i_preg_w2c_1 = i_preg_w2c_1 + (_INT32)(1U))
    {
      (spiral_search_x)[(_INT64)((k + (i_preg_w2c_5 * (_INT32)(2U))) + (i_preg_w2c_1 * (_INT32)(2U)))] = -1 - l_preg;
      (spiral_search_y)[(_INT64)((k + (i_preg_w2c_5 * (_INT32)(2U))) + (i_preg_w2c_1 * (_INT32)(2U)))] = (i_preg_w2c_1 - l_preg) + -1;
      (spiral_search_x)[(_INT64)(((k + (i_preg_w2c_5 * (_INT32)(2U))) + (i_preg_w2c_1 * (_INT32)(2U)))) + 1LL] = l_preg + (_INT32)(1U);
      (spiral_search_y)[(_INT64)(((k + (i_preg_w2c_5 * (_INT32)(2U))) + (i_preg_w2c_1 * (_INT32)(2U)))) + 1LL] = (i_preg_w2c_1 - l_preg) + -1;
    }
    i_preg = _I4MAX((l_preg + l_preg) + 3, (_INT32)(0U));
    k = (k + (i_preg_w2c_5 * (_INT32)(2U))) + (i_preg * (_INT32)(2U));
  }
  if((input) -> FMEnable == (_INT32)(0U))
  {
    InitializeFastFullIntegerSearch();
  }
  return;
} /* Init_Motion_Search_Module */


extern void Clear_Motion_Search_Module()
{
  
  register _UINT64 __cselect_preg;
  
  mvbits = (_INT32 *)((_UINT64)(mvbits) - ((_UINT64) max_mvd * (_UINT64)(4U)));
  if(*(((_INT32 *)(img) + 16384LL) + 1787LL) > *(((_INT32 *)(img) + 16384LL) + 1788LL))
  {
    __cselect_preg = ((_UINT64)((_INT64)(*(((_INT32 *)(img) + 16384LL) + 1787LL))) * (_UINT64)(4U)) + (_UINT64)(4U);
  }
  else
  {
    __cselect_preg = ((_UINT64)((_INT64)(*(((_INT32 *)(img) + 16384LL) + 1788LL))) * (_UINT64)(4U)) + (_UINT64)(4U);
  }
  byte_abs = (_INT32 *)((_UINT64)(byte_abs) - __cselect_preg);
  free(spiral_search_x);
  free(spiral_search_y);
  free(mvbits);
  free(refbits);
  free(byte_abs);
  free_mem4Dint(motion_cost, (_INT32) 8U, (_INT32) 2U);
  if((input) -> FMEnable == (_INT32)(0U))
  {
    ClearFastFullIntegerSearch();
  }
  return;
} /* Clear_Motion_Search_Module */


extern _INT32 FullPelBlockMotionSearch(
  _UINT16 ** orig_pic,
  _INT16 ref,
  _INT32 list,
  _INT32 pic_pix_x,
  _INT32 pic_pix_y,
  _INT32 blocktype,
  _INT16 pred_mv_x,
  _INT16 pred_mv_y,
  _INT16 * mv_x,
  _INT16 * mv_y,
  _INT32 search_range,
  _INT32 min_mcost,
  _IEEE64 lambda)
{
  
  register _INT32 __cselect_preg;
  register _INT32 __cselect_preg_w2c_0;
  register _INT32 _ub9_preg;
  register _INT32 pos_preg;
  register _INT32 y_preg;
  register _UINT64 __comma_preg;
  register _INT32 _ub10_preg;
  register _INT32 x4_preg;
  _INT32 cand_x;
  _INT32 cand_y;
  _INT32 mcost;
  _UINT16 * orig_line;
  _UINT16 * (*get_ref_line)(_INT32, _UINT16 *, _INT32, _INT32, _INT32, _INT32);
  _UINT16 * ref_pic;
  _INT32 img_width;
  _INT32 img_height;
  _INT32 best_pos;
  _INT32 lambda_factor;
  _INT32 blocksize_y;
  _INT32 blocksize_x;
  _INT32 center_x;
  _INT32 center_y;
  _INT32 check_for_00;
  
  if((*(((_INT32 *)(img) + 16384LL) + 1716LL) != (_INT32)(0U)) && ((((img) -> mb_data + (img) -> current_mb_nr)) -> mb_field != (_INT32)(0U)))
  {
    if((img) -> current_mb_nr & (_INT32)(1U))
    {
      __cselect_preg = 4U;
    }
    else
    {
      __cselect_preg = 2U;
    }
    __cselect_preg_w2c_0 = __cselect_preg;
  }
  else
  {
    __cselect_preg_w2c_0 = 0U;
  }
  img_width = (*((listX)[list + __cselect_preg_w2c_0] + (_UINT64) ref)) -> size_x;
  img_height = (*((listX)[list + __cselect_preg_w2c_0] + (_UINT64) ref)) -> size_y;
  best_pos = 0U;
  lambda_factor = _I4F8TRUNC((lambda * 6.5536e+04) + 5.0e-01);
  blocksize_y = (((struct anonymous_w2c_3 *)((_UINT8 *)(input) + 80U))[blocktype][1U]).ProfileIDC;
  blocksize_x = (((struct anonymous_w2c_3 *)((_UINT8 *)(input) + 80U))[blocktype][0U]).ProfileIDC;
  center_x = (_INT32) * mv_x + pic_pix_x;
  center_y = (_INT32) * mv_y + pic_pix_y;
  check_for_00 = ((((_INT32)(blocktype) == (_INT32)(1U)) && ((input) -> rdopt == (_INT32)(0U))) && ((img) -> type != (_INT32)(1U))) && ((_INT32)((_UINT64) ref) == (_INT32)(0U));
  if((((((active_pps) -> weighted_pred_flag != 0U) && (((img) -> type == (_INT32)(0U)) || ((img) -> type == (_INT32)(3U)))) || (((active_pps) -> weighted_bipred_idc != 0U) && ((img) -> type == (_INT32)(1U)))) != (_INT32)(0U)) && ((input) -> UseWeightedReferenceME != (_INT32)(0U)))
  {
    ref_pic = (*((listX)[list + __cselect_preg_w2c_0] + (_UINT64) ref)) -> imgY_11_w;
  }
  else
  {
    ref_pic = (*((listX)[list + __cselect_preg_w2c_0] + (_UINT64) ref)) -> imgY_11;
  }
  if((((search_range < center_x) && (center_x < ((((img) -> width - search_range) - blocksize_x) + -1))) && (search_range < center_y)) && (center_y < ((((img) -> height - search_range) - blocksize_y) + -1)))
  {
    get_ref_line = &FastLineX;
  }
  else
  {
    get_ref_line = &UMVLineX;
  }
  _ub9_preg = (((search_range * (_INT32)(2U)) + (_INT32)(1U)) * ((search_range * (_INT32)(2U)) + (_INT32)(1U))) + -1;
  for(pos_preg = 0U; pos_preg <= _ub9_preg; pos_preg = pos_preg + (_INT32)(1U))
  {
    cand_x = (spiral_search_x)[(_INT64)(pos_preg)] + center_x;
    cand_y = (spiral_search_y)[(_INT64)(pos_preg)] + center_y;
    mcost = _I4ASHR(lambda_factor * ((mvbits)[(_INT64)(_I4SHL(cand_x, (_INT32)(2U)) - ((_INT32) pred_mv_x + _I4SHL(pic_pix_x, (_INT32)(2U))))] + (mvbits)[(_INT64)(_I4SHL(cand_y, (_INT32)(2U)) - ((_INT32) pred_mv_y + _I4SHL(pic_pix_y, (_INT32)(2U))))]), (_INT32)(16U));
    if(((check_for_00 != (_INT32)(0U)) && (pic_pix_x == cand_x)) && (pic_pix_y == cand_y))
    {
      mcost = mcost - _I4ASHR(lambda_factor * (_INT32)(16U), (_INT32)(16U));
    }
    if(min_mcost > mcost)
    {
      y_preg = 0U;
      while(blocksize_y > y_preg)
      {
        __comma_preg = (_UINT64)(_UINT64)(get_ref_line)(blocksize_x, ref_pic, cand_y + y_preg, cand_x, img_height, img_width);
        orig_line = (orig_pic)[(_INT64)(y_preg)];
        _ub10_preg = _I4ASHR(blocksize_x, (_INT32)(2U));
        for(x4_preg = 0U; x4_preg <= (_ub10_preg + -1); x4_preg = x4_preg + (_INT32)(1U))
        {
          mcost = (byte_abs)[(_INT64)((_INT32)(orig_line)[(_UINT64)(x4_preg)] - (_INT32)((_UINT16 *) __comma_preg)[(_UINT64)(x4_preg)])] + mcost;
          mcost = (byte_abs)[(_INT64)((_INT32) * (&(orig_line)[(_UINT64)(x4_preg)] + 1LL) - (_INT32) * (&((_UINT16 *) __comma_preg)[(_UINT64)(x4_preg)] + 1LL))] + mcost;
          mcost = (byte_abs)[(_INT64)((_INT32) * (&(orig_line)[(_UINT64)(x4_preg)] + 2LL) - (_INT32) * (&((_UINT16 *) __comma_preg)[(_UINT64)(x4_preg)] + 2LL))] + mcost;
          mcost = (byte_abs)[(_INT64)((_INT32) * (&(orig_line)[(_UINT64)(x4_preg)] + 3LL) - (_INT32) * (&((_UINT16 *) __comma_preg)[(_UINT64)(x4_preg)] + 3LL))] + mcost;
        }
        if(min_mcost <= mcost)
          goto _2306;
        y_preg = y_preg + (_INT32)(1U);
      }
      _2306 :;
      if(min_mcost > mcost)
      {
        best_pos = pos_preg;
        min_mcost = mcost;
      }
    }
  }
  if(best_pos != (_INT32)(0U))
  {
    * mv_x = (_UINT32)((_UINT16) * mv_x) + (_UINT32)(*(spiral_search_x + best_pos));
    * mv_y = (_UINT32)((_UINT16) * mv_y) + (_UINT32)(*(spiral_search_y + best_pos));
  }
  return min_mcost;
} /* FullPelBlockMotionSearch */


extern _INT32 FastFullPelBlockMotionSearch(
  _UINT16 ** orig_pic,
  _INT16 ref,
  _INT32 list,
  _INT32 pic_pix_x,
  _INT32 pic_pix_y,
  _INT32 blocktype,
  _INT16 pred_mv_x,
  _INT16 pred_mv_y,
  _INT16 * mv_x,
  _INT16 * mv_y,
  _INT32 search_range,
  _INT32 min_mcost,
  _IEEE64 lambda)
{
  
  register _INT32 _ub11_preg;
  register _INT32 pos_preg;
  _INT32 offset_x;
  _INT32 offset_y;
  _INT32 mcost;
  _INT32 lambda_factor;
  _INT32 best_pos;
  _INT32 block_index;
  _INT32 * block_sad;
  
  lambda_factor = _I4F8TRUNC((lambda * 6.5536e+04) + 5.0e-01);
  best_pos = 0U;
  block_index = _I4ASHR(pic_pix_x - (img) -> opix_x, (_INT32)(2U)) + (pic_pix_y - (img) -> opix_y);
  block_sad = *(*(*(*(BlockSAD + (_UINT64) list) + (_UINT64) ref) + (_UINT64) blocktype) + block_index);
  if(*(*(search_setup_done + (_UINT64) list) + (_UINT64) ref) == (_INT32)(0U))
  {
    SetupFastFullPelSearch((_INT16)(_INT32)((_UINT64) ref), (_INT32)((_UINT64) list));
  }
  offset_x = *(*(search_center_x + (_UINT64) list) + (_UINT64) ref) - (img) -> opix_x;
  offset_y = *(*(search_center_y + (_UINT64) list) + (_UINT64) ref) - (img) -> opix_y;
  if((input) -> rdopt == (_INT32)(0U))
  {
    mcost = *(block_sad + (_UINT64) * (*(pos_00 + (_UINT64) list) + (_UINT64) ref)) + _I4ASHR(lambda_factor * (*(mvbits + (_INT64)(-(_INT32) pred_mv_x)) + *(mvbits + (_INT64)(-(_INT32) pred_mv_y))), (_INT32)(16U));
    if(min_mcost > mcost)
    {
      min_mcost = mcost;
      best_pos = (_UINT64) * (*(pos_00 + (_UINT64) list) + (_UINT64) ref);
    }
  }
  _ub11_preg = (((search_range * (_INT32)(2U)) + (_INT32)(1U)) * ((search_range * (_INT32)(2U)) + (_INT32)(1U))) + -1;
  for(pos_preg = 0U; pos_preg <= _ub11_preg; pos_preg = pos_preg + (_INT32)(1U))
  {
    if((block_sad)[(_UINT64)(pos_preg)] < min_mcost)
    {
      mcost = (block_sad)[(_UINT64)(pos_preg)];
      mcost = mcost + _I4ASHR(lambda_factor * ((mvbits)[(_INT64)(_I4SHL((spiral_search_x)[(_INT64)(pos_preg)] + offset_x, (_INT32)(2U)) - (_INT32) pred_mv_x)] + (mvbits)[(_INT64)(_I4SHL((spiral_search_y)[(_INT64)(pos_preg)] + offset_y, (_INT32)(2U)) - (_INT32) pred_mv_y)]), (_INT32)(16U));
      if(min_mcost > mcost)
      {
        min_mcost = mcost;
        best_pos = pos_preg;
      }
    }
  }
  * mv_x = (_UINT32)(*(spiral_search_x + best_pos)) + (_UINT32)(offset_x);
  * mv_y = (_UINT32)(*(spiral_search_y + best_pos)) + (_UINT32)(offset_y);
  return min_mcost;
} /* FastFullPelBlockMotionSearch */


extern _INT32 SATD(
  _INT32 * diff,
  _INT32 use_hadamard)
{
  
  register _INT32 k_preg;
  register _INT32 k_preg_w2c_0;
  _INT32 satd;
  _INT32 dd;
  _INT32 d[16LL];
  
  satd = 0U;
  if(use_hadamard != (_INT32)(0U))
  {
    (d)[0U] = (*diff + *(diff + 12LL)) + (*(diff + 4LL) + *(diff + 8LL));
    (d)[8U] = (*diff + *(diff + 12LL)) - (*(diff + 4LL) + *(diff + 8LL));
    (d)[4U] = (*diff - *(diff + 12LL)) + (*(diff + 4LL) - *(diff + 8LL));
    (d)[12U] = (*diff - *(diff + 12LL)) - (*(diff + 4LL) - *(diff + 8LL));
    (d)[1U] = (*(diff + 1LL) + *(diff + 13LL)) + (*(diff + 5LL) + *(diff + 9LL));
    (d)[9U] = (*(diff + 1LL) + *(diff + 13LL)) - (*(diff + 5LL) + *(diff + 9LL));
    (d)[5U] = (*(diff + 1LL) - *(diff + 13LL)) + (*(diff + 5LL) - *(diff + 9LL));
    (d)[13U] = (*(diff + 1LL) - *(diff + 13LL)) - (*(diff + 5LL) - *(diff + 9LL));
    (d)[2U] = (*(diff + 2LL) + *(diff + 14LL)) + (*(diff + 6LL) + *(diff + 10LL));
    (d)[10U] = (*(diff + 2LL) + *(diff + 14LL)) - (*(diff + 6LL) + *(diff + 10LL));
    (d)[6U] = (*(diff + 2LL) - *(diff + 14LL)) + (*(diff + 6LL) - *(diff + 10LL));
    (d)[14U] = (*(diff + 2LL) - *(diff + 14LL)) - (*(diff + 6LL) - *(diff + 10LL));
    (d)[3U] = (*(diff + 3LL) + *(diff + 15LL)) + (*(diff + 7LL) + *(diff + 11LL));
    (d)[11U] = (*(diff + 3LL) + *(diff + 15LL)) - (*(diff + 7LL) + *(diff + 11LL));
    (d)[7U] = (*(diff + 3LL) - *(diff + 15LL)) + (*(diff + 7LL) - *(diff + 11LL));
    (d)[15U] = (*(diff + 3LL) - *(diff + 15LL)) - (*(diff + 7LL) - *(diff + 11LL));
    (d)[0U] = (((*diff + *(diff + 12LL)) + (*(diff + 4LL) + *(diff + 8LL))) + ((*(diff + 3LL) + *(diff + 15LL)) + (*(diff + 7LL) + *(diff + 11LL)))) + (((*(diff + 1LL) + *(diff + 13LL)) + (*(diff + 5LL) + *(diff + 9LL))) + ((*(diff + 2LL) + *(diff + 14LL)) + (*(diff + 6LL) + *(diff + 10LL))));
    (d)[1U] = (((*diff + *(diff + 12LL)) + (*(diff + 4LL) + *(diff + 8LL))) + ((*(diff + 3LL) + *(diff + 15LL)) + (*(diff + 7LL) + *(diff + 11LL)))) - (((*(diff + 1LL) + *(diff + 13LL)) + (*(diff + 5LL) + *(diff + 9LL))) + ((*(diff + 2LL) + *(diff + 14LL)) + (*(diff + 6LL) + *(diff + 10LL))));
    (d)[2U] = (((*diff + *(diff + 12LL)) + (*(diff + 4LL) + *(diff + 8LL))) - ((*(diff + 3LL) + *(diff + 15LL)) + (*(diff + 7LL) + *(diff + 11LL)))) + (((*(diff + 1LL) + *(diff + 13LL)) + (*(diff + 5LL) + *(diff + 9LL))) - ((*(diff + 2LL) + *(diff + 14LL)) + (*(diff + 6LL) + *(diff + 10LL))));
    (d)[3U] = (((*diff + *(diff + 12LL)) + (*(diff + 4LL) + *(diff + 8LL))) - ((*(diff + 3LL) + *(diff + 15LL)) + (*(diff + 7LL) + *(diff + 11LL)))) - (((*(diff + 1LL) + *(diff + 13LL)) + (*(diff + 5LL) + *(diff + 9LL))) - ((*(diff + 2LL) + *(diff + 14LL)) + (*(diff + 6LL) + *(diff + 10LL))));
    (d)[4U] = (((*diff - *(diff + 12LL)) + (*(diff + 4LL) - *(diff + 8LL))) + ((*(diff + 3LL) - *(diff + 15LL)) + (*(diff + 7LL) - *(diff + 11LL)))) + (((*(diff + 1LL) - *(diff + 13LL)) + (*(diff + 5LL) - *(diff + 9LL))) + ((*(diff + 2LL) - *(diff + 14LL)) + (*(diff + 6LL) - *(diff + 10LL))));
    (d)[5U] = (((*diff - *(diff + 12LL)) + (*(diff + 4LL) - *(diff + 8LL))) + ((*(diff + 3LL) - *(diff + 15LL)) + (*(diff + 7LL) - *(diff + 11LL)))) - (((*(diff + 1LL) - *(diff + 13LL)) + (*(diff + 5LL) - *(diff + 9LL))) + ((*(diff + 2LL) - *(diff + 14LL)) + (*(diff + 6LL) - *(diff + 10LL))));
    (d)[6U] = (((*diff - *(diff + 12LL)) + (*(diff + 4LL) - *(diff + 8LL))) - ((*(diff + 3LL) - *(diff + 15LL)) + (*(diff + 7LL) - *(diff + 11LL)))) + (((*(diff + 1LL) - *(diff + 13LL)) + (*(diff + 5LL) - *(diff + 9LL))) - ((*(diff + 2LL) - *(diff + 14LL)) + (*(diff + 6LL) - *(diff + 10LL))));
    (d)[7U] = (((*diff - *(diff + 12LL)) + (*(diff + 4LL) - *(diff + 8LL))) - ((*(diff + 3LL) - *(diff + 15LL)) + (*(diff + 7LL) - *(diff + 11LL)))) - (((*(diff + 1LL) - *(diff + 13LL)) + (*(diff + 5LL) - *(diff + 9LL))) - ((*(diff + 2LL) - *(diff + 14LL)) + (*(diff + 6LL) - *(diff + 10LL))));
    (d)[8U] = (((*diff + *(diff + 12LL)) - (*(diff + 4LL) + *(diff + 8LL))) + ((*(diff + 3LL) + *(diff + 15LL)) - (*(diff + 7LL) + *(diff + 11LL)))) + (((*(diff + 1LL) + *(diff + 13LL)) - (*(diff + 5LL) + *(diff + 9LL))) + ((*(diff + 2LL) + *(diff + 14LL)) - (*(diff + 6LL) + *(diff + 10LL))));
    (d)[9U] = (((*diff + *(diff + 12LL)) - (*(diff + 4LL) + *(diff + 8LL))) + ((*(diff + 3LL) + *(diff + 15LL)) - (*(diff + 7LL) + *(diff + 11LL)))) - (((*(diff + 1LL) + *(diff + 13LL)) - (*(diff + 5LL) + *(diff + 9LL))) + ((*(diff + 2LL) + *(diff + 14LL)) - (*(diff + 6LL) + *(diff + 10LL))));
    (d)[10U] = (((*diff + *(diff + 12LL)) - (*(diff + 4LL) + *(diff + 8LL))) - ((*(diff + 3LL) + *(diff + 15LL)) - (*(diff + 7LL) + *(diff + 11LL)))) + (((*(diff + 1LL) + *(diff + 13LL)) - (*(diff + 5LL) + *(diff + 9LL))) - ((*(diff + 2LL) + *(diff + 14LL)) - (*(diff + 6LL) + *(diff + 10LL))));
    (d)[11U] = (((*diff + *(diff + 12LL)) - (*(diff + 4LL) + *(diff + 8LL))) - ((*(diff + 3LL) + *(diff + 15LL)) - (*(diff + 7LL) + *(diff + 11LL)))) - (((*(diff + 1LL) + *(diff + 13LL)) - (*(diff + 5LL) + *(diff + 9LL))) - ((*(diff + 2LL) + *(diff + 14LL)) - (*(diff + 6LL) + *(diff + 10LL))));
    (d)[12U] = (((*diff - *(diff + 12LL)) - (*(diff + 4LL) - *(diff + 8LL))) + ((*(diff + 3LL) - *(diff + 15LL)) - (*(diff + 7LL) - *(diff + 11LL)))) + (((*(diff + 1LL) - *(diff + 13LL)) - (*(diff + 5LL) - *(diff + 9LL))) + ((*(diff + 2LL) - *(diff + 14LL)) - (*(diff + 6LL) - *(diff + 10LL))));
    (d)[13U] = (((*diff - *(diff + 12LL)) - (*(diff + 4LL) - *(diff + 8LL))) + ((*(diff + 3LL) - *(diff + 15LL)) - (*(diff + 7LL) - *(diff + 11LL)))) - (((*(diff + 1LL) - *(diff + 13LL)) - (*(diff + 5LL) - *(diff + 9LL))) + ((*(diff + 2LL) - *(diff + 14LL)) - (*(diff + 6LL) - *(diff + 10LL))));
    (d)[14U] = (((*diff - *(diff + 12LL)) - (*(diff + 4LL) - *(diff + 8LL))) - ((*(diff + 3LL) - *(diff + 15LL)) - (*(diff + 7LL) - *(diff + 11LL)))) + (((*(diff + 1LL) - *(diff + 13LL)) - (*(diff + 5LL) - *(diff + 9LL))) - ((*(diff + 2LL) - *(diff + 14LL)) - (*(diff + 6LL) - *(diff + 10LL))));
    (d)[15U] = (((*diff - *(diff + 12LL)) - (*(diff + 4LL) - *(diff + 8LL))) - ((*(diff + 3LL) - *(diff + 15LL)) - (*(diff + 7LL) - *(diff + 11LL)))) - (((*(diff + 1LL) - *(diff + 13LL)) - (*(diff + 5LL) - *(diff + 9LL))) - ((*(diff + 2LL) - *(diff + 14LL)) - (*(diff + 6LL) - *(diff + 10LL))));
    dd = (((*diff + *(diff + 12LL)) + (*(diff + 4LL) + *(diff + 8LL))) + ((*(diff + 3LL) + *(diff + 15LL)) + (*(diff + 7LL) + *(diff + 11LL)))) + (((*(diff + 1LL) + *(diff + 13LL)) + (*(diff + 5LL) + *(diff + 9LL))) + ((*(diff + 2LL) + *(diff + 14LL)) + (*(diff + 6LL) + *(diff + 10LL))));
    for(k_preg = 0U; k_preg <= (_INT32)(15U); k_preg = k_preg + (_INT32)(1U))
    {
      satd = satd + _I4ABS(dd);
      dd = (d)[(_INT64)(k_preg) + (_INT64)(1U)];
    }
    satd = _I4ASHR(satd + (_INT32)(1U), (_INT32)(1U));
  }
  else
  {
    for(k_preg_w2c_0 = 0U; k_preg_w2c_0 <= (_INT32)(15U); k_preg_w2c_0 = k_preg_w2c_0 + (_INT32)(1U))
    {
      satd = (byte_abs)[(_UINT64)(diff)[(_INT64)(k_preg_w2c_0)]] + satd;
    }
  }
  return satd;
} /* SATD */


extern _INT32 SATD8X8(
  _INT32 * diff,
  _INT32 use_hadamard)
{
  
  register _INT32 j_preg;
  register _INT32 i_preg;
  register _INT32 j_preg_w2c_0;
  register _INT32 i_preg_w2c_0;
  register _INT32 i_preg_w2c_1;
  _INT32 sad;
  _INT32 m_w2c_1[8LL][8LL];
  _INT32 m_w2c_2[8LL][8LL];
  
  sad = 0U;
  if(use_hadamard != (_INT32)(0U))
  {
    for(j_preg = 0U; j_preg <= (_INT32)(7U); j_preg = j_preg + (_INT32)(1U))
    {
      (m_w2c_2)[(_INT64)(j_preg)][0U] = (diff)[(_INT64)(_I4SHL(j_preg, (_INT32)(3U)))] + (diff)[(_INT64)(_I4SHL(j_preg, (_INT32)(3U))) + 4LL];
      (m_w2c_2)[(_INT64)(j_preg)][1U] = (diff)[(_INT64)(_I4SHL(j_preg, (_INT32)(3U))) + 1LL] + (diff)[(_INT64)(_I4SHL(j_preg, (_INT32)(3U))) + 5LL];
      (m_w2c_2)[(_INT64)(j_preg)][2U] = (diff)[(_INT64)(_I4SHL(j_preg, (_INT32)(3U))) + 2LL] + (diff)[(_INT64)(_I4SHL(j_preg, (_INT32)(3U))) + 6LL];
      (m_w2c_2)[(_INT64)(j_preg)][3U] = (diff)[(_INT64)(_I4SHL(j_preg, (_INT32)(3U))) + 3LL] + (diff)[(_INT64)(_I4SHL(j_preg, (_INT32)(3U))) + 7LL];
      (m_w2c_2)[(_INT64)(j_preg)][4U] = (diff)[(_INT64)(_I4SHL(j_preg, (_INT32)(3U)))] - (diff)[(_INT64)(_I4SHL(j_preg, (_INT32)(3U))) + 4LL];
      (m_w2c_2)[(_INT64)(j_preg)][5U] = (diff)[(_INT64)(_I4SHL(j_preg, (_INT32)(3U))) + 1LL] - (diff)[(_INT64)(_I4SHL(j_preg, (_INT32)(3U))) + 5LL];
      (m_w2c_2)[(_INT64)(j_preg)][6U] = (diff)[(_INT64)(_I4SHL(j_preg, (_INT32)(3U))) + 2LL] - (diff)[(_INT64)(_I4SHL(j_preg, (_INT32)(3U))) + 6LL];
      (m_w2c_2)[(_INT64)(j_preg)][7U] = (diff)[(_INT64)(_I4SHL(j_preg, (_INT32)(3U))) + 3LL] - (diff)[(_INT64)(_I4SHL(j_preg, (_INT32)(3U))) + 7LL];
      (m_w2c_1)[(_INT64)(j_preg)][0U] = ((diff)[(_INT64)(_I4SHL(j_preg, (_INT32)(3U)))] + (diff)[(_INT64)(_I4SHL(j_preg, (_INT32)(3U))) + 4LL]) + ((diff)[(_INT64)(_I4SHL(j_preg, (_INT32)(3U))) + 2LL] + (diff)[(_INT64)(_I4SHL(j_preg, (_INT32)(3U))) + 6LL]);
      (m_w2c_1)[(_INT64)(j_preg)][1U] = ((diff)[(_INT64)(_I4SHL(j_preg, (_INT32)(3U))) + 1LL] + (diff)[(_INT64)(_I4SHL(j_preg, (_INT32)(3U))) + 5LL]) + ((diff)[(_INT64)(_I4SHL(j_preg, (_INT32)(3U))) + 3LL] + (diff)[(_INT64)(_I4SHL(j_preg, (_INT32)(3U))) + 7LL]);
      (m_w2c_1)[(_INT64)(j_preg)][2U] = ((diff)[(_INT64)(_I4SHL(j_preg, (_INT32)(3U)))] + (diff)[(_INT64)(_I4SHL(j_preg, (_INT32)(3U))) + 4LL]) - ((diff)[(_INT64)(_I4SHL(j_preg, (_INT32)(3U))) + 2LL] + (diff)[(_INT64)(_I4SHL(j_preg, (_INT32)(3U))) + 6LL]);
      (m_w2c_1)[(_INT64)(j_preg)][3U] = ((diff)[(_INT64)(_I4SHL(j_preg, (_INT32)(3U))) + 1LL] + (diff)[(_INT64)(_I4SHL(j_preg, (_INT32)(3U))) + 5LL]) - ((diff)[(_INT64)(_I4SHL(j_preg, (_INT32)(3U))) + 3LL] + (diff)[(_INT64)(_I4SHL(j_preg, (_INT32)(3U))) + 7LL]);
      (m_w2c_1)[(_INT64)(j_preg)][4U] = ((diff)[(_INT64)(_I4SHL(j_preg, (_INT32)(3U)))] - (diff)[(_INT64)(_I4SHL(j_preg, (_INT32)(3U))) + 4LL]) + ((diff)[(_INT64)(_I4SHL(j_preg, (_INT32)(3U))) + 2LL] - (diff)[(_INT64)(_I4SHL(j_preg, (_INT32)(3U))) + 6LL]);
      (m_w2c_1)[(_INT64)(j_preg)][5U] = ((diff)[(_INT64)(_I4SHL(j_preg, (_INT32)(3U))) + 1LL] - (diff)[(_INT64)(_I4SHL(j_preg, (_INT32)(3U))) + 5LL]) + ((diff)[(_INT64)(_I4SHL(j_preg, (_INT32)(3U))) + 3LL] - (diff)[(_INT64)(_I4SHL(j_preg, (_INT32)(3U))) + 7LL]);
      (m_w2c_1)[(_INT64)(j_preg)][6U] = ((diff)[(_INT64)(_I4SHL(j_preg, (_INT32)(3U)))] - (diff)[(_INT64)(_I4SHL(j_preg, (_INT32)(3U))) + 4LL]) - ((diff)[(_INT64)(_I4SHL(j_preg, (_INT32)(3U))) + 2LL] - (diff)[(_INT64)(_I4SHL(j_preg, (_INT32)(3U))) + 6LL]);
      (m_w2c_1)[(_INT64)(j_preg)][7U] = ((diff)[(_INT64)(_I4SHL(j_preg, (_INT32)(3U))) + 1LL] - (diff)[(_INT64)(_I4SHL(j_preg, (_INT32)(3U))) + 5LL]) - ((diff)[(_INT64)(_I4SHL(j_preg, (_INT32)(3U))) + 3LL] - (diff)[(_INT64)(_I4SHL(j_preg, (_INT32)(3U))) + 7LL]);
      (m_w2c_2)[(_INT64)(j_preg)][0U] = (((diff)[(_INT64)(_I4SHL(j_preg, (_INT32)(3U)))] + (diff)[(_INT64)(_I4SHL(j_preg, (_INT32)(3U))) + 4LL]) + ((diff)[(_INT64)(_I4SHL(j_preg, (_INT32)(3U))) + 2LL] + (diff)[(_INT64)(_I4SHL(j_preg, (_INT32)(3U))) + 6LL])) + (((diff)[(_INT64)(_I4SHL(j_preg, (_INT32)(3U))) + 1LL] + (diff)[(_INT64)(_I4SHL(j_preg, (_INT32)(3U))) + 5LL]) + ((diff)[(_INT64)(_I4SHL(j_preg, (_INT32)(3U))) + 3LL] + (diff)[(_INT64)(_I4SHL(j_preg, (_INT32)(3U))) + 7LL]));
      (m_w2c_2)[(_INT64)(j_preg)][1U] = (((diff)[(_INT64)(_I4SHL(j_preg, (_INT32)(3U)))] + (diff)[(_INT64)(_I4SHL(j_preg, (_INT32)(3U))) + 4LL]) + ((diff)[(_INT64)(_I4SHL(j_preg, (_INT32)(3U))) + 2LL] + (diff)[(_INT64)(_I4SHL(j_preg, (_INT32)(3U))) + 6LL])) - (((diff)[(_INT64)(_I4SHL(j_preg, (_INT32)(3U))) + 1LL] + (diff)[(_INT64)(_I4SHL(j_preg, (_INT32)(3U))) + 5LL]) + ((diff)[(_INT64)(_I4SHL(j_preg, (_INT32)(3U))) + 3LL] + (diff)[(_INT64)(_I4SHL(j_preg, (_INT32)(3U))) + 7LL]));
      (m_w2c_2)[(_INT64)(j_preg)][2U] = (((diff)[(_INT64)(_I4SHL(j_preg, (_INT32)(3U)))] + (diff)[(_INT64)(_I4SHL(j_preg, (_INT32)(3U))) + 4LL]) - ((diff)[(_INT64)(_I4SHL(j_preg, (_INT32)(3U))) + 2LL] + (diff)[(_INT64)(_I4SHL(j_preg, (_INT32)(3U))) + 6LL])) + (((diff)[(_INT64)(_I4SHL(j_preg, (_INT32)(3U))) + 1LL] + (diff)[(_INT64)(_I4SHL(j_preg, (_INT32)(3U))) + 5LL]) - ((diff)[(_INT64)(_I4SHL(j_preg, (_INT32)(3U))) + 3LL] + (diff)[(_INT64)(_I4SHL(j_preg, (_INT32)(3U))) + 7LL]));
      (m_w2c_2)[(_INT64)(j_preg)][3U] = (((diff)[(_INT64)(_I4SHL(j_preg, (_INT32)(3U)))] + (diff)[(_INT64)(_I4SHL(j_preg, (_INT32)(3U))) + 4LL]) - ((diff)[(_INT64)(_I4SHL(j_preg, (_INT32)(3U))) + 2LL] + (diff)[(_INT64)(_I4SHL(j_preg, (_INT32)(3U))) + 6LL])) - (((diff)[(_INT64)(_I4SHL(j_preg, (_INT32)(3U))) + 1LL] + (diff)[(_INT64)(_I4SHL(j_preg, (_INT32)(3U))) + 5LL]) - ((diff)[(_INT64)(_I4SHL(j_preg, (_INT32)(3U))) + 3LL] + (diff)[(_INT64)(_I4SHL(j_preg, (_INT32)(3U))) + 7LL]));
      (m_w2c_2)[(_INT64)(j_preg)][4U] = (((diff)[(_INT64)(_I4SHL(j_preg, (_INT32)(3U)))] - (diff)[(_INT64)(_I4SHL(j_preg, (_INT32)(3U))) + 4LL]) + ((diff)[(_INT64)(_I4SHL(j_preg, (_INT32)(3U))) + 2LL] - (diff)[(_INT64)(_I4SHL(j_preg, (_INT32)(3U))) + 6LL])) + (((diff)[(_INT64)(_I4SHL(j_preg, (_INT32)(3U))) + 1LL] - (diff)[(_INT64)(_I4SHL(j_preg, (_INT32)(3U))) + 5LL]) + ((diff)[(_INT64)(_I4SHL(j_preg, (_INT32)(3U))) + 3LL] - (diff)[(_INT64)(_I4SHL(j_preg, (_INT32)(3U))) + 7LL]));
      (m_w2c_2)[(_INT64)(j_preg)][5U] = (((diff)[(_INT64)(_I4SHL(j_preg, (_INT32)(3U)))] - (diff)[(_INT64)(_I4SHL(j_preg, (_INT32)(3U))) + 4LL]) + ((diff)[(_INT64)(_I4SHL(j_preg, (_INT32)(3U))) + 2LL] - (diff)[(_INT64)(_I4SHL(j_preg, (_INT32)(3U))) + 6LL])) - (((diff)[(_INT64)(_I4SHL(j_preg, (_INT32)(3U))) + 1LL] - (diff)[(_INT64)(_I4SHL(j_preg, (_INT32)(3U))) + 5LL]) + ((diff)[(_INT64)(_I4SHL(j_preg, (_INT32)(3U))) + 3LL] - (diff)[(_INT64)(_I4SHL(j_preg, (_INT32)(3U))) + 7LL]));
      (m_w2c_2)[(_INT64)(j_preg)][6U] = (((diff)[(_INT64)(_I4SHL(j_preg, (_INT32)(3U)))] - (diff)[(_INT64)(_I4SHL(j_preg, (_INT32)(3U))) + 4LL]) - ((diff)[(_INT64)(_I4SHL(j_preg, (_INT32)(3U))) + 2LL] - (diff)[(_INT64)(_I4SHL(j_preg, (_INT32)(3U))) + 6LL])) + (((diff)[(_INT64)(_I4SHL(j_preg, (_INT32)(3U))) + 1LL] - (diff)[(_INT64)(_I4SHL(j_preg, (_INT32)(3U))) + 5LL]) - ((diff)[(_INT64)(_I4SHL(j_preg, (_INT32)(3U))) + 3LL] - (diff)[(_INT64)(_I4SHL(j_preg, (_INT32)(3U))) + 7LL]));
      (m_w2c_2)[(_INT64)(j_preg)][7U] = (((diff)[(_INT64)(_I4SHL(j_preg, (_INT32)(3U)))] - (diff)[(_INT64)(_I4SHL(j_preg, (_INT32)(3U))) + 4LL]) - ((diff)[(_INT64)(_I4SHL(j_preg, (_INT32)(3U))) + 2LL] - (diff)[(_INT64)(_I4SHL(j_preg, (_INT32)(3U))) + 6LL])) - (((diff)[(_INT64)(_I4SHL(j_preg, (_INT32)(3U))) + 1LL] - (diff)[(_INT64)(_I4SHL(j_preg, (_INT32)(3U))) + 5LL]) - ((diff)[(_INT64)(_I4SHL(j_preg, (_INT32)(3U))) + 3LL] - (diff)[(_INT64)(_I4SHL(j_preg, (_INT32)(3U))) + 7LL]));
    }
    for(i_preg = 0U; i_preg <= (_INT32)(7U); i_preg = i_preg + (_INT32)(1U))
    {
      (m_w2c_1)[0U][(_INT64)(i_preg)] = ((m_w2c_2)[0U][(_INT64)(i_preg)] + (m_w2c_2)[4U][(_INT64)(i_preg)]) + ((m_w2c_2)[2U][(_INT64)(i_preg)] + (m_w2c_2)[6U][(_INT64)(i_preg)]);
      (m_w2c_1)[1U][(_INT64)(i_preg)] = ((m_w2c_2)[1U][(_INT64)(i_preg)] + (m_w2c_2)[5U][(_INT64)(i_preg)]) + ((m_w2c_2)[3U][(_INT64)(i_preg)] + (m_w2c_2)[7U][(_INT64)(i_preg)]);
      (m_w2c_1)[2U][(_INT64)(i_preg)] = ((m_w2c_2)[0U][(_INT64)(i_preg)] + (m_w2c_2)[4U][(_INT64)(i_preg)]) - ((m_w2c_2)[2U][(_INT64)(i_preg)] + (m_w2c_2)[6U][(_INT64)(i_preg)]);
      (m_w2c_1)[3U][(_INT64)(i_preg)] = ((m_w2c_2)[1U][(_INT64)(i_preg)] + (m_w2c_2)[5U][(_INT64)(i_preg)]) - ((m_w2c_2)[3U][(_INT64)(i_preg)] + (m_w2c_2)[7U][(_INT64)(i_preg)]);
      (m_w2c_1)[4U][(_INT64)(i_preg)] = ((m_w2c_2)[0U][(_INT64)(i_preg)] - (m_w2c_2)[4U][(_INT64)(i_preg)]) + ((m_w2c_2)[2U][(_INT64)(i_preg)] - (m_w2c_2)[6U][(_INT64)(i_preg)]);
      (m_w2c_1)[5U][(_INT64)(i_preg)] = ((m_w2c_2)[1U][(_INT64)(i_preg)] - (m_w2c_2)[5U][(_INT64)(i_preg)]) + ((m_w2c_2)[3U][(_INT64)(i_preg)] - (m_w2c_2)[7U][(_INT64)(i_preg)]);
      (m_w2c_1)[6U][(_INT64)(i_preg)] = ((m_w2c_2)[0U][(_INT64)(i_preg)] - (m_w2c_2)[4U][(_INT64)(i_preg)]) - ((m_w2c_2)[2U][(_INT64)(i_preg)] - (m_w2c_2)[6U][(_INT64)(i_preg)]);
      (m_w2c_1)[7U][(_INT64)(i_preg)] = ((m_w2c_2)[1U][(_INT64)(i_preg)] - (m_w2c_2)[5U][(_INT64)(i_preg)]) - ((m_w2c_2)[3U][(_INT64)(i_preg)] - (m_w2c_2)[7U][(_INT64)(i_preg)]);
      (m_w2c_2)[0U][(_INT64)(i_preg)] = (((m_w2c_2)[0U][(_INT64)(i_preg)] + (m_w2c_2)[4U][(_INT64)(i_preg)]) + ((m_w2c_2)[2U][(_INT64)(i_preg)] + (m_w2c_2)[6U][(_INT64)(i_preg)])) + (((m_w2c_2)[1U][(_INT64)(i_preg)] + (m_w2c_2)[5U][(_INT64)(i_preg)]) + ((m_w2c_2)[3U][(_INT64)(i_preg)] + (m_w2c_2)[7U][(_INT64)(i_preg)]));
      (m_w2c_2)[1U][(_INT64)(i_preg)] = (m_w2c_1)[0U][(_INT64)(i_preg)] - (m_w2c_1)[1U][(_INT64)(i_preg)];
      (m_w2c_2)[2U][(_INT64)(i_preg)] = (m_w2c_1)[2U][(_INT64)(i_preg)] + (m_w2c_1)[3U][(_INT64)(i_preg)];
      (m_w2c_2)[3U][(_INT64)(i_preg)] = (m_w2c_1)[2U][(_INT64)(i_preg)] - (m_w2c_1)[3U][(_INT64)(i_preg)];
      (m_w2c_2)[4U][(_INT64)(i_preg)] = (m_w2c_1)[4U][(_INT64)(i_preg)] + (m_w2c_1)[5U][(_INT64)(i_preg)];
      (m_w2c_2)[5U][(_INT64)(i_preg)] = (m_w2c_1)[4U][(_INT64)(i_preg)] - (m_w2c_1)[5U][(_INT64)(i_preg)];
      (m_w2c_2)[6U][(_INT64)(i_preg)] = (m_w2c_1)[6U][(_INT64)(i_preg)] + (m_w2c_1)[7U][(_INT64)(i_preg)];
      (m_w2c_2)[7U][(_INT64)(i_preg)] = (m_w2c_1)[6U][(_INT64)(i_preg)] - (m_w2c_1)[7U][(_INT64)(i_preg)];
    }
    for(j_preg_w2c_0 = 0U; j_preg_w2c_0 <= (_INT32)(7U); j_preg_w2c_0 = j_preg_w2c_0 + (_INT32)(1U))
    {
      for(i_preg_w2c_0 = 0U; i_preg_w2c_0 <= (_INT32)(7U); i_preg_w2c_0 = i_preg_w2c_0 + (_INT32)(1U))
      {
        sad = sad + _I4ABS((m_w2c_2)[(_INT64)(j_preg_w2c_0)][(_INT64)(i_preg_w2c_0)]);
      }
    }
    sad = _I4ASHR(sad + (_INT32)(2U), (_INT32)(2U));
  }
  else
  {
    for(i_preg_w2c_1 = 0U; i_preg_w2c_1 <= (_INT32)(63U); i_preg_w2c_1 = i_preg_w2c_1 + (_INT32)(1U))
    {
      sad = (byte_abs)[(_UINT64)(diff)[(_INT64)(i_preg_w2c_1)]] + sad;
    }
  }
  return sad;
} /* SATD8X8 */


extern _INT32 find_SATD(
  _INT32(*curr_diff)[16LL],
  _INT32 use_hadamard,
  _INT32 blocktype)
{
  
  register _INT32 __cselect_preg;
  register _INT32 y_preg;
  register _INT32 x_preg;
  register _INT32 _temp_14_preg;
  register _INT32 j_preg;
  register _INT32 _ub12_preg;
  register _INT32 i_preg;
  register _INT32 __comma_preg;
  register _INT32 __comma_preg_w2c_0;
  register _INT32 __comma_preg_w2c_1;
  register _INT32 __comma_preg_w2c_2;
  register _INT32 __comma_preg_w2c_3;
  register _INT32 __comma_preg_w2c_4;
  register _INT32 __comma_preg_w2c_5;
  register _INT32 __comma_preg_w2c_6;
  register _INT32 __comma_preg_w2c_7;
  register _INT32 __comma_preg_w2c_8;
  register _INT32 _ub13_preg;
  register _INT32 i_preg_w2c_0;
  _INT32 k;
  _INT32 sad;
  _INT32 block_size_x;
  _INT32 block_size_y;
  _INT32 diff[256LL];
  
  sad = 0U;
  block_size_x = (((struct anonymous_w2c_3 *)((_UINT8 *)(input) + 80U))[blocktype][0U]).ProfileIDC;
  block_size_y = (((struct anonymous_w2c_3 *)((_UINT8 *)(input) + 80U))[blocktype][1U]).ProfileIDC;
  if((_INT32)(blocktype) > (_INT32)(4U))
  {
    __cselect_preg = 4U;
  }
  else
  {
    __cselect_preg = 8U;
  }
  k = 0U;
  for(y_preg = 0U; block_size_y > (__cselect_preg * y_preg); y_preg = y_preg + (_INT32)(1U))
  {
    for(x_preg = 0U; block_size_x > (__cselect_preg * x_preg); x_preg = x_preg + (_INT32)(1U))
    {
      _temp_14_preg = k;
      j_preg = 0U;
      k = _temp_14_preg + (j_preg * (((__cselect_preg + (__cselect_preg * x_preg)) > (__cselect_preg * x_preg)) ? __cselect_preg : 0U));
      while((__cselect_preg + (__cselect_preg * y_preg)) > (j_preg + (__cselect_preg * y_preg)))
      {
        _ub12_preg = __cselect_preg + -1;
        for(i_preg = 0U; i_preg <= _ub12_preg; i_preg = i_preg + (_INT32)(1U))
        {
          (diff)[(_INT64)(k + i_preg)] = (*curr_diff)[(_UINT64)((_INT64)(i_preg + (__cselect_preg * x_preg))) + ((_UINT64)((_INT64)(j_preg + (__cselect_preg * y_preg))) * (_UINT64)(16U))];
        }
        j_preg = j_preg + (_INT32)(1U);
        k = _temp_14_preg + (j_preg * (((__cselect_preg + (__cselect_preg * x_preg)) > (__cselect_preg * x_preg)) ? __cselect_preg : 0U));
      }
      k = _temp_14_preg + ((((__cselect_preg + (__cselect_preg * x_preg)) > (__cselect_preg * x_preg)) ? __cselect_preg : 0U) * (((__cselect_preg + (__cselect_preg * y_preg)) > (__cselect_preg * y_preg)) ? __cselect_preg : 0U));
    }
  }
  if(use_hadamard != (_INT32)(0U))
  {
    switch(blocktype)
    {
    case 0 :
      goto _5378;
    case 1 :
      goto _3330;
    case 2 :
      goto _3842;
    case 3 :
      goto _4098;
    case 4 :
      goto _4354;
    case 5 :
      goto _4610;
    case 6 :
      goto _4866;
    case 7 :
      goto _5122;
    default :
      goto _5378;
    }
    _3330 :;
    __comma_preg = SATD8X8(diff, (input) -> hadamard);
    __comma_preg_w2c_0 = SATD8X8((_INT32 *) & diff[64], (input) -> hadamard);
    __comma_preg_w2c_1 = SATD8X8((_INT32 *) & diff[128], (input) -> hadamard);
    __comma_preg_w2c_2 = SATD8X8((_INT32 *) & diff[192], (input) -> hadamard);
    sad = __comma_preg_w2c_2 + (__comma_preg_w2c_1 + (__comma_preg + __comma_preg_w2c_0));
    goto _3586;
    _3842 :;
    _4098 :;
    __comma_preg_w2c_3 = SATD8X8(diff, (input) -> hadamard);
    __comma_preg_w2c_4 = SATD8X8((_INT32 *) & diff[64], (input) -> hadamard);
    sad = __comma_preg_w2c_3 + __comma_preg_w2c_4;
    goto _3586;
    _4354 :;
    __comma_preg_w2c_5 = SATD8X8(diff, (input) -> hadamard);
    sad = __comma_preg_w2c_5;
    goto _3586;
    _4610 :;
    _4866 :;
    __comma_preg_w2c_6 = SATD(diff, (input) -> hadamard);
    __comma_preg_w2c_7 = SATD((_INT32 *) & diff[16], (input) -> hadamard);
    sad = __comma_preg_w2c_6 + __comma_preg_w2c_7;
    goto _3586;
    _5122 :;
    __comma_preg_w2c_8 = SATD(diff, (input) -> hadamard);
    sad = __comma_preg_w2c_8;
    goto _3586;
    _5378 :;
    sad = -1LL;
    _3586 :;
  }
  else
  {
    _ub13_preg = (block_size_x * block_size_y) + -1;
    for(i_preg_w2c_0 = 0U; i_preg_w2c_0 <= _ub13_preg; i_preg_w2c_0 = i_preg_w2c_0 + (_INT32)(1U))
    {
      sad = (byte_abs)[(_UINT64)(diff)[(_INT64)(i_preg_w2c_0)]] + sad;
    }
  }
  return sad;
} /* find_SATD */


extern _INT32 SubPelBlockMotionSearch(
  _UINT16 ** orig_pic,
  _INT16 ref,
  _INT32 list,
  _INT32 pic_pix_x,
  _INT32 pic_pix_y,
  _INT32 blocktype,
  _INT16 pred_mv_x,
  _INT16 pred_mv_y,
  _INT16 * mv_x,
  _INT16 * mv_y,
  _INT32 search_pos_w2c_2,
  _INT32 search_pos_w2c_4,
  _INT32 min_mcost,
  _IEEE64 lambda)
{
  
  register _INT32 __cselect_preg;
  register _INT32 __cselect_preg_w2c_0;
  register _INT32 __cselect_preg_w2c_1;
  register _INT32 __cselect_preg_w2c_2;
  register _INT32 pos_preg;
  register _INT32 whiledo_var_preg;
  register _INT32 x0_preg;
  register _UINT32 __comma_preg;
  register _UINT32 __comma_preg_w2c_0;
  register _UINT32 __comma_preg_w2c_1;
  register _UINT32 __comma_preg_w2c_2;
  register _UINT32 __comma_preg_w2c_3;
  register _UINT32 __comma_preg_w2c_4;
  register _UINT32 __comma_preg_w2c_5;
  register _UINT32 __comma_preg_w2c_6;
  register _UINT32 __comma_preg_w2c_7;
  register _UINT32 __comma_preg_w2c_8;
  register _UINT32 __comma_preg_w2c_9;
  register _UINT32 __comma_preg_w2c_10;
  register _UINT32 __comma_preg_w2c_11;
  register _UINT32 __comma_preg_w2c_12;
  register _UINT32 __comma_preg_w2c_13;
  register _UINT32 __comma_preg_w2c_14;
  register _INT32 __comma_preg_w2c_15;
  register _INT32 __comma_preg_w2c_16;
  register _INT32 pos_preg_w2c_0;
  register _INT32 whiledo_var_preg_w2c_0;
  register _INT32 x0_preg_w2c_0;
  register _UINT32 __comma_preg_w2c_17;
  register _UINT32 __comma_preg_w2c_18;
  register _UINT32 __comma_preg_w2c_19;
  register _UINT32 __comma_preg_w2c_20;
  register _UINT32 __comma_preg_w2c_21;
  register _UINT32 __comma_preg_w2c_22;
  register _UINT32 __comma_preg_w2c_23;
  register _UINT32 __comma_preg_w2c_24;
  register _UINT32 __comma_preg_w2c_25;
  register _UINT32 __comma_preg_w2c_26;
  register _UINT32 __comma_preg_w2c_27;
  register _UINT32 __comma_preg_w2c_28;
  register _UINT32 __comma_preg_w2c_29;
  register _UINT32 __comma_preg_w2c_30;
  register _UINT32 __comma_preg_w2c_31;
  register _UINT32 __comma_preg_w2c_32;
  register _INT32 __comma_preg_w2c_33;
  register _INT32 __comma_preg_w2c_34;
  _INT32 curr_diff[16LL][16LL];
  _INT32 diff[16LL];
  _INT32 best_pos;
  _INT32 mcost;
  _INT32 abort_search;
  _INT32 cand_mv_x;
  _INT32 cand_mv_y;
  _INT32 max_pos_x_w2c_4;
  _INT32 max_pos_y_w2c_4;
  _UINT16 * orig_line;
  _UINT16 ** ref_pic;
  struct storable_picture * ref_picture;
  _INT32 lambda_factor;
  _INT32 check_position0;
  _INT32 blocksize_x;
  _INT32 blocksize_y;
  _INT32 min_pos_w2c_2;
  _INT32 img_width;
  _INT32 img_height;
  _INT32 qpelstart;
  
  lambda_factor = _I4F8TRUNC((lambda * 6.5536e+04) + 5.0e-01);
  check_position0 = ((((((blocktype == (_INT32)(1U)) && ((_INT32)(*mv_x) == (_INT32)(0U))) && ((_INT32)(*mv_y) == (_INT32)(0U))) && ((input) -> hadamard != (_INT32)(0U))) && ((input) -> rdopt == (_INT32)(0U))) && ((img) -> type != (_INT32)(1U))) && ((_INT32)(ref) == (_INT32)(0U));
  blocksize_x = (((struct anonymous_w2c_3 *)((_UINT8 *)(input) + 80U))[blocktype][0U]).ProfileIDC;
  blocksize_y = (((struct anonymous_w2c_3 *)((_UINT8 *)(input) + 80U))[blocktype][1U]).ProfileIDC;
  min_pos_w2c_2 = ((input) -> hadamard == (_INT32)(0U)) || ((input) -> hadamardqpel != (_INT32)(0U));
  if((input) -> hadamard != (_INT32)(0U))
  {
    __cselect_preg = _I4MAX(search_pos_w2c_2, (_INT32)(1U));
  }
  else
  {
    __cselect_preg = search_pos_w2c_2;
  }
  if((*(((_INT32 *)(img) + 16384LL) + 1716LL) != (_INT32)(0U)) && ((((img) -> mb_data + (img) -> current_mb_nr)) -> mb_field != (_INT32)(0U)))
  {
    if((img) -> current_mb_nr & (_INT32)(1U))
    {
      __cselect_preg_w2c_0 = 4U;
    }
    else
    {
      __cselect_preg_w2c_0 = 2U;
    }
    __cselect_preg_w2c_1 = __cselect_preg_w2c_0;
  }
  else
  {
    __cselect_preg_w2c_1 = 0U;
  }
  if((input) -> hadamardqpel == (_INT32)(0U))
  {
    __cselect_preg_w2c_2 = (input) -> hadamard;
  }
  else
  {
    __cselect_preg_w2c_2 = 0U;
  }
  qpelstart = (input) -> hadamardqpel == (_INT32)(0U);
  ref_picture = *((listX)[list + __cselect_preg_w2c_1] + ref);
  if((((((active_pps) -> weighted_pred_flag != 0U) && (((img) -> type == (_INT32)(0U)) || ((img) -> type == (_INT32)(3U)))) || (((active_pps) -> weighted_bipred_idc != 0U) && ((img) -> type == (_INT32)(1U)))) != (_INT32)(0U)) && ((input) -> UseWeightedReferenceME != (_INT32)(0U)))
  {
    ref_pic = (*((listX)[list + __cselect_preg_w2c_1] + ref)) -> imgY_ups_w;
  }
  else
  {
    ref_pic = (*((listX)[list + __cselect_preg_w2c_1] + ref)) -> imgY_ups;
  }
  img_width = (ref_picture) -> size_x;
  img_height = (ref_picture) -> size_y;
  max_pos_x_w2c_4 = _I4SHL(((ref_picture) -> size_x - blocksize_x) + (_INT32)(1U), (_INT32)(2U));
  max_pos_y_w2c_4 = _I4SHL(((ref_picture) -> size_y - blocksize_y) + (_INT32)(1U), (_INT32)(2U));
  * mv_x = _I4SHL((_INT32)(*mv_x), (_INT32)(2U));
  * mv_y = _I4SHL((_INT32) * mv_y, (_INT32)(2U));
  if((((((_INT32) * mv_x + _I4SHL(pic_pix_x, (_INT32)(2U))) > (_INT32)(1U)) && (((_INT32) * mv_x + _I4SHL(pic_pix_x, (_INT32)(2U))) < (max_pos_x_w2c_4 + -2))) && (((_INT32)(*mv_y) + _I4SHL(pic_pix_y, (_INT32)(2U))) > (_INT32)(1U))) && (((_INT32)(*mv_y) + _I4SHL(pic_pix_y, (_INT32)(2U))) < (max_pos_y_w2c_4 + -2)))
  {
    PelY_14 = &FastPelY_14;
  }
  else
  {
    PelY_14 = &UMVPelY_14;
  }
  best_pos = 0U;
  for(pos_preg = 0U; pos_preg <= ((__cselect_preg - min_pos_w2c_2) + -1); pos_preg = pos_preg + (_INT32)(1U))
  {
    cand_mv_x = (_INT32)((_UINT16)(mv_x)[0]) + _I4SHL((spiral_search_x)[(_INT64)(min_pos_w2c_2 + pos_preg)], (_INT32)(1U));
    cand_mv_y = (_INT32)(mv_y)[0] + _I4SHL((spiral_search_y)[(_INT64)(min_pos_w2c_2 + pos_preg)], (_INT32)(1U));
    mcost = _I4ASHR(lambda_factor * ((mvbits)[(_INT64)(cand_mv_x - (_INT32) pred_mv_x)] + (mvbits)[(_INT64)(cand_mv_y - (_INT32) pred_mv_y)]), (_INT32)(16U));
    if((check_position0 != (_INT32)(0U)) && ((min_pos_w2c_2 + pos_preg) == (_INT32)(0U)))
    {
      mcost = mcost - _I4ASHR(lambda_factor * (_INT32)(16U), (_INT32)(16U));
    }
    if(min_mcost > mcost)
    {
      abort_search = 0U;
      whiledo_var_preg = 0U;
      while((blocksize_y > (whiledo_var_preg * (_INT32)(4U))) && (abort_search == (_INT32)(0U)))
      {
        x0_preg = 0U;
        while(blocksize_x > (x0_preg * (_INT32)(4U)))
        {
          orig_line = (orig_pic)[(_INT64)(whiledo_var_preg * (_INT32)(4U))];
          __comma_preg = (PelY_14)(ref_pic, cand_mv_y + _I4SHL(pic_pix_y + (whiledo_var_preg * (_INT32)(4U)), (_INT32)(2U)), cand_mv_x + _I4SHL(pic_pix_x + (x0_preg * (_INT32)(4U)), (_INT32)(2U)), img_height, img_width);
          * diff = (_INT32)(orig_line)[(_INT64)(x0_preg * (_INT32)(4U))] - (_INT32)((_UINT16)(__comma_preg));
          __comma_preg_w2c_0 = (PelY_14)(ref_pic, cand_mv_y + _I4SHL(pic_pix_y + (whiledo_var_preg * (_INT32)(4U)), (_INT32)(2U)), (cand_mv_x + _I4SHL(pic_pix_x + (x0_preg * (_INT32)(4U)), (_INT32)(2U))) + (_INT32)(4U), img_height, img_width);
          * (diff + 1LL) = (_INT32)(orig_line)[(_INT64)((x0_preg * (_INT32)(4U))) + 1LL] - (_INT32)((_UINT16)(__comma_preg_w2c_0));
          __comma_preg_w2c_1 = (PelY_14)(ref_pic, cand_mv_y + _I4SHL(pic_pix_y + (whiledo_var_preg * (_INT32)(4U)), (_INT32)(2U)), (cand_mv_x + _I4SHL(pic_pix_x + (x0_preg * (_INT32)(4U)), (_INT32)(2U))) + (_INT32)(8U), img_height, img_width);
          * (diff + 2LL) = (_INT32)(orig_line)[(_INT64)((x0_preg * (_INT32)(4U))) + 2LL] - (_INT32)((_UINT16)(__comma_preg_w2c_1));
          __comma_preg_w2c_2 = (PelY_14)(ref_pic, cand_mv_y + _I4SHL(pic_pix_y + (whiledo_var_preg * (_INT32)(4U)), (_INT32)(2U)), (cand_mv_x + _I4SHL(pic_pix_x + (x0_preg * (_INT32)(4U)), (_INT32)(2U))) + (_INT32)(12U), img_height, img_width);
          * (diff + 3LL) = (_INT32)(orig_line)[(_INT64)((x0_preg * (_INT32)(4U))) + 3LL] - (_INT32)((_UINT16)(__comma_preg_w2c_2));
          orig_line = (orig_pic)[(_INT64)((whiledo_var_preg * (_INT32)(4U))) + 1LL];
          __comma_preg_w2c_3 = (PelY_14)(ref_pic, (cand_mv_y + _I4SHL(pic_pix_y + (whiledo_var_preg * (_INT32)(4U)), (_INT32)(2U))) + (_INT32)(4U), cand_mv_x + _I4SHL(pic_pix_x + (x0_preg * (_INT32)(4U)), (_INT32)(2U)), img_height, img_width);
          * (diff + 4LL) = (_INT32)(orig_line)[(_INT64)(x0_preg * (_INT32)(4U))] - (_INT32)((_UINT16)(__comma_preg_w2c_3));
          __comma_preg_w2c_4 = (PelY_14)(ref_pic, (cand_mv_y + _I4SHL(pic_pix_y + (whiledo_var_preg * (_INT32)(4U)), (_INT32)(2U))) + (_INT32)(4U), (cand_mv_x + _I4SHL(pic_pix_x + (x0_preg * (_INT32)(4U)), (_INT32)(2U))) + (_INT32)(4U), img_height, img_width);
          * (diff + 5LL) = (_INT32)(orig_line)[(_INT64)((x0_preg * (_INT32)(4U))) + 1LL] - (_INT32)((_UINT16)(__comma_preg_w2c_4));
          __comma_preg_w2c_5 = (PelY_14)(ref_pic, (cand_mv_y + _I4SHL(pic_pix_y + (whiledo_var_preg * (_INT32)(4U)), (_INT32)(2U))) + (_INT32)(4U), (cand_mv_x + _I4SHL(pic_pix_x + (x0_preg * (_INT32)(4U)), (_INT32)(2U))) + (_INT32)(8U), img_height, img_width);
          * (diff + 6LL) = (_INT32)(orig_line)[(_INT64)((x0_preg * (_INT32)(4U))) + 2LL] - (_INT32)((_UINT16)(__comma_preg_w2c_5));
          __comma_preg_w2c_6 = (PelY_14)(ref_pic, (cand_mv_y + _I4SHL(pic_pix_y + (whiledo_var_preg * (_INT32)(4U)), (_INT32)(2U))) + (_INT32)(4U), (cand_mv_x + _I4SHL(pic_pix_x + (x0_preg * (_INT32)(4U)), (_INT32)(2U))) + (_INT32)(12U), img_height, img_width);
          * (diff + 7LL) = (_INT32)(orig_line)[(_INT64)((x0_preg * (_INT32)(4U))) + 3LL] - (_INT32)((_UINT16)(__comma_preg_w2c_6));
          orig_line = (orig_pic)[(_INT64)((whiledo_var_preg * (_INT32)(4U))) + 2LL];
          __comma_preg_w2c_7 = (PelY_14)(ref_pic, (cand_mv_y + _I4SHL(pic_pix_y + (whiledo_var_preg * (_INT32)(4U)), (_INT32)(2U))) + (_INT32)(8U), cand_mv_x + _I4SHL(pic_pix_x + (x0_preg * (_INT32)(4U)), (_INT32)(2U)), img_height, img_width);
          * (diff + 8LL) = (_INT32)(orig_line)[(_INT64)(x0_preg * (_INT32)(4U))] - (_INT32)((_UINT16)(__comma_preg_w2c_7));
          __comma_preg_w2c_8 = (PelY_14)(ref_pic, (cand_mv_y + _I4SHL(pic_pix_y + (whiledo_var_preg * (_INT32)(4U)), (_INT32)(2U))) + (_INT32)(8U), (cand_mv_x + _I4SHL(pic_pix_x + (x0_preg * (_INT32)(4U)), (_INT32)(2U))) + (_INT32)(4U), img_height, img_width);
          * (diff + 9LL) = (_INT32)(orig_line)[(_INT64)((x0_preg * (_INT32)(4U))) + 1LL] - (_INT32)((_UINT16)(__comma_preg_w2c_8));
          __comma_preg_w2c_9 = (PelY_14)(ref_pic, (cand_mv_y + _I4SHL(pic_pix_y + (whiledo_var_preg * (_INT32)(4U)), (_INT32)(2U))) + (_INT32)(8U), (cand_mv_x + _I4SHL(pic_pix_x + (x0_preg * (_INT32)(4U)), (_INT32)(2U))) + (_INT32)(8U), img_height, img_width);
          * (diff + 10LL) = (_INT32)(orig_line)[(_INT64)((x0_preg * (_INT32)(4U))) + 2LL] - (_INT32)((_UINT16)(__comma_preg_w2c_9));
          __comma_preg_w2c_10 = (PelY_14)(ref_pic, (cand_mv_y + _I4SHL(pic_pix_y + (whiledo_var_preg * (_INT32)(4U)), (_INT32)(2U))) + (_INT32)(8U), (cand_mv_x + _I4SHL(pic_pix_x + (x0_preg * (_INT32)(4U)), (_INT32)(2U))) + (_INT32)(12U), img_height, img_width);
          * (diff + 11LL) = (_INT32)(orig_line)[(_INT64)((x0_preg * (_INT32)(4U))) + 3LL] - (_INT32)((_UINT16)(__comma_preg_w2c_10));
          orig_line = (orig_pic)[(_INT64)((whiledo_var_preg * (_INT32)(4U))) + 3LL];
          __comma_preg_w2c_11 = (PelY_14)(ref_pic, (cand_mv_y + _I4SHL(pic_pix_y + (whiledo_var_preg * (_INT32)(4U)), (_INT32)(2U))) + (_INT32)(12U), cand_mv_x + _I4SHL(pic_pix_x + (x0_preg * (_INT32)(4U)), (_INT32)(2U)), img_height, img_width);
          * (diff + 12LL) = (_INT32)(orig_line)[(_INT64)(x0_preg * (_INT32)(4U))] - (_INT32)((_UINT16)(__comma_preg_w2c_11));
          __comma_preg_w2c_12 = (PelY_14)(ref_pic, (cand_mv_y + _I4SHL(pic_pix_y + (whiledo_var_preg * (_INT32)(4U)), (_INT32)(2U))) + (_INT32)(12U), (cand_mv_x + _I4SHL(pic_pix_x + (x0_preg * (_INT32)(4U)), (_INT32)(2U))) + (_INT32)(4U), img_height, img_width);
          * (diff + 13LL) = (_INT32)(orig_line)[(_INT64)((x0_preg * (_INT32)(4U))) + 1LL] - (_INT32)((_UINT16)(__comma_preg_w2c_12));
          __comma_preg_w2c_13 = (PelY_14)(ref_pic, (cand_mv_y + _I4SHL(pic_pix_y + (whiledo_var_preg * (_INT32)(4U)), (_INT32)(2U))) + (_INT32)(12U), (cand_mv_x + _I4SHL(pic_pix_x + (x0_preg * (_INT32)(4U)), (_INT32)(2U))) + (_INT32)(8U), img_height, img_width);
          * (diff + 14LL) = (_INT32)(orig_line)[(_INT64)((x0_preg * (_INT32)(4U))) + 2LL] - (_INT32)((_UINT16)(__comma_preg_w2c_13));
          __comma_preg_w2c_14 = (PelY_14)(ref_pic, (cand_mv_y + _I4SHL(pic_pix_y + (whiledo_var_preg * (_INT32)(4U)), (_INT32)(2U))) + (_INT32)(12U), (cand_mv_x + _I4SHL(pic_pix_x + (x0_preg * (_INT32)(4U)), (_INT32)(2U))) + (_INT32)(12U), img_height, img_width);
          * (diff + 15LL) = (_INT32)(orig_line)[(_INT64)((x0_preg * (_INT32)(4U))) + 3LL] - (_INT32)((_UINT16)(__comma_preg_w2c_14));
          if(((input)[805LL]).ProfileIDC == (_INT32)(0U))
          {
            __comma_preg_w2c_15 = SATD(diff, __cselect_preg_w2c_2);
            mcost = mcost + __comma_preg_w2c_15;
            if(min_mcost < mcost)
            {
              abort_search = 1U;
              goto _2050;
            }
          }
          else
          {
            (curr_diff)[whiledo_var_preg * (_INT32)(4U)][x0_preg * (_INT32)(4U)] = (diff)[0LL];
            (curr_diff)[whiledo_var_preg * (_INT32)(4U)][(x0_preg * (_INT32)(4U)) + 1] = (diff)[1LL];
            (curr_diff)[whiledo_var_preg * (_INT32)(4U)][(x0_preg * (_INT32)(4U)) + 2] = (diff)[2LL];
            (curr_diff)[whiledo_var_preg * (_INT32)(4U)][(x0_preg * (_INT32)(4U)) + 3] = (diff)[3LL];
            (curr_diff)[(whiledo_var_preg * (_INT32)(4U)) + 1][x0_preg * (_INT32)(4U)] = (diff)[4LL];
            (curr_diff)[(whiledo_var_preg * (_INT32)(4U)) + 1][(x0_preg * (_INT32)(4U)) + 1] = (diff)[5LL];
            (curr_diff)[(whiledo_var_preg * (_INT32)(4U)) + 1][(x0_preg * (_INT32)(4U)) + 2] = (diff)[6LL];
            (curr_diff)[(whiledo_var_preg * (_INT32)(4U)) + 1][(x0_preg * (_INT32)(4U)) + 3] = (diff)[7LL];
            (curr_diff)[(whiledo_var_preg * (_INT32)(4U)) + 2][x0_preg * (_INT32)(4U)] = (diff)[8LL];
            (curr_diff)[(whiledo_var_preg * (_INT32)(4U)) + 2][(x0_preg * (_INT32)(4U)) + 1] = (diff)[9LL];
            (curr_diff)[(whiledo_var_preg * (_INT32)(4U)) + 2][(x0_preg * (_INT32)(4U)) + 2] = (diff)[10LL];
            (curr_diff)[(whiledo_var_preg * (_INT32)(4U)) + 2][(x0_preg * (_INT32)(4U)) + 3] = (diff)[11LL];
            (curr_diff)[(whiledo_var_preg * (_INT32)(4U)) + 3][x0_preg * (_INT32)(4U)] = (diff)[12LL];
            (curr_diff)[(whiledo_var_preg * (_INT32)(4U)) + 3][(x0_preg * (_INT32)(4U)) + 1] = (diff)[13LL];
            (curr_diff)[(whiledo_var_preg * (_INT32)(4U)) + 3][(x0_preg * (_INT32)(4U)) + 2] = (diff)[14LL];
            (curr_diff)[(whiledo_var_preg * (_INT32)(4U)) + 3][(x0_preg * (_INT32)(4U)) + 3] = (diff)[15LL];
          }
          x0_preg = x0_preg + (_INT32)(1U);
        }
        _2050 :;
        whiledo_var_preg = whiledo_var_preg + (_INT32)(1U);
      }
      if(((input)[805LL]).ProfileIDC != (_INT32)(0U))
      {
        __comma_preg_w2c_16 = find_SATD((_INT32(*)[16LL]) curr_diff, __cselect_preg_w2c_2, blocktype);
        mcost = mcost + __comma_preg_w2c_16;
      }
      if(min_mcost > mcost)
      {
        min_mcost = mcost;
        best_pos = min_pos_w2c_2 + pos_preg;
      }
    }
  }
  if(best_pos != (_INT32)(0U))
  {
    * mv_x = (_UINT32)((_UINT16) * mv_x) + _U4SHL((_UINT32)(*(spiral_search_x + best_pos)), 1U);
    * mv_y = (_UINT32)((_UINT16) * mv_y) + _U4SHL((_UINT32)(*(spiral_search_y + best_pos)), 1U);
  }
  if((input) -> hadamardqpel != (_INT32)(0U))
  {
    min_mcost = 2147483647U;
  }
  if((((((_INT32) * mv_x + _I4SHL(pic_pix_x, (_INT32)(2U))) > (_INT32)(1U)) && (((_INT32) * mv_x + _I4SHL(pic_pix_x, (_INT32)(2U))) < (max_pos_x_w2c_4 + -1))) && (((_INT32) * mv_y + _I4SHL(pic_pix_y, (_INT32)(2U))) > (_INT32)(1U))) && (((_INT32) * mv_y + _I4SHL(pic_pix_y, (_INT32)(2U))) < (max_pos_y_w2c_4 + -1)))
  {
    PelY_14 = &FastPelY_14;
  }
  else
  {
    PelY_14 = &UMVPelY_14;
  }
  best_pos = 0U;
  for(pos_preg_w2c_0 = 0U; pos_preg_w2c_0 <= ((search_pos_w2c_4 - qpelstart) + -1); pos_preg_w2c_0 = pos_preg_w2c_0 + (_INT32)(1U))
  {
    cand_mv_x = (_INT32)((_UINT16)(mv_x)[0]) + (spiral_search_x)[(_INT64)(qpelstart + pos_preg_w2c_0)];
    cand_mv_y = (_INT32)(mv_y)[0] + (spiral_search_y)[(_INT64)(qpelstart + pos_preg_w2c_0)];
    mcost = _I4ASHR(lambda_factor * ((mvbits)[(_INT64)(cand_mv_x - (_INT32) pred_mv_x)] + (mvbits)[(_INT64)(cand_mv_y - (_INT32) pred_mv_y)]), (_INT32)(16U));
    if(min_mcost > mcost)
    {
      abort_search = 0U;
      whiledo_var_preg_w2c_0 = 0U;
      while((blocksize_y > (whiledo_var_preg_w2c_0 * (_INT32)(4U))) && (abort_search == (_INT32)(0U)))
      {
        x0_preg_w2c_0 = 0U;
        while(blocksize_x > (x0_preg_w2c_0 * (_INT32)(4U)))
        {
          orig_line = (orig_pic)[(_INT64)(whiledo_var_preg_w2c_0 * (_INT32)(4U))];
          __comma_preg_w2c_17 = (PelY_14)(ref_pic, cand_mv_y + _I4SHL(pic_pix_y + (whiledo_var_preg_w2c_0 * (_INT32)(4U)), (_INT32)(2U)), cand_mv_x + _I4SHL(pic_pix_x + (x0_preg_w2c_0 * (_INT32)(4U)), (_INT32)(2U)), img_height, img_width);
          * diff = (_INT32)(orig_line)[(_INT64)(x0_preg_w2c_0 * (_INT32)(4U))] - (_INT32)((_UINT16)(__comma_preg_w2c_17));
          __comma_preg_w2c_18 = (PelY_14)(ref_pic, cand_mv_y + _I4SHL(pic_pix_y + (whiledo_var_preg_w2c_0 * (_INT32)(4U)), (_INT32)(2U)), (cand_mv_x + _I4SHL(pic_pix_x + (x0_preg_w2c_0 * (_INT32)(4U)), (_INT32)(2U))) + (_INT32)(4U), img_height, img_width);
          * (diff + 1LL) = (_INT32)(orig_line)[(_INT64)((x0_preg_w2c_0 * (_INT32)(4U))) + 1LL] - (_INT32)((_UINT16)(__comma_preg_w2c_18));
          __comma_preg_w2c_19 = (PelY_14)(ref_pic, cand_mv_y + _I4SHL(pic_pix_y + (whiledo_var_preg_w2c_0 * (_INT32)(4U)), (_INT32)(2U)), (cand_mv_x + _I4SHL(pic_pix_x + (x0_preg_w2c_0 * (_INT32)(4U)), (_INT32)(2U))) + (_INT32)(8U), img_height, img_width);
          * (diff + 2LL) = (_INT32)(orig_line)[(_INT64)((x0_preg_w2c_0 * (_INT32)(4U))) + 2LL] - (_INT32)((_UINT16)(__comma_preg_w2c_19));
          __comma_preg_w2c_20 = (PelY_14)(ref_pic, cand_mv_y + _I4SHL(pic_pix_y + (whiledo_var_preg_w2c_0 * (_INT32)(4U)), (_INT32)(2U)), (cand_mv_x + _I4SHL(pic_pix_x + (x0_preg_w2c_0 * (_INT32)(4U)), (_INT32)(2U))) + (_INT32)(12U), img_height, img_width);
          * (diff + 3LL) = (_INT32)(orig_line)[(_INT64)((x0_preg_w2c_0 * (_INT32)(4U))) + 3LL] - (_INT32)((_UINT16)(__comma_preg_w2c_20));
          orig_line = (orig_pic)[(_INT64)((whiledo_var_preg_w2c_0 * (_INT32)(4U))) + 1LL];
          __comma_preg_w2c_21 = (PelY_14)(ref_pic, (cand_mv_y + _I4SHL(pic_pix_y + (whiledo_var_preg_w2c_0 * (_INT32)(4U)), (_INT32)(2U))) + (_INT32)(4U), cand_mv_x + _I4SHL(pic_pix_x + (x0_preg_w2c_0 * (_INT32)(4U)), (_INT32)(2U)), img_height, img_width);
          * (diff + 4LL) = (_INT32)(orig_line)[(_INT64)(x0_preg_w2c_0 * (_INT32)(4U))] - (_INT32)((_UINT16)(__comma_preg_w2c_21));
          __comma_preg_w2c_22 = (PelY_14)(ref_pic, (cand_mv_y + _I4SHL(pic_pix_y + (whiledo_var_preg_w2c_0 * (_INT32)(4U)), (_INT32)(2U))) + (_INT32)(4U), (cand_mv_x + _I4SHL(pic_pix_x + (x0_preg_w2c_0 * (_INT32)(4U)), (_INT32)(2U))) + (_INT32)(4U), img_height, img_width);
          * (diff + 5LL) = (_INT32)(orig_line)[(_INT64)((x0_preg_w2c_0 * (_INT32)(4U))) + 1LL] - (_INT32)((_UINT16)(__comma_preg_w2c_22));
          __comma_preg_w2c_23 = (PelY_14)(ref_pic, (cand_mv_y + _I4SHL(pic_pix_y + (whiledo_var_preg_w2c_0 * (_INT32)(4U)), (_INT32)(2U))) + (_INT32)(4U), (cand_mv_x + _I4SHL(pic_pix_x + (x0_preg_w2c_0 * (_INT32)(4U)), (_INT32)(2U))) + (_INT32)(8U), img_height, img_width);
          * (diff + 6LL) = (_INT32)(orig_line)[(_INT64)((x0_preg_w2c_0 * (_INT32)(4U))) + 2LL] - (_INT32)((_UINT16)(__comma_preg_w2c_23));
          __comma_preg_w2c_24 = (PelY_14)(ref_pic, (cand_mv_y + _I4SHL(pic_pix_y + (whiledo_var_preg_w2c_0 * (_INT32)(4U)), (_INT32)(2U))) + (_INT32)(4U), (cand_mv_x + _I4SHL(pic_pix_x + (x0_preg_w2c_0 * (_INT32)(4U)), (_INT32)(2U))) + (_INT32)(12U), img_height, img_width);
          * (diff + 7LL) = (_INT32)(orig_line)[(_INT64)((x0_preg_w2c_0 * (_INT32)(4U))) + 3LL] - (_INT32)((_UINT16)(__comma_preg_w2c_24));
          orig_line = (orig_pic)[(_INT64)((whiledo_var_preg_w2c_0 * (_INT32)(4U))) + 2LL];
          __comma_preg_w2c_25 = (PelY_14)(ref_pic, (cand_mv_y + _I4SHL(pic_pix_y + (whiledo_var_preg_w2c_0 * (_INT32)(4U)), (_INT32)(2U))) + (_INT32)(8U), cand_mv_x + _I4SHL(pic_pix_x + (x0_preg_w2c_0 * (_INT32)(4U)), (_INT32)(2U)), img_height, img_width);
          * (diff + 8LL) = (_INT32)(orig_line)[(_INT64)(x0_preg_w2c_0 * (_INT32)(4U))] - (_INT32)((_UINT16)(__comma_preg_w2c_25));
          __comma_preg_w2c_26 = (PelY_14)(ref_pic, (cand_mv_y + _I4SHL(pic_pix_y + (whiledo_var_preg_w2c_0 * (_INT32)(4U)), (_INT32)(2U))) + (_INT32)(8U), (cand_mv_x + _I4SHL(pic_pix_x + (x0_preg_w2c_0 * (_INT32)(4U)), (_INT32)(2U))) + (_INT32)(4U), img_height, img_width);
          * (diff + 9LL) = (_INT32)(orig_line)[(_INT64)((x0_preg_w2c_0 * (_INT32)(4U))) + 1LL] - (_INT32)((_UINT16)(__comma_preg_w2c_26));
          __comma_preg_w2c_27 = (PelY_14)(ref_pic, (cand_mv_y + _I4SHL(pic_pix_y + (whiledo_var_preg_w2c_0 * (_INT32)(4U)), (_INT32)(2U))) + (_INT32)(8U), (cand_mv_x + _I4SHL(pic_pix_x + (x0_preg_w2c_0 * (_INT32)(4U)), (_INT32)(2U))) + (_INT32)(8U), img_height, img_width);
          * (diff + 10LL) = (_INT32)(orig_line)[(_INT64)((x0_preg_w2c_0 * (_INT32)(4U))) + 2LL] - (_INT32)((_UINT16)(__comma_preg_w2c_27));
          __comma_preg_w2c_28 = (PelY_14)(ref_pic, (cand_mv_y + _I4SHL(pic_pix_y + (whiledo_var_preg_w2c_0 * (_INT32)(4U)), (_INT32)(2U))) + (_INT32)(8U), (cand_mv_x + _I4SHL(pic_pix_x + (x0_preg_w2c_0 * (_INT32)(4U)), (_INT32)(2U))) + (_INT32)(12U), img_height, img_width);
          * (diff + 11LL) = (_INT32)(orig_line)[(_INT64)((x0_preg_w2c_0 * (_INT32)(4U))) + 3LL] - (_INT32)((_UINT16)(__comma_preg_w2c_28));
          orig_line = (orig_pic)[(_INT64)((whiledo_var_preg_w2c_0 * (_INT32)(4U))) + 3LL];
          __comma_preg_w2c_29 = (PelY_14)(ref_pic, (cand_mv_y + _I4SHL(pic_pix_y + (whiledo_var_preg_w2c_0 * (_INT32)(4U)), (_INT32)(2U))) + (_INT32)(12U), cand_mv_x + _I4SHL(pic_pix_x + (x0_preg_w2c_0 * (_INT32)(4U)), (_INT32)(2U)), img_height, img_width);
          * (diff + 12LL) = (_INT32)(orig_line)[(_INT64)(x0_preg_w2c_0 * (_INT32)(4U))] - (_INT32)((_UINT16)(__comma_preg_w2c_29));
          __comma_preg_w2c_30 = (PelY_14)(ref_pic, (cand_mv_y + _I4SHL(pic_pix_y + (whiledo_var_preg_w2c_0 * (_INT32)(4U)), (_INT32)(2U))) + (_INT32)(12U), (cand_mv_x + _I4SHL(pic_pix_x + (x0_preg_w2c_0 * (_INT32)(4U)), (_INT32)(2U))) + (_INT32)(4U), img_height, img_width);
          * (diff + 13LL) = (_INT32)(orig_line)[(_INT64)((x0_preg_w2c_0 * (_INT32)(4U))) + 1LL] - (_INT32)((_UINT16)(__comma_preg_w2c_30));
          __comma_preg_w2c_31 = (PelY_14)(ref_pic, (cand_mv_y + _I4SHL(pic_pix_y + (whiledo_var_preg_w2c_0 * (_INT32)(4U)), (_INT32)(2U))) + (_INT32)(12U), (cand_mv_x + _I4SHL(pic_pix_x + (x0_preg_w2c_0 * (_INT32)(4U)), (_INT32)(2U))) + (_INT32)(8U), img_height, img_width);
          * (diff + 14LL) = (_INT32)(orig_line)[(_INT64)((x0_preg_w2c_0 * (_INT32)(4U))) + 2LL] - (_INT32)((_UINT16)(__comma_preg_w2c_31));
          __comma_preg_w2c_32 = (PelY_14)(ref_pic, (cand_mv_y + _I4SHL(pic_pix_y + (whiledo_var_preg_w2c_0 * (_INT32)(4U)), (_INT32)(2U))) + (_INT32)(12U), (cand_mv_x + _I4SHL(pic_pix_x + (x0_preg_w2c_0 * (_INT32)(4U)), (_INT32)(2U))) + (_INT32)(12U), img_height, img_width);
          * (diff + 15LL) = (_INT32)(orig_line)[(_INT64)((x0_preg_w2c_0 * (_INT32)(4U))) + 3LL] - (_INT32)((_UINT16)(__comma_preg_w2c_32));
          if(((input)[805LL]).ProfileIDC == (_INT32)(0U))
          {
            __comma_preg_w2c_33 = SATD(diff, ((input)[6LL]).ProfileIDC);
            mcost = mcost + __comma_preg_w2c_33;
            if(min_mcost < mcost)
            {
              abort_search = 1U;
              goto _6146;
            }
          }
          else
          {
            (curr_diff)[whiledo_var_preg_w2c_0 * (_INT32)(4U)][x0_preg_w2c_0 * (_INT32)(4U)] = (diff)[0LL];
            (curr_diff)[whiledo_var_preg_w2c_0 * (_INT32)(4U)][(x0_preg_w2c_0 * (_INT32)(4U)) + 1] = (diff)[1LL];
            (curr_diff)[whiledo_var_preg_w2c_0 * (_INT32)(4U)][(x0_preg_w2c_0 * (_INT32)(4U)) + 2] = (diff)[2LL];
            (curr_diff)[whiledo_var_preg_w2c_0 * (_INT32)(4U)][(x0_preg_w2c_0 * (_INT32)(4U)) + 3] = (diff)[3LL];
            (curr_diff)[(whiledo_var_preg_w2c_0 * (_INT32)(4U)) + 1][x0_preg_w2c_0 * (_INT32)(4U)] = (diff)[4LL];
            (curr_diff)[(whiledo_var_preg_w2c_0 * (_INT32)(4U)) + 1][(x0_preg_w2c_0 * (_INT32)(4U)) + 1] = (diff)[5LL];
            (curr_diff)[(whiledo_var_preg_w2c_0 * (_INT32)(4U)) + 1][(x0_preg_w2c_0 * (_INT32)(4U)) + 2] = (diff)[6LL];
            (curr_diff)[(whiledo_var_preg_w2c_0 * (_INT32)(4U)) + 1][(x0_preg_w2c_0 * (_INT32)(4U)) + 3] = (diff)[7LL];
            (curr_diff)[(whiledo_var_preg_w2c_0 * (_INT32)(4U)) + 2][x0_preg_w2c_0 * (_INT32)(4U)] = (diff)[8LL];
            (curr_diff)[(whiledo_var_preg_w2c_0 * (_INT32)(4U)) + 2][(x0_preg_w2c_0 * (_INT32)(4U)) + 1] = (diff)[9LL];
            (curr_diff)[(whiledo_var_preg_w2c_0 * (_INT32)(4U)) + 2][(x0_preg_w2c_0 * (_INT32)(4U)) + 2] = (diff)[10LL];
            (curr_diff)[(whiledo_var_preg_w2c_0 * (_INT32)(4U)) + 2][(x0_preg_w2c_0 * (_INT32)(4U)) + 3] = (diff)[11LL];
            (curr_diff)[(whiledo_var_preg_w2c_0 * (_INT32)(4U)) + 3][x0_preg_w2c_0 * (_INT32)(4U)] = (diff)[12LL];
            (curr_diff)[(whiledo_var_preg_w2c_0 * (_INT32)(4U)) + 3][(x0_preg_w2c_0 * (_INT32)(4U)) + 1] = (diff)[13LL];
            (curr_diff)[(whiledo_var_preg_w2c_0 * (_INT32)(4U)) + 3][(x0_preg_w2c_0 * (_INT32)(4U)) + 2] = (diff)[14LL];
            (curr_diff)[(whiledo_var_preg_w2c_0 * (_INT32)(4U)) + 3][(x0_preg_w2c_0 * (_INT32)(4U)) + 3] = (diff)[15LL];
          }
          x0_preg_w2c_0 = x0_preg_w2c_0 + (_INT32)(1U);
        }
        _6146 :;
        whiledo_var_preg_w2c_0 = whiledo_var_preg_w2c_0 + (_INT32)(1U);
      }
      if(((input)[805LL]).ProfileIDC != (_INT32)(0U))
      {
        __comma_preg_w2c_34 = find_SATD((_INT32(*)[16LL]) curr_diff, ((input)[6LL]).ProfileIDC, blocktype);
        mcost = mcost + __comma_preg_w2c_34;
      }
      if(min_mcost > mcost)
      {
        min_mcost = mcost;
        best_pos = qpelstart + pos_preg_w2c_0;
      }
    }
  }
  if(best_pos != (_INT32)(0U))
  {
    * mv_x = (_UINT32)((_UINT16) * mv_x) + (_UINT32)(*(spiral_search_x + best_pos));
    * mv_y = (_UINT32)((_UINT16) * mv_y) + (_UINT32)(*(spiral_search_y + best_pos));
  }
  return min_mcost;
} /* SubPelBlockMotionSearch */


extern _INT32 FullPelBlockMotionBiPred(
  _UINT16 ** orig_pic,
  _INT16 ref,
  _INT32 list,
  _INT32 pic_pix_x,
  _INT32 pic_pix_y,
  _INT32 blocktype,
  _INT32 iteration,
  _INT16 pred_mv_x_w2c_1,
  _INT16 pred_mv_y_w2c_1,
  _INT16 pred_mv_x_w2c_2,
  _INT16 pred_mv_y_w2c_2,
  _INT16 * mv_x,
  _INT16 * mv_y,
  _INT16 * s_mv_x,
  _INT16 * s_mv_y,
  _INT32 search_range,
  _INT32 min_mcost,
  _IEEE64 lambda)
{
  
  register _INT32 __cselect_preg;
  register _INT32 __cselect_preg_w2c_0;
  register _INT32 __cselect_preg_w2c_1;
  register _INT32 __cselect_preg_w2c_2;
  register _INT32 __cselect_preg_w2c_4;
  register _INT32 __cselect_preg_w2c_6;
  register _INT32 __cselect_preg_w2c_8;
  register _INT32 __cselect_preg_w2c_3;
  register _INT32 __cselect_preg_w2c_5;
  register _INT32 __cselect_preg_w2c_7;
  register _INT32 __cselect_preg_w2c_9;
  register _INT32 _ub14_preg;
  register _INT32 pos_preg;
  register _INT32 y_preg;
  register _UINT64 __comma_preg;
  register _UINT64 __comma_preg_w2c_0;
  register _INT32 _ub15_preg;
  register _INT32 x4_preg;
  register _INT32 __cselect_preg_w2c_10;
  register _INT32 __cselect_preg_w2c_11;
  register _INT32 __cselect_preg_w2c_12;
  register _INT32 __cselect_preg_w2c_13;
  register _INT32 y_preg_w2c_0;
  register _UINT64 __comma_preg_w2c_1;
  register _UINT64 __comma_preg_w2c_2;
  register _INT32 _ub16_preg;
  register _INT32 x4_preg_w2c_0;
  _INT32 cand_x;
  _INT32 cand_y;
  _INT32 mcost;
  _UINT16 * orig_line;
  _UINT16 * (*get_ref_line_w2c_1)(_INT32, _UINT16 *, _INT32, _INT32, _INT32, _INT32);
  _UINT16 * (*get_ref_line_w2c_2)(_INT32, _UINT16 *, _INT32, _INT32, _INT32, _INT32);
  _UINT16 * ref1_pic;
  _UINT16 * ref2_pic;
  _INT32 img_width;
  _INT32 img_height;
  _INT32 best_pos;
  _INT32 lambda_factor;
  _INT32 blocksize_y;
  _INT32 blocksize_x;
  _INT16 center_x;
  _INT16 center_y;
  _INT16 ref1_center_x;
  _INT16 ref1_center_y;
  _INT32 bi_diff;
  _INT16 apply_weights;
  _INT16 pixel_w2c_1;
  _INT16 pixel_w2c_2;
  
  if((*(((_INT32 *)(img) + 16384LL) + 1716LL) != (_INT32)(0U)) && ((((img) -> mb_data + (img) -> current_mb_nr)) -> mb_field != (_INT32)(0U)))
  {
    if((img) -> current_mb_nr & (_INT32)(1U))
    {
      __cselect_preg = 4U;
    }
    else
    {
      __cselect_preg = 2U;
    }
    __cselect_preg_w2c_0 = __cselect_preg;
  }
  else
  {
    __cselect_preg_w2c_0 = 0U;
  }
  ref1_pic = (*((listX)[list + __cselect_preg_w2c_0] + (_UINT64) ref)) -> imgY_11;
  if(list == (_INT32)(0U))
  {
    __cselect_preg_w2c_1 = __cselect_preg_w2c_0 + (_INT32)(1U);
  }
  else
  {
    __cselect_preg_w2c_1 = __cselect_preg_w2c_0;
  }
  ref2_pic = (*(listX)[__cselect_preg_w2c_1]) -> imgY_11;
  img_width = (*((listX)[list + __cselect_preg_w2c_0] + (_UINT64) ref)) -> size_x;
  img_height = (*((listX)[list + __cselect_preg_w2c_0] + (_UINT64) ref)) -> size_y;
  best_pos = 0U;
  lambda_factor = _I4F8TRUNC((lambda * 6.5536e+04) + 5.0e-01);
  blocksize_y = (((struct anonymous_w2c_3 *)((_UINT8 *)(input) + 80U))[blocktype][1U]).ProfileIDC;
  blocksize_x = (((struct anonymous_w2c_3 *)((_UINT8 *)(input) + 80U))[blocktype][0U]).ProfileIDC;
  center_x = (_UINT16)((_UINT32)((_UINT16) * mv_x) + (_UINT32)(pic_pix_x));
  center_y = (_UINT16)((_UINT32)((_UINT16) * mv_y) + (_UINT32)(pic_pix_y));
  ref1_center_x = (_UINT16)((_UINT32)((_UINT16) * s_mv_x) + (_UINT32)(pic_pix_x));
  ref1_center_y = (_UINT16)((_UINT32)((_UINT16) * s_mv_y) + (_UINT32)(pic_pix_y));
  apply_weights = (active_pps) -> weighted_bipred_idc != 0U;
  if((_INT32)(apply_weights) != (_INT32)(0U))
  {
    if(list == (_INT32)(0U))
    {
      __cselect_preg_w2c_2 = (_INT16)(*** (*(wbp_weight + (_INT64)(__cselect_preg_w2c_0)) + (_UINT64) ref));
      __cselect_preg_w2c_4 = (_INT16)(*** (*((wbp_weight + (_INT64)(__cselect_preg_w2c_0)) + 1LL) + (_UINT64) ref));
      __cselect_preg_w2c_6 = (_INT16)(** (*(wp_offset + (_INT64)(__cselect_preg_w2c_0)) + (_UINT64) ref));
      __cselect_preg_w2c_8 = (_INT16)(** (*((wp_offset + (_INT64)(__cselect_preg_w2c_0)) + 1LL) + (_UINT64) ref));
    }
    else
    {
      __cselect_preg_w2c_2 = (_INT16)(** (** ((wbp_weight + (_INT64)(__cselect_preg_w2c_0)) + 1LL) + (_UINT64) ref));
      __cselect_preg_w2c_4 = (_INT16)(** (** (wbp_weight + (_INT64)(__cselect_preg_w2c_0)) + (_UINT64) ref));
      __cselect_preg_w2c_6 = (_INT16)(*** ((wp_offset + (_INT64)(__cselect_preg_w2c_0)) + 1LL));
      __cselect_preg_w2c_8 = (_INT16)(*** (wp_offset + (_INT64)(__cselect_preg_w2c_0)));
    }
    __cselect_preg_w2c_3 = __cselect_preg_w2c_2;
    __cselect_preg_w2c_5 = __cselect_preg_w2c_4;
    __cselect_preg_w2c_7 = __cselect_preg_w2c_6;
    __cselect_preg_w2c_9 = __cselect_preg_w2c_8;
  }
  else
  {
    __cselect_preg_w2c_3 = (_INT16)(_I4SHL((_INT32)(1U), luma_log_weight_denom));
    __cselect_preg_w2c_5 = (_INT16)(_I4SHL((_INT32)(1U), luma_log_weight_denom));
    __cselect_preg_w2c_7 = 0U;
    __cselect_preg_w2c_9 = 0U;
  }
  if(((((_INT32)(center_x) > search_range) && ((_INT32)(center_x) < ((((img) -> width - search_range) - blocksize_x) + -1))) && ((_INT32)(center_y) > search_range)) && ((_INT32)(center_y) < ((((img) -> height - search_range) - blocksize_y) + -1)))
  {
    get_ref_line_w2c_2 = &FastLineX;
  }
  else
  {
    get_ref_line_w2c_2 = &UMVLineX;
  }
  if(((((_INT32)(ref1_center_x) > search_range) && ((_INT32)(ref1_center_x) < ((((img) -> width - search_range) - blocksize_x) + -1))) && ((_INT32)(ref1_center_y) > search_range)) && ((_INT32)(ref1_center_y) < ((((img) -> height - search_range) - blocksize_y) + -1)))
  {
    get_ref_line_w2c_1 = &FastLineX;
  }
  else
  {
    get_ref_line_w2c_1 = &UMVLineX;
  }
  _ub14_preg = (((search_range * (_INT32)(2U)) + (_INT32)(1U)) * ((search_range * (_INT32)(2U)) + (_INT32)(1U))) + -1;
  for(pos_preg = 0U; pos_preg <= _ub14_preg; pos_preg = pos_preg + (_INT32)(1U))
  {
    cand_x = (_INT32)(center_x) + (spiral_search_x)[(_INT64)(pos_preg)];
    cand_y = (_INT32)(center_y) + (spiral_search_y)[(_INT64)(pos_preg)];
    mcost = _I4ASHR(lambda_factor * ((mvbits)[(_INT64)(_I4SHL((_INT32)(ref1_center_x), (_INT32)(2U)) - ((_INT32) pred_mv_x_w2c_1 + _I4SHL(pic_pix_x, (_INT32)(2U))))] + (mvbits)[(_INT64)(_I4SHL((_INT32)(ref1_center_y), (_INT32)(2U)) - ((_INT32) pred_mv_y_w2c_1 + _I4SHL(pic_pix_y, (_INT32)(2U))))]), (_INT32)(16U)) + _I4ASHR(lambda_factor * ((mvbits)[(_INT64)(_I4SHL(cand_x, (_INT32)(2U)) - ((_INT32) pred_mv_x_w2c_2 + _I4SHL(pic_pix_x, (_INT32)(2U))))] + (mvbits)[(_INT64)(_I4SHL(cand_y, (_INT32)(2U)) - ((_INT32) pred_mv_y_w2c_2 + _I4SHL(pic_pix_y, (_INT32)(2U))))]), (_INT32)(16U));
    if(min_mcost > mcost)
    {
      if((_INT32)(apply_weights) != (_INT32)(0U))
      {
        y_preg = 0U;
        while(blocksize_y > y_preg)
        {
          __comma_preg = (_UINT64)(_UINT64)(get_ref_line_w2c_2)(blocksize_x, ref2_pic, cand_y + y_preg, cand_x, img_height, img_width);
          __comma_preg_w2c_0 = (_UINT64)(_UINT64)(get_ref_line_w2c_1)(blocksize_x, ref1_pic, (_INT32)(ref1_center_y) + y_preg, ref1_center_x, img_height, img_width);
          orig_line = (orig_pic)[(_INT64)(y_preg)];
          _ub15_preg = _I4ASHR(blocksize_x, (_INT32)(2U));
          for(x4_preg = 0U; x4_preg <= (_ub15_preg + -1); x4_preg = x4_preg + (_INT32)(1U))
          {
            pixel_w2c_1 = (_INT32)((_UINT16 *) __comma_preg_w2c_0)[(_UINT64)(x4_preg)] * (_INT32)((_INT16)(__cselect_preg_w2c_3));
            pixel_w2c_2 = (_INT32)((_UINT16 *) __comma_preg)[(_UINT64)(x4_preg)] * (_INT32)((_INT16)(__cselect_preg_w2c_5));
            if((_I4ASHR(((_INT32)(pixel_w2c_1) + (_INT32)(pixel_w2c_2)) + (wp_luma_round * (_INT32)(2U)), luma_log_weight_denom + (_INT32)(1U)) + (_INT32)((_INT16)(_I4ASHR(((_INT32)((_INT16)(__cselect_preg_w2c_7)) + (_INT32)((_INT16)(__cselect_preg_w2c_9))) + (_INT32)(1U), (_INT32)(1U))))) >= (_INT32)(0U))
            {
              __cselect_preg_w2c_10 = (_INT16)(_I4MIN((img) -> max_imgpel_value, _I4ASHR(((_INT32)(pixel_w2c_1) + (_INT32)(pixel_w2c_2)) + (wp_luma_round * (_INT32)(2U)), luma_log_weight_denom + (_INT32)(1U)) + (_INT32)((_INT16)(_I4ASHR(((_INT32)((_INT16)(__cselect_preg_w2c_7)) + (_INT32)((_INT16)(__cselect_preg_w2c_9))) + (_INT32)(1U), (_INT32)(1U))))));
            }
            else
            {
              __cselect_preg_w2c_10 = 0U;
            }
            bi_diff = (_INT32)(orig_line)[(_UINT64)(x4_preg)] - (_INT32)((_INT16)(__cselect_preg_w2c_10));
            mcost = (byte_abs)[bi_diff] + mcost;
            pixel_w2c_1 = (_INT32) * (&((_UINT16 *) __comma_preg_w2c_0)[(_UINT64)(x4_preg)] + 1LL) * (_INT32)((_INT16)(__cselect_preg_w2c_3));
            pixel_w2c_2 = (_INT32) * (&((_UINT16 *) __comma_preg)[(_UINT64)(x4_preg)] + 1LL) * (_INT32)((_INT16)(__cselect_preg_w2c_5));
            if((_I4ASHR(((_INT32)(pixel_w2c_1) + (_INT32)(pixel_w2c_2)) + (wp_luma_round * (_INT32)(2U)), luma_log_weight_denom + (_INT32)(1U)) + (_INT32)((_INT16)(_I4ASHR(((_INT32)((_INT16)(__cselect_preg_w2c_7)) + (_INT32)((_INT16)(__cselect_preg_w2c_9))) + (_INT32)(1U), (_INT32)(1U))))) >= (_INT32)(0U))
            {
              __cselect_preg_w2c_11 = (_INT16)(_I4MIN((img) -> max_imgpel_value, _I4ASHR(((_INT32)(pixel_w2c_1) + (_INT32)(pixel_w2c_2)) + (wp_luma_round * (_INT32)(2U)), luma_log_weight_denom + (_INT32)(1U)) + (_INT32)((_INT16)(_I4ASHR(((_INT32)((_INT16)(__cselect_preg_w2c_7)) + (_INT32)((_INT16)(__cselect_preg_w2c_9))) + (_INT32)(1U), (_INT32)(1U))))));
            }
            else
            {
              __cselect_preg_w2c_11 = 0U;
            }
            bi_diff = (_INT32) * (&(orig_line)[(_UINT64)(x4_preg)] + 1LL) - (_INT32)((_INT16)(__cselect_preg_w2c_11));
            mcost = (byte_abs)[bi_diff] + mcost;
            pixel_w2c_1 = (_INT32) * (&((_UINT16 *) __comma_preg_w2c_0)[(_UINT64)(x4_preg)] + 2LL) * (_INT32)((_INT16)(__cselect_preg_w2c_3));
            pixel_w2c_2 = (_INT32) * (&((_UINT16 *) __comma_preg)[(_UINT64)(x4_preg)] + 2LL) * (_INT32)((_INT16)(__cselect_preg_w2c_5));
            if((_I4ASHR(((_INT32)(pixel_w2c_1) + (_INT32)(pixel_w2c_2)) + (wp_luma_round * (_INT32)(2U)), luma_log_weight_denom + (_INT32)(1U)) + (_INT32)((_INT16)(_I4ASHR(((_INT32)((_INT16)(__cselect_preg_w2c_7)) + (_INT32)((_INT16)(__cselect_preg_w2c_9))) + (_INT32)(1U), (_INT32)(1U))))) >= (_INT32)(0U))
            {
              __cselect_preg_w2c_12 = (_INT16)(_I4MIN((img) -> max_imgpel_value, _I4ASHR(((_INT32)(pixel_w2c_1) + (_INT32)(pixel_w2c_2)) + (wp_luma_round * (_INT32)(2U)), luma_log_weight_denom + (_INT32)(1U)) + (_INT32)((_INT16)(_I4ASHR(((_INT32)((_INT16)(__cselect_preg_w2c_7)) + (_INT32)((_INT16)(__cselect_preg_w2c_9))) + (_INT32)(1U), (_INT32)(1U))))));
            }
            else
            {
              __cselect_preg_w2c_12 = 0U;
            }
            bi_diff = (_INT32) * (&(orig_line)[(_UINT64)(x4_preg)] + 2LL) - (_INT32)((_INT16)(__cselect_preg_w2c_12));
            mcost = (byte_abs)[bi_diff] + mcost;
            pixel_w2c_1 = (_INT32) * (&((_UINT16 *) __comma_preg_w2c_0)[(_UINT64)(x4_preg)] + 3LL) * (_INT32)((_INT16)(__cselect_preg_w2c_3));
            pixel_w2c_2 = (_INT32) * (&((_UINT16 *) __comma_preg)[(_UINT64)(x4_preg)] + 3LL) * (_INT32)((_INT16)(__cselect_preg_w2c_5));
            if((_I4ASHR(((_INT32)(pixel_w2c_1) + (_INT32)(pixel_w2c_2)) + (wp_luma_round * (_INT32)(2U)), luma_log_weight_denom + (_INT32)(1U)) + (_INT32)((_INT16)(_I4ASHR(((_INT32)((_INT16)(__cselect_preg_w2c_7)) + (_INT32)((_INT16)(__cselect_preg_w2c_9))) + (_INT32)(1U), (_INT32)(1U))))) >= (_INT32)(0U))
            {
              __cselect_preg_w2c_13 = (_INT16)(_I4MIN((img) -> max_imgpel_value, _I4ASHR(((_INT32)(pixel_w2c_1) + (_INT32)(pixel_w2c_2)) + (wp_luma_round * (_INT32)(2U)), luma_log_weight_denom + (_INT32)(1U)) + (_INT32)((_INT16)(_I4ASHR(((_INT32)((_INT16)(__cselect_preg_w2c_7)) + (_INT32)((_INT16)(__cselect_preg_w2c_9))) + (_INT32)(1U), (_INT32)(1U))))));
            }
            else
            {
              __cselect_preg_w2c_13 = 0U;
            }
            bi_diff = (_INT32) * (&(orig_line)[(_UINT64)(x4_preg)] + 3LL) - (_INT32)((_INT16)(__cselect_preg_w2c_13));
            mcost = (byte_abs)[bi_diff] + mcost;
          }
          if(min_mcost <= mcost)
            goto _2306;
          y_preg = y_preg + (_INT32)(1U);
        }
        _2306 :;
      }
      else
      {
        y_preg_w2c_0 = 0U;
        while(blocksize_y > y_preg_w2c_0)
        {
          __comma_preg_w2c_1 = (_UINT64)(_UINT64)(get_ref_line_w2c_2)(blocksize_x, ref2_pic, cand_y + y_preg_w2c_0, cand_x, img_height, img_width);
          __comma_preg_w2c_2 = (_UINT64)(_UINT64)(get_ref_line_w2c_1)(blocksize_x, ref1_pic, (_INT32)(ref1_center_y) + y_preg_w2c_0, ref1_center_x, img_height, img_width);
          orig_line = (orig_pic)[(_INT64)(y_preg_w2c_0)];
          _ub16_preg = _I4ASHR(blocksize_x, (_INT32)(2U));
          for(x4_preg_w2c_0 = 0U; x4_preg_w2c_0 <= (_ub16_preg + -1); x4_preg_w2c_0 = x4_preg_w2c_0 + (_INT32)(1U))
          {
            bi_diff = (_INT32)(orig_line)[(_UINT64)(x4_preg_w2c_0)] - _I4ASHR((_INT32)((_UINT16 *) __comma_preg_w2c_1)[(_UINT64)(x4_preg_w2c_0)] + (_INT32)((_UINT16 *) __comma_preg_w2c_2)[(_UINT64)(x4_preg_w2c_0)], (_INT32)(1U));
            mcost = (byte_abs)[bi_diff] + mcost;
            bi_diff = (_INT32) * (&(orig_line)[(_UINT64)(x4_preg_w2c_0)] + 1LL) - _I4ASHR((_INT32) * (&((_UINT16 *) __comma_preg_w2c_1)[(_UINT64)(x4_preg_w2c_0)] + 1LL) + (_INT32) * (&((_UINT16 *) __comma_preg_w2c_2)[(_UINT64)(x4_preg_w2c_0)] + 1LL), (_INT32)(1U));
            mcost = (byte_abs)[bi_diff] + mcost;
            bi_diff = (_INT32) * (&(orig_line)[(_UINT64)(x4_preg_w2c_0)] + 2LL) - _I4ASHR((_INT32) * (&((_UINT16 *) __comma_preg_w2c_1)[(_UINT64)(x4_preg_w2c_0)] + 2LL) + (_INT32) * (&((_UINT16 *) __comma_preg_w2c_2)[(_UINT64)(x4_preg_w2c_0)] + 2LL), (_INT32)(1U));
            mcost = (byte_abs)[bi_diff] + mcost;
            bi_diff = (_INT32) * (&(orig_line)[(_UINT64)(x4_preg_w2c_0)] + 3LL) - _I4ASHR((_INT32) * (&((_UINT16 *) __comma_preg_w2c_1)[(_UINT64)(x4_preg_w2c_0)] + 3LL) + (_INT32) * (&((_UINT16 *) __comma_preg_w2c_2)[(_UINT64)(x4_preg_w2c_0)] + 3LL), (_INT32)(1U));
            mcost = (byte_abs)[bi_diff] + mcost;
          }
          if(min_mcost <= mcost)
            goto _3842;
          y_preg_w2c_0 = y_preg_w2c_0 + (_INT32)(1U);
        }
        _3842 :;
      }
      if(min_mcost > mcost)
      {
        best_pos = pos_preg;
        min_mcost = mcost;
      }
    }
  }
  if(best_pos != (_INT32)(0U))
  {
    * mv_x = (_UINT32)((_UINT16) * mv_x) + (_UINT32)(*(spiral_search_x + best_pos));
    * mv_y = (_UINT32)((_UINT16) * mv_y) + (_UINT32)(*(spiral_search_y + best_pos));
  }
  return min_mcost;
} /* FullPelBlockMotionBiPred */


extern _INT32 SubPelBlockSearchBiPred(
  _UINT16 ** orig_pic,
  _INT16 ref,
  _INT32 list,
  _INT32 pic_pix_x,
  _INT32 pic_pix_y,
  _INT32 blocktype,
  _INT16 pred_mv_x,
  _INT16 pred_mv_y,
  _INT16 * mv_x,
  _INT16 * mv_y,
  _INT16 * s_mv_x,
  _INT16 * s_mv_y,
  _INT32 search_pos_w2c_2,
  _INT32 search_pos_w2c_4,
  _INT32 min_mcost,
  _IEEE64 lambda)
{
  
  register _INT32 __cselect_preg_w2c_32;
  register _INT32 __cselect_preg_w2c_33;
  register _INT32 __cselect_preg_w2c_36;
  register _INT32 __cselect_preg_w2c_40;
  register _INT32 __cselect_preg_w2c_43;
  register _INT32 __cselect_preg_w2c_45;
  register _INT32 __cselect_preg_w2c_47;
  register _INT32 __cselect_preg_w2c_42;
  register _INT32 __cselect_preg_w2c_44;
  register _INT32 __cselect_preg_w2c_46;
  register _INT32 __cselect_preg_w2c_50;
  register _INT32 __cselect_preg_w2c_54;
  register _INT32 __cselect_preg_w2c_56;
  register _UINT32 __comma_preg_w2c_164;
  register _UINT32 __comma_preg_w2c_169;
  register _UINT32 __comma_preg_w2c_174;
  register _UINT32 __comma_preg_w2c_179;
  register _INT32 __cselect_preg_w2c_60;
  register _UINT32 __comma_preg_w2c_184;
  register _UINT32 __comma_preg_w2c_188;
  register _INT32 __cselect_preg_w2c_62;
  register _UINT32 __comma_preg_w2c_198;
  register _UINT32 __comma_preg_w2c_203;
  register _UINT32 __comma_preg_w2c_208;
  register _UINT32 __comma_preg_w2c_213;
  register _INT32 __cselect_preg_w2c_66;
  register _UINT32 __comma_preg_w2c_218;
  register _UINT32 __comma_preg_w2c_222;
  register _INT32 __cselect_preg_w2c_68;
  register _UINT32 __comma_preg_w2c_232;
  register _UINT32 __comma_preg_w2c_237;
  register _UINT32 __comma_preg_w2c_242;
  register _UINT32 __comma_preg_w2c_247;
  register _INT32 __cselect_preg_w2c_72;
  register _UINT32 __comma_preg_w2c_252;
  register _UINT32 __comma_preg_w2c_256;
  register _INT32 __cselect_preg_w2c_75;
  register _UINT32 __comma_preg_w2c_2;
  register _UINT32 __comma_preg_w2c_7;
  register _UINT32 __comma_preg_w2c_12;
  register _UINT32 __comma_preg_w2c_17;
  register _INT32 __cselect_preg_w2c_3;
  register _UINT32 __comma_preg_w2c_22;
  register _UINT32 __comma_preg_w2c_26;
  register _INT32 __cselect_preg_w2c_6;
  register _UINT32 __comma_preg_w2c_34;
  register _UINT32 __comma_preg_w2c_39;
  register _UINT32 __comma_preg_w2c_43;
  register _UINT32 __comma_preg_w2c_47;
  register _INT32 __cselect_preg_w2c_11;
  register _UINT32 __comma_preg_w2c_51;
  register _UINT32 __comma_preg_w2c_54;
  register _INT32 __cselect_preg_w2c_14;
  register _UINT32 __comma_preg_w2c_59;
  register _UINT32 __comma_preg_w2c_63;
  register _UINT32 __comma_preg_w2c_67;
  register _UINT32 __comma_preg_w2c_71;
  register _INT32 __cselect_preg_w2c_19;
  register _UINT32 __comma_preg_w2c_75;
  register _UINT32 __comma_preg_w2c_78;
  register _INT32 __cselect_preg_w2c_22;
  register _UINT32 __comma_preg_w2c_83;
  register _UINT32 __comma_preg_w2c_87;
  register _UINT32 __comma_preg_w2c_91;
  register _UINT32 __comma_preg_w2c_95;
  register _INT32 __cselect_preg_w2c_27;
  register _UINT32 __comma_preg_w2c_99;
  register _UINT32 __comma_preg_w2c_102;
  register _INT32 __cselect_preg_w2c_30;
  register _UINT32 __comma_preg_w2c_107;
  register _UINT32 __comma_preg_w2c_111;
  register _UINT32 __comma_preg_w2c_115;
  register _UINT32 __comma_preg_w2c_119;
  register _INT32 __cselect_preg_w2c_35;
  register _UINT32 __comma_preg_w2c_123;
  register _UINT32 __comma_preg_w2c_127;
  register _INT32 __cselect_preg_w2c_39;
  register _UINT32 __comma_preg_w2c_133;
  register _UINT32 __comma_preg_w2c_137;
  register _UINT32 __comma_preg_w2c_141;
  register _UINT32 __comma_preg_w2c_145;
  register _INT32 __cselect_preg_w2c_49;
  register _UINT32 __comma_preg_w2c_149;
  register _UINT32 __comma_preg_w2c_153;
  register _INT32 __cselect_preg_w2c_53;
  register _UINT32 __comma_preg_w2c_159;
  register _UINT32 __comma_preg_w2c_163;
  register _UINT32 __comma_preg_w2c_168;
  register _UINT32 __comma_preg_w2c_173;
  register _INT32 __cselect_preg_w2c_57;
  register _UINT32 __comma_preg_w2c_178;
  register _UINT32 __comma_preg_w2c_183;
  register _INT32 __cselect_preg_w2c_59;
  register _UINT32 __comma_preg_w2c_193;
  register _UINT32 __comma_preg_w2c_197;
  register _UINT32 __comma_preg_w2c_202;
  register _UINT32 __comma_preg_w2c_207;
  register _INT32 __cselect_preg_w2c_63;
  register _UINT32 __comma_preg_w2c_212;
  register _UINT32 __comma_preg_w2c_217;
  register _INT32 __cselect_preg_w2c_65;
  register _UINT32 __comma_preg_w2c_227;
  register _UINT32 __comma_preg_w2c_231;
  register _UINT32 __comma_preg_w2c_236;
  register _UINT32 __comma_preg_w2c_241;
  register _INT32 __cselect_preg_w2c_69;
  register _UINT32 __comma_preg_w2c_246;
  register _UINT32 __comma_preg_w2c_251;
  register _INT32 __cselect_preg_w2c_71;
  register _UINT32 __comma_preg_w2c_260;
  register _UINT32 __comma_preg_w2c_1;
  register _UINT32 __comma_preg_w2c_6;
  register _UINT32 __comma_preg_w2c_11;
  register _INT32 __cselect_preg_w2c_0;
  register _UINT32 __comma_preg_w2c_16;
  register _UINT32 __comma_preg_w2c_21;
  register _INT32 __cselect_preg_w2c_2;
  register _UINT32 __comma_preg_w2c_30;
  register _UINT32 __comma_preg_w2c_33;
  register _UINT32 __comma_preg_w2c_38;
  register _UINT32 __comma_preg_w2c_42;
  register _INT32 __cselect_preg_w2c_8;
  register _UINT32 __comma_preg_w2c_46;
  register _UINT32 __comma_preg_w2c_50;
  register _INT32 __cselect_preg_w2c_10;
  register _UINT32 __comma_preg_w2c_56;
  register _UINT32 __comma_preg_w2c_58;
  register _UINT32 __comma_preg_w2c_62;
  register _UINT32 __comma_preg_w2c_66;
  register _INT32 __cselect_preg_w2c_16;
  register _UINT32 __comma_preg_w2c_70;
  register _UINT32 __comma_preg_w2c_74;
  register _INT32 __cselect_preg_w2c_18;
  register _UINT32 __comma_preg_w2c_80;
  register _UINT32 __comma_preg_w2c_82;
  register _UINT32 __comma_preg_w2c_86;
  register _UINT32 __comma_preg_w2c_90;
  register _INT32 __cselect_preg_w2c_24;
  register _UINT32 __comma_preg_w2c_94;
  register _UINT32 __comma_preg_w2c_98;
  register _INT32 __cselect_preg_w2c_26;
  register _INT32 __comma_preg_w2c_104;
  register _INT32 j_preg;
  register _UINT32 __comma_preg_w2c_106;
  register _UINT32 __comma_preg_w2c_110;
  register _UINT32 __comma_preg_w2c_114;
  register _UINT32 __comma_preg_w2c_118;
  register _UINT32 __comma_preg_w2c_122;
  register _UINT32 __comma_preg_w2c_126;
  register _UINT32 __comma_preg_w2c_129;
  register _UINT32 __comma_preg_w2c_130;
  register _UINT32 __comma_preg_w2c_132;
  register _UINT32 __comma_preg_w2c_136;
  register _UINT32 __comma_preg_w2c_140;
  register _UINT32 __comma_preg_w2c_144;
  register _UINT32 __comma_preg_w2c_148;
  register _UINT32 __comma_preg_w2c_152;
  register _UINT32 __comma_preg_w2c_155;
  register _UINT32 __comma_preg_w2c_156;
  register _UINT32 __comma_preg_w2c_158;
  register _UINT32 __comma_preg_w2c_162;
  register _UINT32 __comma_preg_w2c_167;
  register _UINT32 __comma_preg_w2c_172;
  register _UINT32 __comma_preg_w2c_177;
  register _UINT32 __comma_preg_w2c_182;
  register _UINT32 __comma_preg_w2c_187;
  register _UINT32 __comma_preg_w2c_190;
  register _UINT32 __comma_preg_w2c_192;
  register _UINT32 __comma_preg_w2c_196;
  register _UINT32 __comma_preg_w2c_201;
  register _UINT32 __comma_preg_w2c_206;
  register _UINT32 __comma_preg_w2c_211;
  register _UINT32 __comma_preg_w2c_216;
  register _UINT32 __comma_preg_w2c_221;
  register _UINT32 __comma_preg_w2c_224;
  register _INT32 __comma_preg_w2c_226;
  register _INT32 j_preg_w2c_0;
  register _INT32 __comma_preg_w2c_230;
  register _UINT32 __comma_preg_w2c_235;
  register _UINT32 __comma_preg_w2c_240;
  register _UINT32 __comma_preg_w2c_245;
  register _UINT32 __comma_preg_w2c_250;
  register _INT32 __cselect_preg_w2c_74;
  register _UINT32 __comma_preg_w2c_255;
  register _UINT32 __comma_preg_w2c_258;
  register _INT32 __cselect_preg;
  register _UINT32 __comma_preg_w2c_5;
  register _UINT32 __comma_preg_w2c_10;
  register _UINT32 __comma_preg_w2c_15;
  register _UINT32 __comma_preg_w2c_20;
  register _INT32 __cselect_preg_w2c_5;
  register _UINT32 __comma_preg_w2c_25;
  register _UINT32 __comma_preg_w2c_28;
  register _INT32 __cselect_preg_w2c_7;
  register _UINT32 __comma_preg_w2c_37;
  register _UINT32 __comma_preg_w2c_41;
  register _UINT32 __comma_preg_w2c_45;
  register _UINT32 __comma_preg_w2c_49;
  register _INT32 __cselect_preg_w2c_13;
  register _UINT32 __comma_preg_w2c_53;
  register _UINT32 __comma_preg_w2c_55;
  register _INT32 __cselect_preg_w2c_15;
  register _UINT32 __comma_preg_w2c_61;
  register _UINT32 __comma_preg_w2c_65;
  register _UINT32 __comma_preg_w2c_69;
  register _UINT32 __comma_preg_w2c_73;
  register _INT32 __cselect_preg_w2c_21;
  register _UINT32 __comma_preg_w2c_77;
  register _UINT32 __comma_preg_w2c_79;
  register _INT32 __cselect_preg_w2c_23;
  register _UINT32 __comma_preg_w2c_85;
  register _UINT32 __comma_preg_w2c_89;
  register _UINT32 __comma_preg_w2c_93;
  register _UINT32 __comma_preg_w2c_97;
  register _INT32 __cselect_preg_w2c_29;
  register _UINT32 __comma_preg_w2c_101;
  register _UINT32 __comma_preg_w2c_103;
  register _INT32 __cselect_preg_w2c_31;
  register _UINT32 __comma_preg_w2c_109;
  register _UINT32 __comma_preg_w2c_113;
  register _UINT32 __comma_preg_w2c_117;
  register _UINT32 __comma_preg_w2c_121;
  register _INT32 __cselect_preg_w2c_38;
  register _UINT32 __comma_preg_w2c_125;
  register _UINT32 __comma_preg_w2c_128;
  register _INT32 __cselect_preg_w2c_41;
  register _UINT32 __comma_preg_w2c_135;
  register _UINT32 __comma_preg_w2c_139;
  register _UINT32 __comma_preg_w2c_143;
  register _UINT32 __comma_preg_w2c_147;
  register _INT32 __cselect_preg_w2c_52;
  register _UINT32 __comma_preg_w2c_151;
  register _UINT32 __comma_preg_w2c_154;
  register _INT32 __cselect_preg_w2c_55;
  register _UINT32 __comma_preg_w2c_161;
  register _UINT32 __comma_preg_w2c_166;
  register _UINT32 __comma_preg_w2c_171;
  register _UINT32 __comma_preg_w2c_176;
  register _INT32 __cselect_preg_w2c_58;
  register _UINT32 __comma_preg_w2c_181;
  register _UINT32 __comma_preg_w2c_186;
  register _INT32 __cselect_preg_w2c_61;
  register _UINT32 __comma_preg_w2c_195;
  register _UINT32 __comma_preg_w2c_200;
  register _UINT32 __comma_preg_w2c_205;
  register _UINT32 __comma_preg_w2c_210;
  register _INT32 __cselect_preg_w2c_64;
  register _UINT32 __comma_preg_w2c_215;
  register _UINT32 __comma_preg_w2c_220;
  register _INT32 __cselect_preg_w2c_67;
  register _UINT32 __comma_preg_w2c_229;
  register _UINT32 __comma_preg_w2c_234;
  register _UINT32 __comma_preg_w2c_239;
  register _UINT32 __comma_preg_w2c_244;
  register _INT32 __cselect_preg_w2c_70;
  register _UINT32 __comma_preg_w2c_249;
  register _UINT32 __comma_preg_w2c_254;
  register _INT32 __cselect_preg_w2c_73;
  register _UINT32 __comma_preg_w2c_0;
  register _UINT32 __comma_preg_w2c_4;
  register _UINT32 __comma_preg_w2c_9;
  register _UINT32 __comma_preg_w2c_14;
  register _INT32 __cselect_preg_w2c_1;
  register _UINT32 __comma_preg_w2c_19;
  register _UINT32 __comma_preg_w2c_24;
  register _INT32 __cselect_preg_w2c_4;
  register _UINT32 __comma_preg_w2c_32;
  register _UINT32 __comma_preg_w2c_36;
  register _UINT32 __comma_preg_w2c_40;
  register _UINT32 __comma_preg_w2c_44;
  register _INT32 __cselect_preg_w2c_9;
  register _UINT32 __comma_preg_w2c_48;
  register _UINT32 __comma_preg_w2c_52;
  register _INT32 __cselect_preg_w2c_12;
  register _UINT32 __comma_preg_w2c_57;
  register _UINT32 __comma_preg_w2c_60;
  register _UINT32 __comma_preg_w2c_64;
  register _UINT32 __comma_preg_w2c_68;
  register _INT32 __cselect_preg_w2c_17;
  register _UINT32 __comma_preg_w2c_72;
  register _UINT32 __comma_preg_w2c_76;
  register _INT32 __cselect_preg_w2c_20;
  register _UINT32 __comma_preg_w2c_81;
  register _UINT32 __comma_preg_w2c_84;
  register _UINT32 __comma_preg_w2c_88;
  register _UINT32 __comma_preg_w2c_92;
  register _INT32 __cselect_preg_w2c_25;
  register _UINT32 __comma_preg_w2c_96;
  register _UINT32 __comma_preg_w2c_100;
  register _INT32 __cselect_preg_w2c_28;
  register _UINT32 __comma_preg_w2c_105;
  register _UINT32 __comma_preg_w2c_108;
  register _UINT32 __comma_preg_w2c_112;
  register _UINT32 __comma_preg_w2c_116;
  register _INT32 __cselect_preg_w2c_34;
  register _UINT32 __comma_preg_w2c_120;
  register _UINT32 __comma_preg_w2c_124;
  register _INT32 __cselect_preg_w2c_37;
  register _UINT32 __comma_preg_w2c_131;
  register _UINT32 __comma_preg_w2c_134;
  register _UINT32 __comma_preg_w2c_138;
  register _UINT32 __comma_preg_w2c_142;
  register _INT32 __cselect_preg_w2c_48;
  register _UINT32 __comma_preg_w2c_146;
  register _UINT32 __comma_preg_w2c_150;
  register _INT32 __cselect_preg_w2c_51;
  register _INT32 __comma_preg_w2c_157;
  register _INT32 j_preg_w2c_1;
  register _UINT32 __comma_preg_w2c_160;
  register _UINT32 __comma_preg_w2c_165;
  register _UINT32 __comma_preg_w2c_170;
  register _UINT32 __comma_preg_w2c_175;
  register _UINT32 __comma_preg_w2c_180;
  register _UINT32 __comma_preg_w2c_185;
  register _UINT32 __comma_preg_w2c_189;
  register _UINT32 __comma_preg_w2c_191;
  register _UINT32 __comma_preg_w2c_194;
  register _UINT32 __comma_preg_w2c_199;
  register _UINT32 __comma_preg_w2c_204;
  register _UINT32 __comma_preg_w2c_209;
  register _UINT32 __comma_preg_w2c_214;
  register _UINT32 __comma_preg_w2c_219;
  register _UINT32 __comma_preg_w2c_223;
  register _UINT32 __comma_preg_w2c_225;
  register _UINT32 __comma_preg_w2c_228;
  register _UINT32 __comma_preg_w2c_233;
  register _UINT32 __comma_preg_w2c_238;
  register _UINT32 __comma_preg_w2c_243;
  register _UINT32 __comma_preg_w2c_248;
  register _UINT32 __comma_preg_w2c_253;
  register _UINT32 __comma_preg_w2c_257;
  register _UINT32 __comma_preg_w2c_259;
  register _UINT32 __comma_preg;
  register _UINT32 __comma_preg_w2c_3;
  register _UINT32 __comma_preg_w2c_8;
  register _UINT32 __comma_preg_w2c_13;
  register _UINT32 __comma_preg_w2c_18;
  register _UINT32 __comma_preg_w2c_23;
  register _UINT32 __comma_preg_w2c_27;
  register _UINT32 __comma_preg_w2c_29;
  register _INT32 __comma_preg_w2c_31;
  register _INT32 j_preg_w2c_2;
  register _INT32 __comma_preg_w2c_35;
  _INT32 curr_diff[16LL][16LL];
  _INT32 diff[16LL];
  _INT16 pos;
  _INT16 best_pos;
  _INT16 mcost;
  _INT16 abort_search;
  _INT16 y0;
  _INT16 x0;
  _INT16 sy0;
  _INT16 sx0;
  _INT16 cand_mv_x;
  _INT16 cand_mv_y;
  _INT16 max_pos_x_w2c_4;
  _INT16 max_pos_y_w2c_4;
  _UINT16 * orig_line;
  struct storable_picture * ref_picture;
  _INT32 lambda_factor;
  _INT16 blocksize_x;
  _INT16 blocksize_y;
  _INT16 min_pos_w2c_2;
  _INT16 apply_weights;
  _INT32 img_width;
  _INT32 img_height;
  _INT32 qpelstart;
  _UINT16 ** ref1_pic;
  _UINT16 ** ref2_pic;
  
  lambda_factor = _I4F8TRUNC((lambda * 6.5536e+04) + 5.0e-01);
  blocksize_x = (((struct anonymous_w2c_3 *)((_UINT8 *)(input) + 80U))[blocktype][0U]).ProfileIDC;
  blocksize_y = (((struct anonymous_w2c_3 *)((_UINT8 *)(input) + 80U))[blocktype][1U]).ProfileIDC;
  min_pos_w2c_2 = (input) -> hadamard == (_INT32)(0U);
  if((input) -> hadamard != (_INT32)(0U))
  {
    __cselect_preg_w2c_32 = (_INT16)(_I4MAX(search_pos_w2c_2, (_INT32)(1U)));
  }
  else
  {
    __cselect_preg_w2c_32 = (_INT16)(search_pos_w2c_2);
  }
  if((*(((_INT32 *)(img) + 16384LL) + 1716LL) != (_INT32)(0U)) && ((((img) -> mb_data + (img) -> current_mb_nr)) -> mb_field != (_INT32)(0U)))
  {
    if((img) -> current_mb_nr & (_INT32)(1U))
    {
      __cselect_preg_w2c_33 = 4U;
    }
    else
    {
      __cselect_preg_w2c_33 = 2U;
    }
    __cselect_preg_w2c_36 = __cselect_preg_w2c_33;
  }
  else
  {
    __cselect_preg_w2c_36 = 0U;
  }
  apply_weights = (active_pps) -> weighted_bipred_idc;
  if((_INT32)(apply_weights) != (_INT32)(0U))
  {
    if(list == (_INT32)(0U))
    {
      __cselect_preg_w2c_40 = (_INT16)(*** (*(wbp_weight + (_INT64)((_INT16)(__cselect_preg_w2c_36))) + (_UINT64) ref));
      __cselect_preg_w2c_43 = (_INT16)(*** (*((wbp_weight + (_INT64)((_INT16)(__cselect_preg_w2c_36))) + 1LL) + (_UINT64) ref));
      __cselect_preg_w2c_45 = (_INT16)(** (*(wp_offset + (_INT64)((_INT16)(__cselect_preg_w2c_36))) + (_UINT64) ref));
      __cselect_preg_w2c_47 = (_INT16)(** (*((wp_offset + (_INT64)((_INT16)(__cselect_preg_w2c_36))) + 1LL) + (_UINT64) ref));
    }
    else
    {
      __cselect_preg_w2c_40 = (_INT16)(** (** ((wbp_weight + (_INT64)((_INT16)(__cselect_preg_w2c_36))) + 1LL) + (_UINT64) ref));
      __cselect_preg_w2c_43 = (_INT16)(** (** (wbp_weight + (_INT64)((_INT16)(__cselect_preg_w2c_36))) + (_UINT64) ref));
      __cselect_preg_w2c_45 = (_INT16)(*** ((wp_offset + (_INT64)((_INT16)(__cselect_preg_w2c_36))) + 1LL));
      __cselect_preg_w2c_47 = (_INT16)(*** (wp_offset + (_INT64)((_INT16)(__cselect_preg_w2c_36))));
    }
    __cselect_preg_w2c_42 = __cselect_preg_w2c_40;
    __cselect_preg_w2c_44 = __cselect_preg_w2c_43;
    __cselect_preg_w2c_46 = __cselect_preg_w2c_45;
    __cselect_preg_w2c_50 = __cselect_preg_w2c_47;
  }
  else
  {
    __cselect_preg_w2c_42 = 1U;
    __cselect_preg_w2c_44 = 1U;
    __cselect_preg_w2c_46 = 0U;
    __cselect_preg_w2c_50 = 0U;
  }
  if((input) -> hadamardqpel == (_INT32)(0U))
  {
    __cselect_preg_w2c_54 = (input) -> hadamard;
  }
  else
  {
    __cselect_preg_w2c_54 = 0U;
  }
  qpelstart = (input) -> hadamardqpel == (_INT32)(0U);
  ref1_pic = (*((listX)[list + (_INT16)(__cselect_preg_w2c_36)] + (_UINT64) ref)) -> imgY_ups;
  if(list == (_INT32)(0U))
  {
    __cselect_preg_w2c_56 = (_INT32)((_INT16)(__cselect_preg_w2c_36)) + (_INT32)(1U);
  }
  else
  {
    __cselect_preg_w2c_56 = (_INT16)(__cselect_preg_w2c_36);
  }
  ref2_pic = (*(listX)[__cselect_preg_w2c_56]) -> imgY_ups;
  ref_picture = *((listX)[list + (_INT16)(__cselect_preg_w2c_36)] + (_UINT64) ref);
  img_width = (ref_picture) -> size_x;
  img_height = (ref_picture) -> size_y;
  max_pos_x_w2c_4 = _I4SHL(((ref_picture) -> size_x - (_INT32)(blocksize_x)) + (_INT32)(1U), (_INT32)(2U));
  max_pos_y_w2c_4 = _I4SHL(((ref_picture) -> size_y - (_INT32)(blocksize_y)) + (_INT32)(1U), (_INT32)(2U));
  * mv_x = _I4SHL((_INT32) * mv_x, (_INT32)(2U));
  * mv_y = _I4SHL((_INT32) * mv_y, (_INT32)(2U));
  if((((((_INT32) * mv_x + (_INT32)((_INT16)(_I4SHL(pic_pix_x, (_INT32)(2U))))) > (_INT32)(1U)) && (((_INT32) * mv_x + (_INT32)((_INT16)(_I4SHL(pic_pix_x, (_INT32)(2U))))) < ((_INT32)(max_pos_x_w2c_4) + -2))) && (((_INT32)(*mv_y) + (_INT32)((_INT16)(_I4SHL(pic_pix_y, (_INT32)(2U))))) > (_INT32)(1U))) && (((_INT32)(*mv_y) + (_INT32)((_INT16)(_I4SHL(pic_pix_y, (_INT32)(2U))))) < ((_INT32)(max_pos_y_w2c_4) + -2)))
  {
    PelY_14 = &FastPelY_14;
  }
  else
  {
    PelY_14 = &UMVPelY_14;
  }
  if((((((_INT32) * s_mv_x + (_INT32)((_INT16)(_I4SHL(pic_pix_x, (_INT32)(2U))))) > (_INT32)(1U)) && (((_INT32) * s_mv_x + (_INT32)((_INT16)(_I4SHL(pic_pix_x, (_INT32)(2U))))) < ((_INT32)(max_pos_x_w2c_4) + -2))) && (((_INT32) * s_mv_y + (_INT32)((_INT16)(_I4SHL(pic_pix_y, (_INT32)(2U))))) > (_INT32)(1U))) && (((_INT32) * s_mv_y + (_INT32)((_INT16)(_I4SHL(pic_pix_y, (_INT32)(2U))))) < ((_INT32)(max_pos_y_w2c_4) + -2)))
  {
    PelY_14b = &FastPelY_14;
  }
  else
  {
    PelY_14b = &UMVPelY_14;
  }
  best_pos = 0U;
  pos = min_pos_w2c_2;
  while((_INT32)((_UINT64) pos) < (_INT32)((_INT16)(__cselect_preg_w2c_32)))
  {
    cand_mv_x = (_UINT16)((_UINT32)((_UINT16) * mv_x) + _U4SHL((_UINT32)(*(spiral_search_x + (_UINT64) pos)), 1U));
    cand_mv_y = (_UINT16)((_UINT32)((_UINT16) * mv_y) + _U4SHL((_UINT32)(*(spiral_search_y + (_UINT64) pos)), 1U));
    mcost = _I4ASHR(lambda_factor * (*(mvbits + (_INT64)(cand_mv_x - (_INT32) pred_mv_x)) + *(mvbits + (_INT64)(cand_mv_y - (_INT32) pred_mv_y))), (_INT32)(16U));
    y0 = 0U;
    abort_search = 0U;
    while(((_INT32)(blocksize_y) > (_INT32)((_UINT64) y0)) && ((_INT32)(abort_search) == (_INT32)(0U)))
    {
      sy0 = (_UINT16)((_UINT32)((_UINT16) * s_mv_y) + _U4SHL((_UINT32)(pic_pix_y) + (_UINT32)((_INT32)((_UINT64) y0)), 2U));
      if((_INT32)(apply_weights) != (_INT32)(0U))
      {
        x0 = 0U;
        while((_INT32)(blocksize_x) > (_INT32)((_UINT64) x0))
        {
          sx0 = (_UINT16)((_UINT32)((_UINT16) * s_mv_x) + _U4SHL((_UINT32)(pic_pix_x) + (_UINT32)((_INT32)((_UINT64) x0)), 2U));
          orig_line = *(orig_pic + (_UINT64) y0);
          __comma_preg_w2c_164 = (PelY_14b)(ref1_pic, sy0, sx0, img_height, img_width);
          __comma_preg_w2c_169 = (PelY_14)(ref2_pic, (_INT16)((_UINT16)((_UINT32)(cand_mv_y) + _U4SHL((_UINT32)(pic_pix_y) + (_UINT32)((_INT32)((_UINT64) y0)), 2U))), (_INT16)((_UINT16)((_UINT32)(cand_mv_x) + _U4SHL((_UINT32)(pic_pix_x) + (_UINT32)((_INT32)((_UINT64) x0)), 2U))), img_height, img_width);
          if((_I4ASHR((((_INT32)((_INT16)(__cselect_preg_w2c_42)) * (_INT32)((_UINT16)(__comma_preg_w2c_164))) + ((_INT32)((_INT16)(__cselect_preg_w2c_44)) * (_INT32)((_UINT16)(__comma_preg_w2c_169)))) + (wp_luma_round * (_INT32)(2U)), luma_log_weight_denom + (_INT32)(1U)) + (_INT32)((_INT16)(_I4ASHR(((_INT32)((_INT16)(__cselect_preg_w2c_46)) + (_INT32)((_INT16)(__cselect_preg_w2c_50))) + (_INT32)(1U), (_INT32)(1U))))) >= (_INT32)(0U))
          {
            __comma_preg_w2c_174 = (PelY_14b)(ref1_pic, sy0, sx0, img_height, img_width);
            __comma_preg_w2c_179 = (PelY_14)(ref2_pic, (_INT16)((_UINT16)((_UINT32)(cand_mv_y) + _U4SHL((_UINT32)(pic_pix_y) + (_UINT32)((_INT32)((_UINT64) y0)), 2U))), (_INT16)((_UINT16)((_UINT32)(cand_mv_x) + _U4SHL((_UINT32)(pic_pix_x) + (_UINT32)((_INT32)((_UINT64) x0)), 2U))), img_height, img_width);
            if(*(((_INT32 *)(img) + 16384LL) + 1787LL) < (_I4ASHR((((_INT32)((_INT16)(__cselect_preg_w2c_42)) * (_INT32)((_UINT16)(__comma_preg_w2c_174))) + ((_INT32)((_INT16)(__cselect_preg_w2c_44)) * (_INT32)((_UINT16)(__comma_preg_w2c_179)))) + (wp_luma_round * (_INT32)(2U)), luma_log_weight_denom + (_INT32)(1U)) + (_INT32)((_INT16)(_I4ASHR(((_INT32)((_INT16)(__cselect_preg_w2c_46)) + (_INT32)((_INT16)(__cselect_preg_w2c_50))) + (_INT32)(1U), (_INT32)(1U))))))
            {
              __cselect_preg_w2c_60 = *(((_INT32 *)(img) + 16384LL) + 1787LL);
            }
            else
            {
              __comma_preg_w2c_184 = (PelY_14b)(ref1_pic, sy0, sx0, img_height, img_width);
              __comma_preg_w2c_188 = (PelY_14)(ref2_pic, (_INT16)((_UINT16)((_UINT32)(cand_mv_y) + _U4SHL((_UINT32)(pic_pix_y) + (_UINT32)((_INT32)((_UINT64) y0)), 2U))), (_INT16)((_UINT16)((_UINT32)(cand_mv_x) + _U4SHL((_UINT32)(pic_pix_x) + (_UINT32)((_INT32)((_UINT64) x0)), 2U))), img_height, img_width);
              __cselect_preg_w2c_60 = _I4ASHR((((_INT32)((_INT16)(__cselect_preg_w2c_42)) * (_INT32)((_UINT16)(__comma_preg_w2c_184))) + ((_INT32)((_INT16)(__cselect_preg_w2c_44)) * (_INT32)((_UINT16)(__comma_preg_w2c_188)))) + (wp_luma_round * (_INT32)(2U)), luma_log_weight_denom + (_INT32)(1U)) + (_INT32)((_INT16)(_I4ASHR(((_INT32)((_INT16)(__cselect_preg_w2c_46)) + (_INT32)((_INT16)(__cselect_preg_w2c_50))) + (_INT32)(1U), (_INT32)(1U))));
            }
            __cselect_preg_w2c_62 = __cselect_preg_w2c_60;
          }
          else
          {
            __cselect_preg_w2c_62 = 0U;
          }
          * diff = (_INT32) * (orig_line + (_UINT64) x0) - __cselect_preg_w2c_62;
          __comma_preg_w2c_198 = (PelY_14b)(ref1_pic, sy0, (_INT32)(sx0) + (_INT32)(4U), img_height, img_width);
          __comma_preg_w2c_203 = (PelY_14)(ref2_pic, (_INT16)((_UINT16)((_UINT32)(cand_mv_y) + _U4SHL((_UINT32)(pic_pix_y) + (_UINT32)((_INT32)((_UINT64) y0)), 2U))), (_INT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_x) + _U4SHL((_UINT32)(pic_pix_x) + (_UINT32)((_INT32)((_UINT64) x0)), 2U)))) + (_INT32)(4U), img_height, img_width);
          if((_I4ASHR((((_INT32)((_INT16)(__cselect_preg_w2c_42)) * (_INT32)((_UINT16)(__comma_preg_w2c_198))) + ((_INT32)((_INT16)(__cselect_preg_w2c_44)) * (_INT32)((_UINT16)(__comma_preg_w2c_203)))) + (wp_luma_round * (_INT32)(2U)), luma_log_weight_denom + (_INT32)(1U)) + (_INT32)((_INT16)(_I4ASHR(((_INT32)((_INT16)(__cselect_preg_w2c_46)) + (_INT32)((_INT16)(__cselect_preg_w2c_50))) + (_INT32)(1U), (_INT32)(1U))))) >= (_INT32)(0U))
          {
            __comma_preg_w2c_208 = (PelY_14b)(ref1_pic, sy0, (_INT32)(sx0) + (_INT32)(4U), img_height, img_width);
            __comma_preg_w2c_213 = (PelY_14)(ref2_pic, (_INT16)((_UINT16)((_UINT32)(cand_mv_y) + _U4SHL((_UINT32)(pic_pix_y) + (_UINT32)((_INT32)((_UINT64) y0)), 2U))), (_INT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_x) + _U4SHL((_UINT32)(pic_pix_x) + (_UINT32)((_INT32)((_UINT64) x0)), 2U)))) + (_INT32)(4U), img_height, img_width);
            if(*(((_INT32 *)(img) + 16384LL) + 1787LL) < (_I4ASHR((((_INT32)((_INT16)(__cselect_preg_w2c_42)) * (_INT32)((_UINT16)(__comma_preg_w2c_208))) + ((_INT32)((_INT16)(__cselect_preg_w2c_44)) * (_INT32)((_UINT16)(__comma_preg_w2c_213)))) + (wp_luma_round * (_INT32)(2U)), luma_log_weight_denom + (_INT32)(1U)) + (_INT32)((_INT16)(_I4ASHR(((_INT32)((_INT16)(__cselect_preg_w2c_46)) + (_INT32)((_INT16)(__cselect_preg_w2c_50))) + (_INT32)(1U), (_INT32)(1U))))))
            {
              __cselect_preg_w2c_66 = *(((_INT32 *)(img) + 16384LL) + 1787LL);
            }
            else
            {
              __comma_preg_w2c_218 = (PelY_14b)(ref1_pic, sy0, (_INT32)(sx0) + (_INT32)(4U), img_height, img_width);
              __comma_preg_w2c_222 = (PelY_14)(ref2_pic, (_INT16)((_UINT16)((_UINT32)(cand_mv_y) + _U4SHL((_UINT32)(pic_pix_y) + (_UINT32)((_INT32)((_UINT64) y0)), 2U))), (_INT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_x) + _U4SHL((_UINT32)(pic_pix_x) + (_UINT32)((_INT32)((_UINT64) x0)), 2U)))) + (_INT32)(4U), img_height, img_width);
              __cselect_preg_w2c_66 = _I4ASHR((((_INT32)((_INT16)(__cselect_preg_w2c_42)) * (_INT32)((_UINT16)(__comma_preg_w2c_218))) + ((_INT32)((_INT16)(__cselect_preg_w2c_44)) * (_INT32)((_UINT16)(__comma_preg_w2c_222)))) + (wp_luma_round * (_INT32)(2U)), luma_log_weight_denom + (_INT32)(1U)) + (_INT32)((_INT16)(_I4ASHR(((_INT32)((_INT16)(__cselect_preg_w2c_46)) + (_INT32)((_INT16)(__cselect_preg_w2c_50))) + (_INT32)(1U), (_INT32)(1U))));
            }
            __cselect_preg_w2c_68 = __cselect_preg_w2c_66;
          }
          else
          {
            __cselect_preg_w2c_68 = 0U;
          }
          * (diff + 1LL) = (_INT32) * ((orig_line + (_UINT64) x0) + 1LL) - __cselect_preg_w2c_68;
          __comma_preg_w2c_232 = (PelY_14b)(ref1_pic, sy0, (_INT32)(sx0) + (_INT32)(8U), img_height, img_width);
          __comma_preg_w2c_237 = (PelY_14)(ref2_pic, (_INT16)((_UINT16)((_UINT32)(cand_mv_y) + _U4SHL((_UINT32)(pic_pix_y) + (_UINT32)((_INT32)((_UINT64) y0)), 2U))), (_INT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_x) + _U4SHL((_UINT32)(pic_pix_x) + (_UINT32)((_INT32)((_UINT64) x0)), 2U)))) + (_INT32)(8U), img_height, img_width);
          if((_I4ASHR((((_INT32)((_INT16)(__cselect_preg_w2c_42)) * (_INT32)((_UINT16)(__comma_preg_w2c_232))) + ((_INT32)((_INT16)(__cselect_preg_w2c_44)) * (_INT32)((_UINT16)(__comma_preg_w2c_237)))) + (wp_luma_round * (_INT32)(2U)), luma_log_weight_denom + (_INT32)(1U)) + (_INT32)((_INT16)(_I4ASHR(((_INT32)((_INT16)(__cselect_preg_w2c_46)) + (_INT32)((_INT16)(__cselect_preg_w2c_50))) + (_INT32)(1U), (_INT32)(1U))))) >= (_INT32)(0U))
          {
            __comma_preg_w2c_242 = (PelY_14b)(ref1_pic, sy0, (_INT32)(sx0) + (_INT32)(8U), img_height, img_width);
            __comma_preg_w2c_247 = (PelY_14)(ref2_pic, (_INT16)((_UINT16)((_UINT32)(cand_mv_y) + _U4SHL((_UINT32)(pic_pix_y) + (_UINT32)((_INT32)((_UINT64) y0)), 2U))), (_INT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_x) + _U4SHL((_UINT32)(pic_pix_x) + (_UINT32)((_INT32)((_UINT64) x0)), 2U)))) + (_INT32)(8U), img_height, img_width);
            if(*(((_INT32 *)(img) + 16384LL) + 1787LL) < (_I4ASHR((((_INT32)((_INT16)(__cselect_preg_w2c_42)) * (_INT32)((_UINT16)(__comma_preg_w2c_242))) + ((_INT32)((_INT16)(__cselect_preg_w2c_44)) * (_INT32)((_UINT16)(__comma_preg_w2c_247)))) + (wp_luma_round * (_INT32)(2U)), luma_log_weight_denom + (_INT32)(1U)) + (_INT32)((_INT16)(_I4ASHR(((_INT32)((_INT16)(__cselect_preg_w2c_46)) + (_INT32)((_INT16)(__cselect_preg_w2c_50))) + (_INT32)(1U), (_INT32)(1U))))))
            {
              __cselect_preg_w2c_72 = *(((_INT32 *)(img) + 16384LL) + 1787LL);
            }
            else
            {
              __comma_preg_w2c_252 = (PelY_14b)(ref1_pic, sy0, (_INT32)(sx0) + (_INT32)(8U), img_height, img_width);
              __comma_preg_w2c_256 = (PelY_14)(ref2_pic, (_INT16)((_UINT16)((_UINT32)(cand_mv_y) + _U4SHL((_UINT32)(pic_pix_y) + (_UINT32)((_INT32)((_UINT64) y0)), 2U))), (_INT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_x) + _U4SHL((_UINT32)(pic_pix_x) + (_UINT32)((_INT32)((_UINT64) x0)), 2U)))) + (_INT32)(8U), img_height, img_width);
              __cselect_preg_w2c_72 = _I4ASHR((((_INT32)((_INT16)(__cselect_preg_w2c_42)) * (_INT32)((_UINT16)(__comma_preg_w2c_252))) + ((_INT32)((_INT16)(__cselect_preg_w2c_44)) * (_INT32)((_UINT16)(__comma_preg_w2c_256)))) + (wp_luma_round * (_INT32)(2U)), luma_log_weight_denom + (_INT32)(1U)) + (_INT32)((_INT16)(_I4ASHR(((_INT32)((_INT16)(__cselect_preg_w2c_46)) + (_INT32)((_INT16)(__cselect_preg_w2c_50))) + (_INT32)(1U), (_INT32)(1U))));
            }
            __cselect_preg_w2c_75 = __cselect_preg_w2c_72;
          }
          else
          {
            __cselect_preg_w2c_75 = 0U;
          }
          * (diff + 2LL) = (_INT32) * ((orig_line + (_UINT64) x0) + 2LL) - __cselect_preg_w2c_75;
          __comma_preg_w2c_2 = (PelY_14b)(ref1_pic, sy0, (_INT32)(sx0) + (_INT32)(12U), img_height, img_width);
          __comma_preg_w2c_7 = (PelY_14)(ref2_pic, (_INT16)((_UINT16)((_UINT32)(cand_mv_y) + _U4SHL((_UINT32)(pic_pix_y) + (_UINT32)((_INT32)((_UINT64) y0)), 2U))), (_INT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_x) + _U4SHL((_UINT32)(pic_pix_x) + (_UINT32)((_INT32)((_UINT64) x0)), 2U)))) + (_INT32)(12U), img_height, img_width);
          if((_I4ASHR((((_INT32)((_INT16)(__cselect_preg_w2c_42)) * (_INT32)((_UINT16)(__comma_preg_w2c_2))) + ((_INT32)((_INT16)(__cselect_preg_w2c_44)) * (_INT32)((_UINT16)(__comma_preg_w2c_7)))) + (wp_luma_round * (_INT32)(2U)), luma_log_weight_denom + (_INT32)(1U)) + (_INT32)((_INT16)(_I4ASHR(((_INT32)((_INT16)(__cselect_preg_w2c_46)) + (_INT32)((_INT16)(__cselect_preg_w2c_50))) + (_INT32)(1U), (_INT32)(1U))))) >= (_INT32)(0U))
          {
            __comma_preg_w2c_12 = (PelY_14b)(ref1_pic, sy0, (_INT32)(sx0) + (_INT32)(12U), img_height, img_width);
            __comma_preg_w2c_17 = (PelY_14)(ref2_pic, (_INT16)((_UINT16)((_UINT32)(cand_mv_y) + _U4SHL((_UINT32)(pic_pix_y) + (_UINT32)((_INT32)((_UINT64) y0)), 2U))), (_INT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_x) + _U4SHL((_UINT32)(pic_pix_x) + (_UINT32)((_INT32)((_UINT64) x0)), 2U)))) + (_INT32)(12U), img_height, img_width);
            if(*(((_INT32 *)(img) + 16384LL) + 1787LL) < (_I4ASHR((((_INT32)((_INT16)(__cselect_preg_w2c_42)) * (_INT32)((_UINT16)(__comma_preg_w2c_12))) + ((_INT32)((_INT16)(__cselect_preg_w2c_44)) * (_INT32)((_UINT16)(__comma_preg_w2c_17)))) + (wp_luma_round * (_INT32)(2U)), luma_log_weight_denom + (_INT32)(1U)) + (_INT32)((_INT16)(_I4ASHR(((_INT32)((_INT16)(__cselect_preg_w2c_46)) + (_INT32)((_INT16)(__cselect_preg_w2c_50))) + (_INT32)(1U), (_INT32)(1U))))))
            {
              __cselect_preg_w2c_3 = *(((_INT32 *)(img) + 16384LL) + 1787LL);
            }
            else
            {
              __comma_preg_w2c_22 = (PelY_14b)(ref1_pic, sy0, (_INT32)(sx0) + (_INT32)(12U), img_height, img_width);
              __comma_preg_w2c_26 = (PelY_14)(ref2_pic, (_INT16)((_UINT16)((_UINT32)(cand_mv_y) + _U4SHL((_UINT32)(pic_pix_y) + (_UINT32)((_INT32)((_UINT64) y0)), 2U))), (_INT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_x) + _U4SHL((_UINT32)(pic_pix_x) + (_UINT32)((_INT32)((_UINT64) x0)), 2U)))) + (_INT32)(12U), img_height, img_width);
              __cselect_preg_w2c_3 = _I4ASHR((((_INT32)((_INT16)(__cselect_preg_w2c_42)) * (_INT32)((_UINT16)(__comma_preg_w2c_22))) + ((_INT32)((_INT16)(__cselect_preg_w2c_44)) * (_INT32)((_UINT16)(__comma_preg_w2c_26)))) + (wp_luma_round * (_INT32)(2U)), luma_log_weight_denom + (_INT32)(1U)) + (_INT32)((_INT16)(_I4ASHR(((_INT32)((_INT16)(__cselect_preg_w2c_46)) + (_INT32)((_INT16)(__cselect_preg_w2c_50))) + (_INT32)(1U), (_INT32)(1U))));
            }
            __cselect_preg_w2c_6 = __cselect_preg_w2c_3;
          }
          else
          {
            __cselect_preg_w2c_6 = 0U;
          }
          * (diff + 3LL) = (_INT32) * ((orig_line + (_UINT64) x0) + 3LL) - __cselect_preg_w2c_6;
          orig_line = *((orig_pic + (_UINT64) y0) + 1LL);
          __comma_preg_w2c_34 = (PelY_14b)(ref1_pic, (_INT16)((_UINT16)((_UINT32)(sy0) + 4U)), sx0, img_height, img_width);
          __comma_preg_w2c_39 = (PelY_14)(ref2_pic, (_INT16)((_UINT16)((_UINT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_y) + _U4SHL((_UINT32)(pic_pix_y) + (_UINT32)((_INT32)((_UINT64) y0)), 2U)))) + 4U)), (_INT16)((_UINT16)((_UINT32)(cand_mv_x) + _U4SHL((_UINT32)(pic_pix_x) + (_UINT32)((_INT32)((_UINT64) x0)), 2U))), img_height, img_width);
          if((_I4ASHR((((_INT32)((_INT16)(__cselect_preg_w2c_42)) * (_INT32)((_UINT16)(__comma_preg_w2c_34))) + ((_INT32)((_INT16)(__cselect_preg_w2c_44)) * (_INT32)((_UINT16)(__comma_preg_w2c_39)))) + (wp_luma_round * (_INT32)(2U)), luma_log_weight_denom + (_INT32)(1U)) + (_INT32)((_INT16)(_I4ASHR(((_INT32)((_INT16)(__cselect_preg_w2c_46)) + (_INT32)((_INT16)(__cselect_preg_w2c_50))) + (_INT32)(1U), (_INT32)(1U))))) >= (_INT32)(0U))
          {
            __comma_preg_w2c_43 = (PelY_14b)(ref1_pic, (_INT16)((_UINT16)((_UINT32)(sy0) + 4U)), sx0, img_height, img_width);
            __comma_preg_w2c_47 = (PelY_14)(ref2_pic, (_INT16)((_UINT16)((_UINT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_y) + _U4SHL((_UINT32)(pic_pix_y) + (_UINT32)((_INT32)((_UINT64) y0)), 2U)))) + 4U)), (_INT16)((_UINT16)((_UINT32)(cand_mv_x) + _U4SHL((_UINT32)(pic_pix_x) + (_UINT32)((_INT32)((_UINT64) x0)), 2U))), img_height, img_width);
            if(*(((_INT32 *)(img) + 16384LL) + 1787LL) < (_I4ASHR((((_INT32)((_INT16)(__cselect_preg_w2c_42)) * (_INT32)((_UINT16)(__comma_preg_w2c_43))) + ((_INT32)((_INT16)(__cselect_preg_w2c_44)) * (_INT32)((_UINT16)(__comma_preg_w2c_47)))) + (wp_luma_round * (_INT32)(2U)), luma_log_weight_denom + (_INT32)(1U)) + (_INT32)((_INT16)(_I4ASHR(((_INT32)((_INT16)(__cselect_preg_w2c_46)) + (_INT32)((_INT16)(__cselect_preg_w2c_50))) + (_INT32)(1U), (_INT32)(1U))))))
            {
              __cselect_preg_w2c_11 = *(((_INT32 *)(img) + 16384LL) + 1787LL);
            }
            else
            {
              __comma_preg_w2c_51 = (PelY_14b)(ref1_pic, (_INT16)((_UINT16)((_UINT32)(sy0) + 4U)), sx0, img_height, img_width);
              __comma_preg_w2c_54 = (PelY_14)(ref2_pic, (_INT16)((_UINT16)((_UINT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_y) + _U4SHL((_UINT32)(pic_pix_y) + (_UINT32)((_INT32)((_UINT64) y0)), 2U)))) + 4U)), (_INT16)((_UINT16)((_UINT32)(cand_mv_x) + _U4SHL((_UINT32)(pic_pix_x) + (_UINT32)((_INT32)((_UINT64) x0)), 2U))), img_height, img_width);
              __cselect_preg_w2c_11 = _I4ASHR((((_INT32)((_INT16)(__cselect_preg_w2c_42)) * (_INT32)((_UINT16)(__comma_preg_w2c_51))) + ((_INT32)((_INT16)(__cselect_preg_w2c_44)) * (_INT32)((_UINT16)(__comma_preg_w2c_54)))) + (wp_luma_round * (_INT32)(2U)), luma_log_weight_denom + (_INT32)(1U)) + (_INT32)((_INT16)(_I4ASHR(((_INT32)((_INT16)(__cselect_preg_w2c_46)) + (_INT32)((_INT16)(__cselect_preg_w2c_50))) + (_INT32)(1U), (_INT32)(1U))));
            }
            __cselect_preg_w2c_14 = __cselect_preg_w2c_11;
          }
          else
          {
            __cselect_preg_w2c_14 = 0U;
          }
          * (diff + 4LL) = (_INT32) * (orig_line + (_UINT64) x0) - __cselect_preg_w2c_14;
          __comma_preg_w2c_59 = (PelY_14b)(ref1_pic, (_INT16)((_UINT16)((_UINT32)(sy0) + 4U)), (_INT32)(sx0) + (_INT32)(4U), img_height, img_width);
          __comma_preg_w2c_63 = (PelY_14)(ref2_pic, (_INT16)((_UINT16)((_UINT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_y) + _U4SHL((_UINT32)(pic_pix_y) + (_UINT32)((_INT32)((_UINT64) y0)), 2U)))) + 4U)), (_INT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_x) + _U4SHL((_UINT32)(pic_pix_x) + (_UINT32)((_INT32)((_UINT64) x0)), 2U)))) + (_INT32)(4U), img_height, img_width);
          if((_I4ASHR((((_INT32)((_INT16)(__cselect_preg_w2c_42)) * (_INT32)((_UINT16)(__comma_preg_w2c_59))) + ((_INT32)((_INT16)(__cselect_preg_w2c_44)) * (_INT32)((_UINT16)(__comma_preg_w2c_63)))) + (wp_luma_round * (_INT32)(2U)), luma_log_weight_denom + (_INT32)(1U)) + (_INT32)((_INT16)(_I4ASHR(((_INT32)((_INT16)(__cselect_preg_w2c_46)) + (_INT32)((_INT16)(__cselect_preg_w2c_50))) + (_INT32)(1U), (_INT32)(1U))))) >= (_INT32)(0U))
          {
            __comma_preg_w2c_67 = (PelY_14b)(ref1_pic, (_INT16)((_UINT16)((_UINT32)(sy0) + 4U)), (_INT32)(sx0) + (_INT32)(4U), img_height, img_width);
            __comma_preg_w2c_71 = (PelY_14)(ref2_pic, (_INT16)((_UINT16)((_UINT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_y) + _U4SHL((_UINT32)(pic_pix_y) + (_UINT32)((_INT32)((_UINT64) y0)), 2U)))) + 4U)), (_INT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_x) + _U4SHL((_UINT32)(pic_pix_x) + (_UINT32)((_INT32)((_UINT64) x0)), 2U)))) + (_INT32)(4U), img_height, img_width);
            if(*(((_INT32 *)(img) + 16384LL) + 1787LL) < (_I4ASHR((((_INT32)((_INT16)(__cselect_preg_w2c_42)) * (_INT32)((_UINT16)(__comma_preg_w2c_67))) + ((_INT32)((_INT16)(__cselect_preg_w2c_44)) * (_INT32)((_UINT16)(__comma_preg_w2c_71)))) + (wp_luma_round * (_INT32)(2U)), luma_log_weight_denom + (_INT32)(1U)) + (_INT32)((_INT16)(_I4ASHR(((_INT32)((_INT16)(__cselect_preg_w2c_46)) + (_INT32)((_INT16)(__cselect_preg_w2c_50))) + (_INT32)(1U), (_INT32)(1U))))))
            {
              __cselect_preg_w2c_19 = *(((_INT32 *)(img) + 16384LL) + 1787LL);
            }
            else
            {
              __comma_preg_w2c_75 = (PelY_14b)(ref1_pic, (_INT16)((_UINT16)((_UINT32)(sy0) + 4U)), (_INT32)(sx0) + (_INT32)(4U), img_height, img_width);
              __comma_preg_w2c_78 = (PelY_14)(ref2_pic, (_INT16)((_UINT16)((_UINT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_y) + _U4SHL((_UINT32)(pic_pix_y) + (_UINT32)((_INT32)((_UINT64) y0)), 2U)))) + 4U)), (_INT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_x) + _U4SHL((_UINT32)(pic_pix_x) + (_UINT32)((_INT32)((_UINT64) x0)), 2U)))) + (_INT32)(4U), img_height, img_width);
              __cselect_preg_w2c_19 = _I4ASHR((((_INT32)((_INT16)(__cselect_preg_w2c_42)) * (_INT32)((_UINT16)(__comma_preg_w2c_75))) + ((_INT32)((_INT16)(__cselect_preg_w2c_44)) * (_INT32)((_UINT16)(__comma_preg_w2c_78)))) + (wp_luma_round * (_INT32)(2U)), luma_log_weight_denom + (_INT32)(1U)) + (_INT32)((_INT16)(_I4ASHR(((_INT32)((_INT16)(__cselect_preg_w2c_46)) + (_INT32)((_INT16)(__cselect_preg_w2c_50))) + (_INT32)(1U), (_INT32)(1U))));
            }
            __cselect_preg_w2c_22 = __cselect_preg_w2c_19;
          }
          else
          {
            __cselect_preg_w2c_22 = 0U;
          }
          * (diff + 5LL) = (_INT32) * ((orig_line + (_UINT64) x0) + 1LL) - __cselect_preg_w2c_22;
          __comma_preg_w2c_83 = (PelY_14b)(ref1_pic, (_INT16)((_UINT16)((_UINT32)(sy0) + 4U)), (_INT32)(sx0) + (_INT32)(8U), img_height, img_width);
          __comma_preg_w2c_87 = (PelY_14)(ref2_pic, (_INT16)((_UINT16)((_UINT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_y) + _U4SHL((_UINT32)(pic_pix_y) + (_UINT32)((_INT32)((_UINT64) y0)), 2U)))) + 4U)), (_INT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_x) + _U4SHL((_UINT32)(pic_pix_x) + (_UINT32)((_INT32)((_UINT64) x0)), 2U)))) + (_INT32)(8U), img_height, img_width);
          if((_I4ASHR((((_INT32)((_INT16)(__cselect_preg_w2c_42)) * (_INT32)((_UINT16)(__comma_preg_w2c_83))) + ((_INT32)((_INT16)(__cselect_preg_w2c_44)) * (_INT32)((_UINT16)(__comma_preg_w2c_87)))) + (wp_luma_round * (_INT32)(2U)), luma_log_weight_denom + (_INT32)(1U)) + (_INT32)((_INT16)(_I4ASHR(((_INT32)((_INT16)(__cselect_preg_w2c_46)) + (_INT32)((_INT16)(__cselect_preg_w2c_50))) + (_INT32)(1U), (_INT32)(1U))))) >= (_INT32)(0U))
          {
            __comma_preg_w2c_91 = (PelY_14b)(ref1_pic, (_INT16)((_UINT16)((_UINT32)(sy0) + 4U)), (_INT32)(sx0) + (_INT32)(8U), img_height, img_width);
            __comma_preg_w2c_95 = (PelY_14)(ref2_pic, (_INT16)((_UINT16)((_UINT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_y) + _U4SHL((_UINT32)(pic_pix_y) + (_UINT32)((_INT32)((_UINT64) y0)), 2U)))) + 4U)), (_INT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_x) + _U4SHL((_UINT32)(pic_pix_x) + (_UINT32)((_INT32)((_UINT64) x0)), 2U)))) + (_INT32)(8U), img_height, img_width);
            if(*(((_INT32 *)(img) + 16384LL) + 1787LL) < (_I4ASHR((((_INT32)((_INT16)(__cselect_preg_w2c_42)) * (_INT32)((_UINT16)(__comma_preg_w2c_91))) + ((_INT32)((_INT16)(__cselect_preg_w2c_44)) * (_INT32)((_UINT16)(__comma_preg_w2c_95)))) + (wp_luma_round * (_INT32)(2U)), luma_log_weight_denom + (_INT32)(1U)) + (_INT32)((_INT16)(_I4ASHR(((_INT32)((_INT16)(__cselect_preg_w2c_46)) + (_INT32)((_INT16)(__cselect_preg_w2c_50))) + (_INT32)(1U), (_INT32)(1U))))))
            {
              __cselect_preg_w2c_27 = *(((_INT32 *)(img) + 16384LL) + 1787LL);
            }
            else
            {
              __comma_preg_w2c_99 = (PelY_14b)(ref1_pic, (_INT16)((_UINT16)((_UINT32)(sy0) + 4U)), (_INT32)(sx0) + (_INT32)(8U), img_height, img_width);
              __comma_preg_w2c_102 = (PelY_14)(ref2_pic, (_INT16)((_UINT16)((_UINT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_y) + _U4SHL((_UINT32)(pic_pix_y) + (_UINT32)((_INT32)((_UINT64) y0)), 2U)))) + 4U)), (_INT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_x) + _U4SHL((_UINT32)(pic_pix_x) + (_UINT32)((_INT32)((_UINT64) x0)), 2U)))) + (_INT32)(8U), img_height, img_width);
              __cselect_preg_w2c_27 = _I4ASHR((((_INT32)((_INT16)(__cselect_preg_w2c_42)) * (_INT32)((_UINT16)(__comma_preg_w2c_99))) + ((_INT32)((_INT16)(__cselect_preg_w2c_44)) * (_INT32)((_UINT16)(__comma_preg_w2c_102)))) + (wp_luma_round * (_INT32)(2U)), luma_log_weight_denom + (_INT32)(1U)) + (_INT32)((_INT16)(_I4ASHR(((_INT32)((_INT16)(__cselect_preg_w2c_46)) + (_INT32)((_INT16)(__cselect_preg_w2c_50))) + (_INT32)(1U), (_INT32)(1U))));
            }
            __cselect_preg_w2c_30 = __cselect_preg_w2c_27;
          }
          else
          {
            __cselect_preg_w2c_30 = 0U;
          }
          * (diff + 6LL) = (_INT32) * ((orig_line + (_UINT64) x0) + 2LL) - __cselect_preg_w2c_30;
          __comma_preg_w2c_107 = (PelY_14b)(ref1_pic, (_INT16)((_UINT16)((_UINT32)(sy0) + 4U)), (_INT32)(sx0) + (_INT32)(12U), img_height, img_width);
          __comma_preg_w2c_111 = (PelY_14)(ref2_pic, (_INT16)((_UINT16)((_UINT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_y) + _U4SHL((_UINT32)(pic_pix_y) + (_UINT32)((_INT32)((_UINT64) y0)), 2U)))) + 4U)), (_INT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_x) + _U4SHL((_UINT32)(pic_pix_x) + (_UINT32)((_INT32)((_UINT64) x0)), 2U)))) + (_INT32)(12U), img_height, img_width);
          if((_I4ASHR((((_INT32)((_INT16)(__cselect_preg_w2c_42)) * (_INT32)((_UINT16)(__comma_preg_w2c_107))) + ((_INT32)((_INT16)(__cselect_preg_w2c_44)) * (_INT32)((_UINT16)(__comma_preg_w2c_111)))) + (wp_luma_round * (_INT32)(2U)), luma_log_weight_denom + (_INT32)(1U)) + (_INT32)((_INT16)(_I4ASHR(((_INT32)((_INT16)(__cselect_preg_w2c_46)) + (_INT32)((_INT16)(__cselect_preg_w2c_50))) + (_INT32)(1U), (_INT32)(1U))))) >= (_INT32)(0U))
          {
            __comma_preg_w2c_115 = (PelY_14b)(ref1_pic, (_INT16)((_UINT16)((_UINT32)(sy0) + 4U)), (_INT32)(sx0) + (_INT32)(12U), img_height, img_width);
            __comma_preg_w2c_119 = (PelY_14)(ref2_pic, (_INT16)((_UINT16)((_UINT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_y) + _U4SHL((_UINT32)(pic_pix_y) + (_UINT32)((_INT32)((_UINT64) y0)), 2U)))) + 4U)), (_INT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_x) + _U4SHL((_UINT32)(pic_pix_x) + (_UINT32)((_INT32)((_UINT64) x0)), 2U)))) + (_INT32)(12U), img_height, img_width);
            if(*(((_INT32 *)(img) + 16384LL) + 1787LL) < (_I4ASHR((((_INT32)((_INT16)(__cselect_preg_w2c_42)) * (_INT32)((_UINT16)(__comma_preg_w2c_115))) + ((_INT32)((_INT16)(__cselect_preg_w2c_44)) * (_INT32)((_UINT16)(__comma_preg_w2c_119)))) + (wp_luma_round * (_INT32)(2U)), luma_log_weight_denom + (_INT32)(1U)) + (_INT32)((_INT16)(_I4ASHR(((_INT32)((_INT16)(__cselect_preg_w2c_46)) + (_INT32)((_INT16)(__cselect_preg_w2c_50))) + (_INT32)(1U), (_INT32)(1U))))))
            {
              __cselect_preg_w2c_35 = *(((_INT32 *)(img) + 16384LL) + 1787LL);
            }
            else
            {
              __comma_preg_w2c_123 = (PelY_14b)(ref1_pic, (_INT16)((_UINT16)((_UINT32)(sy0) + 4U)), (_INT32)(sx0) + (_INT32)(12U), img_height, img_width);
              __comma_preg_w2c_127 = (PelY_14)(ref2_pic, (_INT16)((_UINT16)((_UINT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_y) + _U4SHL((_UINT32)(pic_pix_y) + (_UINT32)((_INT32)((_UINT64) y0)), 2U)))) + 4U)), (_INT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_x) + _U4SHL((_UINT32)(pic_pix_x) + (_UINT32)((_INT32)((_UINT64) x0)), 2U)))) + (_INT32)(12U), img_height, img_width);
              __cselect_preg_w2c_35 = _I4ASHR((((_INT32)((_INT16)(__cselect_preg_w2c_42)) * (_INT32)((_UINT16)(__comma_preg_w2c_123))) + ((_INT32)((_INT16)(__cselect_preg_w2c_44)) * (_INT32)((_UINT16)(__comma_preg_w2c_127)))) + (wp_luma_round * (_INT32)(2U)), luma_log_weight_denom + (_INT32)(1U)) + (_INT32)((_INT16)(_I4ASHR(((_INT32)((_INT16)(__cselect_preg_w2c_46)) + (_INT32)((_INT16)(__cselect_preg_w2c_50))) + (_INT32)(1U), (_INT32)(1U))));
            }
            __cselect_preg_w2c_39 = __cselect_preg_w2c_35;
          }
          else
          {
            __cselect_preg_w2c_39 = 0U;
          }
          * (diff + 7LL) = (_INT32) * ((orig_line + (_UINT64) x0) + 3LL) - __cselect_preg_w2c_39;
          orig_line = *((orig_pic + (_UINT64) y0) + 2LL);
          __comma_preg_w2c_133 = (PelY_14b)(ref1_pic, (_INT16)((_UINT16)((_UINT32)(sy0) + 8U)), sx0, img_height, img_width);
          __comma_preg_w2c_137 = (PelY_14)(ref2_pic, (_INT16)((_UINT16)((_UINT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_y) + _U4SHL((_UINT32)(pic_pix_y) + (_UINT32)((_INT32)((_UINT64) y0)), 2U)))) + 8U)), (_INT16)((_UINT16)((_UINT32)(cand_mv_x) + _U4SHL((_UINT32)(pic_pix_x) + (_UINT32)((_INT32)((_UINT64) x0)), 2U))), img_height, img_width);
          if((_I4ASHR((((_INT32)((_INT16)(__cselect_preg_w2c_42)) * (_INT32)((_UINT16)(__comma_preg_w2c_133))) + ((_INT32)((_INT16)(__cselect_preg_w2c_44)) * (_INT32)((_UINT16)(__comma_preg_w2c_137)))) + (wp_luma_round * (_INT32)(2U)), luma_log_weight_denom + (_INT32)(1U)) + (_INT32)((_INT16)(_I4ASHR(((_INT32)((_INT16)(__cselect_preg_w2c_46)) + (_INT32)((_INT16)(__cselect_preg_w2c_50))) + (_INT32)(1U), (_INT32)(1U))))) >= (_INT32)(0U))
          {
            __comma_preg_w2c_141 = (PelY_14b)(ref1_pic, (_INT16)((_UINT16)((_UINT32)(sy0) + 8U)), sx0, img_height, img_width);
            __comma_preg_w2c_145 = (PelY_14)(ref2_pic, (_INT16)((_UINT16)((_UINT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_y) + _U4SHL((_UINT32)(pic_pix_y) + (_UINT32)((_INT32)((_UINT64) y0)), 2U)))) + 8U)), (_INT16)((_UINT16)((_UINT32)(cand_mv_x) + _U4SHL((_UINT32)(pic_pix_x) + (_UINT32)((_INT32)((_UINT64) x0)), 2U))), img_height, img_width);
            if(*(((_INT32 *)(img) + 16384LL) + 1787LL) < (_I4ASHR((((_INT32)((_INT16)(__cselect_preg_w2c_42)) * (_INT32)((_UINT16)(__comma_preg_w2c_141))) + ((_INT32)((_INT16)(__cselect_preg_w2c_44)) * (_INT32)((_UINT16)(__comma_preg_w2c_145)))) + (wp_luma_round * (_INT32)(2U)), luma_log_weight_denom + (_INT32)(1U)) + (_INT32)((_INT16)(_I4ASHR(((_INT32)((_INT16)(__cselect_preg_w2c_46)) + (_INT32)((_INT16)(__cselect_preg_w2c_50))) + (_INT32)(1U), (_INT32)(1U))))))
            {
              __cselect_preg_w2c_49 = *(((_INT32 *)(img) + 16384LL) + 1787LL);
            }
            else
            {
              __comma_preg_w2c_149 = (PelY_14b)(ref1_pic, (_INT16)((_UINT16)((_UINT32)(sy0) + 8U)), sx0, img_height, img_width);
              __comma_preg_w2c_153 = (PelY_14)(ref2_pic, (_INT16)((_UINT16)((_UINT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_y) + _U4SHL((_UINT32)(pic_pix_y) + (_UINT32)((_INT32)((_UINT64) y0)), 2U)))) + 8U)), (_INT16)((_UINT16)((_UINT32)(cand_mv_x) + _U4SHL((_UINT32)(pic_pix_x) + (_UINT32)((_INT32)((_UINT64) x0)), 2U))), img_height, img_width);
              __cselect_preg_w2c_49 = _I4ASHR((((_INT32)((_INT16)(__cselect_preg_w2c_42)) * (_INT32)((_UINT16)(__comma_preg_w2c_149))) + ((_INT32)((_INT16)(__cselect_preg_w2c_44)) * (_INT32)((_UINT16)(__comma_preg_w2c_153)))) + (wp_luma_round * (_INT32)(2U)), luma_log_weight_denom + (_INT32)(1U)) + (_INT32)((_INT16)(_I4ASHR(((_INT32)((_INT16)(__cselect_preg_w2c_46)) + (_INT32)((_INT16)(__cselect_preg_w2c_50))) + (_INT32)(1U), (_INT32)(1U))));
            }
            __cselect_preg_w2c_53 = __cselect_preg_w2c_49;
          }
          else
          {
            __cselect_preg_w2c_53 = 0U;
          }
          * (diff + 8LL) = (_INT32) * (orig_line + (_UINT64) x0) - __cselect_preg_w2c_53;
          __comma_preg_w2c_159 = (PelY_14b)(ref1_pic, (_INT16)((_UINT16)((_UINT32)(sy0) + 8U)), (_INT32)(sx0) + (_INT32)(4U), img_height, img_width);
          __comma_preg_w2c_163 = (PelY_14)(ref2_pic, (_INT16)((_UINT16)((_UINT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_y) + _U4SHL((_UINT32)(pic_pix_y) + (_UINT32)((_INT32)((_UINT64) y0)), 2U)))) + 8U)), (_INT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_x) + _U4SHL((_UINT32)(pic_pix_x) + (_UINT32)((_INT32)((_UINT64) x0)), 2U)))) + (_INT32)(4U), img_height, img_width);
          if((_I4ASHR((((_INT32)((_INT16)(__cselect_preg_w2c_42)) * (_INT32)((_UINT16)(__comma_preg_w2c_159))) + ((_INT32)((_INT16)(__cselect_preg_w2c_44)) * (_INT32)((_UINT16)(__comma_preg_w2c_163)))) + (wp_luma_round * (_INT32)(2U)), luma_log_weight_denom + (_INT32)(1U)) + (_INT32)((_INT16)(_I4ASHR(((_INT32)((_INT16)(__cselect_preg_w2c_46)) + (_INT32)((_INT16)(__cselect_preg_w2c_50))) + (_INT32)(1U), (_INT32)(1U))))) >= (_INT32)(0U))
          {
            __comma_preg_w2c_168 = (PelY_14b)(ref1_pic, (_INT16)((_UINT16)((_UINT32)(sy0) + 8U)), (_INT32)(sx0) + (_INT32)(4U), img_height, img_width);
            __comma_preg_w2c_173 = (PelY_14)(ref2_pic, (_INT16)((_UINT16)((_UINT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_y) + _U4SHL((_UINT32)(pic_pix_y) + (_UINT32)((_INT32)((_UINT64) y0)), 2U)))) + 8U)), (_INT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_x) + _U4SHL((_UINT32)(pic_pix_x) + (_UINT32)((_INT32)((_UINT64) x0)), 2U)))) + (_INT32)(4U), img_height, img_width);
            if(*(((_INT32 *)(img) + 16384LL) + 1787LL) < (_I4ASHR((((_INT32)((_INT16)(__cselect_preg_w2c_42)) * (_INT32)((_UINT16)(__comma_preg_w2c_168))) + ((_INT32)((_INT16)(__cselect_preg_w2c_44)) * (_INT32)((_UINT16)(__comma_preg_w2c_173)))) + (wp_luma_round * (_INT32)(2U)), luma_log_weight_denom + (_INT32)(1U)) + (_INT32)((_INT16)(_I4ASHR(((_INT32)((_INT16)(__cselect_preg_w2c_46)) + (_INT32)((_INT16)(__cselect_preg_w2c_50))) + (_INT32)(1U), (_INT32)(1U))))))
            {
              __cselect_preg_w2c_57 = *(((_INT32 *)(img) + 16384LL) + 1787LL);
            }
            else
            {
              __comma_preg_w2c_178 = (PelY_14b)(ref1_pic, (_INT16)((_UINT16)((_UINT32)(sy0) + 8U)), (_INT32)(sx0) + (_INT32)(4U), img_height, img_width);
              __comma_preg_w2c_183 = (PelY_14)(ref2_pic, (_INT16)((_UINT16)((_UINT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_y) + _U4SHL((_UINT32)(pic_pix_y) + (_UINT32)((_INT32)((_UINT64) y0)), 2U)))) + 8U)), (_INT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_x) + _U4SHL((_UINT32)(pic_pix_x) + (_UINT32)((_INT32)((_UINT64) x0)), 2U)))) + (_INT32)(4U), img_height, img_width);
              __cselect_preg_w2c_57 = _I4ASHR((((_INT32)((_INT16)(__cselect_preg_w2c_42)) * (_INT32)((_UINT16)(__comma_preg_w2c_178))) + ((_INT32)((_INT16)(__cselect_preg_w2c_44)) * (_INT32)((_UINT16)(__comma_preg_w2c_183)))) + (wp_luma_round * (_INT32)(2U)), luma_log_weight_denom + (_INT32)(1U)) + (_INT32)((_INT16)(_I4ASHR(((_INT32)((_INT16)(__cselect_preg_w2c_46)) + (_INT32)((_INT16)(__cselect_preg_w2c_50))) + (_INT32)(1U), (_INT32)(1U))));
            }
            __cselect_preg_w2c_59 = __cselect_preg_w2c_57;
          }
          else
          {
            __cselect_preg_w2c_59 = 0U;
          }
          * (diff + 9LL) = (_INT32) * ((orig_line + (_UINT64) x0) + 1LL) - __cselect_preg_w2c_59;
          __comma_preg_w2c_193 = (PelY_14b)(ref1_pic, (_INT16)((_UINT16)((_UINT32)(sy0) + 8U)), (_INT32)(sx0) + (_INT32)(8U), img_height, img_width);
          __comma_preg_w2c_197 = (PelY_14)(ref2_pic, (_INT16)((_UINT16)((_UINT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_y) + _U4SHL((_UINT32)(pic_pix_y) + (_UINT32)((_INT32)((_UINT64) y0)), 2U)))) + 8U)), (_INT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_x) + _U4SHL((_UINT32)(pic_pix_x) + (_UINT32)((_INT32)((_UINT64) x0)), 2U)))) + (_INT32)(8U), img_height, img_width);
          if((_I4ASHR((((_INT32)((_INT16)(__cselect_preg_w2c_42)) * (_INT32)((_UINT16)(__comma_preg_w2c_193))) + ((_INT32)((_INT16)(__cselect_preg_w2c_44)) * (_INT32)((_UINT16)(__comma_preg_w2c_197)))) + (wp_luma_round * (_INT32)(2U)), luma_log_weight_denom + (_INT32)(1U)) + (_INT32)((_INT16)(_I4ASHR(((_INT32)((_INT16)(__cselect_preg_w2c_46)) + (_INT32)((_INT16)(__cselect_preg_w2c_50))) + (_INT32)(1U), (_INT32)(1U))))) >= (_INT32)(0U))
          {
            __comma_preg_w2c_202 = (PelY_14b)(ref1_pic, (_INT16)((_UINT16)((_UINT32)(sy0) + 8U)), (_INT32)(sx0) + (_INT32)(8U), img_height, img_width);
            __comma_preg_w2c_207 = (PelY_14)(ref2_pic, (_INT16)((_UINT16)((_UINT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_y) + _U4SHL((_UINT32)(pic_pix_y) + (_UINT32)((_INT32)((_UINT64) y0)), 2U)))) + 8U)), (_INT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_x) + _U4SHL((_UINT32)(pic_pix_x) + (_UINT32)((_INT32)((_UINT64) x0)), 2U)))) + (_INT32)(8U), img_height, img_width);
            if(*(((_INT32 *)(img) + 16384LL) + 1787LL) < (_I4ASHR((((_INT32)((_INT16)(__cselect_preg_w2c_42)) * (_INT32)((_UINT16)(__comma_preg_w2c_202))) + ((_INT32)((_INT16)(__cselect_preg_w2c_44)) * (_INT32)((_UINT16)(__comma_preg_w2c_207)))) + (wp_luma_round * (_INT32)(2U)), luma_log_weight_denom + (_INT32)(1U)) + (_INT32)((_INT16)(_I4ASHR(((_INT32)((_INT16)(__cselect_preg_w2c_46)) + (_INT32)((_INT16)(__cselect_preg_w2c_50))) + (_INT32)(1U), (_INT32)(1U))))))
            {
              __cselect_preg_w2c_63 = *(((_INT32 *)(img) + 16384LL) + 1787LL);
            }
            else
            {
              __comma_preg_w2c_212 = (PelY_14b)(ref1_pic, (_INT16)((_UINT16)((_UINT32)(sy0) + 8U)), (_INT32)(sx0) + (_INT32)(8U), img_height, img_width);
              __comma_preg_w2c_217 = (PelY_14)(ref2_pic, (_INT16)((_UINT16)((_UINT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_y) + _U4SHL((_UINT32)(pic_pix_y) + (_UINT32)((_INT32)((_UINT64) y0)), 2U)))) + 8U)), (_INT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_x) + _U4SHL((_UINT32)(pic_pix_x) + (_UINT32)((_INT32)((_UINT64) x0)), 2U)))) + (_INT32)(8U), img_height, img_width);
              __cselect_preg_w2c_63 = _I4ASHR((((_INT32)((_INT16)(__cselect_preg_w2c_42)) * (_INT32)((_UINT16)(__comma_preg_w2c_212))) + ((_INT32)((_INT16)(__cselect_preg_w2c_44)) * (_INT32)((_UINT16)(__comma_preg_w2c_217)))) + (wp_luma_round * (_INT32)(2U)), luma_log_weight_denom + (_INT32)(1U)) + (_INT32)((_INT16)(_I4ASHR(((_INT32)((_INT16)(__cselect_preg_w2c_46)) + (_INT32)((_INT16)(__cselect_preg_w2c_50))) + (_INT32)(1U), (_INT32)(1U))));
            }
            __cselect_preg_w2c_65 = __cselect_preg_w2c_63;
          }
          else
          {
            __cselect_preg_w2c_65 = 0U;
          }
          * (diff + 10LL) = (_INT32) * ((orig_line + (_UINT64) x0) + 2LL) - __cselect_preg_w2c_65;
          __comma_preg_w2c_227 = (PelY_14b)(ref1_pic, (_INT16)((_UINT16)((_UINT32)(sy0) + 8U)), (_INT32)(sx0) + (_INT32)(12U), img_height, img_width);
          __comma_preg_w2c_231 = (PelY_14)(ref2_pic, (_INT16)((_UINT16)((_UINT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_y) + _U4SHL((_UINT32)(pic_pix_y) + (_UINT32)((_INT32)((_UINT64) y0)), 2U)))) + 8U)), (_INT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_x) + _U4SHL((_UINT32)(pic_pix_x) + (_UINT32)((_INT32)((_UINT64) x0)), 2U)))) + (_INT32)(12U), img_height, img_width);
          if((_I4ASHR((((_INT32)((_INT16)(__cselect_preg_w2c_42)) * (_INT32)((_UINT16)(__comma_preg_w2c_227))) + ((_INT32)((_INT16)(__cselect_preg_w2c_44)) * (_INT32)((_UINT16)(__comma_preg_w2c_231)))) + (wp_luma_round * (_INT32)(2U)), luma_log_weight_denom + (_INT32)(1U)) + (_INT32)((_INT16)(_I4ASHR(((_INT32)((_INT16)(__cselect_preg_w2c_46)) + (_INT32)((_INT16)(__cselect_preg_w2c_50))) + (_INT32)(1U), (_INT32)(1U))))) >= (_INT32)(0U))
          {
            __comma_preg_w2c_236 = (PelY_14b)(ref1_pic, (_INT16)((_UINT16)((_UINT32)(sy0) + 8U)), (_INT32)(sx0) + (_INT32)(12U), img_height, img_width);
            __comma_preg_w2c_241 = (PelY_14)(ref2_pic, (_INT16)((_UINT16)((_UINT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_y) + _U4SHL((_UINT32)(pic_pix_y) + (_UINT32)((_INT32)((_UINT64) y0)), 2U)))) + 8U)), (_INT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_x) + _U4SHL((_UINT32)(pic_pix_x) + (_UINT32)((_INT32)((_UINT64) x0)), 2U)))) + (_INT32)(12U), img_height, img_width);
            if(*(((_INT32 *)(img) + 16384LL) + 1787LL) < (_I4ASHR((((_INT32)((_INT16)(__cselect_preg_w2c_42)) * (_INT32)((_UINT16)(__comma_preg_w2c_236))) + ((_INT32)((_INT16)(__cselect_preg_w2c_44)) * (_INT32)((_UINT16)(__comma_preg_w2c_241)))) + (wp_luma_round * (_INT32)(2U)), luma_log_weight_denom + (_INT32)(1U)) + (_INT32)((_INT16)(_I4ASHR(((_INT32)((_INT16)(__cselect_preg_w2c_46)) + (_INT32)((_INT16)(__cselect_preg_w2c_50))) + (_INT32)(1U), (_INT32)(1U))))))
            {
              __cselect_preg_w2c_69 = *(((_INT32 *)(img) + 16384LL) + 1787LL);
            }
            else
            {
              __comma_preg_w2c_246 = (PelY_14b)(ref1_pic, (_INT16)((_UINT16)((_UINT32)(sy0) + 8U)), (_INT32)(sx0) + (_INT32)(12U), img_height, img_width);
              __comma_preg_w2c_251 = (PelY_14)(ref2_pic, (_INT16)((_UINT16)((_UINT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_y) + _U4SHL((_UINT32)(pic_pix_y) + (_UINT32)((_INT32)((_UINT64) y0)), 2U)))) + 8U)), (_INT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_x) + _U4SHL((_UINT32)(pic_pix_x) + (_UINT32)((_INT32)((_UINT64) x0)), 2U)))) + (_INT32)(12U), img_height, img_width);
              __cselect_preg_w2c_69 = _I4ASHR((((_INT32)((_INT16)(__cselect_preg_w2c_42)) * (_INT32)((_UINT16)(__comma_preg_w2c_246))) + ((_INT32)((_INT16)(__cselect_preg_w2c_44)) * (_INT32)((_UINT16)(__comma_preg_w2c_251)))) + (wp_luma_round * (_INT32)(2U)), luma_log_weight_denom + (_INT32)(1U)) + (_INT32)((_INT16)(_I4ASHR(((_INT32)((_INT16)(__cselect_preg_w2c_46)) + (_INT32)((_INT16)(__cselect_preg_w2c_50))) + (_INT32)(1U), (_INT32)(1U))));
            }
            __cselect_preg_w2c_71 = __cselect_preg_w2c_69;
          }
          else
          {
            __cselect_preg_w2c_71 = 0U;
          }
          * (diff + 11LL) = (_INT32) * ((orig_line + (_UINT64) x0) + 3LL) - __cselect_preg_w2c_71;
          orig_line = *((orig_pic + (_UINT64) y0) + 3LL);
          __comma_preg_w2c_260 = (PelY_14b)(ref1_pic, (_INT16)((_UINT16)((_UINT32)(sy0) + 12U)), sx0, img_height, img_width);
          __comma_preg_w2c_1 = (PelY_14)(ref2_pic, (_INT16)((_UINT16)((_UINT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_y) + _U4SHL((_UINT32)(pic_pix_y) + (_UINT32)((_INT32)((_UINT64) y0)), 2U)))) + 12U)), (_INT16)((_UINT16)((_UINT32)(cand_mv_x) + _U4SHL((_UINT32)(pic_pix_x) + (_UINT32)((_INT32)((_UINT64) x0)), 2U))), img_height, img_width);
          if((_I4ASHR((((_INT32)((_INT16)(__cselect_preg_w2c_42)) * (_INT32)((_UINT16)(__comma_preg_w2c_260))) + ((_INT32)((_INT16)(__cselect_preg_w2c_44)) * (_INT32)((_UINT16)(__comma_preg_w2c_1)))) + (wp_luma_round * (_INT32)(2U)), luma_log_weight_denom + (_INT32)(1U)) + (_INT32)((_INT16)(_I4ASHR(((_INT32)((_INT16)(__cselect_preg_w2c_46)) + (_INT32)((_INT16)(__cselect_preg_w2c_50))) + (_INT32)(1U), (_INT32)(1U))))) >= (_INT32)(0U))
          {
            __comma_preg_w2c_6 = (PelY_14b)(ref1_pic, (_INT16)((_UINT16)((_UINT32)(sy0) + 12U)), sx0, img_height, img_width);
            __comma_preg_w2c_11 = (PelY_14)(ref2_pic, (_INT16)((_UINT16)((_UINT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_y) + _U4SHL((_UINT32)(pic_pix_y) + (_UINT32)((_INT32)((_UINT64) y0)), 2U)))) + 12U)), (_INT16)((_UINT16)((_UINT32)(cand_mv_x) + _U4SHL((_UINT32)(pic_pix_x) + (_UINT32)((_INT32)((_UINT64) x0)), 2U))), img_height, img_width);
            if(*(((_INT32 *)(img) + 16384LL) + 1787LL) < (_I4ASHR((((_INT32)((_INT16)(__cselect_preg_w2c_42)) * (_INT32)((_UINT16)(__comma_preg_w2c_6))) + ((_INT32)((_INT16)(__cselect_preg_w2c_44)) * (_INT32)((_UINT16)(__comma_preg_w2c_11)))) + (wp_luma_round * (_INT32)(2U)), luma_log_weight_denom + (_INT32)(1U)) + (_INT32)((_INT16)(_I4ASHR(((_INT32)((_INT16)(__cselect_preg_w2c_46)) + (_INT32)((_INT16)(__cselect_preg_w2c_50))) + (_INT32)(1U), (_INT32)(1U))))))
            {
              __cselect_preg_w2c_0 = *(((_INT32 *)(img) + 16384LL) + 1787LL);
            }
            else
            {
              __comma_preg_w2c_16 = (PelY_14b)(ref1_pic, (_INT16)((_UINT16)((_UINT32)(sy0) + 12U)), sx0, img_height, img_width);
              __comma_preg_w2c_21 = (PelY_14)(ref2_pic, (_INT16)((_UINT16)((_UINT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_y) + _U4SHL((_UINT32)(pic_pix_y) + (_UINT32)((_INT32)((_UINT64) y0)), 2U)))) + 12U)), (_INT16)((_UINT16)((_UINT32)(cand_mv_x) + _U4SHL((_UINT32)(pic_pix_x) + (_UINT32)((_INT32)((_UINT64) x0)), 2U))), img_height, img_width);
              __cselect_preg_w2c_0 = _I4ASHR((((_INT32)((_INT16)(__cselect_preg_w2c_42)) * (_INT32)((_UINT16)(__comma_preg_w2c_16))) + ((_INT32)((_INT16)(__cselect_preg_w2c_44)) * (_INT32)((_UINT16)(__comma_preg_w2c_21)))) + (wp_luma_round * (_INT32)(2U)), luma_log_weight_denom + (_INT32)(1U)) + (_INT32)((_INT16)(_I4ASHR(((_INT32)((_INT16)(__cselect_preg_w2c_46)) + (_INT32)((_INT16)(__cselect_preg_w2c_50))) + (_INT32)(1U), (_INT32)(1U))));
            }
            __cselect_preg_w2c_2 = __cselect_preg_w2c_0;
          }
          else
          {
            __cselect_preg_w2c_2 = 0U;
          }
          * (diff + 12LL) = (_INT32) * (orig_line + (_UINT64) x0) - __cselect_preg_w2c_2;
          __comma_preg_w2c_30 = (PelY_14b)(ref1_pic, (_INT16)((_UINT16)((_UINT32)(sy0) + 12U)), (_INT32)(sx0) + (_INT32)(4U), img_height, img_width);
          __comma_preg_w2c_33 = (PelY_14)(ref2_pic, (_INT16)((_UINT16)((_UINT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_y) + _U4SHL((_UINT32)(pic_pix_y) + (_UINT32)((_INT32)((_UINT64) y0)), 2U)))) + 12U)), (_INT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_x) + _U4SHL((_UINT32)(pic_pix_x) + (_UINT32)((_INT32)((_UINT64) x0)), 2U)))) + (_INT32)(4U), img_height, img_width);
          if((_I4ASHR((((_INT32)((_INT16)(__cselect_preg_w2c_42)) * (_INT32)((_UINT16)(__comma_preg_w2c_30))) + ((_INT32)((_INT16)(__cselect_preg_w2c_44)) * (_INT32)((_UINT16)(__comma_preg_w2c_33)))) + (wp_luma_round * (_INT32)(2U)), luma_log_weight_denom + (_INT32)(1U)) + (_INT32)((_INT16)(_I4ASHR(((_INT32)((_INT16)(__cselect_preg_w2c_46)) + (_INT32)((_INT16)(__cselect_preg_w2c_50))) + (_INT32)(1U), (_INT32)(1U))))) >= (_INT32)(0U))
          {
            __comma_preg_w2c_38 = (PelY_14b)(ref1_pic, (_INT16)((_UINT16)((_UINT32)(sy0) + 12U)), (_INT32)(sx0) + (_INT32)(4U), img_height, img_width);
            __comma_preg_w2c_42 = (PelY_14)(ref2_pic, (_INT16)((_UINT16)((_UINT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_y) + _U4SHL((_UINT32)(pic_pix_y) + (_UINT32)((_INT32)((_UINT64) y0)), 2U)))) + 12U)), (_INT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_x) + _U4SHL((_UINT32)(pic_pix_x) + (_UINT32)((_INT32)((_UINT64) x0)), 2U)))) + (_INT32)(4U), img_height, img_width);
            if(*(((_INT32 *)(img) + 16384LL) + 1787LL) < (_I4ASHR((((_INT32)((_INT16)(__cselect_preg_w2c_42)) * (_INT32)((_UINT16)(__comma_preg_w2c_38))) + ((_INT32)((_INT16)(__cselect_preg_w2c_44)) * (_INT32)((_UINT16)(__comma_preg_w2c_42)))) + (wp_luma_round * (_INT32)(2U)), luma_log_weight_denom + (_INT32)(1U)) + (_INT32)((_INT16)(_I4ASHR(((_INT32)((_INT16)(__cselect_preg_w2c_46)) + (_INT32)((_INT16)(__cselect_preg_w2c_50))) + (_INT32)(1U), (_INT32)(1U))))))
            {
              __cselect_preg_w2c_8 = *(((_INT32 *)(img) + 16384LL) + 1787LL);
            }
            else
            {
              __comma_preg_w2c_46 = (PelY_14b)(ref1_pic, (_INT16)((_UINT16)((_UINT32)(sy0) + 12U)), (_INT32)(sx0) + (_INT32)(4U), img_height, img_width);
              __comma_preg_w2c_50 = (PelY_14)(ref2_pic, (_INT16)((_UINT16)((_UINT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_y) + _U4SHL((_UINT32)(pic_pix_y) + (_UINT32)((_INT32)((_UINT64) y0)), 2U)))) + 12U)), (_INT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_x) + _U4SHL((_UINT32)(pic_pix_x) + (_UINT32)((_INT32)((_UINT64) x0)), 2U)))) + (_INT32)(4U), img_height, img_width);
              __cselect_preg_w2c_8 = _I4ASHR((((_INT32)((_INT16)(__cselect_preg_w2c_42)) * (_INT32)((_UINT16)(__comma_preg_w2c_46))) + ((_INT32)((_INT16)(__cselect_preg_w2c_44)) * (_INT32)((_UINT16)(__comma_preg_w2c_50)))) + (wp_luma_round * (_INT32)(2U)), luma_log_weight_denom + (_INT32)(1U)) + (_INT32)((_INT16)(_I4ASHR(((_INT32)((_INT16)(__cselect_preg_w2c_46)) + (_INT32)((_INT16)(__cselect_preg_w2c_50))) + (_INT32)(1U), (_INT32)(1U))));
            }
            __cselect_preg_w2c_10 = __cselect_preg_w2c_8;
          }
          else
          {
            __cselect_preg_w2c_10 = 0U;
          }
          * (diff + 13LL) = (_INT32) * ((orig_line + (_UINT64) x0) + 1LL) - __cselect_preg_w2c_10;
          __comma_preg_w2c_56 = (PelY_14b)(ref1_pic, (_INT16)((_UINT16)((_UINT32)(sy0) + 12U)), (_INT32)(sx0) + (_INT32)(8U), img_height, img_width);
          __comma_preg_w2c_58 = (PelY_14)(ref2_pic, (_INT16)((_UINT16)((_UINT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_y) + _U4SHL((_UINT32)(pic_pix_y) + (_UINT32)((_INT32)((_UINT64) y0)), 2U)))) + 12U)), (_INT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_x) + _U4SHL((_UINT32)(pic_pix_x) + (_UINT32)((_INT32)((_UINT64) x0)), 2U)))) + (_INT32)(8U), img_height, img_width);
          if((_I4ASHR((((_INT32)((_INT16)(__cselect_preg_w2c_42)) * (_INT32)((_UINT16)(__comma_preg_w2c_56))) + ((_INT32)((_INT16)(__cselect_preg_w2c_44)) * (_INT32)((_UINT16)(__comma_preg_w2c_58)))) + (wp_luma_round * (_INT32)(2U)), luma_log_weight_denom + (_INT32)(1U)) + (_INT32)((_INT16)(_I4ASHR(((_INT32)((_INT16)(__cselect_preg_w2c_46)) + (_INT32)((_INT16)(__cselect_preg_w2c_50))) + (_INT32)(1U), (_INT32)(1U))))) >= (_INT32)(0U))
          {
            __comma_preg_w2c_62 = (PelY_14b)(ref1_pic, (_INT16)((_UINT16)((_UINT32)(sy0) + 12U)), (_INT32)(sx0) + (_INT32)(8U), img_height, img_width);
            __comma_preg_w2c_66 = (PelY_14)(ref2_pic, (_INT16)((_UINT16)((_UINT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_y) + _U4SHL((_UINT32)(pic_pix_y) + (_UINT32)((_INT32)((_UINT64) y0)), 2U)))) + 12U)), (_INT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_x) + _U4SHL((_UINT32)(pic_pix_x) + (_UINT32)((_INT32)((_UINT64) x0)), 2U)))) + (_INT32)(8U), img_height, img_width);
            if(*(((_INT32 *)(img) + 16384LL) + 1787LL) < (_I4ASHR((((_INT32)((_INT16)(__cselect_preg_w2c_42)) * (_INT32)((_UINT16)(__comma_preg_w2c_62))) + ((_INT32)((_INT16)(__cselect_preg_w2c_44)) * (_INT32)((_UINT16)(__comma_preg_w2c_66)))) + (wp_luma_round * (_INT32)(2U)), luma_log_weight_denom + (_INT32)(1U)) + (_INT32)((_INT16)(_I4ASHR(((_INT32)((_INT16)(__cselect_preg_w2c_46)) + (_INT32)((_INT16)(__cselect_preg_w2c_50))) + (_INT32)(1U), (_INT32)(1U))))))
            {
              __cselect_preg_w2c_16 = *(((_INT32 *)(img) + 16384LL) + 1787LL);
            }
            else
            {
              __comma_preg_w2c_70 = (PelY_14b)(ref1_pic, (_INT16)((_UINT16)((_UINT32)(sy0) + 12U)), (_INT32)(sx0) + (_INT32)(8U), img_height, img_width);
              __comma_preg_w2c_74 = (PelY_14)(ref2_pic, (_INT16)((_UINT16)((_UINT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_y) + _U4SHL((_UINT32)(pic_pix_y) + (_UINT32)((_INT32)((_UINT64) y0)), 2U)))) + 12U)), (_INT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_x) + _U4SHL((_UINT32)(pic_pix_x) + (_UINT32)((_INT32)((_UINT64) x0)), 2U)))) + (_INT32)(8U), img_height, img_width);
              __cselect_preg_w2c_16 = _I4ASHR((((_INT32)((_INT16)(__cselect_preg_w2c_42)) * (_INT32)((_UINT16)(__comma_preg_w2c_70))) + ((_INT32)((_INT16)(__cselect_preg_w2c_44)) * (_INT32)((_UINT16)(__comma_preg_w2c_74)))) + (wp_luma_round * (_INT32)(2U)), luma_log_weight_denom + (_INT32)(1U)) + (_INT32)((_INT16)(_I4ASHR(((_INT32)((_INT16)(__cselect_preg_w2c_46)) + (_INT32)((_INT16)(__cselect_preg_w2c_50))) + (_INT32)(1U), (_INT32)(1U))));
            }
            __cselect_preg_w2c_18 = __cselect_preg_w2c_16;
          }
          else
          {
            __cselect_preg_w2c_18 = 0U;
          }
          * (diff + 14LL) = (_INT32) * ((orig_line + (_UINT64) x0) + 2LL) - __cselect_preg_w2c_18;
          __comma_preg_w2c_80 = (PelY_14b)(ref1_pic, (_INT16)((_UINT16)((_UINT32)(sy0) + 12U)), (_INT32)(sx0) + (_INT32)(12U), img_height, img_width);
          __comma_preg_w2c_82 = (PelY_14)(ref2_pic, (_INT16)((_UINT16)((_UINT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_y) + _U4SHL((_UINT32)(pic_pix_y) + (_UINT32)((_INT32)((_UINT64) y0)), 2U)))) + 12U)), (_INT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_x) + _U4SHL((_UINT32)(pic_pix_x) + (_UINT32)((_INT32)((_UINT64) x0)), 2U)))) + (_INT32)(12U), img_height, img_width);
          if((_I4ASHR((((_INT32)((_INT16)(__cselect_preg_w2c_42)) * (_INT32)((_UINT16)(__comma_preg_w2c_80))) + ((_INT32)((_INT16)(__cselect_preg_w2c_44)) * (_INT32)((_UINT16)(__comma_preg_w2c_82)))) + (wp_luma_round * (_INT32)(2U)), luma_log_weight_denom + (_INT32)(1U)) + (_INT32)((_INT16)(_I4ASHR(((_INT32)((_INT16)(__cselect_preg_w2c_46)) + (_INT32)((_INT16)(__cselect_preg_w2c_50))) + (_INT32)(1U), (_INT32)(1U))))) >= (_INT32)(0U))
          {
            __comma_preg_w2c_86 = (PelY_14b)(ref1_pic, (_INT16)((_UINT16)((_UINT32)(sy0) + 12U)), (_INT32)(sx0) + (_INT32)(12U), img_height, img_width);
            __comma_preg_w2c_90 = (PelY_14)(ref2_pic, (_INT16)((_UINT16)((_UINT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_y) + _U4SHL((_UINT32)(pic_pix_y) + (_UINT32)((_INT32)((_UINT64) y0)), 2U)))) + 12U)), (_INT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_x) + _U4SHL((_UINT32)(pic_pix_x) + (_UINT32)((_INT32)((_UINT64) x0)), 2U)))) + (_INT32)(12U), img_height, img_width);
            if(*(((_INT32 *)(img) + 16384LL) + 1787LL) < (_I4ASHR((((_INT32)((_INT16)(__cselect_preg_w2c_42)) * (_INT32)((_UINT16)(__comma_preg_w2c_86))) + ((_INT32)((_INT16)(__cselect_preg_w2c_44)) * (_INT32)((_UINT16)(__comma_preg_w2c_90)))) + (wp_luma_round * (_INT32)(2U)), luma_log_weight_denom + (_INT32)(1U)) + (_INT32)((_INT16)(_I4ASHR(((_INT32)((_INT16)(__cselect_preg_w2c_46)) + (_INT32)((_INT16)(__cselect_preg_w2c_50))) + (_INT32)(1U), (_INT32)(1U))))))
            {
              __cselect_preg_w2c_24 = *(((_INT32 *)(img) + 16384LL) + 1787LL);
            }
            else
            {
              __comma_preg_w2c_94 = (PelY_14b)(ref1_pic, (_INT16)((_UINT16)((_UINT32)(sy0) + 12U)), (_INT32)(sx0) + (_INT32)(12U), img_height, img_width);
              __comma_preg_w2c_98 = (PelY_14)(ref2_pic, (_INT16)((_UINT16)((_UINT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_y) + _U4SHL((_UINT32)(pic_pix_y) + (_UINT32)((_INT32)((_UINT64) y0)), 2U)))) + 12U)), (_INT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_x) + _U4SHL((_UINT32)(pic_pix_x) + (_UINT32)((_INT32)((_UINT64) x0)), 2U)))) + (_INT32)(12U), img_height, img_width);
              __cselect_preg_w2c_24 = _I4ASHR((((_INT32)((_INT16)(__cselect_preg_w2c_42)) * (_INT32)((_UINT16)(__comma_preg_w2c_94))) + ((_INT32)((_INT16)(__cselect_preg_w2c_44)) * (_INT32)((_UINT16)(__comma_preg_w2c_98)))) + (wp_luma_round * (_INT32)(2U)), luma_log_weight_denom + (_INT32)(1U)) + (_INT32)((_INT16)(_I4ASHR(((_INT32)((_INT16)(__cselect_preg_w2c_46)) + (_INT32)((_INT16)(__cselect_preg_w2c_50))) + (_INT32)(1U), (_INT32)(1U))));
            }
            __cselect_preg_w2c_26 = __cselect_preg_w2c_24;
          }
          else
          {
            __cselect_preg_w2c_26 = 0U;
          }
          * (diff + 15LL) = (_INT32) * ((orig_line + (_UINT64) x0) + 3LL) - __cselect_preg_w2c_26;
          if((input) -> AllowTransform8x8 == (_INT32)(0U))
          {
            __comma_preg_w2c_104 = SATD(diff, __cselect_preg_w2c_54);
            mcost = (_UINT16)((_UINT32)((_UINT16) mcost) + (_UINT32)(__comma_preg_w2c_104));
            if((_INT32)(mcost) > min_mcost)
            {
              abort_search = 1U;
              goto _1794;
            }
          }
          else
          {
            for(j_preg = 0U; j_preg <= (_INT32)(3U); j_preg = j_preg + (_INT32)(1U))
            {
              (curr_diff)[j_preg + (_INT32)((_UINT64) y0)][(_INT32)((_UINT64) x0)] = (diff)[(_INT64)(j_preg * (_INT32)(4U))];
              (curr_diff)[j_preg + (_INT32)((_UINT64) y0)][(_INT32)((_UINT64) x0) + 1] = (diff)[(_INT64)((j_preg * (_INT32)(4U)) + 1)];
              (curr_diff)[j_preg + (_INT32)((_UINT64) y0)][(_INT32)((_UINT64) x0) + 2] = (diff)[(_INT64)((j_preg * (_INT32)(4U)) + 2)];
              (curr_diff)[j_preg + (_INT32)((_UINT64) y0)][(_INT32)((_UINT64) x0) + 3] = (diff)[(_INT64)((j_preg * (_INT32)(4U)) + 3)];
            }
          }
          x0 = (_UINT16)((_UINT32)((_INT32)((_UINT64) x0)) + 4U);
        }
        _1794 :;
      }
      else
      {
        x0 = 0U;
        while((_INT32)((_UINT16) x0) < (_INT32)(blocksize_x))
        {
          sx0 = (_UINT16)((_UINT32)((_UINT16) * s_mv_x) + _U4SHL((_UINT32)((_UINT16) x0) + (_UINT32)(pic_pix_x), 2U));
          orig_line = *(orig_pic + (_UINT64) y0);
          __comma_preg_w2c_106 = (PelY_14b)(ref1_pic, sy0, sx0, img_height, img_width);
          __comma_preg_w2c_110 = (PelY_14)(ref2_pic, (_INT16)((_UINT16)((_UINT32)(cand_mv_y) + _U4SHL((_UINT32)(pic_pix_y) + (_UINT32)((_INT32)((_UINT64) y0)), 2U))), (_INT16)((_UINT16)((_UINT32)(cand_mv_x) + _U4SHL((_UINT32)((_UINT16) x0) + (_UINT32)(pic_pix_x), 2U))), img_height, img_width);
          * diff = (_INT32) * (orig_line + (_UINT16) x0) - _I4ASHR((_INT32)((_UINT16)(__comma_preg_w2c_106)) + (_INT32)((_UINT16)(__comma_preg_w2c_110)), (_INT32)(1U));
          __comma_preg_w2c_114 = (PelY_14b)(ref1_pic, sy0, (_INT32)(sx0) + (_INT32)(4U), img_height, img_width);
          __comma_preg_w2c_118 = (PelY_14)(ref2_pic, (_INT16)((_UINT16)((_UINT32)(cand_mv_y) + _U4SHL((_UINT32)(pic_pix_y) + (_UINT32)((_INT32)((_UINT64) y0)), 2U))), (_INT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_x) + _U4SHL((_UINT32)((_UINT16) x0) + (_UINT32)(pic_pix_x), 2U)))) + (_INT32)(4U), img_height, img_width);
          * (diff + 1LL) = (_INT32) * ((orig_line + (_UINT16) x0) + 1LL) - _I4ASHR((_INT32)((_UINT16)(__comma_preg_w2c_114)) + (_INT32)((_UINT16)(__comma_preg_w2c_118)), (_INT32)(1U));
          __comma_preg_w2c_122 = (PelY_14b)(ref1_pic, sy0, (_INT32)(sx0) + (_INT32)(8U), img_height, img_width);
          __comma_preg_w2c_126 = (PelY_14)(ref2_pic, (_INT16)((_UINT16)((_UINT32)(cand_mv_y) + _U4SHL((_UINT32)(pic_pix_y) + (_UINT32)((_INT32)((_UINT64) y0)), 2U))), (_INT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_x) + _U4SHL((_UINT32)((_UINT16) x0) + (_UINT32)(pic_pix_x), 2U)))) + (_INT32)(8U), img_height, img_width);
          * (diff + 2LL) = (_INT32) * ((orig_line + (_UINT16) x0) + 2LL) - _I4ASHR((_INT32)((_UINT16)(__comma_preg_w2c_122)) + (_INT32)((_UINT16)(__comma_preg_w2c_126)), (_INT32)(1U));
          __comma_preg_w2c_129 = (PelY_14b)(ref1_pic, sy0, (_INT32)(sx0) + (_INT32)(12U), img_height, img_width);
          __comma_preg_w2c_130 = (PelY_14)(ref2_pic, (_INT16)((_UINT16)((_UINT32)(cand_mv_y) + _U4SHL((_UINT32)(pic_pix_y) + (_UINT32)((_INT32)((_UINT64) y0)), 2U))), (_INT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_x) + _U4SHL((_UINT32)((_UINT16) x0) + (_UINT32)(pic_pix_x), 2U)))) + (_INT32)(12U), img_height, img_width);
          * (diff + 3LL) = (_INT32) * ((orig_line + (_UINT16) x0) + 3LL) - _I4ASHR((_INT32)((_UINT16)(__comma_preg_w2c_129)) + (_INT32)((_UINT16)(__comma_preg_w2c_130)), (_INT32)(1U));
          orig_line = *((orig_pic + (_UINT64) y0) + 1LL);
          __comma_preg_w2c_132 = (PelY_14b)(ref1_pic, (_INT16)((_UINT16)((_UINT32)(sy0) + 4U)), sx0, img_height, img_width);
          __comma_preg_w2c_136 = (PelY_14)(ref2_pic, (_INT16)((_UINT16)((_UINT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_y) + _U4SHL((_UINT32)(pic_pix_y) + (_UINT32)((_INT32)((_UINT64) y0)), 2U)))) + 4U)), (_INT16)((_UINT16)((_UINT32)(cand_mv_x) + _U4SHL((_UINT32)((_UINT16) x0) + (_UINT32)(pic_pix_x), 2U))), img_height, img_width);
          * (diff + 4LL) = (_INT32) * (orig_line + (_UINT16) x0) - _I4ASHR((_INT32)((_UINT16)(__comma_preg_w2c_132)) + (_INT32)((_UINT16)(__comma_preg_w2c_136)), (_INT32)(2U));
          __comma_preg_w2c_140 = (PelY_14b)(ref1_pic, (_INT16)((_UINT16)((_UINT32)(sy0) + 4U)), (_INT32)(sx0) + (_INT32)(4U), img_height, img_width);
          __comma_preg_w2c_144 = (PelY_14)(ref2_pic, (_INT16)((_UINT16)((_UINT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_y) + _U4SHL((_UINT32)(pic_pix_y) + (_UINT32)((_INT32)((_UINT64) y0)), 2U)))) + 4U)), (_INT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_x) + _U4SHL((_UINT32)((_UINT16) x0) + (_UINT32)(pic_pix_x), 2U)))) + (_INT32)(4U), img_height, img_width);
          * (diff + 5LL) = (_INT32) * ((orig_line + (_UINT16) x0) + 1LL) - _I4ASHR((_INT32)((_UINT16)(__comma_preg_w2c_140)) + (_INT32)((_UINT16)(__comma_preg_w2c_144)), (_INT32)(2U));
          __comma_preg_w2c_148 = (PelY_14b)(ref1_pic, (_INT16)((_UINT16)((_UINT32)(sy0) + 4U)), (_INT32)(sx0) + (_INT32)(8U), img_height, img_width);
          __comma_preg_w2c_152 = (PelY_14)(ref2_pic, (_INT16)((_UINT16)((_UINT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_y) + _U4SHL((_UINT32)(pic_pix_y) + (_UINT32)((_INT32)((_UINT64) y0)), 2U)))) + 4U)), (_INT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_x) + _U4SHL((_UINT32)((_UINT16) x0) + (_UINT32)(pic_pix_x), 2U)))) + (_INT32)(8U), img_height, img_width);
          * (diff + 6LL) = (_INT32) * ((orig_line + (_UINT16) x0) + 2LL) - _I4ASHR((_INT32)((_UINT16)(__comma_preg_w2c_148)) + (_INT32)((_UINT16)(__comma_preg_w2c_152)), (_INT32)(2U));
          __comma_preg_w2c_155 = (PelY_14b)(ref1_pic, (_INT16)((_UINT16)((_UINT32)(sy0) + 4U)), (_INT32)(sx0) + (_INT32)(12U), img_height, img_width);
          __comma_preg_w2c_156 = (PelY_14)(ref2_pic, (_INT16)((_UINT16)((_UINT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_y) + _U4SHL((_UINT32)(pic_pix_y) + (_UINT32)((_INT32)((_UINT64) y0)), 2U)))) + 4U)), (_INT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_x) + _U4SHL((_UINT32)((_UINT16) x0) + (_UINT32)(pic_pix_x), 2U)))) + (_INT32)(12U), img_height, img_width);
          * (diff + 7LL) = (_INT32) * ((orig_line + (_UINT16) x0) + 3LL) - _I4ASHR((_INT32)((_UINT16)(__comma_preg_w2c_155)) + (_INT32)((_UINT16)(__comma_preg_w2c_156)), (_INT32)(2U));
          orig_line = *((orig_pic + (_UINT64) y0) + 2LL);
          __comma_preg_w2c_158 = (PelY_14b)(ref1_pic, (_INT16)((_UINT16)((_UINT32)(sy0) + 8U)), sx0, img_height, img_width);
          __comma_preg_w2c_162 = (PelY_14)(ref2_pic, (_INT16)((_UINT16)((_UINT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_y) + _U4SHL((_UINT32)(pic_pix_y) + (_UINT32)((_INT32)((_UINT64) y0)), 2U)))) + 8U)), (_INT16)((_UINT16)((_UINT32)(cand_mv_x) + _U4SHL((_UINT32)((_UINT16) x0) + (_UINT32)(pic_pix_x), 2U))), img_height, img_width);
          * (diff + 8LL) = (_INT32) * (orig_line + (_UINT16) x0) - _I4ASHR((_INT32)((_UINT16)(__comma_preg_w2c_158)) + (_INT32)((_UINT16)(__comma_preg_w2c_162)), (_INT32)(1U));
          __comma_preg_w2c_167 = (PelY_14b)(ref1_pic, (_INT16)((_UINT16)((_UINT32)(sy0) + 8U)), (_INT32)(sx0) + (_INT32)(4U), img_height, img_width);
          __comma_preg_w2c_172 = (PelY_14)(ref2_pic, (_INT16)((_UINT16)((_UINT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_y) + _U4SHL((_UINT32)(pic_pix_y) + (_UINT32)((_INT32)((_UINT64) y0)), 2U)))) + 8U)), (_INT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_x) + _U4SHL((_UINT32)((_UINT16) x0) + (_UINT32)(pic_pix_x), 2U)))) + (_INT32)(4U), img_height, img_width);
          * (diff + 9LL) = (_INT32) * ((orig_line + (_UINT16) x0) + 1LL) - _I4ASHR((_INT32)((_UINT16)(__comma_preg_w2c_167)) + (_INT32)((_UINT16)(__comma_preg_w2c_172)), (_INT32)(1U));
          __comma_preg_w2c_177 = (PelY_14b)(ref1_pic, (_INT16)((_UINT16)((_UINT32)(sy0) + 8U)), (_INT32)(sx0) + (_INT32)(8U), img_height, img_width);
          __comma_preg_w2c_182 = (PelY_14)(ref2_pic, (_INT16)((_UINT16)((_UINT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_y) + _U4SHL((_UINT32)(pic_pix_y) + (_UINT32)((_INT32)((_UINT64) y0)), 2U)))) + 8U)), (_INT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_x) + _U4SHL((_UINT32)((_UINT16) x0) + (_UINT32)(pic_pix_x), 2U)))) + (_INT32)(8U), img_height, img_width);
          * (diff + 10LL) = (_INT32) * ((orig_line + (_UINT16) x0) + 2LL) - _I4ASHR((_INT32)((_UINT16)(__comma_preg_w2c_177)) + (_INT32)((_UINT16)(__comma_preg_w2c_182)), (_INT32)(1U));
          __comma_preg_w2c_187 = (PelY_14b)(ref1_pic, (_INT16)((_UINT16)((_UINT32)(sy0) + 8U)), (_INT32)(sx0) + (_INT32)(12U), img_height, img_width);
          __comma_preg_w2c_190 = (PelY_14)(ref2_pic, (_INT16)((_UINT16)((_UINT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_y) + _U4SHL((_UINT32)(pic_pix_y) + (_UINT32)((_INT32)((_UINT64) y0)), 2U)))) + 8U)), (_INT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_x) + _U4SHL((_UINT32)((_UINT16) x0) + (_UINT32)(pic_pix_x), 2U)))) + (_INT32)(12U), img_height, img_width);
          * (diff + 11LL) = (_INT32) * ((orig_line + (_UINT16) x0) + 3LL) - _I4ASHR((_INT32)((_UINT16)(__comma_preg_w2c_187)) + (_INT32)((_UINT16)(__comma_preg_w2c_190)), (_INT32)(1U));
          orig_line = *((orig_pic + (_UINT64) y0) + 3LL);
          __comma_preg_w2c_192 = (PelY_14b)(ref1_pic, (_INT16)((_UINT16)((_UINT32)(sy0) + 12U)), sx0, img_height, img_width);
          __comma_preg_w2c_196 = (PelY_14)(ref2_pic, (_INT16)((_UINT16)((_UINT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_y) + _U4SHL((_UINT32)(pic_pix_y) + (_UINT32)((_INT32)((_UINT64) y0)), 2U)))) + 12U)), (_INT16)((_UINT16)((_UINT32)(cand_mv_x) + _U4SHL((_UINT32)((_UINT16) x0) + (_UINT32)(pic_pix_x), 2U))), img_height, img_width);
          * (diff + 12LL) = (_INT32) * (orig_line + (_UINT16) x0) - _I4ASHR((_INT32)((_UINT16)(__comma_preg_w2c_192)) + (_INT32)((_UINT16)(__comma_preg_w2c_196)), (_INT32)(1U));
          __comma_preg_w2c_201 = (PelY_14b)(ref1_pic, (_INT16)((_UINT16)((_UINT32)(sy0) + 12U)), (_INT32)(sx0) + (_INT32)(4U), img_height, img_width);
          __comma_preg_w2c_206 = (PelY_14)(ref2_pic, (_INT16)((_UINT16)((_UINT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_y) + _U4SHL((_UINT32)(pic_pix_y) + (_UINT32)((_INT32)((_UINT64) y0)), 2U)))) + 12U)), (_INT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_x) + _U4SHL((_UINT32)((_UINT16) x0) + (_UINT32)(pic_pix_x), 2U)))) + (_INT32)(4U), img_height, img_width);
          * (diff + 13LL) = (_INT32) * ((orig_line + (_UINT16) x0) + 1LL) - _I4ASHR((_INT32)((_UINT16)(__comma_preg_w2c_201)) + (_INT32)((_UINT16)(__comma_preg_w2c_206)), (_INT32)(1U));
          __comma_preg_w2c_211 = (PelY_14b)(ref1_pic, (_INT16)((_UINT16)((_UINT32)(sy0) + 12U)), (_INT32)(sx0) + (_INT32)(8U), img_height, img_width);
          __comma_preg_w2c_216 = (PelY_14)(ref2_pic, (_INT16)((_UINT16)((_UINT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_y) + _U4SHL((_UINT32)(pic_pix_y) + (_UINT32)((_INT32)((_UINT64) y0)), 2U)))) + 12U)), (_INT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_x) + _U4SHL((_UINT32)((_UINT16) x0) + (_UINT32)(pic_pix_x), 2U)))) + (_INT32)(8U), img_height, img_width);
          * (diff + 14LL) = (_INT32) * ((orig_line + (_UINT16) x0) + 2LL) - _I4ASHR((_INT32)((_UINT16)(__comma_preg_w2c_211)) + (_INT32)((_UINT16)(__comma_preg_w2c_216)), (_INT32)(1U));
          __comma_preg_w2c_221 = (PelY_14b)(ref1_pic, (_INT16)((_UINT16)((_UINT32)(sy0) + 12U)), (_INT32)(sx0) + (_INT32)(12U), img_height, img_width);
          __comma_preg_w2c_224 = (PelY_14)(ref2_pic, (_INT16)((_UINT16)((_UINT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_y) + _U4SHL((_UINT32)(pic_pix_y) + (_UINT32)((_INT32)((_UINT64) y0)), 2U)))) + 12U)), (_INT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_x) + _U4SHL((_UINT32)((_UINT16) x0) + (_UINT32)(pic_pix_x), 2U)))) + (_INT32)(12U), img_height, img_width);
          * (diff + 15LL) = (_INT32) * ((orig_line + (_UINT16) x0) + 3LL) - _I4ASHR((_INT32)((_UINT16)(__comma_preg_w2c_221)) + (_INT32)((_UINT16)(__comma_preg_w2c_224)), (_INT32)(1U));
          if((input) -> AllowTransform8x8 == (_INT32)(0U))
          {
            __comma_preg_w2c_226 = SATD(diff, __cselect_preg_w2c_54);
            mcost = (_UINT16)((_UINT32)((_UINT16) mcost) + (_UINT32)(__comma_preg_w2c_226));
            if((_INT32)(mcost) > min_mcost)
            {
              abort_search = 1U;
              goto _4098;
            }
          }
          else
          {
            for(j_preg_w2c_0 = 0U; j_preg_w2c_0 <= (_INT32)(3U); j_preg_w2c_0 = j_preg_w2c_0 + (_INT32)(1U))
            {
              (curr_diff)[j_preg_w2c_0 + (_INT32)((_UINT64) y0)][(_UINT16) x0] = (diff)[(_INT64)(j_preg_w2c_0 * (_INT32)(4U))];
              (curr_diff)[j_preg_w2c_0 + (_INT32)((_UINT64) y0)][(_INT32)((_UINT16) x0) + 1] = (diff)[(_INT64)((j_preg_w2c_0 * (_INT32)(4U)) + 1)];
              (curr_diff)[j_preg_w2c_0 + (_INT32)((_UINT64) y0)][(_INT32)((_UINT16) x0) + 2] = (diff)[(_INT64)((j_preg_w2c_0 * (_INT32)(4U)) + 2)];
              (curr_diff)[j_preg_w2c_0 + (_INT32)((_UINT64) y0)][(_INT32)((_UINT16) x0) + 3] = (diff)[(_INT64)((j_preg_w2c_0 * (_INT32)(4U)) + 3)];
            }
          }
          x0 = (_UINT16)((_UINT32)((_UINT16) x0) + 4U);
        }
        _4098 :;
      }
      y0 = (_UINT16)((_UINT32)((_INT32)((_UINT64) y0)) + 4U);
    }
    if((input) -> AllowTransform8x8 != (_INT32)(0U))
    {
      __comma_preg_w2c_230 = find_SATD((_INT32(*)[16LL]) curr_diff, __cselect_preg_w2c_54, (_INT32)(blocktype));
      mcost = (_UINT16)((_UINT32)((_UINT16) mcost) + (_UINT32)(__comma_preg_w2c_230));
    }
    if((_INT32) mcost < min_mcost)
    {
      min_mcost = (_INT32) mcost;
      best_pos = (_INT32)((_UINT64) pos);
    }
    pos = (_INT32)((_UINT64) pos) + (_INT32)(1U);
  }
  if((_INT32)((_UINT64) best_pos) != (_INT32)(0U))
  {
    * mv_x = (_UINT32)((_UINT16) * mv_x) + _U4SHL((_UINT32)(*(spiral_search_x + (_UINT64) best_pos)), 1U);
    * mv_y = (_UINT32)((_UINT16) * mv_y) + _U4SHL((_UINT32)(*(spiral_search_y + (_UINT64) best_pos)), 1U);
  }
  if((input) -> hadamardqpel != (_INT32)(0U))
  {
    min_mcost = 2147483647U;
  }
  if((((((_INT32) * mv_x + (_INT32)((_INT16)(_I4SHL(pic_pix_x, (_INT32)(2U))))) > (_INT32)(1U)) && (((_INT32) * mv_x + (_INT32)((_INT16)(_I4SHL(pic_pix_x, (_INT32)(2U))))) < ((_INT32)(max_pos_x_w2c_4) + -1))) && (((_INT32) * mv_y + (_INT32)((_INT16)(_I4SHL(pic_pix_y, (_INT32)(2U))))) > (_INT32)(1U))) && (((_INT32) * mv_y + (_INT32)((_INT16)(_I4SHL(pic_pix_y, (_INT32)(2U))))) < ((_INT32)(max_pos_y_w2c_4) + -1)))
  {
    PelY_14 = &FastPelY_14;
  }
  else
  {
    PelY_14 = &UMVPelY_14;
  }
  best_pos = 0U;
  pos = qpelstart;
  while(search_pos_w2c_4 > (_INT32)((_UINT64) pos))
  {
    cand_mv_x = (_UINT16)((_UINT32)((_UINT16) * mv_x) + (_UINT32)(*(spiral_search_x + (_UINT64) pos)));
    cand_mv_y = (_UINT16)((_UINT32)((_UINT16) * mv_y) + (_UINT32)(*(spiral_search_y + (_UINT64) pos)));
    mcost = _I4ASHR(lambda_factor * (*(mvbits + (_INT64)(cand_mv_x - (_INT32) pred_mv_x)) + *(mvbits + (_INT64)(cand_mv_y - (_INT32) pred_mv_y))), (_INT32)(16U));
    y0 = 0U;
    abort_search = 0U;
    while(((_INT32)(blocksize_y) > (_INT32)((_UINT64) y0)) && ((_INT32)(abort_search) == (_INT32)(0U)))
    {
      sy0 = (_UINT16)((_UINT32)((_UINT16) * s_mv_y) + _U4SHL((_UINT32)(pic_pix_y) + (_UINT32)((_INT32)((_UINT64) y0)), 2U));
      if((_INT32)(apply_weights) != (_INT32)(0U))
      {
        x0 = 0U;
        while((_INT32)(blocksize_x) > (_INT32)((_UINT64) x0))
        {
          sx0 = (_UINT16)((_UINT32)((_UINT16) * s_mv_x) + _U4SHL((_UINT32)(pic_pix_x) + (_UINT32)((_INT32)((_UINT64) x0)), 2U));
          orig_line = *(orig_pic + (_UINT64) y0);
          __comma_preg_w2c_235 = (PelY_14b)(ref1_pic, sy0, sx0, img_height, img_width);
          __comma_preg_w2c_240 = (PelY_14)(ref2_pic, (_INT16)((_UINT16)((_UINT32)(cand_mv_y) + _U4SHL((_UINT32)(pic_pix_y) + (_UINT32)((_INT32)((_UINT64) y0)), 2U))), (_INT16)((_UINT16)((_UINT32)(cand_mv_x) + _U4SHL((_UINT32)(pic_pix_x) + (_UINT32)((_INT32)((_UINT64) x0)), 2U))), img_height, img_width);
          if((_I4ASHR((((_INT32)((_INT16)(__cselect_preg_w2c_42)) * (_INT32)((_UINT16)(__comma_preg_w2c_235))) + ((_INT32)((_INT16)(__cselect_preg_w2c_44)) * (_INT32)((_UINT16)(__comma_preg_w2c_240)))) + (wp_luma_round * (_INT32)(2U)), luma_log_weight_denom + (_INT32)(1U)) + (_INT32)((_INT16)(_I4ASHR(((_INT32)((_INT16)(__cselect_preg_w2c_46)) + (_INT32)((_INT16)(__cselect_preg_w2c_50))) + (_INT32)(1U), (_INT32)(1U))))) >= (_INT32)(0U))
          {
            __comma_preg_w2c_245 = (PelY_14b)(ref1_pic, sy0, sx0, img_height, img_width);
            __comma_preg_w2c_250 = (PelY_14)(ref2_pic, (_INT16)((_UINT16)((_UINT32)(cand_mv_y) + _U4SHL((_UINT32)(pic_pix_y) + (_UINT32)((_INT32)((_UINT64) y0)), 2U))), (_INT16)((_UINT16)((_UINT32)(cand_mv_x) + _U4SHL((_UINT32)(pic_pix_x) + (_UINT32)((_INT32)((_UINT64) x0)), 2U))), img_height, img_width);
            if(*(((_INT32 *)(img) + 16384LL) + 1787LL) < (_I4ASHR((((_INT32)((_INT16)(__cselect_preg_w2c_42)) * (_INT32)((_UINT16)(__comma_preg_w2c_245))) + ((_INT32)((_INT16)(__cselect_preg_w2c_44)) * (_INT32)((_UINT16)(__comma_preg_w2c_250)))) + (wp_luma_round * (_INT32)(2U)), luma_log_weight_denom + (_INT32)(1U)) + (_INT32)((_INT16)(_I4ASHR(((_INT32)((_INT16)(__cselect_preg_w2c_46)) + (_INT32)((_INT16)(__cselect_preg_w2c_50))) + (_INT32)(1U), (_INT32)(1U))))))
            {
              __cselect_preg_w2c_74 = *(((_INT32 *)(img) + 16384LL) + 1787LL);
            }
            else
            {
              __comma_preg_w2c_255 = (PelY_14b)(ref1_pic, sy0, sx0, img_height, img_width);
              __comma_preg_w2c_258 = (PelY_14)(ref2_pic, (_INT16)((_UINT16)((_UINT32)(cand_mv_y) + _U4SHL((_UINT32)(pic_pix_y) + (_UINT32)((_INT32)((_UINT64) y0)), 2U))), (_INT16)((_UINT16)((_UINT32)(cand_mv_x) + _U4SHL((_UINT32)(pic_pix_x) + (_UINT32)((_INT32)((_UINT64) x0)), 2U))), img_height, img_width);
              __cselect_preg_w2c_74 = _I4ASHR((((_INT32)((_INT16)(__cselect_preg_w2c_42)) * (_INT32)((_UINT16)(__comma_preg_w2c_255))) + ((_INT32)((_INT16)(__cselect_preg_w2c_44)) * (_INT32)((_UINT16)(__comma_preg_w2c_258)))) + (wp_luma_round * (_INT32)(2U)), luma_log_weight_denom + (_INT32)(1U)) + (_INT32)((_INT16)(_I4ASHR(((_INT32)((_INT16)(__cselect_preg_w2c_46)) + (_INT32)((_INT16)(__cselect_preg_w2c_50))) + (_INT32)(1U), (_INT32)(1U))));
            }
            __cselect_preg = __cselect_preg_w2c_74;
          }
          else
          {
            __cselect_preg = 0U;
          }
          * diff = (_INT32) * (orig_line + (_UINT64) x0) - __cselect_preg;
          __comma_preg_w2c_5 = (PelY_14b)(ref1_pic, sy0, (_INT32)(sx0) + (_INT32)(4U), img_height, img_width);
          __comma_preg_w2c_10 = (PelY_14)(ref2_pic, (_INT16)((_UINT16)((_UINT32)(cand_mv_y) + _U4SHL((_UINT32)(pic_pix_y) + (_UINT32)((_INT32)((_UINT64) y0)), 2U))), (_INT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_x) + _U4SHL((_UINT32)(pic_pix_x) + (_UINT32)((_INT32)((_UINT64) x0)), 2U)))) + (_INT32)(4U), img_height, img_width);
          if((_I4ASHR((((_INT32)((_INT16)(__cselect_preg_w2c_42)) * (_INT32)((_UINT16)(__comma_preg_w2c_5))) + ((_INT32)((_INT16)(__cselect_preg_w2c_44)) * (_INT32)((_UINT16)(__comma_preg_w2c_10)))) + (wp_luma_round * (_INT32)(2U)), luma_log_weight_denom + (_INT32)(1U)) + (_INT32)((_INT16)(_I4ASHR(((_INT32)((_INT16)(__cselect_preg_w2c_46)) + (_INT32)((_INT16)(__cselect_preg_w2c_50))) + (_INT32)(1U), (_INT32)(1U))))) >= (_INT32)(0U))
          {
            __comma_preg_w2c_15 = (PelY_14b)(ref1_pic, sy0, (_INT32)(sx0) + (_INT32)(4U), img_height, img_width);
            __comma_preg_w2c_20 = (PelY_14)(ref2_pic, (_INT16)((_UINT16)((_UINT32)(cand_mv_y) + _U4SHL((_UINT32)(pic_pix_y) + (_UINT32)((_INT32)((_UINT64) y0)), 2U))), (_INT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_x) + _U4SHL((_UINT32)(pic_pix_x) + (_UINT32)((_INT32)((_UINT64) x0)), 2U)))) + (_INT32)(4U), img_height, img_width);
            if(*(((_INT32 *)(img) + 16384LL) + 1787LL) < (_I4ASHR((((_INT32)((_INT16)(__cselect_preg_w2c_42)) * (_INT32)((_UINT16)(__comma_preg_w2c_15))) + ((_INT32)((_INT16)(__cselect_preg_w2c_44)) * (_INT32)((_UINT16)(__comma_preg_w2c_20)))) + (wp_luma_round * (_INT32)(2U)), luma_log_weight_denom + (_INT32)(1U)) + (_INT32)((_INT16)(_I4ASHR(((_INT32)((_INT16)(__cselect_preg_w2c_46)) + (_INT32)((_INT16)(__cselect_preg_w2c_50))) + (_INT32)(1U), (_INT32)(1U))))))
            {
              __cselect_preg_w2c_5 = *(((_INT32 *)(img) + 16384LL) + 1787LL);
            }
            else
            {
              __comma_preg_w2c_25 = (PelY_14b)(ref1_pic, sy0, (_INT32)(sx0) + (_INT32)(4U), img_height, img_width);
              __comma_preg_w2c_28 = (PelY_14)(ref2_pic, (_INT16)((_UINT16)((_UINT32)(cand_mv_y) + _U4SHL((_UINT32)(pic_pix_y) + (_UINT32)((_INT32)((_UINT64) y0)), 2U))), (_INT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_x) + _U4SHL((_UINT32)(pic_pix_x) + (_UINT32)((_INT32)((_UINT64) x0)), 2U)))) + (_INT32)(4U), img_height, img_width);
              __cselect_preg_w2c_5 = _I4ASHR((((_INT32)((_INT16)(__cselect_preg_w2c_42)) * (_INT32)((_UINT16)(__comma_preg_w2c_25))) + ((_INT32)((_INT16)(__cselect_preg_w2c_44)) * (_INT32)((_UINT16)(__comma_preg_w2c_28)))) + (wp_luma_round * (_INT32)(2U)), luma_log_weight_denom + (_INT32)(1U)) + (_INT32)((_INT16)(_I4ASHR(((_INT32)((_INT16)(__cselect_preg_w2c_46)) + (_INT32)((_INT16)(__cselect_preg_w2c_50))) + (_INT32)(1U), (_INT32)(1U))));
            }
            __cselect_preg_w2c_7 = __cselect_preg_w2c_5;
          }
          else
          {
            __cselect_preg_w2c_7 = 0U;
          }
          * (diff + 1LL) = (_INT32) * ((orig_line + (_UINT64) x0) + 1LL) - __cselect_preg_w2c_7;
          __comma_preg_w2c_37 = (PelY_14b)(ref1_pic, sy0, (_INT32)(sx0) + (_INT32)(8U), img_height, img_width);
          __comma_preg_w2c_41 = (PelY_14)(ref2_pic, (_INT16)((_UINT16)((_UINT32)(cand_mv_y) + _U4SHL((_UINT32)(pic_pix_y) + (_UINT32)((_INT32)((_UINT64) y0)), 2U))), (_INT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_x) + _U4SHL((_UINT32)(pic_pix_x) + (_UINT32)((_INT32)((_UINT64) x0)), 2U)))) + (_INT32)(8U), img_height, img_width);
          if((_I4ASHR((((_INT32)((_INT16)(__cselect_preg_w2c_42)) * (_INT32)((_UINT16)(__comma_preg_w2c_37))) + ((_INT32)((_INT16)(__cselect_preg_w2c_44)) * (_INT32)((_UINT16)(__comma_preg_w2c_41)))) + (wp_luma_round * (_INT32)(2U)), luma_log_weight_denom + (_INT32)(1U)) + (_INT32)((_INT16)(_I4ASHR(((_INT32)((_INT16)(__cselect_preg_w2c_46)) + (_INT32)((_INT16)(__cselect_preg_w2c_50))) + (_INT32)(1U), (_INT32)(1U))))) >= (_INT32)(0U))
          {
            __comma_preg_w2c_45 = (PelY_14b)(ref1_pic, sy0, (_INT32)(sx0) + (_INT32)(8U), img_height, img_width);
            __comma_preg_w2c_49 = (PelY_14)(ref2_pic, (_INT16)((_UINT16)((_UINT32)(cand_mv_y) + _U4SHL((_UINT32)(pic_pix_y) + (_UINT32)((_INT32)((_UINT64) y0)), 2U))), (_INT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_x) + _U4SHL((_UINT32)(pic_pix_x) + (_UINT32)((_INT32)((_UINT64) x0)), 2U)))) + (_INT32)(8U), img_height, img_width);
            if(*(((_INT32 *)(img) + 16384LL) + 1787LL) < (_I4ASHR((((_INT32)((_INT16)(__cselect_preg_w2c_42)) * (_INT32)((_UINT16)(__comma_preg_w2c_45))) + ((_INT32)((_INT16)(__cselect_preg_w2c_44)) * (_INT32)((_UINT16)(__comma_preg_w2c_49)))) + (wp_luma_round * (_INT32)(2U)), luma_log_weight_denom + (_INT32)(1U)) + (_INT32)((_INT16)(_I4ASHR(((_INT32)((_INT16)(__cselect_preg_w2c_46)) + (_INT32)((_INT16)(__cselect_preg_w2c_50))) + (_INT32)(1U), (_INT32)(1U))))))
            {
              __cselect_preg_w2c_13 = *(((_INT32 *)(img) + 16384LL) + 1787LL);
            }
            else
            {
              __comma_preg_w2c_53 = (PelY_14b)(ref1_pic, sy0, (_INT32)(sx0) + (_INT32)(8U), img_height, img_width);
              __comma_preg_w2c_55 = (PelY_14)(ref2_pic, (_INT16)((_UINT16)((_UINT32)(cand_mv_y) + _U4SHL((_UINT32)(pic_pix_y) + (_UINT32)((_INT32)((_UINT64) y0)), 2U))), (_INT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_x) + _U4SHL((_UINT32)(pic_pix_x) + (_UINT32)((_INT32)((_UINT64) x0)), 2U)))) + (_INT32)(8U), img_height, img_width);
              __cselect_preg_w2c_13 = _I4ASHR((((_INT32)((_INT16)(__cselect_preg_w2c_42)) * (_INT32)((_UINT16)(__comma_preg_w2c_53))) + ((_INT32)((_INT16)(__cselect_preg_w2c_44)) * (_INT32)((_UINT16)(__comma_preg_w2c_55)))) + (wp_luma_round * (_INT32)(2U)), luma_log_weight_denom + (_INT32)(1U)) + (_INT32)((_INT16)(_I4ASHR(((_INT32)((_INT16)(__cselect_preg_w2c_46)) + (_INT32)((_INT16)(__cselect_preg_w2c_50))) + (_INT32)(1U), (_INT32)(1U))));
            }
            __cselect_preg_w2c_15 = __cselect_preg_w2c_13;
          }
          else
          {
            __cselect_preg_w2c_15 = 0U;
          }
          * (diff + 2LL) = (_INT32) * ((orig_line + (_UINT64) x0) + 2LL) - __cselect_preg_w2c_15;
          __comma_preg_w2c_61 = (PelY_14b)(ref1_pic, sy0, (_INT32)(sx0) + (_INT32)(12U), img_height, img_width);
          __comma_preg_w2c_65 = (PelY_14)(ref2_pic, (_INT16)((_UINT16)((_UINT32)(cand_mv_y) + _U4SHL((_UINT32)(pic_pix_y) + (_UINT32)((_INT32)((_UINT64) y0)), 2U))), (_INT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_x) + _U4SHL((_UINT32)(pic_pix_x) + (_UINT32)((_INT32)((_UINT64) x0)), 2U)))) + (_INT32)(12U), img_height, img_width);
          if((_I4ASHR((((_INT32)((_INT16)(__cselect_preg_w2c_42)) * (_INT32)((_UINT16)(__comma_preg_w2c_61))) + ((_INT32)((_INT16)(__cselect_preg_w2c_44)) * (_INT32)((_UINT16)(__comma_preg_w2c_65)))) + (wp_luma_round * (_INT32)(2U)), luma_log_weight_denom + (_INT32)(1U)) + (_INT32)((_INT16)(_I4ASHR(((_INT32)((_INT16)(__cselect_preg_w2c_46)) + (_INT32)((_INT16)(__cselect_preg_w2c_50))) + (_INT32)(1U), (_INT32)(1U))))) >= (_INT32)(0U))
          {
            __comma_preg_w2c_69 = (PelY_14b)(ref1_pic, sy0, (_INT32)(sx0) + (_INT32)(12U), img_height, img_width);
            __comma_preg_w2c_73 = (PelY_14)(ref2_pic, (_INT16)((_UINT16)((_UINT32)(cand_mv_y) + _U4SHL((_UINT32)(pic_pix_y) + (_UINT32)((_INT32)((_UINT64) y0)), 2U))), (_INT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_x) + _U4SHL((_UINT32)(pic_pix_x) + (_UINT32)((_INT32)((_UINT64) x0)), 2U)))) + (_INT32)(12U), img_height, img_width);
            if(*(((_INT32 *)(img) + 16384LL) + 1787LL) < (_I4ASHR((((_INT32)((_INT16)(__cselect_preg_w2c_42)) * (_INT32)((_UINT16)(__comma_preg_w2c_69))) + ((_INT32)((_INT16)(__cselect_preg_w2c_44)) * (_INT32)((_UINT16)(__comma_preg_w2c_73)))) + (wp_luma_round * (_INT32)(2U)), luma_log_weight_denom + (_INT32)(1U)) + (_INT32)((_INT16)(_I4ASHR(((_INT32)((_INT16)(__cselect_preg_w2c_46)) + (_INT32)((_INT16)(__cselect_preg_w2c_50))) + (_INT32)(1U), (_INT32)(1U))))))
            {
              __cselect_preg_w2c_21 = *(((_INT32 *)(img) + 16384LL) + 1787LL);
            }
            else
            {
              __comma_preg_w2c_77 = (PelY_14b)(ref1_pic, sy0, (_INT32)(sx0) + (_INT32)(12U), img_height, img_width);
              __comma_preg_w2c_79 = (PelY_14)(ref2_pic, (_INT16)((_UINT16)((_UINT32)(cand_mv_y) + _U4SHL((_UINT32)(pic_pix_y) + (_UINT32)((_INT32)((_UINT64) y0)), 2U))), (_INT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_x) + _U4SHL((_UINT32)(pic_pix_x) + (_UINT32)((_INT32)((_UINT64) x0)), 2U)))) + (_INT32)(12U), img_height, img_width);
              __cselect_preg_w2c_21 = _I4ASHR((((_INT32)((_INT16)(__cselect_preg_w2c_42)) * (_INT32)((_UINT16)(__comma_preg_w2c_77))) + ((_INT32)((_INT16)(__cselect_preg_w2c_44)) * (_INT32)((_UINT16)(__comma_preg_w2c_79)))) + (wp_luma_round * (_INT32)(2U)), luma_log_weight_denom + (_INT32)(1U)) + (_INT32)((_INT16)(_I4ASHR(((_INT32)((_INT16)(__cselect_preg_w2c_46)) + (_INT32)((_INT16)(__cselect_preg_w2c_50))) + (_INT32)(1U), (_INT32)(1U))));
            }
            __cselect_preg_w2c_23 = __cselect_preg_w2c_21;
          }
          else
          {
            __cselect_preg_w2c_23 = 0U;
          }
          * (diff + 3LL) = (_INT32) * ((orig_line + (_UINT64) x0) + 3LL) - __cselect_preg_w2c_23;
          orig_line = *((orig_pic + (_UINT64) y0) + 1LL);
          __comma_preg_w2c_85 = (PelY_14b)(ref1_pic, (_INT16)((_UINT16)((_UINT32)(sy0) + 4U)), sx0, img_height, img_width);
          __comma_preg_w2c_89 = (PelY_14)(ref2_pic, (_INT16)((_UINT16)((_UINT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_y) + _U4SHL((_UINT32)(pic_pix_y) + (_UINT32)((_INT32)((_UINT64) y0)), 2U)))) + 4U)), (_INT16)((_UINT16)((_UINT32)(cand_mv_x) + _U4SHL((_UINT32)(pic_pix_x) + (_UINT32)((_INT32)((_UINT64) x0)), 2U))), img_height, img_width);
          if((_I4ASHR((((_INT32)((_INT16)(__cselect_preg_w2c_42)) * (_INT32)((_UINT16)(__comma_preg_w2c_85))) + ((_INT32)((_INT16)(__cselect_preg_w2c_44)) * (_INT32)((_UINT16)(__comma_preg_w2c_89)))) + (wp_luma_round * (_INT32)(2U)), luma_log_weight_denom + (_INT32)(1U)) + (_INT32)((_INT16)(_I4ASHR(((_INT32)((_INT16)(__cselect_preg_w2c_46)) + (_INT32)((_INT16)(__cselect_preg_w2c_50))) + (_INT32)(1U), (_INT32)(1U))))) >= (_INT32)(0U))
          {
            __comma_preg_w2c_93 = (PelY_14b)(ref1_pic, (_INT16)((_UINT16)((_UINT32)(sy0) + 4U)), sx0, img_height, img_width);
            __comma_preg_w2c_97 = (PelY_14)(ref2_pic, (_INT16)((_UINT16)((_UINT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_y) + _U4SHL((_UINT32)(pic_pix_y) + (_UINT32)((_INT32)((_UINT64) y0)), 2U)))) + 4U)), (_INT16)((_UINT16)((_UINT32)(cand_mv_x) + _U4SHL((_UINT32)(pic_pix_x) + (_UINT32)((_INT32)((_UINT64) x0)), 2U))), img_height, img_width);
            if(*(((_INT32 *)(img) + 16384LL) + 1787LL) < (_I4ASHR((((_INT32)((_INT16)(__cselect_preg_w2c_42)) * (_INT32)((_UINT16)(__comma_preg_w2c_93))) + ((_INT32)((_INT16)(__cselect_preg_w2c_44)) * (_INT32)((_UINT16)(__comma_preg_w2c_97)))) + (wp_luma_round * (_INT32)(2U)), luma_log_weight_denom + (_INT32)(1U)) + (_INT32)((_INT16)(_I4ASHR(((_INT32)((_INT16)(__cselect_preg_w2c_46)) + (_INT32)((_INT16)(__cselect_preg_w2c_50))) + (_INT32)(1U), (_INT32)(1U))))))
            {
              __cselect_preg_w2c_29 = *(((_INT32 *)(img) + 16384LL) + 1787LL);
            }
            else
            {
              __comma_preg_w2c_101 = (PelY_14b)(ref1_pic, (_INT16)((_UINT16)((_UINT32)(sy0) + 4U)), sx0, img_height, img_width);
              __comma_preg_w2c_103 = (PelY_14)(ref2_pic, (_INT16)((_UINT16)((_UINT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_y) + _U4SHL((_UINT32)(pic_pix_y) + (_UINT32)((_INT32)((_UINT64) y0)), 2U)))) + 4U)), (_INT16)((_UINT16)((_UINT32)(cand_mv_x) + _U4SHL((_UINT32)(pic_pix_x) + (_UINT32)((_INT32)((_UINT64) x0)), 2U))), img_height, img_width);
              __cselect_preg_w2c_29 = _I4ASHR((((_INT32)((_INT16)(__cselect_preg_w2c_42)) * (_INT32)((_UINT16)(__comma_preg_w2c_101))) + ((_INT32)((_INT16)(__cselect_preg_w2c_44)) * (_INT32)((_UINT16)(__comma_preg_w2c_103)))) + (wp_luma_round * (_INT32)(2U)), luma_log_weight_denom + (_INT32)(1U)) + (_INT32)((_INT16)(_I4ASHR(((_INT32)((_INT16)(__cselect_preg_w2c_46)) + (_INT32)((_INT16)(__cselect_preg_w2c_50))) + (_INT32)(1U), (_INT32)(1U))));
            }
            __cselect_preg_w2c_31 = __cselect_preg_w2c_29;
          }
          else
          {
            __cselect_preg_w2c_31 = 0U;
          }
          * (diff + 4LL) = (_INT32) * (orig_line + (_UINT64) x0) - __cselect_preg_w2c_31;
          __comma_preg_w2c_109 = (PelY_14b)(ref1_pic, (_INT16)((_UINT16)((_UINT32)(sy0) + 4U)), (_INT32)(sx0) + (_INT32)(4U), img_height, img_width);
          __comma_preg_w2c_113 = (PelY_14)(ref2_pic, (_INT16)((_UINT16)((_UINT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_y) + _U4SHL((_UINT32)(pic_pix_y) + (_UINT32)((_INT32)((_UINT64) y0)), 2U)))) + 4U)), (_INT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_x) + _U4SHL((_UINT32)(pic_pix_x) + (_UINT32)((_INT32)((_UINT64) x0)), 2U)))) + (_INT32)(4U), img_height, img_width);
          if((_I4ASHR((((_INT32)((_INT16)(__cselect_preg_w2c_42)) * (_INT32)((_UINT16)(__comma_preg_w2c_109))) + ((_INT32)((_INT16)(__cselect_preg_w2c_44)) * (_INT32)((_UINT16)(__comma_preg_w2c_113)))) + (wp_luma_round * (_INT32)(2U)), luma_log_weight_denom + (_INT32)(1U)) + (_INT32)((_INT16)(_I4ASHR(((_INT32)((_INT16)(__cselect_preg_w2c_46)) + (_INT32)((_INT16)(__cselect_preg_w2c_50))) + (_INT32)(1U), (_INT32)(1U))))) >= (_INT32)(0U))
          {
            __comma_preg_w2c_117 = (PelY_14b)(ref1_pic, (_INT16)((_UINT16)((_UINT32)(sy0) + 4U)), (_INT32)(sx0) + (_INT32)(4U), img_height, img_width);
            __comma_preg_w2c_121 = (PelY_14)(ref2_pic, (_INT16)((_UINT16)((_UINT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_y) + _U4SHL((_UINT32)(pic_pix_y) + (_UINT32)((_INT32)((_UINT64) y0)), 2U)))) + 4U)), (_INT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_x) + _U4SHL((_UINT32)(pic_pix_x) + (_UINT32)((_INT32)((_UINT64) x0)), 2U)))) + (_INT32)(4U), img_height, img_width);
            if(*(((_INT32 *)(img) + 16384LL) + 1787LL) < (_I4ASHR((((_INT32)((_INT16)(__cselect_preg_w2c_42)) * (_INT32)((_UINT16)(__comma_preg_w2c_117))) + ((_INT32)((_INT16)(__cselect_preg_w2c_44)) * (_INT32)((_UINT16)(__comma_preg_w2c_121)))) + (wp_luma_round * (_INT32)(2U)), luma_log_weight_denom + (_INT32)(1U)) + (_INT32)((_INT16)(_I4ASHR(((_INT32)((_INT16)(__cselect_preg_w2c_46)) + (_INT32)((_INT16)(__cselect_preg_w2c_50))) + (_INT32)(1U), (_INT32)(1U))))))
            {
              __cselect_preg_w2c_38 = *(((_INT32 *)(img) + 16384LL) + 1787LL);
            }
            else
            {
              __comma_preg_w2c_125 = (PelY_14b)(ref1_pic, (_INT16)((_UINT16)((_UINT32)(sy0) + 4U)), (_INT32)(sx0) + (_INT32)(4U), img_height, img_width);
              __comma_preg_w2c_128 = (PelY_14)(ref2_pic, (_INT16)((_UINT16)((_UINT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_y) + _U4SHL((_UINT32)(pic_pix_y) + (_UINT32)((_INT32)((_UINT64) y0)), 2U)))) + 4U)), (_INT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_x) + _U4SHL((_UINT32)(pic_pix_x) + (_UINT32)((_INT32)((_UINT64) x0)), 2U)))) + (_INT32)(4U), img_height, img_width);
              __cselect_preg_w2c_38 = _I4ASHR((((_INT32)((_INT16)(__cselect_preg_w2c_42)) * (_INT32)((_UINT16)(__comma_preg_w2c_125))) + ((_INT32)((_INT16)(__cselect_preg_w2c_44)) * (_INT32)((_UINT16)(__comma_preg_w2c_128)))) + (wp_luma_round * (_INT32)(2U)), luma_log_weight_denom + (_INT32)(1U)) + (_INT32)((_INT16)(_I4ASHR(((_INT32)((_INT16)(__cselect_preg_w2c_46)) + (_INT32)((_INT16)(__cselect_preg_w2c_50))) + (_INT32)(1U), (_INT32)(1U))));
            }
            __cselect_preg_w2c_41 = __cselect_preg_w2c_38;
          }
          else
          {
            __cselect_preg_w2c_41 = 0U;
          }
          * (diff + 5LL) = (_INT32) * ((orig_line + (_UINT64) x0) + 1LL) - __cselect_preg_w2c_41;
          __comma_preg_w2c_135 = (PelY_14b)(ref1_pic, (_INT16)((_UINT16)((_UINT32)(sy0) + 4U)), (_INT32)(sx0) + (_INT32)(8U), img_height, img_width);
          __comma_preg_w2c_139 = (PelY_14)(ref2_pic, (_INT16)((_UINT16)((_UINT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_y) + _U4SHL((_UINT32)(pic_pix_y) + (_UINT32)((_INT32)((_UINT64) y0)), 2U)))) + 4U)), (_INT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_x) + _U4SHL((_UINT32)(pic_pix_x) + (_UINT32)((_INT32)((_UINT64) x0)), 2U)))) + (_INT32)(8U), img_height, img_width);
          if((_I4ASHR((((_INT32)((_INT16)(__cselect_preg_w2c_42)) * (_INT32)((_UINT16)(__comma_preg_w2c_135))) + ((_INT32)((_INT16)(__cselect_preg_w2c_44)) * (_INT32)((_UINT16)(__comma_preg_w2c_139)))) + (wp_luma_round * (_INT32)(2U)), luma_log_weight_denom + (_INT32)(1U)) + (_INT32)((_INT16)(_I4ASHR(((_INT32)((_INT16)(__cselect_preg_w2c_46)) + (_INT32)((_INT16)(__cselect_preg_w2c_50))) + (_INT32)(1U), (_INT32)(1U))))) >= (_INT32)(0U))
          {
            __comma_preg_w2c_143 = (PelY_14b)(ref1_pic, (_INT16)((_UINT16)((_UINT32)(sy0) + 4U)), (_INT32)(sx0) + (_INT32)(8U), img_height, img_width);
            __comma_preg_w2c_147 = (PelY_14)(ref2_pic, (_INT16)((_UINT16)((_UINT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_y) + _U4SHL((_UINT32)(pic_pix_y) + (_UINT32)((_INT32)((_UINT64) y0)), 2U)))) + 4U)), (_INT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_x) + _U4SHL((_UINT32)(pic_pix_x) + (_UINT32)((_INT32)((_UINT64) x0)), 2U)))) + (_INT32)(8U), img_height, img_width);
            if(*(((_INT32 *)(img) + 16384LL) + 1787LL) < (_I4ASHR((((_INT32)((_INT16)(__cselect_preg_w2c_42)) * (_INT32)((_UINT16)(__comma_preg_w2c_143))) + ((_INT32)((_INT16)(__cselect_preg_w2c_44)) * (_INT32)((_UINT16)(__comma_preg_w2c_147)))) + (wp_luma_round * (_INT32)(2U)), luma_log_weight_denom + (_INT32)(1U)) + (_INT32)((_INT16)(_I4ASHR(((_INT32)((_INT16)(__cselect_preg_w2c_46)) + (_INT32)((_INT16)(__cselect_preg_w2c_50))) + (_INT32)(1U), (_INT32)(1U))))))
            {
              __cselect_preg_w2c_52 = *(((_INT32 *)(img) + 16384LL) + 1787LL);
            }
            else
            {
              __comma_preg_w2c_151 = (PelY_14b)(ref1_pic, (_INT16)((_UINT16)((_UINT32)(sy0) + 4U)), (_INT32)(sx0) + (_INT32)(8U), img_height, img_width);
              __comma_preg_w2c_154 = (PelY_14)(ref2_pic, (_INT16)((_UINT16)((_UINT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_y) + _U4SHL((_UINT32)(pic_pix_y) + (_UINT32)((_INT32)((_UINT64) y0)), 2U)))) + 4U)), (_INT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_x) + _U4SHL((_UINT32)(pic_pix_x) + (_UINT32)((_INT32)((_UINT64) x0)), 2U)))) + (_INT32)(8U), img_height, img_width);
              __cselect_preg_w2c_52 = _I4ASHR((((_INT32)((_INT16)(__cselect_preg_w2c_42)) * (_INT32)((_UINT16)(__comma_preg_w2c_151))) + ((_INT32)((_INT16)(__cselect_preg_w2c_44)) * (_INT32)((_UINT16)(__comma_preg_w2c_154)))) + (wp_luma_round * (_INT32)(2U)), luma_log_weight_denom + (_INT32)(1U)) + (_INT32)((_INT16)(_I4ASHR(((_INT32)((_INT16)(__cselect_preg_w2c_46)) + (_INT32)((_INT16)(__cselect_preg_w2c_50))) + (_INT32)(1U), (_INT32)(1U))));
            }
            __cselect_preg_w2c_55 = __cselect_preg_w2c_52;
          }
          else
          {
            __cselect_preg_w2c_55 = 0U;
          }
          * (diff + 6LL) = (_INT32) * ((orig_line + (_UINT64) x0) + 2LL) - __cselect_preg_w2c_55;
          __comma_preg_w2c_161 = (PelY_14b)(ref1_pic, (_INT16)((_UINT16)((_UINT32)(sy0) + 4U)), (_INT32)(sx0) + (_INT32)(12U), img_height, img_width);
          __comma_preg_w2c_166 = (PelY_14)(ref2_pic, (_INT16)((_UINT16)((_UINT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_y) + _U4SHL((_UINT32)(pic_pix_y) + (_UINT32)((_INT32)((_UINT64) y0)), 2U)))) + 4U)), (_INT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_x) + _U4SHL((_UINT32)(pic_pix_x) + (_UINT32)((_INT32)((_UINT64) x0)), 2U)))) + (_INT32)(12U), img_height, img_width);
          if((_I4ASHR((((_INT32)((_INT16)(__cselect_preg_w2c_42)) * (_INT32)((_UINT16)(__comma_preg_w2c_161))) + ((_INT32)((_INT16)(__cselect_preg_w2c_44)) * (_INT32)((_UINT16)(__comma_preg_w2c_166)))) + (wp_luma_round * (_INT32)(2U)), luma_log_weight_denom + (_INT32)(1U)) + (_INT32)((_INT16)(_I4ASHR(((_INT32)((_INT16)(__cselect_preg_w2c_46)) + (_INT32)((_INT16)(__cselect_preg_w2c_50))) + (_INT32)(1U), (_INT32)(1U))))) >= (_INT32)(0U))
          {
            __comma_preg_w2c_171 = (PelY_14b)(ref1_pic, (_INT16)((_UINT16)((_UINT32)(sy0) + 4U)), (_INT32)(sx0) + (_INT32)(12U), img_height, img_width);
            __comma_preg_w2c_176 = (PelY_14)(ref2_pic, (_INT16)((_UINT16)((_UINT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_y) + _U4SHL((_UINT32)(pic_pix_y) + (_UINT32)((_INT32)((_UINT64) y0)), 2U)))) + 4U)), (_INT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_x) + _U4SHL((_UINT32)(pic_pix_x) + (_UINT32)((_INT32)((_UINT64) x0)), 2U)))) + (_INT32)(12U), img_height, img_width);
            if(*(((_INT32 *)(img) + 16384LL) + 1787LL) < (_I4ASHR((((_INT32)((_INT16)(__cselect_preg_w2c_42)) * (_INT32)((_UINT16)(__comma_preg_w2c_171))) + ((_INT32)((_INT16)(__cselect_preg_w2c_44)) * (_INT32)((_UINT16)(__comma_preg_w2c_176)))) + (wp_luma_round * (_INT32)(2U)), luma_log_weight_denom + (_INT32)(1U)) + (_INT32)((_INT16)(_I4ASHR(((_INT32)((_INT16)(__cselect_preg_w2c_46)) + (_INT32)((_INT16)(__cselect_preg_w2c_50))) + (_INT32)(1U), (_INT32)(1U))))))
            {
              __cselect_preg_w2c_58 = *(((_INT32 *)(img) + 16384LL) + 1787LL);
            }
            else
            {
              __comma_preg_w2c_181 = (PelY_14b)(ref1_pic, (_INT16)((_UINT16)((_UINT32)(sy0) + 4U)), (_INT32)(sx0) + (_INT32)(12U), img_height, img_width);
              __comma_preg_w2c_186 = (PelY_14)(ref2_pic, (_INT16)((_UINT16)((_UINT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_y) + _U4SHL((_UINT32)(pic_pix_y) + (_UINT32)((_INT32)((_UINT64) y0)), 2U)))) + 4U)), (_INT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_x) + _U4SHL((_UINT32)(pic_pix_x) + (_UINT32)((_INT32)((_UINT64) x0)), 2U)))) + (_INT32)(12U), img_height, img_width);
              __cselect_preg_w2c_58 = _I4ASHR((((_INT32)((_INT16)(__cselect_preg_w2c_42)) * (_INT32)((_UINT16)(__comma_preg_w2c_181))) + ((_INT32)((_INT16)(__cselect_preg_w2c_44)) * (_INT32)((_UINT16)(__comma_preg_w2c_186)))) + (wp_luma_round * (_INT32)(2U)), luma_log_weight_denom + (_INT32)(1U)) + (_INT32)((_INT16)(_I4ASHR(((_INT32)((_INT16)(__cselect_preg_w2c_46)) + (_INT32)((_INT16)(__cselect_preg_w2c_50))) + (_INT32)(1U), (_INT32)(1U))));
            }
            __cselect_preg_w2c_61 = __cselect_preg_w2c_58;
          }
          else
          {
            __cselect_preg_w2c_61 = 0U;
          }
          * (diff + 7LL) = (_INT32) * ((orig_line + (_UINT64) x0) + 3LL) - __cselect_preg_w2c_61;
          orig_line = *((orig_pic + (_UINT64) y0) + 2LL);
          __comma_preg_w2c_195 = (PelY_14b)(ref1_pic, (_INT16)((_UINT16)((_UINT32)(sy0) + 8U)), sx0, img_height, img_width);
          __comma_preg_w2c_200 = (PelY_14)(ref2_pic, (_INT16)((_UINT16)((_UINT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_y) + _U4SHL((_UINT32)(pic_pix_y) + (_UINT32)((_INT32)((_UINT64) y0)), 2U)))) + 8U)), (_INT16)((_UINT16)((_UINT32)(cand_mv_x) + _U4SHL((_UINT32)(pic_pix_x) + (_UINT32)((_INT32)((_UINT64) x0)), 2U))), img_height, img_width);
          if((_I4ASHR((((_INT32)((_INT16)(__cselect_preg_w2c_42)) * (_INT32)((_UINT16)(__comma_preg_w2c_195))) + ((_INT32)((_INT16)(__cselect_preg_w2c_44)) * (_INT32)((_UINT16)(__comma_preg_w2c_200)))) + (wp_luma_round * (_INT32)(2U)), luma_log_weight_denom + (_INT32)(1U)) + (_INT32)((_INT16)(_I4ASHR(((_INT32)((_INT16)(__cselect_preg_w2c_46)) + (_INT32)((_INT16)(__cselect_preg_w2c_50))) + (_INT32)(1U), (_INT32)(1U))))) >= (_INT32)(0U))
          {
            __comma_preg_w2c_205 = (PelY_14b)(ref1_pic, (_INT16)((_UINT16)((_UINT32)(sy0) + 8U)), sx0, img_height, img_width);
            __comma_preg_w2c_210 = (PelY_14)(ref2_pic, (_INT16)((_UINT16)((_UINT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_y) + _U4SHL((_UINT32)(pic_pix_y) + (_UINT32)((_INT32)((_UINT64) y0)), 2U)))) + 8U)), (_INT16)((_UINT16)((_UINT32)(cand_mv_x) + _U4SHL((_UINT32)(pic_pix_x) + (_UINT32)((_INT32)((_UINT64) x0)), 2U))), img_height, img_width);
            if(*(((_INT32 *)(img) + 16384LL) + 1787LL) < (_I4ASHR((((_INT32)((_INT16)(__cselect_preg_w2c_42)) * (_INT32)((_UINT16)(__comma_preg_w2c_205))) + ((_INT32)((_INT16)(__cselect_preg_w2c_44)) * (_INT32)((_UINT16)(__comma_preg_w2c_210)))) + (wp_luma_round * (_INT32)(2U)), luma_log_weight_denom + (_INT32)(1U)) + (_INT32)((_INT16)(_I4ASHR(((_INT32)((_INT16)(__cselect_preg_w2c_46)) + (_INT32)((_INT16)(__cselect_preg_w2c_50))) + (_INT32)(1U), (_INT32)(1U))))))
            {
              __cselect_preg_w2c_64 = *(((_INT32 *)(img) + 16384LL) + 1787LL);
            }
            else
            {
              __comma_preg_w2c_215 = (PelY_14b)(ref1_pic, (_INT16)((_UINT16)((_UINT32)(sy0) + 8U)), sx0, img_height, img_width);
              __comma_preg_w2c_220 = (PelY_14)(ref2_pic, (_INT16)((_UINT16)((_UINT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_y) + _U4SHL((_UINT32)(pic_pix_y) + (_UINT32)((_INT32)((_UINT64) y0)), 2U)))) + 8U)), (_INT16)((_UINT16)((_UINT32)(cand_mv_x) + _U4SHL((_UINT32)(pic_pix_x) + (_UINT32)((_INT32)((_UINT64) x0)), 2U))), img_height, img_width);
              __cselect_preg_w2c_64 = _I4ASHR((((_INT32)((_INT16)(__cselect_preg_w2c_42)) * (_INT32)((_UINT16)(__comma_preg_w2c_215))) + ((_INT32)((_INT16)(__cselect_preg_w2c_44)) * (_INT32)((_UINT16)(__comma_preg_w2c_220)))) + (wp_luma_round * (_INT32)(2U)), luma_log_weight_denom + (_INT32)(1U)) + (_INT32)((_INT16)(_I4ASHR(((_INT32)((_INT16)(__cselect_preg_w2c_46)) + (_INT32)((_INT16)(__cselect_preg_w2c_50))) + (_INT32)(1U), (_INT32)(1U))));
            }
            __cselect_preg_w2c_67 = __cselect_preg_w2c_64;
          }
          else
          {
            __cselect_preg_w2c_67 = 0U;
          }
          * (diff + 8LL) = (_INT32) * (orig_line + (_UINT64) x0) - __cselect_preg_w2c_67;
          __comma_preg_w2c_229 = (PelY_14b)(ref1_pic, (_INT16)((_UINT16)((_UINT32)(sy0) + 8U)), (_INT32)(sx0) + (_INT32)(4U), img_height, img_width);
          __comma_preg_w2c_234 = (PelY_14)(ref2_pic, (_INT16)((_UINT16)((_UINT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_y) + _U4SHL((_UINT32)(pic_pix_y) + (_UINT32)((_INT32)((_UINT64) y0)), 2U)))) + 8U)), (_INT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_x) + _U4SHL((_UINT32)(pic_pix_x) + (_UINT32)((_INT32)((_UINT64) x0)), 2U)))) + (_INT32)(4U), img_height, img_width);
          if((_I4ASHR((((_INT32)((_INT16)(__cselect_preg_w2c_42)) * (_INT32)((_UINT16)(__comma_preg_w2c_229))) + ((_INT32)((_INT16)(__cselect_preg_w2c_44)) * (_INT32)((_UINT16)(__comma_preg_w2c_234)))) + (wp_luma_round * (_INT32)(2U)), luma_log_weight_denom + (_INT32)(1U)) + (_INT32)((_INT16)(_I4ASHR(((_INT32)((_INT16)(__cselect_preg_w2c_46)) + (_INT32)((_INT16)(__cselect_preg_w2c_50))) + (_INT32)(1U), (_INT32)(1U))))) >= (_INT32)(0U))
          {
            __comma_preg_w2c_239 = (PelY_14b)(ref1_pic, (_INT16)((_UINT16)((_UINT32)(sy0) + 8U)), (_INT32)(sx0) + (_INT32)(4U), img_height, img_width);
            __comma_preg_w2c_244 = (PelY_14)(ref2_pic, (_INT16)((_UINT16)((_UINT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_y) + _U4SHL((_UINT32)(pic_pix_y) + (_UINT32)((_INT32)((_UINT64) y0)), 2U)))) + 8U)), (_INT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_x) + _U4SHL((_UINT32)(pic_pix_x) + (_UINT32)((_INT32)((_UINT64) x0)), 2U)))) + (_INT32)(4U), img_height, img_width);
            if(*(((_INT32 *)(img) + 16384LL) + 1787LL) < (_I4ASHR((((_INT32)((_INT16)(__cselect_preg_w2c_42)) * (_INT32)((_UINT16)(__comma_preg_w2c_239))) + ((_INT32)((_INT16)(__cselect_preg_w2c_44)) * (_INT32)((_UINT16)(__comma_preg_w2c_244)))) + (wp_luma_round * (_INT32)(2U)), luma_log_weight_denom + (_INT32)(1U)) + (_INT32)((_INT16)(_I4ASHR(((_INT32)((_INT16)(__cselect_preg_w2c_46)) + (_INT32)((_INT16)(__cselect_preg_w2c_50))) + (_INT32)(1U), (_INT32)(1U))))))
            {
              __cselect_preg_w2c_70 = *(((_INT32 *)(img) + 16384LL) + 1787LL);
            }
            else
            {
              __comma_preg_w2c_249 = (PelY_14b)(ref1_pic, (_INT16)((_UINT16)((_UINT32)(sy0) + 8U)), (_INT32)(sx0) + (_INT32)(4U), img_height, img_width);
              __comma_preg_w2c_254 = (PelY_14)(ref2_pic, (_INT16)((_UINT16)((_UINT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_y) + _U4SHL((_UINT32)(pic_pix_y) + (_UINT32)((_INT32)((_UINT64) y0)), 2U)))) + 8U)), (_INT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_x) + _U4SHL((_UINT32)(pic_pix_x) + (_UINT32)((_INT32)((_UINT64) x0)), 2U)))) + (_INT32)(4U), img_height, img_width);
              __cselect_preg_w2c_70 = _I4ASHR((((_INT32)((_INT16)(__cselect_preg_w2c_42)) * (_INT32)((_UINT16)(__comma_preg_w2c_249))) + ((_INT32)((_INT16)(__cselect_preg_w2c_44)) * (_INT32)((_UINT16)(__comma_preg_w2c_254)))) + (wp_luma_round * (_INT32)(2U)), luma_log_weight_denom + (_INT32)(1U)) + (_INT32)((_INT16)(_I4ASHR(((_INT32)((_INT16)(__cselect_preg_w2c_46)) + (_INT32)((_INT16)(__cselect_preg_w2c_50))) + (_INT32)(1U), (_INT32)(1U))));
            }
            __cselect_preg_w2c_73 = __cselect_preg_w2c_70;
          }
          else
          {
            __cselect_preg_w2c_73 = 0U;
          }
          * (diff + 9LL) = (_INT32) * ((orig_line + (_UINT64) x0) + 1LL) - __cselect_preg_w2c_73;
          __comma_preg_w2c_0 = (PelY_14b)(ref1_pic, (_INT16)((_UINT16)((_UINT32)(sy0) + 8U)), (_INT32)(sx0) + (_INT32)(8U), img_height, img_width);
          __comma_preg_w2c_4 = (PelY_14)(ref2_pic, (_INT16)((_UINT16)((_UINT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_y) + _U4SHL((_UINT32)(pic_pix_y) + (_UINT32)((_INT32)((_UINT64) y0)), 2U)))) + 8U)), (_INT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_x) + _U4SHL((_UINT32)(pic_pix_x) + (_UINT32)((_INT32)((_UINT64) x0)), 2U)))) + (_INT32)(8U), img_height, img_width);
          if((_I4ASHR((((_INT32)((_INT16)(__cselect_preg_w2c_42)) * (_INT32)((_UINT16)(__comma_preg_w2c_0))) + ((_INT32)((_INT16)(__cselect_preg_w2c_44)) * (_INT32)((_UINT16)(__comma_preg_w2c_4)))) + (wp_luma_round * (_INT32)(2U)), luma_log_weight_denom + (_INT32)(1U)) + (_INT32)((_INT16)(_I4ASHR(((_INT32)((_INT16)(__cselect_preg_w2c_46)) + (_INT32)((_INT16)(__cselect_preg_w2c_50))) + (_INT32)(1U), (_INT32)(1U))))) >= (_INT32)(0U))
          {
            __comma_preg_w2c_9 = (PelY_14b)(ref1_pic, (_INT16)((_UINT16)((_UINT32)(sy0) + 8U)), (_INT32)(sx0) + (_INT32)(8U), img_height, img_width);
            __comma_preg_w2c_14 = (PelY_14)(ref2_pic, (_INT16)((_UINT16)((_UINT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_y) + _U4SHL((_UINT32)(pic_pix_y) + (_UINT32)((_INT32)((_UINT64) y0)), 2U)))) + 8U)), (_INT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_x) + _U4SHL((_UINT32)(pic_pix_x) + (_UINT32)((_INT32)((_UINT64) x0)), 2U)))) + (_INT32)(8U), img_height, img_width);
            if(*(((_INT32 *)(img) + 16384LL) + 1787LL) < (_I4ASHR((((_INT32)((_INT16)(__cselect_preg_w2c_42)) * (_INT32)((_UINT16)(__comma_preg_w2c_9))) + ((_INT32)((_INT16)(__cselect_preg_w2c_44)) * (_INT32)((_UINT16)(__comma_preg_w2c_14)))) + (wp_luma_round * (_INT32)(2U)), luma_log_weight_denom + (_INT32)(1U)) + (_INT32)((_INT16)(_I4ASHR(((_INT32)((_INT16)(__cselect_preg_w2c_46)) + (_INT32)((_INT16)(__cselect_preg_w2c_50))) + (_INT32)(1U), (_INT32)(1U))))))
            {
              __cselect_preg_w2c_1 = *(((_INT32 *)(img) + 16384LL) + 1787LL);
            }
            else
            {
              __comma_preg_w2c_19 = (PelY_14b)(ref1_pic, (_INT16)((_UINT16)((_UINT32)(sy0) + 8U)), (_INT32)(sx0) + (_INT32)(8U), img_height, img_width);
              __comma_preg_w2c_24 = (PelY_14)(ref2_pic, (_INT16)((_UINT16)((_UINT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_y) + _U4SHL((_UINT32)(pic_pix_y) + (_UINT32)((_INT32)((_UINT64) y0)), 2U)))) + 8U)), (_INT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_x) + _U4SHL((_UINT32)(pic_pix_x) + (_UINT32)((_INT32)((_UINT64) x0)), 2U)))) + (_INT32)(8U), img_height, img_width);
              __cselect_preg_w2c_1 = _I4ASHR((((_INT32)((_INT16)(__cselect_preg_w2c_42)) * (_INT32)((_UINT16)(__comma_preg_w2c_19))) + ((_INT32)((_INT16)(__cselect_preg_w2c_44)) * (_INT32)((_UINT16)(__comma_preg_w2c_24)))) + (wp_luma_round * (_INT32)(2U)), luma_log_weight_denom + (_INT32)(1U)) + (_INT32)((_INT16)(_I4ASHR(((_INT32)((_INT16)(__cselect_preg_w2c_46)) + (_INT32)((_INT16)(__cselect_preg_w2c_50))) + (_INT32)(1U), (_INT32)(1U))));
            }
            __cselect_preg_w2c_4 = __cselect_preg_w2c_1;
          }
          else
          {
            __cselect_preg_w2c_4 = 0U;
          }
          * (diff + 10LL) = (_INT32) * ((orig_line + (_UINT64) x0) + 2LL) - __cselect_preg_w2c_4;
          __comma_preg_w2c_32 = (PelY_14b)(ref1_pic, (_INT16)((_UINT16)((_UINT32)(sy0) + 8U)), (_INT32)(sx0) + (_INT32)(12U), img_height, img_width);
          __comma_preg_w2c_36 = (PelY_14)(ref2_pic, (_INT16)((_UINT16)((_UINT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_y) + _U4SHL((_UINT32)(pic_pix_y) + (_UINT32)((_INT32)((_UINT64) y0)), 2U)))) + 8U)), (_INT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_x) + _U4SHL((_UINT32)(pic_pix_x) + (_UINT32)((_INT32)((_UINT64) x0)), 2U)))) + (_INT32)(12U), img_height, img_width);
          if((_I4ASHR((((_INT32)((_INT16)(__cselect_preg_w2c_42)) * (_INT32)((_UINT16)(__comma_preg_w2c_32))) + ((_INT32)((_INT16)(__cselect_preg_w2c_44)) * (_INT32)((_UINT16)(__comma_preg_w2c_36)))) + (wp_luma_round * (_INT32)(2U)), luma_log_weight_denom + (_INT32)(1U)) + (_INT32)((_INT16)(_I4ASHR(((_INT32)((_INT16)(__cselect_preg_w2c_46)) + (_INT32)((_INT16)(__cselect_preg_w2c_50))) + (_INT32)(1U), (_INT32)(1U))))) >= (_INT32)(0U))
          {
            __comma_preg_w2c_40 = (PelY_14b)(ref1_pic, (_INT16)((_UINT16)((_UINT32)(sy0) + 8U)), (_INT32)(sx0) + (_INT32)(12U), img_height, img_width);
            __comma_preg_w2c_44 = (PelY_14)(ref2_pic, (_INT16)((_UINT16)((_UINT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_y) + _U4SHL((_UINT32)(pic_pix_y) + (_UINT32)((_INT32)((_UINT64) y0)), 2U)))) + 8U)), (_INT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_x) + _U4SHL((_UINT32)(pic_pix_x) + (_UINT32)((_INT32)((_UINT64) x0)), 2U)))) + (_INT32)(12U), img_height, img_width);
            if(*(((_INT32 *)(img) + 16384LL) + 1787LL) < (_I4ASHR((((_INT32)((_INT16)(__cselect_preg_w2c_42)) * (_INT32)((_UINT16)(__comma_preg_w2c_40))) + ((_INT32)((_INT16)(__cselect_preg_w2c_44)) * (_INT32)((_UINT16)(__comma_preg_w2c_44)))) + (wp_luma_round * (_INT32)(2U)), luma_log_weight_denom + (_INT32)(1U)) + (_INT32)((_INT16)(_I4ASHR(((_INT32)((_INT16)(__cselect_preg_w2c_46)) + (_INT32)((_INT16)(__cselect_preg_w2c_50))) + (_INT32)(1U), (_INT32)(1U))))))
            {
              __cselect_preg_w2c_9 = *(((_INT32 *)(img) + 16384LL) + 1787LL);
            }
            else
            {
              __comma_preg_w2c_48 = (PelY_14b)(ref1_pic, (_INT16)((_UINT16)((_UINT32)(sy0) + 8U)), (_INT32)(sx0) + (_INT32)(12U), img_height, img_width);
              __comma_preg_w2c_52 = (PelY_14)(ref2_pic, (_INT16)((_UINT16)((_UINT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_y) + _U4SHL((_UINT32)(pic_pix_y) + (_UINT32)((_INT32)((_UINT64) y0)), 2U)))) + 8U)), (_INT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_x) + _U4SHL((_UINT32)(pic_pix_x) + (_UINT32)((_INT32)((_UINT64) x0)), 2U)))) + (_INT32)(12U), img_height, img_width);
              __cselect_preg_w2c_9 = _I4ASHR((((_INT32)((_INT16)(__cselect_preg_w2c_42)) * (_INT32)((_UINT16)(__comma_preg_w2c_48))) + ((_INT32)((_INT16)(__cselect_preg_w2c_44)) * (_INT32)((_UINT16)(__comma_preg_w2c_52)))) + (wp_luma_round * (_INT32)(2U)), luma_log_weight_denom + (_INT32)(1U)) + (_INT32)((_INT16)(_I4ASHR(((_INT32)((_INT16)(__cselect_preg_w2c_46)) + (_INT32)((_INT16)(__cselect_preg_w2c_50))) + (_INT32)(1U), (_INT32)(1U))));
            }
            __cselect_preg_w2c_12 = __cselect_preg_w2c_9;
          }
          else
          {
            __cselect_preg_w2c_12 = 0U;
          }
          * (diff + 11LL) = (_INT32) * ((orig_line + (_UINT64) x0) + 3LL) - __cselect_preg_w2c_12;
          orig_line = *((orig_pic + (_UINT64) y0) + 3LL);
          __comma_preg_w2c_57 = (PelY_14b)(ref1_pic, (_INT16)((_UINT16)((_UINT32)(sy0) + 12U)), sx0, img_height, img_width);
          __comma_preg_w2c_60 = (PelY_14)(ref2_pic, (_INT16)((_UINT16)((_UINT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_y) + _U4SHL((_UINT32)(pic_pix_y) + (_UINT32)((_INT32)((_UINT64) y0)), 2U)))) + 12U)), (_INT16)((_UINT16)((_UINT32)(cand_mv_x) + _U4SHL((_UINT32)(pic_pix_x) + (_UINT32)((_INT32)((_UINT64) x0)), 2U))), img_height, img_width);
          if((_I4ASHR((((_INT32)((_INT16)(__cselect_preg_w2c_42)) * (_INT32)((_UINT16)(__comma_preg_w2c_57))) + ((_INT32)((_INT16)(__cselect_preg_w2c_44)) * (_INT32)((_UINT16)(__comma_preg_w2c_60)))) + (wp_luma_round * (_INT32)(2U)), luma_log_weight_denom + (_INT32)(1U)) + (_INT32)((_INT16)(_I4ASHR(((_INT32)((_INT16)(__cselect_preg_w2c_46)) + (_INT32)((_INT16)(__cselect_preg_w2c_50))) + (_INT32)(1U), (_INT32)(1U))))) >= (_INT32)(0U))
          {
            __comma_preg_w2c_64 = (PelY_14b)(ref1_pic, (_INT16)((_UINT16)((_UINT32)(sy0) + 12U)), sx0, img_height, img_width);
            __comma_preg_w2c_68 = (PelY_14)(ref2_pic, (_INT16)((_UINT16)((_UINT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_y) + _U4SHL((_UINT32)(pic_pix_y) + (_UINT32)((_INT32)((_UINT64) y0)), 2U)))) + 12U)), (_INT16)((_UINT16)((_UINT32)(cand_mv_x) + _U4SHL((_UINT32)(pic_pix_x) + (_UINT32)((_INT32)((_UINT64) x0)), 2U))), img_height, img_width);
            if(*(((_INT32 *)(img) + 16384LL) + 1787LL) < (_I4ASHR((((_INT32)((_INT16)(__cselect_preg_w2c_42)) * (_INT32)((_UINT16)(__comma_preg_w2c_64))) + ((_INT32)((_INT16)(__cselect_preg_w2c_44)) * (_INT32)((_UINT16)(__comma_preg_w2c_68)))) + (wp_luma_round * (_INT32)(2U)), luma_log_weight_denom + (_INT32)(1U)) + (_INT32)((_INT16)(_I4ASHR(((_INT32)((_INT16)(__cselect_preg_w2c_46)) + (_INT32)((_INT16)(__cselect_preg_w2c_50))) + (_INT32)(1U), (_INT32)(1U))))))
            {
              __cselect_preg_w2c_17 = *(((_INT32 *)(img) + 16384LL) + 1787LL);
            }
            else
            {
              __comma_preg_w2c_72 = (PelY_14b)(ref1_pic, (_INT16)((_UINT16)((_UINT32)(sy0) + 12U)), sx0, img_height, img_width);
              __comma_preg_w2c_76 = (PelY_14)(ref2_pic, (_INT16)((_UINT16)((_UINT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_y) + _U4SHL((_UINT32)(pic_pix_y) + (_UINT32)((_INT32)((_UINT64) y0)), 2U)))) + 12U)), (_INT16)((_UINT16)((_UINT32)(cand_mv_x) + _U4SHL((_UINT32)(pic_pix_x) + (_UINT32)((_INT32)((_UINT64) x0)), 2U))), img_height, img_width);
              __cselect_preg_w2c_17 = _I4ASHR((((_INT32)((_INT16)(__cselect_preg_w2c_42)) * (_INT32)((_UINT16)(__comma_preg_w2c_72))) + ((_INT32)((_INT16)(__cselect_preg_w2c_44)) * (_INT32)((_UINT16)(__comma_preg_w2c_76)))) + (wp_luma_round * (_INT32)(2U)), luma_log_weight_denom + (_INT32)(1U)) + (_INT32)((_INT16)(_I4ASHR(((_INT32)((_INT16)(__cselect_preg_w2c_46)) + (_INT32)((_INT16)(__cselect_preg_w2c_50))) + (_INT32)(1U), (_INT32)(1U))));
            }
            __cselect_preg_w2c_20 = __cselect_preg_w2c_17;
          }
          else
          {
            __cselect_preg_w2c_20 = 0U;
          }
          * (diff + 12LL) = (_INT32) * (orig_line + (_UINT64) x0) - __cselect_preg_w2c_20;
          __comma_preg_w2c_81 = (PelY_14b)(ref1_pic, (_INT16)((_UINT16)((_UINT32)(sy0) + 12U)), (_INT32)(sx0) + (_INT32)(4U), img_height, img_width);
          __comma_preg_w2c_84 = (PelY_14)(ref2_pic, (_INT16)((_UINT16)((_UINT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_y) + _U4SHL((_UINT32)(pic_pix_y) + (_UINT32)((_INT32)((_UINT64) y0)), 2U)))) + 12U)), (_INT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_x) + _U4SHL((_UINT32)(pic_pix_x) + (_UINT32)((_INT32)((_UINT64) x0)), 2U)))) + (_INT32)(4U), img_height, img_width);
          if((_I4ASHR((((_INT32)((_INT16)(__cselect_preg_w2c_42)) * (_INT32)((_UINT16)(__comma_preg_w2c_81))) + ((_INT32)((_INT16)(__cselect_preg_w2c_44)) * (_INT32)((_UINT16)(__comma_preg_w2c_84)))) + (wp_luma_round * (_INT32)(2U)), luma_log_weight_denom + (_INT32)(1U)) + (_INT32)((_INT16)(_I4ASHR(((_INT32)((_INT16)(__cselect_preg_w2c_46)) + (_INT32)((_INT16)(__cselect_preg_w2c_50))) + (_INT32)(1U), (_INT32)(1U))))) >= (_INT32)(0U))
          {
            __comma_preg_w2c_88 = (PelY_14b)(ref1_pic, (_INT16)((_UINT16)((_UINT32)(sy0) + 12U)), (_INT32)(sx0) + (_INT32)(4U), img_height, img_width);
            __comma_preg_w2c_92 = (PelY_14)(ref2_pic, (_INT16)((_UINT16)((_UINT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_y) + _U4SHL((_UINT32)(pic_pix_y) + (_UINT32)((_INT32)((_UINT64) y0)), 2U)))) + 12U)), (_INT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_x) + _U4SHL((_UINT32)(pic_pix_x) + (_UINT32)((_INT32)((_UINT64) x0)), 2U)))) + (_INT32)(4U), img_height, img_width);
            if(*(((_INT32 *)(img) + 16384LL) + 1787LL) < (_I4ASHR((((_INT32)((_INT16)(__cselect_preg_w2c_42)) * (_INT32)((_UINT16)(__comma_preg_w2c_88))) + ((_INT32)((_INT16)(__cselect_preg_w2c_44)) * (_INT32)((_UINT16)(__comma_preg_w2c_92)))) + (wp_luma_round * (_INT32)(2U)), luma_log_weight_denom + (_INT32)(1U)) + (_INT32)((_INT16)(_I4ASHR(((_INT32)((_INT16)(__cselect_preg_w2c_46)) + (_INT32)((_INT16)(__cselect_preg_w2c_50))) + (_INT32)(1U), (_INT32)(1U))))))
            {
              __cselect_preg_w2c_25 = *(((_INT32 *)(img) + 16384LL) + 1787LL);
            }
            else
            {
              __comma_preg_w2c_96 = (PelY_14b)(ref1_pic, (_INT16)((_UINT16)((_UINT32)(sy0) + 12U)), (_INT32)(sx0) + (_INT32)(4U), img_height, img_width);
              __comma_preg_w2c_100 = (PelY_14)(ref2_pic, (_INT16)((_UINT16)((_UINT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_y) + _U4SHL((_UINT32)(pic_pix_y) + (_UINT32)((_INT32)((_UINT64) y0)), 2U)))) + 12U)), (_INT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_x) + _U4SHL((_UINT32)(pic_pix_x) + (_UINT32)((_INT32)((_UINT64) x0)), 2U)))) + (_INT32)(4U), img_height, img_width);
              __cselect_preg_w2c_25 = _I4ASHR((((_INT32)((_INT16)(__cselect_preg_w2c_42)) * (_INT32)((_UINT16)(__comma_preg_w2c_96))) + ((_INT32)((_INT16)(__cselect_preg_w2c_44)) * (_INT32)((_UINT16)(__comma_preg_w2c_100)))) + (wp_luma_round * (_INT32)(2U)), luma_log_weight_denom + (_INT32)(1U)) + (_INT32)((_INT16)(_I4ASHR(((_INT32)((_INT16)(__cselect_preg_w2c_46)) + (_INT32)((_INT16)(__cselect_preg_w2c_50))) + (_INT32)(1U), (_INT32)(1U))));
            }
            __cselect_preg_w2c_28 = __cselect_preg_w2c_25;
          }
          else
          {
            __cselect_preg_w2c_28 = 0U;
          }
          * (diff + 13LL) = (_INT32) * ((orig_line + (_UINT64) x0) + 1LL) - __cselect_preg_w2c_28;
          __comma_preg_w2c_105 = (PelY_14b)(ref1_pic, (_INT16)((_UINT16)((_UINT32)(sy0) + 12U)), (_INT32)(sx0) + (_INT32)(8U), img_height, img_width);
          __comma_preg_w2c_108 = (PelY_14)(ref2_pic, (_INT16)((_UINT16)((_UINT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_y) + _U4SHL((_UINT32)(pic_pix_y) + (_UINT32)((_INT32)((_UINT64) y0)), 2U)))) + 12U)), (_INT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_x) + _U4SHL((_UINT32)(pic_pix_x) + (_UINT32)((_INT32)((_UINT64) x0)), 2U)))) + (_INT32)(8U), img_height, img_width);
          if((_I4ASHR((((_INT32)((_INT16)(__cselect_preg_w2c_42)) * (_INT32)((_UINT16)(__comma_preg_w2c_105))) + ((_INT32)((_INT16)(__cselect_preg_w2c_44)) * (_INT32)((_UINT16)(__comma_preg_w2c_108)))) + (wp_luma_round * (_INT32)(2U)), luma_log_weight_denom + (_INT32)(1U)) + (_INT32)((_INT16)(_I4ASHR(((_INT32)((_INT16)(__cselect_preg_w2c_46)) + (_INT32)((_INT16)(__cselect_preg_w2c_50))) + (_INT32)(1U), (_INT32)(1U))))) >= (_INT32)(0U))
          {
            __comma_preg_w2c_112 = (PelY_14b)(ref1_pic, (_INT16)((_UINT16)((_UINT32)(sy0) + 12U)), (_INT32)(sx0) + (_INT32)(8U), img_height, img_width);
            __comma_preg_w2c_116 = (PelY_14)(ref2_pic, (_INT16)((_UINT16)((_UINT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_y) + _U4SHL((_UINT32)(pic_pix_y) + (_UINT32)((_INT32)((_UINT64) y0)), 2U)))) + 12U)), (_INT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_x) + _U4SHL((_UINT32)(pic_pix_x) + (_UINT32)((_INT32)((_UINT64) x0)), 2U)))) + (_INT32)(8U), img_height, img_width);
            if(*(((_INT32 *)(img) + 16384LL) + 1787LL) < (_I4ASHR((((_INT32)((_INT16)(__cselect_preg_w2c_42)) * (_INT32)((_UINT16)(__comma_preg_w2c_112))) + ((_INT32)((_INT16)(__cselect_preg_w2c_44)) * (_INT32)((_UINT16)(__comma_preg_w2c_116)))) + (wp_luma_round * (_INT32)(2U)), luma_log_weight_denom + (_INT32)(1U)) + (_INT32)((_INT16)(_I4ASHR(((_INT32)((_INT16)(__cselect_preg_w2c_46)) + (_INT32)((_INT16)(__cselect_preg_w2c_50))) + (_INT32)(1U), (_INT32)(1U))))))
            {
              __cselect_preg_w2c_34 = *(((_INT32 *)(img) + 16384LL) + 1787LL);
            }
            else
            {
              __comma_preg_w2c_120 = (PelY_14b)(ref1_pic, (_INT16)((_UINT16)((_UINT32)(sy0) + 12U)), (_INT32)(sx0) + (_INT32)(8U), img_height, img_width);
              __comma_preg_w2c_124 = (PelY_14)(ref2_pic, (_INT16)((_UINT16)((_UINT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_y) + _U4SHL((_UINT32)(pic_pix_y) + (_UINT32)((_INT32)((_UINT64) y0)), 2U)))) + 12U)), (_INT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_x) + _U4SHL((_UINT32)(pic_pix_x) + (_UINT32)((_INT32)((_UINT64) x0)), 2U)))) + (_INT32)(8U), img_height, img_width);
              __cselect_preg_w2c_34 = _I4ASHR((((_INT32)((_INT16)(__cselect_preg_w2c_42)) * (_INT32)((_UINT16)(__comma_preg_w2c_120))) + ((_INT32)((_INT16)(__cselect_preg_w2c_44)) * (_INT32)((_UINT16)(__comma_preg_w2c_124)))) + (wp_luma_round * (_INT32)(2U)), luma_log_weight_denom + (_INT32)(1U)) + (_INT32)((_INT16)(_I4ASHR(((_INT32)((_INT16)(__cselect_preg_w2c_46)) + (_INT32)((_INT16)(__cselect_preg_w2c_50))) + (_INT32)(1U), (_INT32)(1U))));
            }
            __cselect_preg_w2c_37 = __cselect_preg_w2c_34;
          }
          else
          {
            __cselect_preg_w2c_37 = 0U;
          }
          * (diff + 14LL) = (_INT32) * ((orig_line + (_UINT64) x0) + 2LL) - __cselect_preg_w2c_37;
          __comma_preg_w2c_131 = (PelY_14b)(ref1_pic, (_INT16)((_UINT16)((_UINT32)(sy0) + 12U)), (_INT32)(sx0) + (_INT32)(12U), img_height, img_width);
          __comma_preg_w2c_134 = (PelY_14)(ref2_pic, (_INT16)((_UINT16)((_UINT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_y) + _U4SHL((_UINT32)(pic_pix_y) + (_UINT32)((_INT32)((_UINT64) y0)), 2U)))) + 12U)), (_INT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_x) + _U4SHL((_UINT32)(pic_pix_x) + (_UINT32)((_INT32)((_UINT64) x0)), 2U)))) + (_INT32)(12U), img_height, img_width);
          if((_I4ASHR((((_INT32)((_INT16)(__cselect_preg_w2c_42)) * (_INT32)((_UINT16)(__comma_preg_w2c_131))) + ((_INT32)((_INT16)(__cselect_preg_w2c_44)) * (_INT32)((_UINT16)(__comma_preg_w2c_134)))) + (wp_luma_round * (_INT32)(2U)), luma_log_weight_denom + (_INT32)(1U)) + (_INT32)((_INT16)(_I4ASHR(((_INT32)((_INT16)(__cselect_preg_w2c_46)) + (_INT32)((_INT16)(__cselect_preg_w2c_50))) + (_INT32)(1U), (_INT32)(1U))))) >= (_INT32)(0U))
          {
            __comma_preg_w2c_138 = (PelY_14b)(ref1_pic, (_INT16)((_UINT16)((_UINT32)(sy0) + 12U)), (_INT32)(sx0) + (_INT32)(12U), img_height, img_width);
            __comma_preg_w2c_142 = (PelY_14)(ref2_pic, (_INT16)((_UINT16)((_UINT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_y) + _U4SHL((_UINT32)(pic_pix_y) + (_UINT32)((_INT32)((_UINT64) y0)), 2U)))) + 12U)), (_INT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_x) + _U4SHL((_UINT32)(pic_pix_x) + (_UINT32)((_INT32)((_UINT64) x0)), 2U)))) + (_INT32)(12U), img_height, img_width);
            if(*(((_INT32 *)(img) + 16384LL) + 1787LL) < (_I4ASHR((((_INT32)((_INT16)(__cselect_preg_w2c_42)) * (_INT32)((_UINT16)(__comma_preg_w2c_138))) + ((_INT32)((_INT16)(__cselect_preg_w2c_44)) * (_INT32)((_UINT16)(__comma_preg_w2c_142)))) + (wp_luma_round * (_INT32)(2U)), luma_log_weight_denom + (_INT32)(1U)) + (_INT32)((_INT16)(_I4ASHR(((_INT32)((_INT16)(__cselect_preg_w2c_46)) + (_INT32)((_INT16)(__cselect_preg_w2c_50))) + (_INT32)(1U), (_INT32)(1U))))))
            {
              __cselect_preg_w2c_48 = *(((_INT32 *)(img) + 16384LL) + 1787LL);
            }
            else
            {
              __comma_preg_w2c_146 = (PelY_14b)(ref1_pic, (_INT16)((_UINT16)((_UINT32)(sy0) + 12U)), (_INT32)(sx0) + (_INT32)(12U), img_height, img_width);
              __comma_preg_w2c_150 = (PelY_14)(ref2_pic, (_INT16)((_UINT16)((_UINT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_y) + _U4SHL((_UINT32)(pic_pix_y) + (_UINT32)((_INT32)((_UINT64) y0)), 2U)))) + 12U)), (_INT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_x) + _U4SHL((_UINT32)(pic_pix_x) + (_UINT32)((_INT32)((_UINT64) x0)), 2U)))) + (_INT32)(12U), img_height, img_width);
              __cselect_preg_w2c_48 = _I4ASHR((((_INT32)((_INT16)(__cselect_preg_w2c_42)) * (_INT32)((_UINT16)(__comma_preg_w2c_146))) + ((_INT32)((_INT16)(__cselect_preg_w2c_44)) * (_INT32)((_UINT16)(__comma_preg_w2c_150)))) + (wp_luma_round * (_INT32)(2U)), luma_log_weight_denom + (_INT32)(1U)) + (_INT32)((_INT16)(_I4ASHR(((_INT32)((_INT16)(__cselect_preg_w2c_46)) + (_INT32)((_INT16)(__cselect_preg_w2c_50))) + (_INT32)(1U), (_INT32)(1U))));
            }
            __cselect_preg_w2c_51 = __cselect_preg_w2c_48;
          }
          else
          {
            __cselect_preg_w2c_51 = 0U;
          }
          * (diff + 15LL) = (_INT32) * ((orig_line + (_UINT64) x0) + 3LL) - __cselect_preg_w2c_51;
          if((input) -> AllowTransform8x8 == (_INT32)(0U))
          {
            __comma_preg_w2c_157 = SATD(diff, (input) -> hadamard);
            mcost = (_UINT16)((_UINT32)((_UINT16) mcost) + (_UINT32)(__comma_preg_w2c_157));
            if((_INT32)(mcost) > min_mcost)
            {
              abort_search = 1U;
              goto _7938;
            }
          }
          else
          {
            for(j_preg_w2c_1 = 0U; j_preg_w2c_1 <= (_INT32)(3U); j_preg_w2c_1 = j_preg_w2c_1 + (_INT32)(1U))
            {
              (curr_diff)[j_preg_w2c_1 + (_INT32)((_UINT64) y0)][(_INT32)((_UINT64) x0)] = (diff)[(_INT64)(j_preg_w2c_1 * (_INT32)(4U))];
              (curr_diff)[j_preg_w2c_1 + (_INT32)((_UINT64) y0)][(_INT32)((_UINT64) x0) + 1] = (diff)[(_INT64)((j_preg_w2c_1 * (_INT32)(4U)) + 1)];
              (curr_diff)[j_preg_w2c_1 + (_INT32)((_UINT64) y0)][(_INT32)((_UINT64) x0) + 2] = (diff)[(_INT64)((j_preg_w2c_1 * (_INT32)(4U)) + 2)];
              (curr_diff)[j_preg_w2c_1 + (_INT32)((_UINT64) y0)][(_INT32)((_UINT64) x0) + 3] = (diff)[(_INT64)((j_preg_w2c_1 * (_INT32)(4U)) + 3)];
            }
          }
          x0 = (_UINT16)((_UINT32)((_INT32)((_UINT64) x0)) + 4U);
        }
        _7938 :;
      }
      else
      {
        x0 = 0U;
        while((_INT32)((_UINT16) x0) < (_INT32)(blocksize_x))
        {
          sx0 = (_UINT16)((_UINT32)((_UINT16) * s_mv_x) + _U4SHL((_UINT32)((_UINT16) x0) + (_UINT32)(pic_pix_x), 2U));
          orig_line = *(orig_pic + (_UINT64) y0);
          __comma_preg_w2c_160 = (PelY_14b)(ref1_pic, sy0, sx0, img_height, img_width);
          __comma_preg_w2c_165 = (PelY_14)(ref2_pic, (_INT16)((_UINT16)((_UINT32)(cand_mv_y) + _U4SHL((_UINT32)(pic_pix_y) + (_UINT32)((_INT32)((_UINT64) y0)), 2U))), (_INT16)((_UINT16)((_UINT32)(cand_mv_x) + _U4SHL((_UINT32)((_UINT16) x0) + (_UINT32)(pic_pix_x), 2U))), img_height, img_width);
          * diff = (_INT32) * (orig_line + (_UINT16) x0) - _I4ASHR((_INT32)((_UINT16)(__comma_preg_w2c_160)) + (_INT32)((_UINT16)(__comma_preg_w2c_165)), (_INT32)(1U));
          __comma_preg_w2c_170 = (PelY_14b)(ref1_pic, sy0, (_INT32)(sx0) + (_INT32)(4U), img_height, img_width);
          __comma_preg_w2c_175 = (PelY_14)(ref2_pic, (_INT16)((_UINT16)((_UINT32)(cand_mv_y) + _U4SHL((_UINT32)(pic_pix_y) + (_UINT32)((_INT32)((_UINT64) y0)), 2U))), (_INT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_x) + _U4SHL((_UINT32)((_UINT16) x0) + (_UINT32)(pic_pix_x), 2U)))) + (_INT32)(4U), img_height, img_width);
          * (diff + 1LL) = (_INT32) * ((orig_line + (_UINT16) x0) + 1LL) - _I4ASHR((_INT32)((_UINT16)(__comma_preg_w2c_170)) + (_INT32)((_UINT16)(__comma_preg_w2c_175)), (_INT32)(1U));
          __comma_preg_w2c_180 = (PelY_14b)(ref1_pic, sy0, (_INT32)(sx0) + (_INT32)(8U), img_height, img_width);
          __comma_preg_w2c_185 = (PelY_14)(ref2_pic, (_INT16)((_UINT16)((_UINT32)(cand_mv_y) + _U4SHL((_UINT32)(pic_pix_y) + (_UINT32)((_INT32)((_UINT64) y0)), 2U))), (_INT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_x) + _U4SHL((_UINT32)((_UINT16) x0) + (_UINT32)(pic_pix_x), 2U)))) + (_INT32)(8U), img_height, img_width);
          * (diff + 2LL) = (_INT32) * ((orig_line + (_UINT16) x0) + 2LL) - _I4ASHR((_INT32)((_UINT16)(__comma_preg_w2c_180)) + (_INT32)((_UINT16)(__comma_preg_w2c_185)), (_INT32)(1U));
          __comma_preg_w2c_189 = (PelY_14b)(ref1_pic, sy0, (_INT32)(sx0) + (_INT32)(12U), img_height, img_width);
          __comma_preg_w2c_191 = (PelY_14)(ref2_pic, (_INT16)((_UINT16)((_UINT32)(cand_mv_y) + _U4SHL((_UINT32)(pic_pix_y) + (_UINT32)((_INT32)((_UINT64) y0)), 2U))), (_INT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_x) + _U4SHL((_UINT32)((_UINT16) x0) + (_UINT32)(pic_pix_x), 2U)))) + (_INT32)(12U), img_height, img_width);
          * (diff + 3LL) = (_INT32) * ((orig_line + (_UINT16) x0) + 3LL) - _I4ASHR((_INT32)((_UINT16)(__comma_preg_w2c_189)) + (_INT32)((_UINT16)(__comma_preg_w2c_191)), (_INT32)(1U));
          orig_line = *((orig_pic + (_UINT64) y0) + 1LL);
          __comma_preg_w2c_194 = (PelY_14b)(ref1_pic, (_INT16)((_UINT16)((_UINT32)(sy0) + 4U)), sx0, img_height, img_width);
          __comma_preg_w2c_199 = (PelY_14)(ref2_pic, (_INT16)((_UINT16)((_UINT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_y) + _U4SHL((_UINT32)(pic_pix_y) + (_UINT32)((_INT32)((_UINT64) y0)), 2U)))) + 4U)), (_INT16)((_UINT16)((_UINT32)(cand_mv_x) + _U4SHL((_UINT32)((_UINT16) x0) + (_UINT32)(pic_pix_x), 2U))), img_height, img_width);
          * (diff + 4LL) = (_INT32) * (orig_line + (_UINT16) x0) - _I4ASHR((_INT32)((_UINT16)(__comma_preg_w2c_194)) + (_INT32)((_UINT16)(__comma_preg_w2c_199)), (_INT32)(1U));
          __comma_preg_w2c_204 = (PelY_14b)(ref1_pic, (_INT16)((_UINT16)((_UINT32)(sy0) + 4U)), (_INT32)(sx0) + (_INT32)(4U), img_height, img_width);
          __comma_preg_w2c_209 = (PelY_14)(ref2_pic, (_INT16)((_UINT16)((_UINT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_y) + _U4SHL((_UINT32)(pic_pix_y) + (_UINT32)((_INT32)((_UINT64) y0)), 2U)))) + 4U)), (_INT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_x) + _U4SHL((_UINT32)((_UINT16) x0) + (_UINT32)(pic_pix_x), 2U)))) + (_INT32)(4U), img_height, img_width);
          * (diff + 5LL) = (_INT32) * ((orig_line + (_UINT16) x0) + 1LL) - _I4ASHR((_INT32)((_UINT16)(__comma_preg_w2c_204)) + (_INT32)((_UINT16)(__comma_preg_w2c_209)), (_INT32)(1U));
          __comma_preg_w2c_214 = (PelY_14b)(ref1_pic, (_INT16)((_UINT16)((_UINT32)(sy0) + 4U)), (_INT32)(sx0) + (_INT32)(8U), img_height, img_width);
          __comma_preg_w2c_219 = (PelY_14)(ref2_pic, (_INT16)((_UINT16)((_UINT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_y) + _U4SHL((_UINT32)(pic_pix_y) + (_UINT32)((_INT32)((_UINT64) y0)), 2U)))) + 4U)), (_INT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_x) + _U4SHL((_UINT32)((_UINT16) x0) + (_UINT32)(pic_pix_x), 2U)))) + (_INT32)(8U), img_height, img_width);
          * (diff + 6LL) = (_INT32) * ((orig_line + (_UINT16) x0) + 2LL) - _I4ASHR((_INT32)((_UINT16)(__comma_preg_w2c_214)) + (_INT32)((_UINT16)(__comma_preg_w2c_219)), (_INT32)(1U));
          __comma_preg_w2c_223 = (PelY_14b)(ref1_pic, (_INT16)((_UINT16)((_UINT32)(sy0) + 4U)), (_INT32)(sx0) + (_INT32)(12U), img_height, img_width);
          __comma_preg_w2c_225 = (PelY_14)(ref2_pic, (_INT16)((_UINT16)((_UINT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_y) + _U4SHL((_UINT32)(pic_pix_y) + (_UINT32)((_INT32)((_UINT64) y0)), 2U)))) + 4U)), (_INT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_x) + _U4SHL((_UINT32)((_UINT16) x0) + (_UINT32)(pic_pix_x), 2U)))) + (_INT32)(12U), img_height, img_width);
          * (diff + 7LL) = (_INT32) * ((orig_line + (_UINT16) x0) + 3LL) - _I4ASHR((_INT32)((_UINT16)(__comma_preg_w2c_223)) + (_INT32)((_UINT16)(__comma_preg_w2c_225)), (_INT32)(1U));
          orig_line = *((orig_pic + (_UINT64) y0) + 2LL);
          __comma_preg_w2c_228 = (PelY_14b)(ref1_pic, (_INT16)((_UINT16)((_UINT32)(sy0) + 8U)), sx0, img_height, img_width);
          __comma_preg_w2c_233 = (PelY_14)(ref2_pic, (_INT16)((_UINT16)((_UINT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_y) + _U4SHL((_UINT32)(pic_pix_y) + (_UINT32)((_INT32)((_UINT64) y0)), 2U)))) + 8U)), (_INT16)((_UINT16)((_UINT32)(cand_mv_x) + _U4SHL((_UINT32)((_UINT16) x0) + (_UINT32)(pic_pix_x), 2U))), img_height, img_width);
          * (diff + 8LL) = (_INT32) * (orig_line + (_UINT16) x0) - _I4ASHR((_INT32)((_UINT16)(__comma_preg_w2c_228)) + (_INT32)((_UINT16)(__comma_preg_w2c_233)), (_INT32)(1U));
          __comma_preg_w2c_238 = (PelY_14b)(ref1_pic, (_INT16)((_UINT16)((_UINT32)(sy0) + 8U)), (_INT32)(sx0) + (_INT32)(4U), img_height, img_width);
          __comma_preg_w2c_243 = (PelY_14)(ref2_pic, (_INT16)((_UINT16)((_UINT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_y) + _U4SHL((_UINT32)(pic_pix_y) + (_UINT32)((_INT32)((_UINT64) y0)), 2U)))) + 8U)), (_INT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_x) + _U4SHL((_UINT32)((_UINT16) x0) + (_UINT32)(pic_pix_x), 2U)))) + (_INT32)(4U), img_height, img_width);
          * (diff + 9LL) = (_INT32) * ((orig_line + (_UINT16) x0) + 1LL) - _I4ASHR((_INT32)((_UINT16)(__comma_preg_w2c_238)) + (_INT32)((_UINT16)(__comma_preg_w2c_243)), (_INT32)(1U));
          __comma_preg_w2c_248 = (PelY_14b)(ref1_pic, (_INT16)((_UINT16)((_UINT32)(sy0) + 8U)), (_INT32)(sx0) + (_INT32)(8U), img_height, img_width);
          __comma_preg_w2c_253 = (PelY_14)(ref2_pic, (_INT16)((_UINT16)((_UINT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_y) + _U4SHL((_UINT32)(pic_pix_y) + (_UINT32)((_INT32)((_UINT64) y0)), 2U)))) + 8U)), (_INT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_x) + _U4SHL((_UINT32)((_UINT16) x0) + (_UINT32)(pic_pix_x), 2U)))) + (_INT32)(8U), img_height, img_width);
          * (diff + 10LL) = (_INT32) * ((orig_line + (_UINT16) x0) + 2LL) - _I4ASHR((_INT32)((_UINT16)(__comma_preg_w2c_248)) + (_INT32)((_UINT16)(__comma_preg_w2c_253)), (_INT32)(1U));
          __comma_preg_w2c_257 = (PelY_14b)(ref1_pic, (_INT16)((_UINT16)((_UINT32)(sy0) + 8U)), (_INT32)(sx0) + (_INT32)(12U), img_height, img_width);
          __comma_preg_w2c_259 = (PelY_14)(ref2_pic, (_INT16)((_UINT16)((_UINT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_y) + _U4SHL((_UINT32)(pic_pix_y) + (_UINT32)((_INT32)((_UINT64) y0)), 2U)))) + 8U)), (_INT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_x) + _U4SHL((_UINT32)((_UINT16) x0) + (_UINT32)(pic_pix_x), 2U)))) + (_INT32)(12U), img_height, img_width);
          * (diff + 11LL) = (_INT32) * ((orig_line + (_UINT16) x0) + 3LL) - _I4ASHR((_INT32)((_UINT16)(__comma_preg_w2c_257)) + (_INT32)((_UINT16)(__comma_preg_w2c_259)), (_INT32)(1U));
          orig_line = *((orig_pic + (_UINT64) y0) + 3LL);
          __comma_preg = (PelY_14b)(ref1_pic, (_INT16)((_UINT16)((_UINT32)(sy0) + 12U)), sx0, img_height, img_width);
          __comma_preg_w2c_3 = (PelY_14)(ref2_pic, (_INT16)((_UINT16)((_UINT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_y) + _U4SHL((_UINT32)(pic_pix_y) + (_UINT32)((_INT32)((_UINT64) y0)), 2U)))) + 12U)), (_INT16)((_UINT16)((_UINT32)(cand_mv_x) + _U4SHL((_UINT32)((_UINT16) x0) + (_UINT32)(pic_pix_x), 2U))), img_height, img_width);
          * (diff + 12LL) = (_INT32) * (orig_line + (_UINT16) x0) - _I4ASHR((_INT32)((_UINT16)(__comma_preg)) + (_INT32)((_UINT16)(__comma_preg_w2c_3)), (_INT32)(1U));
          __comma_preg_w2c_8 = (PelY_14b)(ref1_pic, (_INT16)((_UINT16)((_UINT32)(sy0) + 12U)), (_INT32)(sx0) + (_INT32)(4U), img_height, img_width);
          __comma_preg_w2c_13 = (PelY_14)(ref2_pic, (_INT16)((_UINT16)((_UINT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_y) + _U4SHL((_UINT32)(pic_pix_y) + (_UINT32)((_INT32)((_UINT64) y0)), 2U)))) + 12U)), (_INT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_x) + _U4SHL((_UINT32)((_UINT16) x0) + (_UINT32)(pic_pix_x), 2U)))) + (_INT32)(4U), img_height, img_width);
          * (diff + 13LL) = (_INT32) * ((orig_line + (_UINT16) x0) + 1LL) - _I4ASHR((_INT32)((_UINT16)(__comma_preg_w2c_8)) + (_INT32)((_UINT16)(__comma_preg_w2c_13)), (_INT32)(1U));
          __comma_preg_w2c_18 = (PelY_14b)(ref1_pic, (_INT16)((_UINT16)((_UINT32)(sy0) + 12U)), (_INT32)(sx0) + (_INT32)(8U), img_height, img_width);
          __comma_preg_w2c_23 = (PelY_14)(ref2_pic, (_INT16)((_UINT16)((_UINT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_y) + _U4SHL((_UINT32)(pic_pix_y) + (_UINT32)((_INT32)((_UINT64) y0)), 2U)))) + 12U)), (_INT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_x) + _U4SHL((_UINT32)((_UINT16) x0) + (_UINT32)(pic_pix_x), 2U)))) + (_INT32)(8U), img_height, img_width);
          * (diff + 14LL) = (_INT32) * ((orig_line + (_UINT16) x0) + 2LL) - _I4ASHR((_INT32)((_UINT16)(__comma_preg_w2c_18)) + (_INT32)((_UINT16)(__comma_preg_w2c_23)), (_INT32)(1U));
          __comma_preg_w2c_27 = (PelY_14b)(ref1_pic, (_INT16)((_UINT16)((_UINT32)(sy0) + 12U)), (_INT32)(sx0) + (_INT32)(12U), img_height, img_width);
          __comma_preg_w2c_29 = (PelY_14)(ref2_pic, (_INT16)((_UINT16)((_UINT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_y) + _U4SHL((_UINT32)(pic_pix_y) + (_UINT32)((_INT32)((_UINT64) y0)), 2U)))) + 12U)), (_INT32)((_INT16)((_UINT16)((_UINT32)(cand_mv_x) + _U4SHL((_UINT32)((_UINT16) x0) + (_UINT32)(pic_pix_x), 2U)))) + (_INT32)(12U), img_height, img_width);
          * (diff + 15LL) = (_INT32) * ((orig_line + (_UINT16) x0) + 3LL) - _I4ASHR((_INT32)((_UINT16)(__comma_preg_w2c_27)) + (_INT32)((_UINT16)(__comma_preg_w2c_29)), (_INT32)(1U));
          if((input) -> AllowTransform8x8 == (_INT32)(0U))
          {
            __comma_preg_w2c_31 = SATD(diff, (input) -> hadamard);
            mcost = (_UINT16)((_UINT32)((_UINT16) mcost) + (_UINT32)(__comma_preg_w2c_31));
            if((_INT32)(mcost) > min_mcost)
            {
              abort_search = 1U;
              goto _10242;
            }
          }
          else
          {
            for(j_preg_w2c_2 = 0U; j_preg_w2c_2 <= (_INT32)(3U); j_preg_w2c_2 = j_preg_w2c_2 + (_INT32)(1U))
            {
              (curr_diff)[j_preg_w2c_2 + (_INT32)((_UINT64) y0)][(_UINT16) x0] = (diff)[(_INT64)(j_preg_w2c_2 * (_INT32)(4U))];
              (curr_diff)[j_preg_w2c_2 + (_INT32)((_UINT64) y0)][(_INT32)((_UINT16) x0) + 1] = (diff)[(_INT64)((j_preg_w2c_2 * (_INT32)(4U)) + 1)];
              (curr_diff)[j_preg_w2c_2 + (_INT32)((_UINT64) y0)][(_INT32)((_UINT16) x0) + 2] = (diff)[(_INT64)((j_preg_w2c_2 * (_INT32)(4U)) + 2)];
              (curr_diff)[j_preg_w2c_2 + (_INT32)((_UINT64) y0)][(_INT32)((_UINT16) x0) + 3] = (diff)[(_INT64)((j_preg_w2c_2 * (_INT32)(4U)) + 3)];
            }
          }
          x0 = (_UINT16)((_UINT32)((_UINT16) x0) + 4U);
        }
        _10242 :;
      }
      y0 = (_UINT16)((_UINT32)((_INT32)((_UINT64) y0)) + 4U);
    }
    if((input) -> AllowTransform8x8 != (_INT32)(0U))
    {
      __comma_preg_w2c_35 = find_SATD((_INT32(*)[16LL]) curr_diff, (input) -> hadamard, (_INT32)(blocktype));
      mcost = (_UINT16)((_UINT32)((_UINT16) mcost) + (_UINT32)(__comma_preg_w2c_35));
    }
    if((_INT32) mcost < min_mcost)
    {
      min_mcost = (_INT32) mcost;
      best_pos = (_INT32)((_UINT64) pos);
    }
    pos = (_INT32)((_UINT64) pos) + (_INT32)(1U);
  }
  if((_INT32)((_UINT64) best_pos) != (_INT32)(0U))
  {
    * mv_x = (_UINT32)((_UINT16) * mv_x) + (_UINT32)(*(spiral_search_x + (_UINT64) best_pos));
    * mv_y = (_UINT32)((_UINT16) * mv_y) + (_UINT32)(*(spiral_search_y + (_UINT64) best_pos));
  }
  return min_mcost;
} /* SubPelBlockSearchBiPred */


extern _INT32 BPredPartitionCost(
  _INT32 blocktype,
  _INT32 block8x_w2c_8,
  _INT16 fw_ref,
  _INT16 bw_ref,
  _INT32 lambda_factor,
  _INT32 list)
{
  
  register _INT32 tmp_cr_preg;
  register _INT32 tmp_cr_preg_w2c_0;
  register _UINT64 __cselect_preg;
  register _INT32 v_preg;
  register _INT32 h_preg;
  register _INT32 v_preg_w2c_0;
  register _INT32 h_preg_w2c_0;
  register _INT32 __comma_preg;
  register _INT32 whiledo_var_preg_w2c_0;
  register _INT32 whiledo_var_preg;
  register _INT32 i_preg;
  register _INT32 j_preg;
  register _INT32 __comma_preg_w2c_0;
  static _INT32 bx0_w2c_9870[5LL][4LL] = {{0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}, {0, 2, 0, 0}, {0, 2, 0, 2}};
  static _INT32 by0_w2c_9871[5LL][4LL] = {{0, 0, 0, 0}, {0, 0, 0, 0}, {0, 2, 0, 0}, {0, 0, 0, 0}, {0, 0, 2, 2}};
  _INT32 diff[64LL];
  _INT32 curr_blk[16LL][16LL];
  _INT32 bsx;
  _INT32 bsy;
  _INT32 pic_pix_x;
  _INT32 pic_pix_y;
  _INT32 v;
  _INT32 h;
  _INT32 mcost;
  _INT32 mvd_bits;
  _INT32 parttype;
  _INT32 step_h0;
  _INT32 step_v0;
  _INT32 step_h;
  _INT32 step_v;
  _INT16 ****** p_mv;
  
  bsx = _I4MIN((((struct anonymous_w2c_3 *)((_UINT8 *)(input) + 80U))[blocktype][0U]).ProfileIDC, (_INT32)(8U));
  bsy = _I4MIN((((struct anonymous_w2c_3 *)((_UINT8 *)(input) + 80U))[blocktype][1U]).ProfileIDC, (_INT32)(8U));
  mvd_bits = 0U;
  parttype = _I4MIN((_INT32)(blocktype), (_INT32)(4U));
  step_h0 = (((struct anonymous_w2c_3 *)((_UINT8 *)(input) + 144U))[parttype][0U]).ProfileIDC;
  step_v0 = (((struct anonymous_w2c_3 *)((_UINT8 *)(input) + 144U))[parttype][1U]).ProfileIDC;
  step_h = (((struct anonymous_w2c_3 *)((_UINT8 *)(input) + 144U))[blocktype][0U]).ProfileIDC;
  step_v = (((struct anonymous_w2c_3 *)((_UINT8 *)(input) + 144U))[blocktype][1U]).ProfileIDC;
  tmp_cr_preg = (by0_w2c_9871)[parttype][block8x_w2c_8];
  tmp_cr_preg_w2c_0 = (by0_w2c_9871)[parttype][block8x_w2c_8];
  if(list != (_INT32)(0U))
  {
    __cselect_preg = (_UINT64)(*(((_INT16 *******)(img) + 8192LL) + 800LL));
  }
  else
  {
    __cselect_preg = (_UINT64)(*(((_INT16 *******)(img) + 8192LL) + 801LL));
  }
  p_mv = *(((_INT16 *******)(img) + 8192LL) + 798LL);
  v = tmp_cr_preg;
  for(v_preg = 0U; (step_v * v_preg) < ((step_v0 + tmp_cr_preg) - v); v_preg = v_preg + (_INT32)(1U))
  {
    h = tmp_cr_preg_w2c_0;
    for(h_preg = 0U; (step_h * h_preg) < ((step_h0 + tmp_cr_preg_w2c_0) - h); h_preg = h_preg + (_INT32)(1U))
    {
      mvd_bits = (mvbits)[(_INT64)((_INT32) ** (*(** (*(_INT16 ******)(((_UINT8(*)[8LL]) __cselect_preg)[(_INT64)(h + (step_h * h_preg))]) + (_INT64)(v + (step_v * v_preg))) + (_INT32) fw_ref) + blocktype) - (_INT32) ** (*(** ((p_mv)[(_INT64)(h + (step_h * h_preg))] + (_INT64)(v + (step_v * v_preg))) + (_INT32) fw_ref) + blocktype))] + mvd_bits;
      mvd_bits = (mvbits)[(_INT64)((_INT32) * (*(*(** (*(_INT16 ******)(((_UINT8(*)[8LL]) __cselect_preg)[(_INT64)(h + (step_h * h_preg))]) + (_INT64)(v + (step_v * v_preg))) + (_INT32) fw_ref) + blocktype) + 1LL) - (_INT32) * (*(*(** ((p_mv)[(_INT64)(h + (step_h * h_preg))] + (_INT64)(v + (step_v * v_preg))) + (_INT32) fw_ref) + blocktype) + 1LL))] + mvd_bits;
      mvd_bits = (mvbits)[(_INT64)((_INT32) ** (*(*(*(*(_INT16 ******)(((_UINT8(*)[8LL]) __cselect_preg)[(_INT64)(h + (step_h * h_preg))]) + (_INT64)(v + (step_v * v_preg))) + 1LL) + (_INT32) bw_ref) + blocktype) - (_INT32) ** (*(*(*((p_mv)[(_INT64)(h + (step_h * h_preg))] + (_INT64)(v + (step_v * v_preg))) + 1LL) + (_INT32) bw_ref) + blocktype))] + mvd_bits;
      mvd_bits = (mvbits)[(_INT64)((_INT32) * (*(*(*(*(*(_INT16 ******)(((_UINT8(*)[8LL]) __cselect_preg)[(_INT64)(h + (step_h * h_preg))]) + (_INT64)(v + (step_v * v_preg))) + 1LL) + (_INT32) bw_ref) + blocktype) + 1LL) - (_INT32) * (*(*(*(*((p_mv)[(_INT64)(h + (step_h * h_preg))] + (_INT64)(v + (step_v * v_preg))) + 1LL) + (_INT32) bw_ref) + blocktype) + 1LL))] + mvd_bits;
    }
  }
  mcost = _I4ASHR(lambda_factor * mvd_bits, (_INT32)(16U));
  v = tmp_cr_preg;
  for(v_preg_w2c_0 = 0U; v_preg_w2c_0 <= (((step_v0 + tmp_cr_preg) - v) + -1); v_preg_w2c_0 = v_preg_w2c_0 + (_INT32)(1U))
  {
    pic_pix_y = ((img)[43LL]).number + _I4SHL(v + v_preg_w2c_0, (_INT32)(2U));
    h = (bx0_w2c_9870)[parttype][block8x_w2c_8];
    for(h_preg_w2c_0 = 0U; h_preg_w2c_0 <= (((step_h0 + tmp_cr_preg_w2c_0) - h) + -1); h_preg_w2c_0 = h_preg_w2c_0 + (_INT32)(1U))
    {
      pic_pix_x = ((img)[42LL]).number + _I4SHL(h + h_preg_w2c_0, (_INT32)(2U));
      LumaPrediction4x4Bi(_I4SHL(h + h_preg_w2c_0, (_INT32)(2U)), _I4SHL(v + v_preg_w2c_0, (_INT32)(2U)), (_INT32) 2U, (_INT32)(blocktype), (_INT32)(blocktype), (_INT16)(_INT32) fw_ref, (_INT16)(_INT32) bw_ref, list);
      (curr_blk)[v_preg_w2c_0 * (_INT32)(4U)][h_preg_w2c_0 * (_INT32)(4U)] = (_INT32) * ((imgY_org)[pic_pix_y] + pic_pix_x) - (_INT32) * (_UINT16 *)(&((struct anonymous_w2c_11 *)((_UINT8 *)(img) + 12600U))[_I4SHL(h + h_preg_w2c_0, (_INT32)(2U))][_I4SHL(v + v_preg_w2c_0, (_INT32)(2U))]);
      (diff)[0LL] = (_INT32) * ((imgY_org)[pic_pix_y] + pic_pix_x) - (_INT32) * (_UINT16 *)(&((struct anonymous_w2c_11 *)((_UINT8 *)(img) + 12600U))[_I4SHL(h + h_preg_w2c_0, (_INT32)(2U))][_I4SHL(v + v_preg_w2c_0, (_INT32)(2U))]);
      (curr_blk)[v_preg_w2c_0 * (_INT32)(4U)][(h_preg_w2c_0 * (_INT32)(4U)) + 1] = (_INT32) * ((imgY_org)[pic_pix_y] + (_INT64)(pic_pix_x + 1)) - (_INT32) * (_UINT16 *)(&((struct anonymous_w2c_11 *)((_UINT8 *)(img) + 12600U))[_I4SHL(h + h_preg_w2c_0, (_INT32)(2U)) + 1][_I4SHL(v + v_preg_w2c_0, (_INT32)(2U))]);
      (diff)[1LL] = (_INT32) * ((imgY_org)[pic_pix_y] + (_INT64)(pic_pix_x + 1)) - (_INT32) * (_UINT16 *)(&((struct anonymous_w2c_11 *)((_UINT8 *)(img) + 12600U))[_I4SHL(h + h_preg_w2c_0, (_INT32)(2U)) + 1][_I4SHL(v + v_preg_w2c_0, (_INT32)(2U))]);
      (curr_blk)[v_preg_w2c_0 * (_INT32)(4U)][(h_preg_w2c_0 * (_INT32)(4U)) + 2] = (_INT32) * ((imgY_org)[pic_pix_y] + (_INT64)(pic_pix_x + 2)) - (_INT32) * (_UINT16 *)(&((struct anonymous_w2c_11 *)((_UINT8 *)(img) + 12600U))[_I4SHL(h + h_preg_w2c_0, (_INT32)(2U)) + 2][_I4SHL(v + v_preg_w2c_0, (_INT32)(2U))]);
      (diff)[2LL] = (_INT32) * ((imgY_org)[pic_pix_y] + (_INT64)(pic_pix_x + 2)) - (_INT32) * (_UINT16 *)(&((struct anonymous_w2c_11 *)((_UINT8 *)(img) + 12600U))[_I4SHL(h + h_preg_w2c_0, (_INT32)(2U)) + 2][_I4SHL(v + v_preg_w2c_0, (_INT32)(2U))]);
      (curr_blk)[v_preg_w2c_0 * (_INT32)(4U)][(h_preg_w2c_0 * (_INT32)(4U)) + 3] = (_INT32) * ((imgY_org)[pic_pix_y] + (_INT64)(pic_pix_x + 3)) - (_INT32) * (_UINT16 *)(&((struct anonymous_w2c_11 *)((_UINT8 *)(img) + 12600U))[_I4SHL(h + h_preg_w2c_0, (_INT32)(2U)) + 3][_I4SHL(v + v_preg_w2c_0, (_INT32)(2U))]);
      (diff)[3LL] = (_INT32) * ((imgY_org)[pic_pix_y] + (_INT64)(pic_pix_x + 3)) - (_INT32) * (_UINT16 *)(&((struct anonymous_w2c_11 *)((_UINT8 *)(img) + 12600U))[_I4SHL(h + h_preg_w2c_0, (_INT32)(2U)) + 3][_I4SHL(v + v_preg_w2c_0, (_INT32)(2U))]);
      (curr_blk)[(v_preg_w2c_0 * (_INT32)(4U)) + 1][h_preg_w2c_0 * (_INT32)(4U)] = (_INT32) * ((imgY_org)[(_INT64)(pic_pix_y + 1)] + pic_pix_x) - (_INT32) * (_UINT16 *)(&((struct anonymous_w2c_11 *)((_UINT8 *)(img) + 12600U))[_I4SHL(h + h_preg_w2c_0, (_INT32)(2U))][_I4SHL(v + v_preg_w2c_0, (_INT32)(2U)) + 1]);
      (diff)[4LL] = (_INT32) * ((imgY_org)[(_INT64)(pic_pix_y + 1)] + pic_pix_x) - (_INT32) * (_UINT16 *)(&((struct anonymous_w2c_11 *)((_UINT8 *)(img) + 12600U))[_I4SHL(h + h_preg_w2c_0, (_INT32)(2U))][_I4SHL(v + v_preg_w2c_0, (_INT32)(2U)) + 1]);
      (curr_blk)[(v_preg_w2c_0 * (_INT32)(4U)) + 1][(h_preg_w2c_0 * (_INT32)(4U)) + 1] = (_INT32) * ((imgY_org)[(_INT64)(pic_pix_y + 1)] + (_INT64)(pic_pix_x + 1)) - (_INT32) * (_UINT16 *)(&((struct anonymous_w2c_11 *)((_UINT8 *)(img) + 12600U))[_I4SHL(h + h_preg_w2c_0, (_INT32)(2U)) + 1][_I4SHL(v + v_preg_w2c_0, (_INT32)(2U)) + 1]);
      (diff)[5LL] = (_INT32) * ((imgY_org)[(_INT64)(pic_pix_y + 1)] + (_INT64)(pic_pix_x + 1)) - (_INT32) * (_UINT16 *)(&((struct anonymous_w2c_11 *)((_UINT8 *)(img) + 12600U))[_I4SHL(h + h_preg_w2c_0, (_INT32)(2U)) + 1][_I4SHL(v + v_preg_w2c_0, (_INT32)(2U)) + 1]);
      (curr_blk)[(v_preg_w2c_0 * (_INT32)(4U)) + 1][(h_preg_w2c_0 * (_INT32)(4U)) + 2] = (_INT32) * ((imgY_org)[(_INT64)(pic_pix_y + 1)] + (_INT64)(pic_pix_x + 2)) - (_INT32) * (_UINT16 *)(&((struct anonymous_w2c_11 *)((_UINT8 *)(img) + 12600U))[_I4SHL(h + h_preg_w2c_0, (_INT32)(2U)) + 2][_I4SHL(v + v_preg_w2c_0, (_INT32)(2U)) + 1]);
      (diff)[6LL] = (_INT32) * ((imgY_org)[(_INT64)(pic_pix_y + 1)] + (_INT64)(pic_pix_x + 2)) - (_INT32) * (_UINT16 *)(&((struct anonymous_w2c_11 *)((_UINT8 *)(img) + 12600U))[_I4SHL(h + h_preg_w2c_0, (_INT32)(2U)) + 2][_I4SHL(v + v_preg_w2c_0, (_INT32)(2U)) + 1]);
      (curr_blk)[(v_preg_w2c_0 * (_INT32)(4U)) + 1][(h_preg_w2c_0 * (_INT32)(4U)) + 3] = (_INT32) * ((imgY_org)[(_INT64)(pic_pix_y + 1)] + (_INT64)(pic_pix_x + 3)) - (_INT32) * (_UINT16 *)(&((struct anonymous_w2c_11 *)((_UINT8 *)(img) + 12600U))[_I4SHL(h + h_preg_w2c_0, (_INT32)(2U)) + 3][_I4SHL(v + v_preg_w2c_0, (_INT32)(2U)) + 1]);
      (diff)[7LL] = (_INT32) * ((imgY_org)[(_INT64)(pic_pix_y + 1)] + (_INT64)(pic_pix_x + 3)) - (_INT32) * (_UINT16 *)(&((struct anonymous_w2c_11 *)((_UINT8 *)(img) + 12600U))[_I4SHL(h + h_preg_w2c_0, (_INT32)(2U)) + 3][_I4SHL(v + v_preg_w2c_0, (_INT32)(2U)) + 1]);
      (curr_blk)[(v_preg_w2c_0 * (_INT32)(4U)) + 2][h_preg_w2c_0 * (_INT32)(4U)] = (_INT32) * ((imgY_org)[(_INT64)(pic_pix_y + 2)] + pic_pix_x) - (_INT32) * (_UINT16 *)(&((struct anonymous_w2c_11 *)((_UINT8 *)(img) + 12600U))[_I4SHL(h + h_preg_w2c_0, (_INT32)(2U))][_I4SHL(v + v_preg_w2c_0, (_INT32)(2U)) + 2]);
      (diff)[8LL] = (_INT32) * ((imgY_org)[(_INT64)(pic_pix_y + 2)] + pic_pix_x) - (_INT32) * (_UINT16 *)(&((struct anonymous_w2c_11 *)((_UINT8 *)(img) + 12600U))[_I4SHL(h + h_preg_w2c_0, (_INT32)(2U))][_I4SHL(v + v_preg_w2c_0, (_INT32)(2U)) + 2]);
      (curr_blk)[(v_preg_w2c_0 * (_INT32)(4U)) + 2][(h_preg_w2c_0 * (_INT32)(4U)) + 1] = (_INT32) * ((imgY_org)[(_INT64)(pic_pix_y + 2)] + (_INT64)(pic_pix_x + 1)) - (_INT32) * (_UINT16 *)(&((struct anonymous_w2c_11 *)((_UINT8 *)(img) + 12600U))[_I4SHL(h + h_preg_w2c_0, (_INT32)(2U)) + 1][_I4SHL(v + v_preg_w2c_0, (_INT32)(2U)) + 2]);
      (diff)[9LL] = (_INT32) * ((imgY_org)[(_INT64)(pic_pix_y + 2)] + (_INT64)(pic_pix_x + 1)) - (_INT32) * (_UINT16 *)(&((struct anonymous_w2c_11 *)((_UINT8 *)(img) + 12600U))[_I4SHL(h + h_preg_w2c_0, (_INT32)(2U)) + 1][_I4SHL(v + v_preg_w2c_0, (_INT32)(2U)) + 2]);
      (curr_blk)[(v_preg_w2c_0 * (_INT32)(4U)) + 2][(h_preg_w2c_0 * (_INT32)(4U)) + 2] = (_INT32) * ((imgY_org)[(_INT64)(pic_pix_y + 2)] + (_INT64)(pic_pix_x + 2)) - (_INT32) * (_UINT16 *)(&((struct anonymous_w2c_11 *)((_UINT8 *)(img) + 12600U))[_I4SHL(h + h_preg_w2c_0, (_INT32)(2U)) + 2][_I4SHL(v + v_preg_w2c_0, (_INT32)(2U)) + 2]);
      (diff)[10LL] = (_INT32) * ((imgY_org)[(_INT64)(pic_pix_y + 2)] + (_INT64)(pic_pix_x + 2)) - (_INT32) * (_UINT16 *)(&((struct anonymous_w2c_11 *)((_UINT8 *)(img) + 12600U))[_I4SHL(h + h_preg_w2c_0, (_INT32)(2U)) + 2][_I4SHL(v + v_preg_w2c_0, (_INT32)(2U)) + 2]);
      (curr_blk)[(v_preg_w2c_0 * (_INT32)(4U)) + 2][(h_preg_w2c_0 * (_INT32)(4U)) + 3] = (_INT32) * ((imgY_org)[(_INT64)(pic_pix_y + 2)] + (_INT64)(pic_pix_x + 3)) - (_INT32) * (_UINT16 *)(&((struct anonymous_w2c_11 *)((_UINT8 *)(img) + 12600U))[_I4SHL(h + h_preg_w2c_0, (_INT32)(2U)) + 3][_I4SHL(v + v_preg_w2c_0, (_INT32)(2U)) + 2]);
      (diff)[11LL] = (_INT32) * ((imgY_org)[(_INT64)(pic_pix_y + 2)] + (_INT64)(pic_pix_x + 3)) - (_INT32) * (_UINT16 *)(&((struct anonymous_w2c_11 *)((_UINT8 *)(img) + 12600U))[_I4SHL(h + h_preg_w2c_0, (_INT32)(2U)) + 3][_I4SHL(v + v_preg_w2c_0, (_INT32)(2U)) + 2]);
      (curr_blk)[(v_preg_w2c_0 * (_INT32)(4U)) + 3][h_preg_w2c_0 * (_INT32)(4U)] = (_INT32) * ((imgY_org)[(_INT64)(pic_pix_y + 3)] + pic_pix_x) - (_INT32) * (_UINT16 *)(&((struct anonymous_w2c_11 *)((_UINT8 *)(img) + 12600U))[_I4SHL(h + h_preg_w2c_0, (_INT32)(2U))][_I4SHL(v + v_preg_w2c_0, (_INT32)(2U)) + 3]);
      (diff)[12LL] = (_INT32) * ((imgY_org)[(_INT64)(pic_pix_y + 3)] + pic_pix_x) - (_INT32) * (_UINT16 *)(&((struct anonymous_w2c_11 *)((_UINT8 *)(img) + 12600U))[_I4SHL(h + h_preg_w2c_0, (_INT32)(2U))][_I4SHL(v + v_preg_w2c_0, (_INT32)(2U)) + 3]);
      (curr_blk)[(v_preg_w2c_0 * (_INT32)(4U)) + 3][(h_preg_w2c_0 * (_INT32)(4U)) + 1] = (_INT32) * ((imgY_org)[(_INT64)(pic_pix_y + 3)] + (_INT64)(pic_pix_x + 1)) - (_INT32) * (_UINT16 *)(&((struct anonymous_w2c_11 *)((_UINT8 *)(img) + 12600U))[_I4SHL(h + h_preg_w2c_0, (_INT32)(2U)) + 1][_I4SHL(v + v_preg_w2c_0, (_INT32)(2U)) + 3]);
      (diff)[13LL] = (_INT32) * ((imgY_org)[(_INT64)(pic_pix_y + 3)] + (_INT64)(pic_pix_x + 1)) - (_INT32) * (_UINT16 *)(&((struct anonymous_w2c_11 *)((_UINT8 *)(img) + 12600U))[_I4SHL(h + h_preg_w2c_0, (_INT32)(2U)) + 1][_I4SHL(v + v_preg_w2c_0, (_INT32)(2U)) + 3]);
      (curr_blk)[(v_preg_w2c_0 * (_INT32)(4U)) + 3][(h_preg_w2c_0 * (_INT32)(4U)) + 2] = (_INT32) * ((imgY_org)[(_INT64)(pic_pix_y + 3)] + (_INT64)(pic_pix_x + 2)) - (_INT32) * (_UINT16 *)(&((struct anonymous_w2c_11 *)((_UINT8 *)(img) + 12600U))[_I4SHL(h + h_preg_w2c_0, (_INT32)(2U)) + 2][_I4SHL(v + v_preg_w2c_0, (_INT32)(2U)) + 3]);
      (diff)[14LL] = (_INT32) * ((imgY_org)[(_INT64)(pic_pix_y + 3)] + (_INT64)(pic_pix_x + 2)) - (_INT32) * (_UINT16 *)(&((struct anonymous_w2c_11 *)((_UINT8 *)(img) + 12600U))[_I4SHL(h + h_preg_w2c_0, (_INT32)(2U)) + 2][_I4SHL(v + v_preg_w2c_0, (_INT32)(2U)) + 3]);
      (curr_blk)[(v_preg_w2c_0 * (_INT32)(4U)) + 3][(h_preg_w2c_0 * (_INT32)(4U)) + 3] = (_INT32) * ((imgY_org)[(_INT64)(pic_pix_y + 3)] + (_INT64)(pic_pix_x + 3)) - (_INT32) * (_UINT16 *)(&((struct anonymous_w2c_11 *)((_UINT8 *)(img) + 12600U))[_I4SHL(h + h_preg_w2c_0, (_INT32)(2U)) + 3][_I4SHL(v + v_preg_w2c_0, (_INT32)(2U)) + 3]);
      (diff)[15LL] = (_INT32) * ((imgY_org)[(_INT64)(pic_pix_y + 3)] + (_INT64)(pic_pix_x + 3)) - (_INT32) * (_UINT16 *)(&((struct anonymous_w2c_11 *)((_UINT8 *)(img) + 12600U))[_I4SHL(h + h_preg_w2c_0, (_INT32)(2U)) + 3][_I4SHL(v + v_preg_w2c_0, (_INT32)(2U)) + 3]);
      if((((input)[805LL]).ProfileIDC == (_INT32)(0U)) || ((_INT32)(blocktype) > (_INT32)(4U)))
      {
        __comma_preg = SATD(diff, ((input)[6LL]).ProfileIDC);
        mcost = mcost + __comma_preg;
      }
    }
  }
  if(((input) -> AllowTransform8x8 != (_INT32)(0U)) && ((_INT32)(blocktype) <= (_INT32)(4U)))
  {
    whiledo_var_preg_w2c_0 = 0U;
    while((((struct anonymous_w2c_3 *)((_UINT8 *)(input) + 80U))[parttype][1U]).ProfileIDC > (bsy * whiledo_var_preg_w2c_0))
    {
      whiledo_var_preg = 0U;
      while((((struct anonymous_w2c_3 *)((_UINT8 *)(input) + 80U))[parttype][0U]).ProfileIDC > (bsx * whiledo_var_preg))
      {
        for(i_preg = 0U; i_preg <= (_INT32)(7U); i_preg = i_preg + (_INT32)(1U))
        {
          for(j_preg = 0U; j_preg <= (_INT32)(7U); j_preg = j_preg + (_INT32)(1U))
          {
            (diff)[(_INT64)(j_preg + (i_preg * (_INT32)(8U)))] = (curr_blk)[i_preg + (bsy * whiledo_var_preg_w2c_0)][j_preg + (bsx * whiledo_var_preg)];
          }
        }
        __comma_preg_w2c_0 = SATD8X8(diff, (input) -> hadamard);
        mcost = mcost + __comma_preg_w2c_0;
        whiledo_var_preg = whiledo_var_preg + (_INT32)(1U);
      }
      whiledo_var_preg_w2c_0 = whiledo_var_preg_w2c_0 + (_INT32)(1U);
    }
  }
  return mcost;
} /* BPredPartitionCost */


extern _INT32 BlockMotionSearch(
  _INT16 ref,
  _INT32 list,
  _INT32 mb_x,
  _INT32 mb_y,
  _INT32 blocktype,
  _INT32 search_range,
  _IEEE64 lambda)
{
  
  register _INT32 __cselect_preg_w2c_1;
  register _INT32 j_preg;
  register _INT32 i_preg;
  register _INT32 __cselect_preg_w2c_2;
  register _INT32 __cselect_preg_w2c_3;
  register _INT32 __cselect_preg_w2c_4;
  register _INT32 __cselect_preg_w2c_5;
  register _INT32 __cselect_preg_w2c_6;
  register _INT32 __cselect_preg_w2c_7;
  register _INT32 __cselect_preg_w2c_8;
  register _INT32 __cselect_preg_w2c_9;
  register _INT32 __cselect_preg_w2c_10;
  register _IEEE64 __cselect_preg_w2c_11;
  register _IEEE64 __cselect_preg_w2c_12;
  register _INT32 __cselect_preg_w2c_13;
  register _INT32 __cselect_preg_w2c_14;
  register _INT32 __cselect_preg_w2c_15;
  register _INT32 __cselect_preg_w2c_16;
  register _INT32 __comma_preg_w2c_0;
  register _INT32 _ub17_preg;
  register _INT32 i_preg_w2c_0;
  register _INT32 _ub18_preg;
  register _INT32 j_preg_w2c_0;
  register _INT32 __comma_preg_w2c_1;
  register _INT32 __comma_preg_w2c_2;
  register _INT32 __comma_preg_w2c_3;
  register _INT32 _ub19_preg;
  register _INT32 i_preg_w2c_1;
  register _INT32 _ub20_preg;
  register _INT32 j_preg_w2c_1;
  register _INT32 __comma_preg_w2c_4;
  register _INT32 __comma_preg_w2c_5;
  register _INT32 _ub21_preg;
  register _INT32 i_preg_w2c_2;
  register _INT32 _ub22_preg;
  register _INT32 j_preg_w2c_2;
  register _INT32 _ub23_preg;
  register _INT32 i_preg_w2c_3;
  register _INT32 _ub24_preg;
  register _INT32 j_preg_w2c_3;
  register _UINT64 __cselect_preg_w2c_17;
  register _INT32 whiledo_var_preg;
  register _INT32 __comma_preg_w2c_6;
  register _INT32 __comma_preg;
  register _INT32 _ub25_preg;
  register _INT32 i_preg_w2c_4;
  register _INT32 _ub26_preg;
  register _INT32 j_preg_w2c_4;
  register _UINT64 __cselect_preg;
  register _UINT64 __cselect_preg_w2c_0;
  static _UINT16 orig_val_w2c_10077[256LL];
  static _UINT16 * orig_pic_w2c_10078[16LL] = {orig_val_w2c_10077, &orig_val_w2c_10077[16], &orig_val_w2c_10077[32], &orig_val_w2c_10077[48], &orig_val_w2c_10077[64], &orig_val_w2c_10077[80], &orig_val_w2c_10077[96], &orig_val_w2c_10077[112], &orig_val_w2c_10077[128], &orig_val_w2c_10077[144], &orig_val_w2c_10077[160], &orig_val_w2c_10077[176], &orig_val_w2c_10077[192], &orig_val_w2c_10077[208], &orig_val_w2c_10077[224], &orig_val_w2c_10077[240]};
  _INT16 pred_mv_x;
  _INT16 pred_mv_y;
  _INT16 mv_x;
  _INT16 mv_y;
  _INT32 min_mcost;
  _INT32 bsx;
  _INT32 bsy;
  _INT32 pic_pix_x;
  _INT32 pic_pix_y;
  _INT16 * pred_mv;
  _INT16 *** mv_array;
  _INT16 ****** all_mv;
  struct timeb tstruct_w2c_1;
  struct timeb tstruct_w2c_2;
  _INT32 N_Bframe;
  _INT32 n_Bframe;
  _INT32 h4x4blkno;
  _INT32 v4x4blkno;
  _INT32 min_mcostbi;
  _INT16 bimv_x;
  _INT16 bimv_y;
  _INT16 tempmv_x;
  _INT16 tempmv_y;
  _INT16 pred_mv_x_w2c_1;
  _INT16 pred_mv_y_w2c_1;
  _INT16 pred_mv_x_w2c_2;
  _INT16 pred_mv_y_w2c_2;
  _INT16 iterlist;
  _INT16 pred_mv_bi[2LL];
  
  bsx = (((struct anonymous_w2c_3 *)((_UINT8 *)(input) + 80U))[blocktype][0U]).ProfileIDC;
  bsy = (((struct anonymous_w2c_3 *)((_UINT8 *)(input) + 80U))[blocktype][1U]).ProfileIDC;
  pic_pix_x = (img) -> opix_x + mb_x;
  pic_pix_y = (img) -> opix_y + mb_y;
  mv_array = *((enc_picture) -> mv + (_UINT64) list);
  all_mv = *(((_INT16 *******)(img) + 8192LL) + 799LL);
  N_Bframe = 0U;
  n_Bframe = 0U;
  ftime(&tstruct_w2c_1);
  if((input) -> FMEnable != (_INT32)(0U))
  {
    N_Bframe = (input) -> successive_Bframe;
    if(N_Bframe != (_INT32)(0U))
    {
      __cselect_preg_w2c_1 = (Bframe_ctr % N_Bframe) + (_INT32)(1U);
    }
    else
    {
      __cselect_preg_w2c_1 = 0U;
    }
    n_Bframe = __cselect_preg_w2c_1;
  }
  pred_mv = *(*(*(*(*(*(((_INT16 *******)(img) + 8192LL) + 798LL) + (_INT64)(_I4ASHR(mb_x, 2U))) + (_INT64)(_I4ASHR(mb_y, 2U))) + (_UINT64) list) + (_UINT64) ref) + blocktype);
  for(j_preg = 0U; j_preg <= (bsy + -1); j_preg = j_preg + (_INT32)(1U))
  {
    for(i_preg = 0U; i_preg <= (bsx + -1); i_preg = i_preg + (_INT32)(1U))
    {
      * ((orig_pic_w2c_10078)[(_INT64)(j_preg)] + (_INT64)(i_preg)) = *((imgY_org)[(_INT64)(pic_pix_y + j_preg)] + (_INT64)(pic_pix_x + i_preg));
    }
  }
  if((input) -> FMEnable != (_INT32)(0U))
  {
    if((_INT32)(blocktype) > (_INT32)(6U))
    {
      (pred_MV_uplayer)[0U] = (_INT32) ** (*(*(*(*(all_mv + (_INT64)(_I4ASHR(mb_x, 2U))) + (_INT64)(_I4ASHR(mb_y, 2U))) + (_UINT64) list) + (_UINT64) ref) + 5LL);
      (pred_MV_uplayer)[1U] = (_INT32) * (*(*(*(*(*(all_mv + (_INT64)(_I4ASHR(mb_x, 2U))) + (_INT64)(_I4ASHR(mb_y, 2U))) + (_UINT64) list) + (_UINT64) ref) + 5LL) + 1LL);
      if((_INT32)((_UINT64) list) == (_INT32)(1U))
      {
        __cselect_preg_w2c_2 = ** (** (*(all_bwmincost + (_INT64)(_I4ASHR((img) -> pix_x, 2U) + _I4ASHR(mb_x, 2U))) + (_INT64)(_I4ASHR((img) -> pix_y, 2U) + _I4ASHR(mb_y, 2U))) + 5LL);
      }
      else
      {
        __cselect_preg_w2c_2 = ** (*(*(*(all_mincost + (_INT64)(_I4ASHR((img) -> pix_x, 2U) + _I4ASHR(mb_x, 2U))) + (_INT64)(_I4ASHR((img) -> pix_y, 2U) + _I4ASHR(mb_y, 2U))) + (_UINT64) ref) + 5LL);
      }
      pred_SAD_uplayer = __cselect_preg_w2c_2 / (_INT32)(2U);
    }
    else
    {
      if((_INT32)(blocktype) > (_INT32)(4U))
      {
        (pred_MV_uplayer)[0U] = (_INT32) ** (*(*(*(*(all_mv + (_INT64)(_I4ASHR(mb_x, 2U))) + (_INT64)(_I4ASHR(mb_y, 2U))) + (_UINT64) list) + (_UINT64) ref) + 4LL);
        (pred_MV_uplayer)[1U] = (_INT32) * (*(*(*(*(*(all_mv + (_INT64)(_I4ASHR(mb_x, 2U))) + (_INT64)(_I4ASHR(mb_y, 2U))) + (_UINT64) list) + (_UINT64) ref) + 4LL) + 1LL);
        if((_INT32)((_UINT64) list) == (_INT32)(1U))
        {
          __cselect_preg_w2c_3 = ** (** (*(all_bwmincost + (_INT64)(_I4ASHR((img) -> pix_x, 2U) + _I4ASHR(mb_x, 2U))) + (_INT64)(_I4ASHR((img) -> pix_y, 2U) + _I4ASHR(mb_y, 2U))) + 4LL);
        }
        else
        {
          __cselect_preg_w2c_3 = ** (*(*(*(all_mincost + (_INT64)(_I4ASHR((img) -> pix_x, 2U) + _I4ASHR(mb_x, 2U))) + (_INT64)(_I4ASHR((img) -> pix_y, 2U) + _I4ASHR(mb_y, 2U))) + (_UINT64) ref) + 4LL);
        }
        pred_SAD_uplayer = __cselect_preg_w2c_3 / (_INT32)(2U);
      }
      else
      {
        if((_INT32)(blocktype) == (_INT32)(4U))
        {
          (pred_MV_uplayer)[0U] = (_INT32) ** (*(*(*(*(all_mv + (_INT64)(_I4ASHR(mb_x, 2U))) + (_INT64)(_I4ASHR(mb_y, 2U))) + (_UINT64) list) + (_UINT64) ref) + 2LL);
          (pred_MV_uplayer)[1U] = (_INT32) * (*(*(*(*(*(all_mv + (_INT64)(_I4ASHR(mb_x, 2U))) + (_INT64)(_I4ASHR(mb_y, 2U))) + (_UINT64) list) + (_UINT64) ref) + 2LL) + 1LL);
          if((_INT32)((_UINT64) list) == (_INT32)(1U))
          {
            __cselect_preg_w2c_4 = ** (** (*(all_bwmincost + (_INT64)(_I4ASHR((img) -> pix_x, 2U) + _I4ASHR(mb_x, 2U))) + (_INT64)(_I4ASHR((img) -> pix_y, 2U) + _I4ASHR(mb_y, 2U))) + 2LL);
          }
          else
          {
            __cselect_preg_w2c_4 = ** (*(*(*(all_mincost + (_INT64)(_I4ASHR((img) -> pix_x, 2U) + _I4ASHR(mb_x, 2U))) + (_INT64)(_I4ASHR((img) -> pix_y, 2U) + _I4ASHR(mb_y, 2U))) + (_UINT64) ref) + 2LL);
          }
          pred_SAD_uplayer = __cselect_preg_w2c_4 / (_INT32)(2U);
        }
        else
        {
          if((_INT32)(blocktype) > (_INT32)(1U))
          {
            (pred_MV_uplayer)[0U] = (_INT32) ** (*(*(*(*(all_mv + (_INT64)(_I4ASHR(mb_x, 2U))) + (_INT64)(_I4ASHR(mb_y, 2U))) + (_UINT64) list) + (_UINT64) ref) + 1LL);
            (pred_MV_uplayer)[1U] = (_INT32) * (*(*(*(*(*(all_mv + (_INT64)(_I4ASHR(mb_x, 2U))) + (_INT64)(_I4ASHR(mb_y, 2U))) + (_UINT64) list) + (_UINT64) ref) + 1LL) + 1LL);
            if((_INT32)((_UINT64) list) == (_INT32)(1U))
            {
              __cselect_preg_w2c_5 = ** (** (*(all_bwmincost + (_INT64)(_I4ASHR((img) -> pix_x, 2U) + _I4ASHR(mb_x, 2U))) + (_INT64)(_I4ASHR((img) -> pix_y, 2U) + _I4ASHR(mb_y, 2U))) + 1LL);
            }
            else
            {
              __cselect_preg_w2c_5 = ** (*(*(*(all_mincost + (_INT64)(_I4ASHR((img) -> pix_x, 2U) + _I4ASHR(mb_x, 2U))) + (_INT64)(_I4ASHR((img) -> pix_y, 2U) + _I4ASHR(mb_y, 2U))) + (_UINT64) ref) + 1LL);
            }
            pred_SAD_uplayer = __cselect_preg_w2c_5 / (_INT32)(2U);
          }
        }
      }
    }
    if(((img) -> type == (_INT32)(1U)) && (*(((_INT32 *)(img) + 16384LL) + 1740LL) > (_INT32)(0U)))
    {
      if((_INT32)(blocktype) > (_INT32)(6U))
      {
        (pred_MV_uplayer)[0U] = (_INT32) ** (*(*(*(*(all_mv + (_INT64)(_I4ASHR(mb_x, 2U))) + (_INT64)(_I4ASHR(mb_y, 2U))) + (_UINT64) list) + (_UINT64) ref) + 5LL);
        (pred_MV_uplayer)[1U] = (_INT32) * (*(*(*(*(*(all_mv + (_INT64)(_I4ASHR(mb_x, 2U))) + (_INT64)(_I4ASHR(mb_y, 2U))) + (_UINT64) list) + (_UINT64) ref) + 5LL) + 1LL);
        if((_INT32)((_UINT64) list) == (_INT32)(1U))
        {
          __cselect_preg_w2c_6 = ** (** (*(all_bwmincost + (_INT64)(_I4ASHR((img) -> pix_x, 2U) + _I4ASHR(mb_x, 2U))) + (_INT64)(_I4ASHR((img) -> pix_y, 2U) + _I4ASHR(mb_y, 2U))) + 5LL);
        }
        else
        {
          __cselect_preg_w2c_6 = ** (*(*(*(all_mincost + (_INT64)(_I4ASHR((img) -> pix_x, 2U) + _I4ASHR(mb_x, 2U))) + (_INT64)(_I4ASHR((img) -> pix_y, 2U) + _I4ASHR(mb_y, 2U))) + (_UINT64) ref) + 5LL);
        }
        pred_SAD_uplayer = __cselect_preg_w2c_6 / (_INT32)(2U);
      }
      else
      {
        if((_INT32)(blocktype) > (_INT32)(4U))
        {
          (pred_MV_uplayer)[0U] = (_INT32) ** (*(*(*(*(all_mv + (_INT64)(_I4ASHR(mb_x, 2U))) + (_INT64)(_I4ASHR(mb_y, 2U))) + (_UINT64) list) + (_UINT64) ref) + 4LL);
          (pred_MV_uplayer)[1U] = (_INT32) * (*(*(*(*(*(all_mv + (_INT64)(_I4ASHR(mb_x, 2U))) + (_INT64)(_I4ASHR(mb_y, 2U))) + (_UINT64) list) + (_UINT64) ref) + 4LL) + 1LL);
          if((_INT32)((_UINT64) list) == (_INT32)(1U))
          {
            __cselect_preg_w2c_7 = ** (** (*(all_bwmincost + (_INT64)(_I4ASHR((img) -> pix_x, 2U) + _I4ASHR(mb_x, 2U))) + (_INT64)(_I4ASHR((img) -> pix_y, 2U) + _I4ASHR(mb_y, 2U))) + 4LL);
          }
          else
          {
            __cselect_preg_w2c_7 = ** (*(*(*(all_mincost + (_INT64)(_I4ASHR((img) -> pix_x, 2U) + _I4ASHR(mb_x, 2U))) + (_INT64)(_I4ASHR((img) -> pix_y, 2U) + _I4ASHR(mb_y, 2U))) + (_UINT64) ref) + 4LL);
          }
          pred_SAD_uplayer = __cselect_preg_w2c_7 / (_INT32)(2U);
        }
        else
        {
          if((_INT32)(blocktype) == (_INT32)(4U))
          {
            (pred_MV_uplayer)[0U] = (_INT32) ** (*(*(*(*(all_mv + (_INT64)(_I4ASHR(mb_x, 2U))) + (_INT64)(_I4ASHR(mb_y, 2U))) + (_UINT64) list) + (_UINT64) ref) + 2LL);
            (pred_MV_uplayer)[1U] = (_INT32) * (*(*(*(*(*(all_mv + (_INT64)(_I4ASHR(mb_x, 2U))) + (_INT64)(_I4ASHR(mb_y, 2U))) + (_UINT64) list) + (_UINT64) ref) + 2LL) + 1LL);
            if((_INT32)((_UINT64) list) == (_INT32)(1U))
            {
              __cselect_preg_w2c_8 = ** (** (*(all_bwmincost + (_INT64)(_I4ASHR((img) -> pix_x, 2U) + _I4ASHR(mb_x, 2U))) + (_INT64)(_I4ASHR((img) -> pix_y, 2U) + _I4ASHR(mb_y, 2U))) + 2LL);
            }
            else
            {
              __cselect_preg_w2c_8 = ** (*(*(*(all_mincost + (_INT64)(_I4ASHR((img) -> pix_x, 2U) + _I4ASHR(mb_x, 2U))) + (_INT64)(_I4ASHR((img) -> pix_y, 2U) + _I4ASHR(mb_y, 2U))) + (_UINT64) ref) + 2LL);
            }
            pred_SAD_uplayer = __cselect_preg_w2c_8 / (_INT32)(2U);
          }
          else
          {
            if((_INT32)(blocktype) > (_INT32)(1U))
            {
              (pred_MV_uplayer)[0U] = (_INT32) ** (*(*(*(*(all_mv + (_INT64)(_I4ASHR(mb_x, 2U))) + (_INT64)(_I4ASHR(mb_y, 2U))) + (_UINT64) list) + (_UINT64) ref) + 1LL);
              (pred_MV_uplayer)[1U] = (_INT32) * (*(*(*(*(*(all_mv + (_INT64)(_I4ASHR(mb_x, 2U))) + (_INT64)(_I4ASHR(mb_y, 2U))) + (_UINT64) list) + (_UINT64) ref) + 1LL) + 1LL);
              if((_INT32)((_UINT64) list) == (_INT32)(1U))
              {
                __cselect_preg_w2c_9 = ** (** (*(all_bwmincost + (_INT64)(_I4ASHR((img) -> pix_x, 2U) + _I4ASHR(mb_x, 2U))) + (_INT64)(_I4ASHR((img) -> pix_y, 2U) + _I4ASHR(mb_y, 2U))) + 1LL);
              }
              else
              {
                __cselect_preg_w2c_9 = ** (*(*(*(all_mincost + (_INT64)(_I4ASHR((img) -> pix_x, 2U) + _I4ASHR(mb_x, 2U))) + (_INT64)(_I4ASHR((img) -> pix_y, 2U) + _I4ASHR(mb_y, 2U))) + (_UINT64) ref) + 1LL);
              }
              pred_SAD_uplayer = __cselect_preg_w2c_9 / (_INT32)(2U);
            }
          }
        }
      }
    }
    if(flag_intra_SAD == (_INT32)(0U))
    {
      __cselect_preg_w2c_10 = pred_SAD_uplayer;
    }
    else
    {
      __cselect_preg_w2c_10 = 0U;
    }
    pred_SAD_uplayer = __cselect_preg_w2c_10;
    if((img) -> number > ((_INT32)((_UINT64) ref) + (_INT32)(1U)))
    {
      pred_SAD_time = ** (*(*(*(all_mincost + (_INT64)(_I4ASHR((img) -> pix_x, 2U) + _I4ASHR(mb_x, 2U))) + (_INT64)(_I4ASHR((img) -> pix_y, 2U) + _I4ASHR(mb_y, 2U))) + (_UINT64) ref) + blocktype);
      (pred_MV_time)[0U] = *(*(*(*(*(all_mincost + (_INT64)(_I4ASHR((img) -> pix_x, 2U) + _I4ASHR(mb_x, 2U))) + (_INT64)(_I4ASHR((img) -> pix_y, 2U) + _I4ASHR(mb_y, 2U))) + (_UINT64) ref) + blocktype) + 1LL);
      (pred_MV_time)[1U] = *(*(*(*(*(all_mincost + (_INT64)(_I4ASHR((img) -> pix_x, 2U) + _I4ASHR(mb_x, 2U))) + (_INT64)(_I4ASHR((img) -> pix_y, 2U) + _I4ASHR(mb_y, 2U))) + (_UINT64) ref) + blocktype) + 2LL);
    }
    if(((_INT32)((_UINT64) list) == (_INT32)(1U)) && ((Bframe_ctr % N_Bframe) > (_INT32)(1U)))
    {
      pred_SAD_time = ** (*(*(*(all_bwmincost + (_INT64)(_I4ASHR((img) -> pix_x, 2U) + _I4ASHR(mb_x, 2U))) + (_INT64)(_I4ASHR((img) -> pix_y, 2U) + _I4ASHR(mb_y, 2U))) + (_UINT64) ref) + blocktype);
      if(n_Bframe == (_INT32)(1U))
      {
        __cselect_preg_w2c_11 = (_IEEE64)(N_Bframe);
        __cselect_preg_w2c_12 = (_IEEE64)(N_Bframe);
      }
      else
      {
        __cselect_preg_w2c_11 = ((_IEEE64)((N_Bframe - n_Bframe)) + 1.0) / ((_IEEE64)((N_Bframe - n_Bframe)) + 2.0);
        __cselect_preg_w2c_12 = ((_IEEE64)((N_Bframe - n_Bframe)) + 1.0) / ((_IEEE64)((N_Bframe - n_Bframe)) + 2.0);
      }
      (pred_MV_time)[0U] = _I4F8TRUNC((_IEEE64)(*(*(** (*(all_bwmincost + (_INT64)(_I4ASHR((img) -> pix_x, 2U) + _I4ASHR(mb_x, 2U))) + (_INT64)(_I4ASHR((img) -> pix_y, 2U) + _I4ASHR(mb_y, 2U))) + blocktype) + 1LL)) * __cselect_preg_w2c_11);
      (pred_MV_time)[1U] = _I4F8TRUNC((_IEEE64)(*(*(** (*(all_bwmincost + (_INT64)(_I4ASHR((img) -> pix_x, 2U) + _I4ASHR(mb_x, 2U))) + (_INT64)(_I4ASHR((img) -> pix_y, 2U) + _I4ASHR(mb_y, 2U))) + blocktype) + 2LL)) * __cselect_preg_w2c_12);
    }
    if((input) -> PicInterlace == (_INT32)(1U))
    {
      if(((img) -> type == (_INT32)(0U)) && ((_INT32)((_UINT64) ref) > (_INT32)(1U)))
      {
        pred_SAD_ref = ** (*((*(*(all_mincost + (_INT64)(_I4ASHR((img) -> pix_x, 2U) + _I4ASHR(mb_x, 2U))) + (_INT64)(_I4ASHR((img) -> pix_y, 2U) + _I4ASHR(mb_y, 2U))) + (_UINT64) ref) + -2LL) + blocktype);
        if(flag_intra_SAD == (_INT32)(0U))
        {
          __cselect_preg_w2c_13 = pred_SAD_ref;
        }
        else
        {
          __cselect_preg_w2c_13 = 0U;
        }
        pred_SAD_ref = __cselect_preg_w2c_13;
        (pred_MV_ref)[0U] = *(*(*((*(*(all_mincost + (_INT64)(_I4ASHR((img) -> pix_x, 2U) + _I4ASHR(mb_x, 2U))) + (_INT64)(_I4ASHR((img) -> pix_y, 2U) + _I4ASHR(mb_y, 2U))) + (_UINT64) ref) + -2LL) + blocktype) + 1LL);
        (pred_MV_ref)[0U] = _I4F4TRUNC((_IEEE32)(((pred_MV_ref)[0U] * ((_INT32)((_INT16)(_I4ASHR((_INT32)((_UINT64) ref), (_INT32)(1U)))) + (_INT32)(1U)))) / (_IEEE32)(_I4ASHR((_INT32)((_UINT64) ref), (_INT32)(1U))));
        (pred_MV_ref)[1U] = *(*(*((*(*(all_mincost + (_INT64)(_I4ASHR((img) -> pix_x, 2U) + _I4ASHR(mb_x, 2U))) + (_INT64)(_I4ASHR((img) -> pix_y, 2U) + _I4ASHR(mb_y, 2U))) + (_UINT64) ref) + -2LL) + blocktype) + 2LL);
        (pred_MV_ref)[1U] = _I4F4TRUNC((_IEEE32)(((pred_MV_ref)[1U] * ((_INT32)((_INT16)(_I4ASHR((_INT32)((_UINT64) ref), (_INT32)(1U)))) + (_INT32)(1U)))) / (_IEEE32)(_I4ASHR((_INT32)((_UINT64) ref), (_INT32)(1U))));
      }
      if((((img) -> type == (_INT32)(1U)) && ((_INT32)((_UINT64) list) == (_INT32)(0U))) && ((_UINT32)((_UINT16)((_INT32)((_UINT64) ref))) <= 1U))
      {
        pred_SAD_ref = ** (** (*(all_bwmincost + (_INT64)(_I4ASHR((img) -> pix_x, 2U) + _I4ASHR(mb_x, 2U))) + (_INT64)(_I4ASHR((img) -> pix_y, 2U) + _I4ASHR(mb_y, 2U))) + blocktype);
        if(flag_intra_SAD == (_INT32)(0U))
        {
          __cselect_preg_w2c_14 = pred_SAD_ref;
        }
        else
        {
          __cselect_preg_w2c_14 = 0U;
        }
        pred_SAD_ref = __cselect_preg_w2c_14;
        (pred_MV_ref)[0U] = _I4F4TRUNC((_IEEE32)((-(*(*(*(*(*(all_bwmincost + (_INT64)(_I4ASHR((img) -> pix_x, 2U) + _I4ASHR(mb_x, 2U))) + (_INT64)(_I4ASHR((img) -> pix_y, 2U) + _I4ASHR(mb_y, 2U))) + (_UINT64) ref) + blocktype) + 1LL) * n_Bframe))) / ((_IEEE32)((N_Bframe - n_Bframe)) + 1.0F));
        (pred_MV_ref)[1U] = _I4F4TRUNC((_IEEE32)((-(*(*(*(*(*(all_bwmincost + (_INT64)(_I4ASHR((img) -> pix_x, 2U) + _I4ASHR(mb_x, 2U))) + (_INT64)(_I4ASHR((img) -> pix_y, 2U) + _I4ASHR(mb_y, 2U))) + (_UINT64) ref) + blocktype) + 2LL) * n_Bframe))) / ((_IEEE32)((N_Bframe - n_Bframe)) + 1.0F));
      }
    }
    else
    {
      if((_INT32)((_UINT64) ref) > (_INT32)(0U))
      {
        pred_SAD_ref = ** (*((*(*(all_mincost + (_INT64)(_I4ASHR((img) -> pix_x, 2U) + _I4ASHR(mb_x, 2U))) + (_INT64)(_I4ASHR((img) -> pix_y, 2U) + _I4ASHR(mb_y, 2U))) + (_UINT64) ref) + -1LL) + blocktype);
        if(flag_intra_SAD == (_INT32)(0U))
        {
          __cselect_preg_w2c_15 = pred_SAD_ref;
        }
        else
        {
          __cselect_preg_w2c_15 = 0U;
        }
        pred_SAD_ref = __cselect_preg_w2c_15;
        (pred_MV_ref)[0U] = *(*(*((*(*(all_mincost + (_INT64)(_I4ASHR((img) -> pix_x, 2U) + _I4ASHR(mb_x, 2U))) + (_INT64)(_I4ASHR((img) -> pix_y, 2U) + _I4ASHR(mb_y, 2U))) + (_UINT64) ref) + -1LL) + blocktype) + 1LL);
        (pred_MV_ref)[0U] = _I4F4TRUNC((_IEEE32)(((pred_MV_ref)[0U] * ((_INT32)((_UINT64) ref) + (_INT32)(1U)))) / (_IEEE32)((_UINT64) ref));
        (pred_MV_ref)[1U] = *(*(*((*(*(all_mincost + (_INT64)(_I4ASHR((img) -> pix_x, 2U) + _I4ASHR(mb_x, 2U))) + (_INT64)(_I4ASHR((img) -> pix_y, 2U) + _I4ASHR(mb_y, 2U))) + (_UINT64) ref) + -1LL) + blocktype) + 2LL);
        (pred_MV_ref)[1U] = _I4F4TRUNC((_IEEE32)(((pred_MV_ref)[1U] * ((_INT32)((_UINT64) ref) + (_INT32)(1U)))) / (_IEEE32)((_UINT64) ref));
      }
      if(((img) -> type == (_INT32)(1U)) && (((_INT32)((_UINT64) list) == (_INT32)(0U)) && ((_INT32)((_UINT64) ref) == (_INT32)(0U))))
      {
        pred_SAD_ref = ** (** (*(all_bwmincost + (_INT64)(_I4ASHR((img) -> pix_x, 2U) + _I4ASHR(mb_x, 2U))) + (_INT64)(_I4ASHR((img) -> pix_y, 2U) + _I4ASHR(mb_y, 2U))) + blocktype);
        if(flag_intra_SAD == (_INT32)(0U))
        {
          __cselect_preg_w2c_16 = pred_SAD_ref;
        }
        else
        {
          __cselect_preg_w2c_16 = 0U;
        }
        pred_SAD_ref = __cselect_preg_w2c_16;
        (pred_MV_ref)[0U] = _I4F4TRUNC((_IEEE32)((-(*(*(*(*(*(all_bwmincost + (_INT64)(_I4ASHR((img) -> pix_x, 2U) + _I4ASHR(mb_x, 2U))) + (_INT64)(_I4ASHR((img) -> pix_y, 2U) + _I4ASHR(mb_y, 2U))) + (_UINT64) ref) + blocktype) + 1LL) * n_Bframe))) / ((_IEEE32)((N_Bframe - n_Bframe)) + 1.0F));
        (pred_MV_ref)[1U] = _I4F4TRUNC((_IEEE32)((-(*(*(*(*(*(all_bwmincost + (_INT64)(_I4ASHR((img) -> pix_x, 2U) + _I4ASHR(mb_x, 2U))) + (_INT64)(_I4ASHR((img) -> pix_y, 2U) + _I4ASHR(mb_y, 2U))) + (_UINT64) ref) + blocktype) + 2LL) * n_Bframe))) / ((_IEEE32)((N_Bframe - n_Bframe)) + 1.0F));
      }
    }
  }
  if((input) -> FMEnable != (_INT32)(0U))
  {
    FME_blocktype = (_INT32)(blocktype);
  }
  SetMotionVectorPredictor(pred_mv, (enc_picture) -> ref_idx, (enc_picture) -> mv, (_INT16)(_INT32)((_UINT64) ref), (_INT32)((_UINT64) list), _I4ASHR(mb_x, (_INT32)(2U)), _I4ASHR(mb_y, (_INT32)(2U)), bsx, bsy);
  pred_mv_x = *pred_mv;
  pred_mv_y = *(pred_mv + 1LL);
  if((input) -> FMEnable != (_INT32)(0U))
  {
    mv_x = (_INT32)(pred_mv_x) / (_INT32)(4U);
    mv_y = (_INT32)(pred_mv_y) / (_INT32)(4U);
    if((input) -> rdopt == (_INT32)(0U))
    {
      mv_x = _I4MAX(_I4MIN((_INT32)(mv_x), search_range), -search_range);
      mv_y = _I4MAX(_I4MIN((_INT32)(mv_y), search_range), -search_range);
    }
    __comma_preg_w2c_0 = FastIntegerPelBlockMotionSearch(orig_pic_w2c_10078, (_INT16)(_INT32)((_UINT64) ref), (_INT32)((_UINT64) list), pic_pix_x, pic_pix_y, (_INT32)(blocktype), pred_mv_x, pred_mv_y, &mv_x, &mv_y, search_range, (_INT32) 2147483647U, lambda);
    min_mcost = __comma_preg_w2c_0;
    _ub17_preg = _I4ASHR(bsx, (_INT32)(2U)) + -1;
    for(i_preg_w2c_0 = 0U; i_preg_w2c_0 <= _ub17_preg; i_preg_w2c_0 = i_preg_w2c_0 + (_INT32)(1U))
    {
      _ub18_preg = _I4ASHR(bsy, (_INT32)(2U)) + -1;
      for(j_preg_w2c_0 = 0U; j_preg_w2c_0 <= _ub18_preg; j_preg_w2c_0 = j_preg_w2c_0 + (_INT32)(1U))
      {
        if((_INT32)((_UINT64) list) == (_INT32)(0U))
        {
          ** (*(*((all_mincost)[(_INT64)(i_preg_w2c_0 + (_I4ASHR(((img)[38LL]).number, 2U) + _I4ASHR(mb_x, 2U)))] + (_INT64)(j_preg_w2c_0 + (_I4ASHR(((img)[39LL]).number, 2U) + _I4ASHR(mb_y, 2U)))) + (_UINT64) ref) + blocktype) = min_mcost;
        }
        else
        {
          ** (*(*((all_bwmincost)[(_INT64)(i_preg_w2c_0 + (_I4ASHR(((img)[38LL]).number, 2U) + _I4ASHR(mb_x, 2U)))] + (_INT64)(j_preg_w2c_0 + (_I4ASHR(((img)[39LL]).number, 2U) + _I4ASHR(mb_y, 2U)))) + (_UINT64) ref) + blocktype) = min_mcost;
        }
      }
    }
  }
  else
  {
    __comma_preg_w2c_1 = FastFullPelBlockMotionSearch(orig_pic_w2c_10078, (_INT16)(_INT32)((_UINT64) ref), (_INT32)((_UINT64) list), pic_pix_x, pic_pix_y, (_INT32)(blocktype), pred_mv_x, pred_mv_y, &mv_x, &mv_y, search_range, (_INT32) 2147483647U, lambda);
    min_mcost = __comma_preg_w2c_1;
  }
  if(((input) -> hadamard != (_INT32)(0U)) && ((input) -> hadamardqpel == (_INT32)(0U)))
  {
    min_mcost = 2147483647U;
  }
  if((input) -> FMEnable != (_INT32)(0U))
  {
    if((_INT32)(blocktype) > (_INT32)(3U))
    {
      __comma_preg_w2c_2 = FastSubPelBlockMotionSearch(orig_pic_w2c_10078, (_INT16)(_INT32)((_UINT64) ref), (_INT32)((_UINT64) list), pic_pix_x, pic_pix_y, (_INT32)(blocktype), pred_mv_x, pred_mv_y, &mv_x, &mv_y, (_INT32) 9U, (_INT32) 9U, min_mcost, lambda, (_INT32) 0U);
      min_mcost = __comma_preg_w2c_2;
    }
    else
    {
      __comma_preg_w2c_3 = SubPelBlockMotionSearch(orig_pic_w2c_10078, (_INT16)(_INT32)((_UINT64) ref), (_INT32)((_UINT64) list), pic_pix_x, pic_pix_y, (_INT32)(blocktype), pred_mv_x, pred_mv_y, &mv_x, &mv_y, (_INT32) 9U, (_INT32) 9U, min_mcost, lambda);
      min_mcost = __comma_preg_w2c_3;
    }
    _ub19_preg = _I4ASHR(bsx, (_INT32)(2U)) + -1;
    for(i_preg_w2c_1 = 0U; i_preg_w2c_1 <= _ub19_preg; i_preg_w2c_1 = i_preg_w2c_1 + (_INT32)(1U))
    {
      _ub20_preg = _I4ASHR(bsy, (_INT32)(2U)) + -1;
      for(j_preg_w2c_1 = 0U; j_preg_w2c_1 <= _ub20_preg; j_preg_w2c_1 = j_preg_w2c_1 + (_INT32)(1U))
      {
        if((_INT32)((_UINT64) list) == (_INT32)(0U))
        {
          * (*(*(*((all_mincost)[(_INT64)(i_preg_w2c_1 + (_I4ASHR(((img)[38LL]).number, 2U) + _I4ASHR(mb_x, 2U)))] + (_INT64)(j_preg_w2c_1 + (_I4ASHR(((img)[39LL]).number, 2U) + _I4ASHR(mb_y, 2U)))) + (_UINT64) ref) + blocktype) + 1LL) = (_INT32) mv_x;
          * (*(*(*((all_mincost)[(_INT64)(i_preg_w2c_1 + (_I4ASHR(((img)[38LL]).number, 2U) + _I4ASHR(mb_x, 2U)))] + (_INT64)(j_preg_w2c_1 + (_I4ASHR(((img)[39LL]).number, 2U) + _I4ASHR(mb_y, 2U)))) + (_UINT64) ref) + blocktype) + 2LL) = (_INT32) mv_y;
        }
        else
        {
          * (*(*(*((all_bwmincost)[(_INT64)(i_preg_w2c_1 + (_I4ASHR(((img)[38LL]).number, 2U) + _I4ASHR(mb_x, 2U)))] + (_INT64)(j_preg_w2c_1 + (_I4ASHR(((img)[39LL]).number, 2U) + _I4ASHR(mb_y, 2U)))) + (_UINT64) ref) + blocktype) + 1LL) = (_INT32) mv_x;
          * (*(*(*((all_bwmincost)[(_INT64)(i_preg_w2c_1 + (_I4ASHR(((img)[38LL]).number, 2U) + _I4ASHR(mb_x, 2U)))] + (_INT64)(j_preg_w2c_1 + (_I4ASHR(((img)[39LL]).number, 2U) + _I4ASHR(mb_y, 2U)))) + (_UINT64) ref) + blocktype) + 2LL) = (_INT32) mv_y;
        }
      }
    }
  }
  else
  {
    if(((input) -> hadamard != (_INT32)(0U)) && ((input) -> hadamardqpel == (_INT32)(0U)))
    {
      min_mcost = 2147483647U;
    }
    __comma_preg_w2c_4 = SubPelBlockMotionSearch(orig_pic_w2c_10078, (_INT16)(_INT32)((_UINT64) ref), (_INT32)((_UINT64) list), pic_pix_x, pic_pix_y, (_INT32)(blocktype), pred_mv_x, pred_mv_y, &mv_x, &mv_y, (_INT32) 9U, (_INT32) 9U, min_mcost, lambda);
    min_mcost = __comma_preg_w2c_4;
  }
  if((input) -> rdopt == (_INT32)(0U))
  {
    if(((_INT32)(blocktype) == (_INT32)(1U)) && (((img) -> type == (_INT32)(0U)) || ((img) -> type == (_INT32)(3U))))
    {
      FindSkipModeMotionVector();
      __comma_preg_w2c_5 = GetSkipCostMB(lambda);
      if(min_mcost > (__comma_preg_w2c_5 - _I4F8TRUNC(_F8F8FLOOR((lambda * 8.0) + 4.99900000000000011013e-01))))
      {
        min_mcost = __comma_preg_w2c_5 - _I4F8TRUNC(_F8F8FLOOR((lambda * 8.0) + 4.99900000000000011013e-01));
        mv_x = ******* (((_INT16 *******)(img) + 8192LL) + 799LL);
        mv_y = *(****** (((_INT16 *******)(img) + 8192LL) + 799LL) + 1LL);
      }
    }
  }
  if((input) -> FMEnable != (_INT32)(0U))
  {
    h4x4blkno = _I4ASHR((img) -> pix_x, (_INT32)(2U)) + _I4ASHR(mb_x, (_INT32)(2U));
    v4x4blkno = _I4ASHR((img) -> pix_y, (_INT32)(2U)) + _I4ASHR(mb_y, (_INT32)(2U));
    _ub21_preg = _I4ASHR(bsx, (_INT32)(2U)) + -1;
    for(i_preg_w2c_2 = 0U; i_preg_w2c_2 <= _ub21_preg; i_preg_w2c_2 = i_preg_w2c_2 + (_INT32)(1U))
    {
      _ub22_preg = _I4ASHR(bsy, (_INT32)(2U)) + -1;
      for(j_preg_w2c_2 = 0U; j_preg_w2c_2 <= _ub22_preg; j_preg_w2c_2 = j_preg_w2c_2 + (_INT32)(1U))
      {
        ** (*(*(*((all_mv)[(_INT64)(i_preg_w2c_2 + _I4ASHR(mb_x, 2U))] + (_INT64)(j_preg_w2c_2 + _I4ASHR(mb_y, 2U))) + (_UINT64) list) + (_UINT64) ref) + blocktype) = mv_x;
        * (*(*(*(*((all_mv)[(_INT64)(i_preg_w2c_2 + _I4ASHR(mb_x, 2U))] + (_INT64)(j_preg_w2c_2 + _I4ASHR(mb_y, 2U))) + (_UINT64) list) + (_UINT64) ref) + blocktype) + 1LL) = mv_y;
        ** ((mv_array)[(_INT64)(h4x4blkno + i_preg_w2c_2)] + (_INT64)(v4x4blkno + j_preg_w2c_2)) = mv_x;
        * (*((mv_array)[(_INT64)(h4x4blkno + i_preg_w2c_2)] + (_INT64)(v4x4blkno + j_preg_w2c_2)) + 1LL) = mv_y;
      }
    }
  }
  else
  {
    _ub23_preg = _I4ASHR(bsx, (_INT32)(2U)) + -1;
    for(i_preg_w2c_3 = 0U; i_preg_w2c_3 <= _ub23_preg; i_preg_w2c_3 = i_preg_w2c_3 + (_INT32)(1U))
    {
      _ub24_preg = _I4ASHR(bsy, (_INT32)(2U)) + -1;
      for(j_preg_w2c_3 = 0U; j_preg_w2c_3 <= _ub24_preg; j_preg_w2c_3 = j_preg_w2c_3 + (_INT32)(1U))
      {
        ** (*(*(*((all_mv)[(_INT64)(i_preg_w2c_3 + _I4ASHR(mb_x, 2U))] + (_INT64)(j_preg_w2c_3 + _I4ASHR(mb_y, 2U))) + (_UINT64) list) + (_UINT64) ref) + blocktype) = mv_x;
        * (*(*(*(*((all_mv)[(_INT64)(i_preg_w2c_3 + _I4ASHR(mb_x, 2U))] + (_INT64)(j_preg_w2c_3 + _I4ASHR(mb_y, 2U))) + (_UINT64) list) + (_UINT64) ref) + blocktype) + 1LL) = mv_y;
      }
    }
  }
  if(((((img) -> type == (_INT32)(1U)) && ((input) -> BiPredMotionEstimation != (_INT32)(0U))) && ((_INT32)(blocktype) == (_INT32)(1U))) && ((_INT32)((_UINT64) ref) == (_INT32)(0U)))
  {
    if((_INT32)((_UINT64) list) != (_INT32)(0U))
    {
      __cselect_preg_w2c_17 = (_UINT64)(*(((_INT16 *******)(img) + 8192LL) + 800LL));
    }
    else
    {
      __cselect_preg_w2c_17 = (_UINT64)(*(((_INT16 *******)(img) + 8192LL) + 801LL));
    }
    min_mcostbi = 2147483647U;
    pred_mv_x_w2c_2 = 0U;
    pred_mv_y_w2c_2 = 0U;
    iterlist = (_INT32)((_UINT64) list);
    SetMotionVectorPredictor(pred_mv_bi, (enc_picture) -> ref_idx, (enc_picture) -> mv, (_INT16) 0U, (_INT32)((_UINT64) list) == (_INT32)(0U), _I4ASHR(mb_x, (_INT32)(2U)), _I4ASHR(mb_y, (_INT32)(2U)), bsx, bsy);
    mv_x = _I4ASHR((_INT32) mv_x + (_INT32)(2U), (_INT32)(2U));
    mv_y = _I4ASHR((_INT32) mv_y + (_INT32)(2U), (_INT32)(2U));
    whiledo_var_preg = 0U;
    while((input) -> BiPredMERefinements >= whiledo_var_preg)
    {
      if(whiledo_var_preg & (_INT32)(1U))
      {
        pred_mv_x_w2c_2 = *pred_mv;
        pred_mv_y_w2c_2 = *(pred_mv + 1LL);
        pred_mv_x_w2c_1 = (pred_mv_bi)[0U];
        pred_mv_y_w2c_1 = (pred_mv_bi)[1U];
        tempmv_x = bimv_x;
        tempmv_y = bimv_y;
        bimv_x = mv_x;
        bimv_y = mv_y;
        iterlist = (_INT32)((_UINT64) list) == (_INT32)(0U);
      }
      else
      {
        pred_mv_x_w2c_1 = *pred_mv;
        pred_mv_y_w2c_1 = *(pred_mv + 1LL);
        pred_mv_x_w2c_2 = (pred_mv_bi)[0U];
        pred_mv_y_w2c_2 = (pred_mv_bi)[1U];
        if(whiledo_var_preg != (_INT32)(0U))
        {
          tempmv_x = bimv_x;
          tempmv_y = bimv_y;
          bimv_x = mv_x;
          bimv_y = mv_y;
        }
        else
        {
          tempmv_x = mv_x;
          tempmv_y = mv_y;
          bimv_x = _I4ASHR((_INT32)(pred_mv_x_w2c_2) + (_INT32)(2U), (_INT32)(2U));
          bimv_y = _I4ASHR((_INT32)(pred_mv_y_w2c_2) + (_INT32)(2U), (_INT32)(2U));
        }
        iterlist = (_INT32)((_UINT64) list);
      }
      __comma_preg_w2c_6 = FullPelBlockMotionBiPred(orig_pic_w2c_10078, (_INT16)(_INT32)((_UINT64) ref), iterlist, pic_pix_x, pic_pix_y, (_INT32)(blocktype), whiledo_var_preg, (_INT16)(_INT32) pred_mv_x_w2c_1, (_INT16)(_INT32) pred_mv_y_w2c_1, (_INT16)(_INT32) pred_mv_x_w2c_2, (_INT16)(_INT32) pred_mv_y_w2c_2, &bimv_x, &bimv_y, &tempmv_x, &tempmv_y, _I4ASHR((input) -> BiPredMESearchRange, whiledo_var_preg), min_mcostbi, lambda);
      min_mcostbi = __comma_preg_w2c_6;
      mv_x = tempmv_x;
      mv_y = tempmv_y;
      whiledo_var_preg = whiledo_var_preg + (_INT32)(1U);
    }
    tempmv_x = _I4SHL((_INT32) tempmv_x, (_INT32)(2U));
    tempmv_y = _I4SHL((_INT32) tempmv_y, (_INT32)(2U));
    if((input) -> BiPredMESubPel != (_INT32)(0U))
    {
      if((input) -> hadamard != (_INT32)(0U))
      {
        min_mcostbi = 2147483647U;
      }
      __comma_preg = SubPelBlockSearchBiPred(orig_pic_w2c_10078, (_INT16) 0U, iterlist, pic_pix_x, pic_pix_y, (_INT32)(blocktype), (_INT16)(_INT32) pred_mv_x_w2c_2, (_INT16)(_INT32) pred_mv_y_w2c_2, &bimv_x, &bimv_y, &tempmv_x, &tempmv_y, (_INT32) 9U, (_INT32) 9U, min_mcostbi, lambda * 5.0e-01);
      min_mcostbi = __comma_preg;
    }
    else
    {
      bimv_x = _I4SHL((_INT32)(bimv_x), (_INT32)(2U));
      bimv_y = _I4SHL((_INT32)(bimv_y), (_INT32)(2U));
    }
    if((input) -> BiPredMESubPel == (_INT32)(2U))
    {
      if((input) -> hadamard != (_INT32)(0U))
      {
        min_mcostbi = 2147483647U;
      }
      SubPelBlockSearchBiPred(orig_pic_w2c_10078, (_INT16) 0U, (_INT32)(iterlist) == (_INT32)(0U), pic_pix_x, pic_pix_y, (_INT32)(blocktype), pred_mv_x, pred_mv_y, &mv_x, &mv_y, &bimv_x, &bimv_y, (_INT32) 9U, (_INT32) 9U, min_mcostbi, lambda * 5.0e-01);
    }
    else
    {
      mv_x = tempmv_x;
      mv_y = tempmv_y;
    }
    _ub25_preg = _I4ASHR(bsx, (_INT32)(2U)) + -1;
    for(i_preg_w2c_4 = 0U; i_preg_w2c_4 <= _ub25_preg; i_preg_w2c_4 = i_preg_w2c_4 + (_INT32)(1U))
    {
      _ub26_preg = _I4ASHR(bsy, (_INT32)(2U)) + -1;
      for(j_preg_w2c_4 = 0U; j_preg_w2c_4 <= _ub26_preg; j_preg_w2c_4 = j_preg_w2c_4 + (_INT32)(1U))
      {
        ** (** (*(*(_INT16 ******)(((_UINT8(*)[8LL]) __cselect_preg_w2c_17)[(_INT64)(i_preg_w2c_4 + _I4ASHR(mb_x, 2U))]) + (_INT64)(j_preg_w2c_4 + _I4ASHR(mb_y, 2U))) + iterlist) + blocktype) = mv_x;
        * (*(** (*(*(_INT16 ******)(((_UINT8(*)[8LL]) __cselect_preg_w2c_17)[(_INT64)(i_preg_w2c_4 + _I4ASHR(mb_x, 2U))]) + (_INT64)(j_preg_w2c_4 + _I4ASHR(mb_y, 2U))) + iterlist) + blocktype) + 1LL) = mv_y;
        if((_INT32)(iterlist) == (_INT32)(0U))
        {
          __cselect_preg = 8U;
          __cselect_preg_w2c_0 = 8U;
        }
        else
        {
          __cselect_preg = 0U;
          __cselect_preg_w2c_0 = 0U;
        }
        ** (** (_INT16 ****)((_UINT8 *)(*(*(_INT16 ******)(((_UINT8(*)[8LL]) __cselect_preg_w2c_17)[(_INT64)(i_preg_w2c_4 + _I4ASHR(mb_x, 2U))]) + (_INT64)(j_preg_w2c_4 + _I4ASHR(mb_y, 2U)))) + __cselect_preg) + blocktype) = bimv_x;
        * (*(** (_INT16 ****)((_UINT8 *)(*(*(_INT16 ******)(((_UINT8(*)[8LL]) __cselect_preg_w2c_17)[(_INT64)(i_preg_w2c_4 + _I4ASHR(mb_x, 2U))]) + (_INT64)(j_preg_w2c_4 + _I4ASHR(mb_y, 2U)))) + __cselect_preg_w2c_0) + blocktype) + 1LL) = bimv_y;
      }
    }
  }
  ftime(&tstruct_w2c_2);
  me_tot_time = me_tot_time + (_INT32)(((_UINT32)((tstruct_w2c_2).millitm) + (_UINT32)(((tstruct_w2c_2).time * (_INT64)(1000U)))) - ((_UINT32)((tstruct_w2c_1).millitm) + (_UINT32)(((tstruct_w2c_1).time * (_INT64)(1000U)))));
  me_time = me_time + (_INT32)(((_UINT32)((tstruct_w2c_2).millitm) + (_UINT32)(((tstruct_w2c_2).time * (_INT64)(1000U)))) - ((_UINT32)((tstruct_w2c_1).millitm) + (_UINT32)(((tstruct_w2c_1).time * (_INT64)(1000U)))));
  return min_mcost;
} /* BlockMotionSearch */

