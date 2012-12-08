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

extern _INT32 allocate_time(void);

extern _INT32 moves_to_tc;

extern _INT32 min_per_game;

extern _INT32 inc;

extern _INT32 time_left;

extern _INT32 sec_per_game;

extern _INT32 opp_time;

extern _INT32 xb_mode;

extern _INT32 Variant;

extern _INT32 time_cushion;

extern void comp_to_san(struct anonymous_w2c_6, _INT8 *);

extern _INT32 Xrank[144LL];

extern _INT32 Xfile[144LL];

extern _INT32 sprintf(_INT8 *, const _INT8 *, ...);

extern _INT32 board[144LL];

extern void gen(struct anonymous_w2c_6 *);

extern _INT32 numb_moves;

extern _UINT32 in_check(void);

extern void make(struct anonymous_w2c_6 *, _INT32);

extern _UINT32 check_legal(struct anonymous_w2c_6 *, _INT32, _INT32);

extern void unmake(struct anonymous_w2c_6 *, _INT32);

extern void comp_to_coord(struct anonymous_w2c_6, _INT8 *);

extern void display_board(struct _IO_FILE *, _INT32);

extern _INT32 fprintf(struct _IO_FILE * restrict, const _INT8 * restrict, ...);

extern void init_game(void);

extern _INT32 moved[144LL];

extern _INT32 white_to_move;

extern _INT32 ep_square;

extern _INT32 wking_loc;

extern _INT32 bking_loc;

extern _INT32 white_castled;

extern _INT32 black_castled;

extern _INT32 result;

extern _UINT32 captures;

extern _INT32 piece_count;

extern _INT32 Material;

extern _INT32 is_promoted[62LL];

extern _INT32 holding[2LL][16LL];

extern _INT32 white_hand_eval;

extern _INT32 black_hand_eval;

extern void reset_piece_square(void);

extern _UINT32 bookidx;

extern _INT32 book_ply;

extern _INT32 fifty;

extern _INT32 ply;

extern _INT32 phase;

extern _UINT32 is_move(_INT8 *);

extern const _UINT16 ** __ctype_b_loc(void);

extern void perft_debug(void);

extern _INT32 printf(const _INT8 *, ...);

extern void rinput(_INT8 *, _INT32, struct _IO_FILE *);

extern _INT32 raw_nodes;

extern void perft(_INT32);

static _INT32 anon1;

static _INT32 anon2;

static _INT32 anon4;

extern void exit(_INT32);

extern _UINT32 verify_coord(_INT8 *, struct anonymous_w2c_6 *);

static _INT32 anon6;

static _INT32 anon7;

static _INT32 anon9;

extern void hash_extract_pv(_INT32, _INT8 *);

extern _INT32 ProbeTT(_INT32 *, _INT32, _INT32 *, _INT32 *, _INT32 *, _INT32);

extern void stringize_pv(_INT8 *);

extern struct anonymous_w2c_6 pv[300LL][300LL];

extern _INT32 pv_length[300LL];

extern void post_thinking(_INT32);

extern _INT32 rdifftime(_INT64, _INT64);

extern _INT64 rtime(void);

extern _INT64 start_time;

extern _INT32 nodes;

extern _INT32 i_depth;

extern void post_fail_thinking(_INT32, struct anonymous_w2c_6 *);

extern void post_fh_thinking(_INT32, struct anonymous_w2c_6 *);

extern void post_fl_thinking(_INT32, struct anonymous_w2c_6 *);

extern void post_stat_thinking(void);

extern _INT32 moveleft;

extern _INT32 movetotal;

extern _INT8 searching_move[20LL];

extern void print_move(struct anonymous_w2c_6 *, _INT32, struct _IO_FILE *);

extern void rdelay(_INT32);

extern _IEEE64 difftime(_INT64, _INT64);

extern void check_piece_square(void);

extern _INT32 squares[144LL];

extern _INT32 pieces[62LL];

extern _INT32 material[14LL];

extern void start_up(void);

extern void toggle_bool(_UINT32 *);

extern void tree_debug(void);

extern struct _IO_FILE * fopen(const _INT8 * restrict, const _INT8 * restrict);

extern struct _IO_FILE * stderr;

extern void tree(_INT32, _INT32, struct _IO_FILE *, _INT8 *);

extern _INT8 divider[50LL];

static _INT32 anon11;

extern _INT32 interrupt(void);

extern void PutPiece(_INT32, _INT8, _INT8, _INT32);

extern void reset_board(void);

extern void seedMT(_UINT32);

static _UINT32 state[625LL];

_INT32 left = -1;

extern _UINT32 reloadMT(void);

static _UINT32 * next;

extern _UINT32 randomMT(void);

