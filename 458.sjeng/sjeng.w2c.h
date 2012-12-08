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
  struct anonymous_w2c_7 {
                                        _INT32 from;
                                        _INT32 target;
                                        _INT32 captured;
                                        _INT32 promoted;
                                        _INT32 castled;
                                        _INT32 ep;
                                        };
                                        struct anonymous_w2c_10 {
    _INT32 cap_num;
    _INT32 was_promoted;
    _INT32 epsq;
    _INT32 fifty;
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

extern _INT32 main(_INT32, _INT8 **);

extern void read_rcfile(void);

extern void initialize_zobrist(void);

_INT32 Variant;

extern _INT32 material[14LL];

extern _INT32 std_material[14LL];

extern void init_game(void);

extern void initialize_hash(void);

extern void clear_tt(void);

extern void reset_ecache(void);

extern _UINT32 ECacheProbes;

extern _UINT32 ECacheHits;

extern _UINT32 TTProbes;

extern _UINT32 TTStores;

extern _UINT32 TTHits;

_UINT32 bookidx;

extern _UINT32 total_moves;

_INT32 ply;

_INT32 moves_to_tc;

_INT32 min_per_game;

_INT32 time_left;

_INT32 opp_rating;

_INT32 my_rating;

_INT32 maxdepth;

extern _INT32 maxposdiff;

extern _INT32 must_go;

extern _INT32 tradefreely;

_INT32 xb_mode;

_INT32 comp_color;

_UINT32 is_pondering;

_UINT32 allow_pondering;

_UINT32 is_analyzing;

_UINT32 have_partner;

_UINT32 must_sit;

_UINT32 go_fast;

_INT32 fixed_time;

_INT32 phase;

_INT32 root_to_move;

extern _UINT32 kibitzed;

_INT32 move_number;

extern _UINT32 hash;

_UINT32 hash_history[600LL];

extern void setbuf(struct _IO_FILE * restrict, _INT8 * restrict);

extern void start_up(void);

extern _INT32 printf(const _INT8 *, ...);

extern void run_autotest(_INT8 *);

_INT32 white_to_move;

_INT32 result;

extern struct anonymous_w2c_7 think(void);

extern void comp_to_coord(struct anonymous_w2c_7, _INT8 *);

extern void make(struct anonymous_w2c_7 *, _INT32);

struct anonymous_w2c_10 path_x[300LL];

extern _INT32 userealholdings;

extern _UINT32 is_draw(void);

_INT32 fifty;

extern void reset_piece_square(void);

_INT32 book_ply;

_INT8 opening_history[256LL];

_INT32 nodes;

_INT32 qnodes;

_UINT32 NTries;

_UINT32 NCuts;

_UINT32 TExt;

_UINT32 ext_check;

extern _UINT32 razor_drop;

extern _UINT32 razor_material;

extern _UINT32 FHF;

extern _UINT32 FH;

extern _INT32 Material;

extern _INT32 eval(_INT32, _INT32);

extern _INT32 white_hand_eval;

extern _INT32 black_hand_eval;

extern _UINT32 hold_hash;

struct anonymous_w2c_7 dummy = {{0, 0, 0, 0, 0, 0}};

extern void CheckBadFlow(_UINT32);

extern void display_board(struct _IO_FILE *, _INT32);

extern void rinput(_INT8 *, _INT32, struct _IO_FILE *);

extern _UINT32 is_move(_INT8 *);

extern _UINT32 verify_coord(_INT8 *, struct anonymous_w2c_7 *);

extern _INT8 * strstr(const _INT8 *, const _INT8 *);

static _INT32 anon1;

static _INT32 anon2;

extern void free_hash(void);

extern void free_ecache(void);

extern void exit(_INT32);

static _INT32 anon4;

_INT32 time_for_move;

static _INT32 anon6;

static _INT32 anon8;

static _INT32 anon9;

extern void toggle_bool(_UINT32 *);

extern _INT32 sscanf(const _INT8 *, const _INT8 *, ...);

_INT32 raw_nodes;

extern _INT64 rtime(void);

extern void perft(_INT32);

extern _INT32 rdifftime(_INT64, _INT64);

static _INT32 anon10;

static _INT32 anon11;

_INT8 setcode[30LL];

extern _UINT32 piecedead;

extern _UINT32 partnerdead;

extern void ResetHandValue(void);

static _INT32 anon12;

extern void(*signal(_INT32, void(*)(_INT32)))(_INT32);

extern void BegForPartner(void);

static _INT32 anon14;

static _INT32 anon16;

_UINT32 post;

static _INT32 anon18;

static _INT32 anon20;

static _INT32 anon22;

static _INT32 anon24;

static _INT32 anon26;

static _INT32 anon27;

static _INT32 anon28;

static _INT32 anon30;

static _INT32 anon32;

static _INT32 anon34;

extern void check_phase(void);

static _INT32 anon36;

static _INT32 anon37;

_INT32 opp_time;

_INT32 sec_per_game;

_INT32 inc;

_INT32 time_cushion;

extern void ProcessHoldings(_INT8 *);

extern _INT32 zh_material[14LL];

_INT32 Giveaway;

extern _INT32 suicide_material[14LL];

extern _INT32 losers_material[14LL];

extern void unmake(struct anonymous_w2c_7 *, _INT32);

_INT32 wking_loc;

_INT32 white_castled;

_INT32 bking_loc;

_INT32 black_castled;

_INT32 ep_square;

extern void reset_board(void);

extern const _UINT16 ** __ctype_b_loc(void);

extern void PutPiece(_INT32, _INT8, _INT8, _INT32);

extern void HandlePartner(_INT8 *);

extern void HandlePtell(_INT8 *);

extern void run_epd_testsuite(void);

_INT64 start_time;

extern _INT32 pn_time;

extern void proofnumbersearch(void);

extern void setup_epd_line(_INT8 *);

static _INT32 anon38;

_INT8 divider[50LL] = "-------------------------------------------------";

_INT32 board[144LL];

_INT32 moved[144LL];

_INT32 pv_length[300LL];

_INT32 squares[144LL];

_INT32 num_pieces;

_INT32 i_depth;

_INT32 piece_count;

_INT32 killer_scores[300LL];

_INT32 killer_scores2[300LL];

_INT32 killer_scores3[300LL];

_INT32 cur_score;

_UINT32 history_h[144LL][144LL];

_UINT32 captures;

_UINT32 searching_pv;

_UINT32 time_exit;

_UINT32 time_failure;

struct anonymous_w2c_7 pv[300LL][300LL];

struct anonymous_w2c_7 killer1[300LL];

struct anonymous_w2c_7 killer2[300LL];

struct anonymous_w2c_7 killer3[300LL];

struct anonymous_w2c_7 path[300LL];

_INT32 pieces[62LL];

_INT32 is_promoted[62LL];

_INT32 use_book;

_UINT32 PVS;

_UINT32 FULL;

_UINT32 PVSF;

_INT8 my_partner[256LL];

