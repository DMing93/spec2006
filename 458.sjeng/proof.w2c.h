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
    struct node_w2c_0 {
    _UINT8 value;
    _UINT8 num_children;
    _UINT8 expanded;
    _UINT8 evaluated;
    _INT32 proof;
    _INT32 disproof;
    struct node_w2c_0 ** children;
    struct node_w2c_0 * parent;
    struct anonymous_w2c_6 move;
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

extern void * Xmalloc(_INT32);

_INT32 bufftop;

_UINT8 * membuff;

extern void Xfree(void);

extern void freenodes(struct node *);

extern void free(void *);

extern void pn_eval(struct node *);

extern _INT32 Variant;

extern void suicide_pn_eval(struct node *);

extern void losers_pn_eval(struct node *);

extern void std_pn_eval(struct node *);

extern _INT32 white_to_move;

extern _UINT32 is_attacked(_INT32, _INT32);

extern _INT32 wking_loc;

extern _INT32 bking_loc;

extern void gen(struct anonymous_w2c_6 *);

extern _INT32 numb_moves;

extern void make(struct anonymous_w2c_6 *, _INT32);

extern _UINT32 check_legal(struct anonymous_w2c_6 *, _INT32, _INT32);

extern void unmake(struct anonymous_w2c_6 *, _INT32);

extern _INT32 root_to_move;

extern _INT32 pieces[62LL];

extern _INT32 board[144LL];

extern _INT32 piece_count;

extern _UINT32 captures;

extern struct node * select_most_proving(struct node *);

extern _UINT32 hash;

extern _UINT32 hash_history[600LL];

extern _INT32 move_number;

extern _INT32 ply;

_INT32 maxply;

extern void set_proof_and_disproof_numbers(struct node *);

_INT32 forwards;

extern void StoreTT(_INT32, _INT32, _INT32, _INT32, _INT32, _INT32);

extern _UINT32 is_draw(void);

extern _UINT32 in_check(void);

extern _INT32 phase;

extern void develop_node(struct node *);

_INT32 nodecount;

_INT32 frees;

extern void update_ancestors(struct node *);

extern void pn2_eval(struct node *);

_INT32 nodecount2;

_INT32 pn2;

extern void proofnumberscan(void);

extern _INT64 rtime(void);

extern void * calloc(_UINT64, _UINT64);

extern _INT32 PBSize;

_INT32 alllosers;

_INT32 rootlosers[300LL];

extern struct anonymous_w2c_6 dummy;

struct anonymous_w2c_6 pn_move;

_INT32 iters;

_INT32 forcedwin;

_UINT32 kibitzed;

extern _INT32 printf(const _INT8 *, ...);

extern _INT32 rdifftime(_INT64, _INT64);

_INT32 pn_time;

extern _INT32 interrupt(void);

extern void comp_to_san(struct anonymous_w2c_6, _INT8 *);

extern _INT32 xb_mode;

extern _UINT32 post;

extern void proofnumbersearch(void);

extern void comp_to_coord(struct anonymous_w2c_6, _INT8 *);

extern _INT32 result;

struct anonymous_w2c_6 pn_saver;

extern struct anonymous_w2c_6 proofnumbercheck(struct anonymous_w2c_6);

extern _INT32 s_threat;

struct anonymous_w2c_6;

struct anonymous_w2c_6;

