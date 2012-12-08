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

  extern void initialize_eval(void);

  extern _INT32 rookdistance[144LL][144LL];

  extern _INT32 distance[144LL][144LL];

  _INT32 pre_p_tropism[9LL] = {9999, 40, 20, 10, 3, 1, 1, 0, 9999};

  _UINT8 p_tropism[144LL][144LL];

  _INT32 pre_b_tropism[9LL] = {9999, 50, 25, 15, 5, 2, 2, 2, 9999};

  _UINT8 b_tropism[144LL][144LL];

  _INT32 pre_n_tropism[9LL] = {9999, 50, 70, 35, 10, 2, 1, 0, 9999};

  _UINT8 n_tropism[144LL][144LL];

  _INT32 pre_r_tropism[9LL] = {9999, 50, 40, 15, 5, 1, 1, 0, 9999};

  _UINT8 r_tropism[144LL][144LL];

  _INT32 pre_q_tropism[9LL] = {9999, 100, 60, 20, 5, 2, 0, 0, 9999};

  _UINT8 q_tropism[144LL][144LL];

  extern _INT32 eval(_INT32, _INT32);

  extern _INT32 Variant;

  extern _INT32 std_eval(_INT32, _INT32);

  extern _INT32 suicide_eval(void);

  extern _INT32 losers_eval(void);

  extern void checkECache(_INT32 *, _INT32 *);

  extern _INT32 white_to_move;

  extern _INT32 cfg_devscale;

  extern _INT32 comp_color;

  extern _INT32 white_hand_eval;

  extern _INT32 black_hand_eval;

  extern _INT32 pieces[62LL];

  extern _INT32 board[144LL];

  extern _INT32 bking_loc;

  extern _INT32 wking_loc;

  extern _INT32 piece_count;

  extern _INT32 white_castled;

  extern _INT32 moved[144LL];

  extern _INT32 black_castled;

  extern _INT32 cfg_smarteval;

  extern _UINT32 is_attacked(_INT32, _INT32);

  extern _INT32 cfg_attackeval;

  extern _UINT32 nk_attacked(_INT32, _INT32);

  _INT32 ksafety_scaled[15LL][9LL] = {{-5, 5, 10, 15, 50, 80, 150, 150, 150}, {-5, 15, 20, 25, 70, 150, 200, 200, 200}, {-5, 15, 30, 30, 100, 200, 300, 300, 300}, {-10, 20, 40, 40, 100, 200, 300, 300, 400}, {-10, 30, 50, 80, 150, 300, 400, 400, 500}, {-10, 35, 60, 100, 200, 250, 400, 400, 500}, {-10, 40, 70, 110, 210, 300, 500, 500, 600}, {-10, 45, 75, 125, 215, 300, 500, 600, 700}, {-10, 60, 90, 130, 240, 350, 500, 600, 700}, {-15, 60, 95, 145, 260, 350, 500, 600, 700}, {-15, 60, 100, 150, 270, 350, 500, 600, 700}, {-15, 60, 110, 160, 280, 400, 600, 700, 800}, {-20, 70, 115, 165, 290, 400, 600, 700, 800}, {-20, 80, 120, 170, 300, 450, 700, 800, 900}, {-20, 80, 125, 175, 310, 450, 700, 800, 900}};

  extern void storeECache(_INT32);

  _INT32 Material;

  _INT32 material[14LL] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

  _INT32 zh_material[14LL] = {0, 100, -100, 210, -210, 4000, -4000, 250, -250, 450, -450, 230, -230, 0};

  _INT32 std_material[14LL] = {0, 100, -100, 310, -310, 4000, -4000, 500, -500, 900, -900, 325, -325, 0};

  _INT32 suicide_material[14LL] = {0, 15, -15, 150, -150, 500, -500, 150, -150, 50, -50, 0, 0, 0};

  _INT32 losers_material[14LL] = {0, 80, -80, 320, -320, 1000, -1000, 350, -350, 400, -400, 270, -270, 0};

  static void __ompdo_initialize_eval1();

  