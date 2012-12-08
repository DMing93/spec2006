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
  static _INT32 rc_index_w2c_4709[14LL] = {0, 1, 1, 2, 2, 5, 5, 3, 3, 4, 4, 2, 2, 0};
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

      extern void order_moves(struct anonymous_w2c_6 *, _INT32 *, _INT32 *, _INT32, _INT32);

      extern _UINT32 searching_pv;

      extern _INT32 material[14LL];

      extern _INT32 board[144LL];

      extern _INT32 see(_INT32, _INT32, _INT32);

      extern _INT32 white_to_move;

      extern struct anonymous_w2c_6 pv[300LL][300LL];

      extern _INT32 ply;

      extern _INT32 i_depth;

      extern _UINT32 history_h[144LL][144LL];

      extern struct anonymous_w2c_6 killer1[300LL];

      extern struct anonymous_w2c_6 killer2[300LL];

      extern struct anonymous_w2c_6 killer3[300LL];

      _UINT32 rootnodecount[512LL];

      extern void perft(_INT32);

      extern _INT32 raw_nodes;

      extern void gen(struct anonymous_w2c_6 *);

      extern _INT32 numb_moves;

      extern _UINT32 in_check(void);

      extern void make(struct anonymous_w2c_6 *, _INT32);

      extern _UINT32 check_legal(struct anonymous_w2c_6 *, _INT32, _INT32);

      extern void unmake(struct anonymous_w2c_6 *, _INT32);

      extern _INT32 qsearch(_INT32, _INT32, _INT32);

      extern _INT32 pv_length[300LL];

      extern _INT32 nodes;

      extern _INT32 interrupt(void);

      extern _UINT32 time_exit;

      extern _INT32 rdifftime(_INT64, _INT64);

      extern _INT64 rtime(void);

      extern _INT64 start_time;

      extern _INT32 time_for_move;

      _INT32 failed;

      _INT32 extendedtime;

      extern _INT32 fixed_time;

      extern _UINT32 go_fast;

      extern _INT32 Variant;

      extern _INT32 time_left;

      extern _INT32 allocate_time(void);

      extern _INT32 printf(const _INT8 *, ...);

      extern _INT32 eval(_INT32, _INT32);

      extern _INT32 qnodes;

      extern _INT32 QProbeTT(_INT32 *, _INT32 *);

      extern void QStoreTT(_INT32, _INT32, _INT32, _INT32);

      extern _INT32 kingcap;

      extern _UINT32 remove_one(_INT32 *, _INT32 *, _INT32);

      extern _INT32 search(_INT32, _INT32, _INT32, _INT32);

      extern _UINT32 is_draw(void);

      _UINT32 checks[300LL];

      _UINT32 singular[300LL];

      _UINT32 recaps[300LL];

      extern _UINT32 ext_check;

      extern _INT32 cfg_recap;

      extern struct anonymous_w2c_6 path[300LL];

      _UINT32 ext_recap;

      extern _UINT32 captures;

      extern _INT32 suicide_eval(void);

      extern _INT32 losers_eval(void);

      extern _INT32 ProbeTT(_INT32 *, _INT32, _INT32 *, _INT32 *, _INT32 *, _INT32);

      extern _INT32 ep_square;

      extern _INT32 phase;

      extern _INT32 fifty;

      extern _UINT32 hash;

      extern _UINT32 NTries;

      extern _UINT32 NCuts;

      extern void StoreTT(_INT32, _INT32, _INT32, _INT32, _INT32, _INT32);

      extern _UINT32 TExt;

      _UINT32 ext_onerep;

      extern _INT32 cfg_onerep;

      extern _INT32 cfg_futprune;

      extern _INT32 Material;

      extern _UINT32 hash_history[600LL];

      extern _INT32 move_number;

      extern _UINT32 f_in_check(struct anonymous_w2c_6 *, _INT32);

      extern _INT32 Xrank[144LL];

      extern _INT32 cfg_razordrop;

      _UINT32 razor_drop;

      extern _INT32 cfg_cutdrop;

      extern _INT32 calc_attackers(_INT32, _INT32);

      _UINT32 drop_cuts;

      extern _UINT32 FULL;

      extern _UINT32 PVS;

      extern _UINT32 PVSF;

      _UINT32 razor_material;

      extern _INT32 killer_scores[300LL];

      extern _INT32 killer_scores2[300LL];

      extern _INT32 killer_scores3[300LL];

      _UINT32 FHF;

      _UINT32 FH;

      extern struct anonymous_w2c_6 search_root(_INT32, _INT32, _INT32);

      extern struct anonymous_w2c_6 dummy;

      extern _UINT32 time_failure;

      extern _INT32 cur_score;

      extern _INT32 result;

      _INT32 legals;

      _INT32 movetotal;

      extern _INT32 alllosers;

      extern _INT32 rootlosers[300LL];

      _INT32 moveleft;

      extern void comp_to_san(struct anonymous_w2c_6, _INT8 *);

      _INT8 searching_move[20LL];

      extern _UINT32 post;

      extern _INT32 xb_mode;

      extern void post_fh_thinking(_INT32, struct anonymous_w2c_6 *);

      extern void post_fl_thinking(_INT32, struct anonymous_w2c_6 *);

      extern void post_thinking(_INT32);

      _INT32 bestmovenum;

      extern void post_fail_thinking(_INT32, struct anonymous_w2c_6 *);

      extern _UINT32 is_pondering;

      extern struct anonymous_w2c_6 think(void);

      extern _INT32 userealholdings;

      extern _UINT32 ECacheProbes;

      extern _UINT32 ECacheHits;

      extern _UINT32 TTProbes;

      extern _UINT32 TTHits;

      extern _UINT32 TTStores;

      extern _INT32 forcedwin;

      extern _INT32 maxposdiff;

      _INT8 true_i_depth;

      extern _UINT32 is_analyzing;

      extern _INT32 inc;

      extern _INT32 time_cushion;

      extern void check_phase(void);

      extern void clear_tt(void);

      extern void reset_ecache(void);

      extern _INT32 piece_count;

      extern _INT32 pn_time;

      extern void proofnumberscan(void);

      extern struct anonymous_w2c_6 pn_move;

      extern void stringize_pv(_INT8 *);

      _INT8 postpv[256LL];

      extern _INT32 maxdepth;

      _INT32 s_threat;

      extern struct anonymous_w2c_6 proofnumbercheck(struct anonymous_w2c_6);

      extern _INT32 moves_to_tc;

      _INT32 tradefreely;

      extern _UINT32 must_sit;

      extern void ProcessHoldings(_INT8 *);

      extern _INT8 realholdings[255LL];

      extern _UINT32 partnerdead;

      extern void tree(_INT32, _INT32, struct _IO_FILE *, _INT8 *);

      extern _INT32 fputc(_INT32, struct _IO_FILE *);

      extern void print_move(struct anonymous_w2c_6 *, _INT32, struct _IO_FILE *);

      extern _INT32 fprintf(struct _IO_FILE * restrict, const _INT8 * restrict, ...);

      extern void display_board(struct _IO_FILE *, _INT32);

      _INT32 ugly_ep_hack;

      static void __ompdo_search_root1();

      static void __ompdo_search_root2();

      static void __ompdo_think1();

      