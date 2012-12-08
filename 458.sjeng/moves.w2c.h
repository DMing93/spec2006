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
  struct anonymous_w2c_6 {
    _INT32 from;
    _INT32 target;
    _INT32 captured;
    _INT32 promoted;
    _INT32 castled;
    _INT32 ep;
  };
  static _INT32 knight_o_w2c_4761[8LL] = {10, -10, 14, -14, 23, -23, 25, -25};
  static _INT32 knight_o_w2c_5012[8LL] = {10, -10, 14, -14, 23, -23, 25, -25};
  static _INT8 __PRETTY_FUNCTION___w2c_5095[5LL] = "make";
  static _INT8 __PRETTY_FUNCTION___w2c_5342[7LL] = "unmake";
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

extern _UINT32 check_legal(struct anonymous_w2c_6 *, _INT32, _INT32);

extern _INT32 Variant;

extern _UINT32 is_attacked(_INT32, _INT32);

extern _INT32 white_to_move;

extern _INT32 board[144LL];

extern _INT32 Xfile[144LL];

extern _INT32 bking_loc;

extern _INT32 Xrank[144LL];

extern _INT32 Xdiagl[144LL];

extern _INT32 Xdiagr[144LL];

extern _INT32 wking_loc;

extern void gen(struct anonymous_w2c_6 *);

_INT32 kingcap;

_INT32 numb_moves;

static struct anonymous_w2c_6 * genfor;

extern _UINT32 captures;

_UINT32 fcaptures;

extern _INT32 pieces[62LL];

_INT32 gfrom;

extern void push_pawn(_INT32, _UINT32);

extern void push_pawn_simple(_INT32);

extern _INT32 ep_square;

extern void push_knighT(_INT32);

extern void push_slidE(_INT32);

extern void push_king(_INT32);

extern _INT32 moved[144LL];

extern _INT32 Giveaway;

extern void push_king_castle(_INT32, _INT32);

extern _INT32 piece_count;

extern _INT32 holding[2LL][16LL];

extern void try_drop(_INT32);

extern _UINT32 in_check(void);

extern _UINT32 f_in_check(struct anonymous_w2c_6 *, _INT32);

extern _INT32 extended_in_check(void);

extern void make(struct anonymous_w2c_6 *, _INT32);

struct anonymous_w2c_14 {
  _INT32 cap_num;
  _INT32 was_promoted;
  _INT32 epsq;
  _INT32 fifty;
};
extern struct anonymous_w2c_14 path_x[300LL];

extern _INT32 ply;

extern _INT32 fifty;

extern void __assert_fail(const _INT8 *, const _INT8 *, _UINT32, const _INT8 *);

extern _INT32 is_promoted[62LL];

extern _INT32 squares[144LL];

extern void DropremoveHolding(_INT32, _INT32);

extern _INT32 material[14LL];

extern _INT32 Material;

extern _UINT32 zobrist[14LL][144LL];

extern _UINT32 hash;

extern void addHolding(_INT32, _INT32);

extern _INT32 SwitchPromoted(_INT32);

extern _INT32 SwitchColor(_INT32);

extern _INT32 white_castled;

extern _INT32 black_castled;

extern void add_move(_INT32, _INT32);

extern void add_capture(_INT32, _INT32, _INT32, _INT32);

extern void unmake(struct anonymous_w2c_6 *, _INT32);

extern void DropaddHolding(_INT32, _INT32);

extern void removeHolding(_INT32, _INT32);

_UINT32 total_moves;

_UINT32 total_movegens;

