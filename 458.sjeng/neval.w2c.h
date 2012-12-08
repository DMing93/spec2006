/* Include builtin types and operators */
#include <whirl2c.h>

/* Types */
struct anonymous_w2c_1 {
    _UINT64 __val[16LL];
  };
  struct __va_list_tag {
    _UINT32 gp_offset;
    _UINT32 fp_offset;
    void * overflow_arg_area;
    void * reg_save_area;
  };
  struct _IO_marker {
      struct _IO_marker * _next;
      struct _IO_FILE * _sbuf;
      _INT32 _pos;
    };
    struct _IO_FILE {
    _INT32 _flags;
    _INT8 * _IO_read_ptr;
    _INT8 * _IO_read_end;
    _INT8 * _IO_read_base;
    _INT8 * _IO_write_base;
    _INT8 * _IO_write_ptr;
    _INT8 * _IO_write_end;
    _INT8 * _IO_buf_base;
    _INT8 * _IO_buf_end;
    _INT8 * _IO_save_base;
    _INT8 * _IO_backup_base;
    _INT8 * _IO_save_end;
    struct _IO_marker * _markers;
    struct _IO_FILE * _chain;
    _INT32 _fileno;
    _INT32 _flags2;
    _INT64 _old_offset;
    _UINT16 _cur_column;
    _INT8 _vtable_offset;
    _INT8 _shortbuf[1LL];
    void * _lock;
    _INT64 _offset;
    void * __pad1;
    void * __pad2;
    void * __pad3;
    void * __pad4;
    _UINT64 __pad5;
    _INT32 _mode;
    _INT8 _unused2[20LL];
  };
  static _INT32 dir_w2c_4509[4LL] = {-13, -11, 11, 13};
  static _INT32 dir_w2c_4527[4LL] = {-1, 1, 12, -12};
  static _INT32 square_d_w2c_14577[2LL] = {29, 113};
  static _INT8 __PRETTY_FUNCTION___w2c_4715[9LL] = "std_eval";
  /* File-level vars and routines */
extern __inline _INT32 tolower(_INT32);

extern const _INT32 ** __ctype_tolower_loc(void);

extern __inline _INT32 toupper(_INT32);

extern const _INT32 ** __ctype_toupper_loc(void);

extern __inline _INT32 __sigismember(const struct anonymous_w2c_1 *, _INT32);

extern __inline _INT32 __sigaddset(struct anonymous_w2c_1 *, _INT32);

extern __inline _INT32 __sigdelset(struct anonymous_w2c_1 *, _INT32);

extern __inline _IEEE64 strtod(const _INT8 * restrict, _INT8 ** restrict);

extern _IEEE64 __strtod_internal(const _INT8 * restrict, _INT8 ** restrict, _INT32);

extern __inline _INT64 strtol(const _INT8 * restrict, _INT8 ** restrict, _INT32);

extern _INT64 __strtol_internal(const _INT8 * restrict, _INT8 ** restrict, _INT32, _INT32);

extern __inline _UINT64 strtoul(const _INT8 * restrict, _INT8 ** restrict, _INT32);

extern _UINT64 __strtoul_internal(const _INT8 * restrict, _INT8 ** restrict, _INT32, _INT32);

extern __inline _INT64 strtoq(const _INT8 * restrict, _INT8 ** restrict, _INT32);

extern _INT64 __strtoll_internal(const _INT8 * restrict, _INT8 ** restrict, _INT32, _INT32);

extern __inline _UINT64 strtouq(const _INT8 * restrict, _INT8 ** restrict, _INT32);

extern _UINT64 __strtoull_internal(const _INT8 * restrict, _INT8 ** restrict, _INT32, _INT32);

extern __inline _INT64 strtoll(const _INT8 * restrict, _INT8 ** restrict, _INT32);

extern __inline _UINT64 strtoull(const _INT8 * restrict, _INT8 ** restrict, _INT32);

extern __inline _IEEE64 atof(const _INT8 *);

extern __inline _INT32 atoi(const _INT8 *);

extern __inline _INT64 atol(const _INT8 *);

extern __inline _INT64 atoll(const _INT8 *);

extern __inline _UINT32 gnu_dev_major(_UINT64);

extern __inline _UINT32 gnu_dev_minor(_UINT64);

extern __inline _UINT64 gnu_dev_makedev(_UINT32, _UINT32);

extern __inline _INT32 vprintf(const _INT8 * restrict, struct __va_list_tag *);

extern _INT32 vfprintf(struct _IO_FILE * restrict, const _INT8 * restrict, struct __va_list_tag *);

extern struct _IO_FILE * stdout;

extern __inline _INT32 getchar(void);

extern _INT32 _IO_getc(struct _IO_FILE *);

extern struct _IO_FILE * stdin;

extern __inline _INT32 fgetc_unlocked(struct _IO_FILE *);

extern _INT32 __uflow(struct _IO_FILE *);

extern __inline _INT32 getc_unlocked(struct _IO_FILE *);

extern __inline _INT32 getchar_unlocked(void);

extern __inline _INT32 putchar(_INT32);

extern _INT32 _IO_putc(_INT32, struct _IO_FILE *);

extern __inline _INT32 fputc_unlocked(_INT32, struct _IO_FILE *);

extern _INT32 __overflow(struct _IO_FILE *, _INT32);

extern __inline _INT32 putc_unlocked(_INT32, struct _IO_FILE *);

extern __inline _INT32 putchar_unlocked(_INT32);

extern __inline _INT32 feof_unlocked(struct _IO_FILE *);

extern __inline _INT32 ferror_unlocked(struct _IO_FILE *);

extern __inline _UINT64 __strcspn_c1(const _INT8 *, _INT32);

extern __inline _UINT64 __strcspn_c2(const _INT8 *, _INT32, _INT32);

extern __inline _UINT64 __strcspn_c3(const _INT8 *, _INT32, _INT32, _INT32);

extern __inline _UINT64 __strspn_c1(const _INT8 *, _INT32);

extern __inline _UINT64 __strspn_c2(const _INT8 *, _INT32, _INT32);

extern __inline _UINT64 __strspn_c3(const _INT8 *, _INT32, _INT32, _INT32);

extern __inline _INT8 * __strpbrk_c2(const _INT8 *, _INT32, _INT32);

extern __inline _INT8 * __strpbrk_c3(const _INT8 *, _INT32, _INT32, _INT32);

extern __inline _INT8 * __strtok_r_1c(_INT8 *, _INT8, _INT8 **);

extern __inline _INT8 * __strsep_1c(_INT8 **, _INT8);

extern void * __rawmemchr(const void *, _INT32);

extern __inline _INT8 * __strsep_2c(_INT8 **, _INT8, _INT8);

extern __inline _INT8 * __strsep_3c(_INT8 **, _INT8, _INT8, _INT8);

extern void check_phase(void);

extern _INT32 pieces[62LL];

extern _INT32 board[144LL];

extern _INT32 piece_count;

extern _INT32 white_castled;

extern _INT32 black_castled;

extern _INT32 phase;

static _INT32 bishop_mobility(_INT32);

static _INT32 rook_mobility(_INT32);

extern _INT32 King(_INT32, _INT32);

extern _INT32 Xfile[144LL];

extern _INT32 Queen(_INT32, _INT32);

_INT32 distance[144LL][144LL];

_INT32 king_locs[2LL];

extern _INT32 Rook(_INT32, _INT32);

_INT32 rookdistance[144LL][144LL];

_INT32 wmat;

_INT32 bmat;

extern _INT32 Bishop(_INT32, _INT32);

static _INT32 sbishop[144LL] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -2, -2, -2, -2, -2, -2, -2, -2, 0, 0, 0, 0, -2, 8, 5, 5, 5, 5, 8, -2, 0, 0, 0, 0, -2, 3, 3, 5, 5, 3, 3, -2, 0, 0, 0, 0, -2, 2, 5, 4, 4, 5, 2, -2, 0, 0, 0, 0, -2, 2, 5, 4, 4, 5, 2, -2, 0, 0, 0, 0, -2, 3, 3, 5, 5, 3, 3, -2, 0, 0, 0, 0, -2, 8, 5, 5, 5, 5, 8, -2, 0, 0, 0, 0, -2, -2, -2, -2, -2, -2, -2, -2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

extern _INT32 Knight(_INT32, _INT32);

static _INT32 sknight[144LL] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -20, -10, -10, -10, -10, -10, -10, -20, 0, 0, 0, 0, -10, 0, 0, 3, 3, 0, 0, -10, 0, 0, 0, 0, -10, 0, 5, 5, 5, 5, 0, -10, 0, 0, 0, 0, -10, 0, 5, 10, 10, 5, 0, -10, 0, 0, 0, 0, -10, 0, 5, 10, 10, 5, 0, -10, 0, 0, 0, 0, -10, 0, 5, 5, 5, 5, 0, -10, 0, 0, 0, 0, -10, 0, 0, 3, 3, 0, 0, -10, 0, 0, 0, 0, -20, -10, -10, -10, -10, -10, -10, -20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

extern _INT32 Pawn(_INT32, _INT32);

extern _INT32 ErrorIt(_INT32, _INT32);

extern _INT32 printf(const _INT8 *, ...);

extern _INT32 std_eval(_INT32, _INT32);

extern _INT32 white_to_move;

extern _INT32 Material;

_INT32 maxposdiff;

extern void checkECache(_INT32 *, _INT32 *);

extern _INT32 wking_loc;

extern _INT32 bking_loc;

extern void __assert_fail(const _INT8 *, const _INT8 *, _UINT32, const _INT8 *);

extern _INT32 material[14LL];

extern _INT32 Xrank[144LL];

static _INT32(*evalRoutines[7LL])(_INT32, _INT32) = {&ErrorIt, &Pawn, &Knight, &King, &Rook, &Queen, &Bishop};

static _INT32 swhite_pawn[144LL] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 2, 3, 10, 10, 3, 2, 1, 0, 0, 0, 0, 2, 4, 6, 12, 12, 6, 4, 2, 0, 0, 0, 0, 3, 6, 9, 14, 14, 9, 6, 3, 0, 0, 0, 0, 10, 12, 14, 16, 16, 14, 12, 10, 0, 0, 0, 0, 20, 22, 24, 26, 26, 24, 22, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

static _INT32 sblack_pawn[144LL] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 22, 24, 26, 26, 24, 22, 20, 0, 0, 0, 0, 10, 12, 14, 16, 16, 14, 12, 10, 0, 0, 0, 0, 3, 6, 9, 14, 14, 9, 6, 3, 0, 0, 0, 0, 2, 4, 6, 12, 12, 6, 4, 2, 0, 0, 0, 0, 1, 2, 3, 10, 10, 3, 2, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

static _INT32 swhite_king[144LL] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 14, 0, 0, 0, 9, 14, 2, 0, 0, 0, 0, -3, -5, -6, -6, -6, -6, -5, -3, 0, 0, 0, 0, -5, -5, -8, -8, -8, -8, -5, -5, 0, 0, 0, 0, -8, -8, -13, -13, -13, -13, -8, -8, 0, 0, 0, 0, -13, -13, -21, -21, -21, -21, -13, -13, 0, 0, 0, 0, -21, -21, -34, -34, -34, -34, -21, -21, 0, 0, 0, 0, -34, -34, -55, -55, -55, -55, -34, -34, 0, 0, 0, 0, -55, -55, -89, -89, -89, -89, -55, -55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

extern _INT32 moved[144LL];

static _INT32 send_king[144LL] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -5, -3, -1, 0, 0, -1, -3, -5, 0, 0, 0, 0, -3, 10, 10, 10, 10, 10, 10, -3, 0, 0, 0, 0, -1, 10, 25, 25, 25, 25, 10, -1, 0, 0, 0, 0, 0, 10, 25, 50, 50, 25, 10, 0, 0, 0, 0, 0, 0, 10, 25, 50, 50, 25, 10, 0, 0, 0, 0, 0, -1, 10, 25, 25, 25, 25, 10, -1, 0, 0, 0, 0, -3, 10, 10, 10, 10, 10, 10, -3, 0, 0, 0, 0, -5, -3, -1, 0, 0, -1, -3, -5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

static _INT32 sblack_king[144LL] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -55, -55, -89, -89, -89, -89, -55, -55, 0, 0, 0, 0, -34, -34, -55, -55, -55, -55, -34, -34, 0, 0, 0, 0, -21, -21, -34, -34, -34, -34, -21, -21, 0, 0, 0, 0, -13, -13, -21, -21, -21, -21, -13, -13, 0, 0, 0, 0, -8, -8, -13, -13, -13, -13, -8, -8, 0, 0, 0, 0, -5, -5, -8, -8, -8, -8, -5, -5, 0, 0, 0, 0, -3, -5, -6, -6, -6, -6, -5, -3, 0, 0, 0, 0, 2, 14, 0, 0, 0, 9, 14, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

extern void storeECache(_INT32);

