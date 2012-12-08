/* Include builtin types and operators */
#include <whirl2c.h>

/* Types */
struct iovec {
      void * iov_base;
      _UINT64 iov_len;
    };
    struct msghdr {
    void * msg_name;
    _UINT32 msg_namelen;
    struct iovec * msg_iov;
    _UINT64 msg_iovlen;
    void * msg_control;
    _UINT64 msg_controllen;
    _INT32 msg_flags;
  };
  struct cmsghdr {
    _UINT64 cmsg_len;
    _INT32 cmsg_level;
    _INT32 cmsg_type;
    _UINT8 * __cmsg_data;
  };
  struct timespec {
      _INT64 tv_sec;
      _INT64 tv_nsec;
    };
    struct stat_w2c_0 {
    _UINT64 st_dev;
    _UINT64 st_ino;
    _UINT64 st_nlink;
    _UINT32 st_mode;
    _UINT32 st_uid;
    _UINT32 st_gid;
    _INT32 pad0;
    _UINT64 st_rdev;
    _INT64 st_size;
    _INT64 st_blksize;
    _INT64 st_blocks;
    struct timespec st_atim;
    struct timespec st_mtim;
    struct timespec st_ctim;
    _INT64 __unused[3LL];
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
  struct sv {
    void * sv_any;
    _UINT32 sv_refcnt;
    _UINT32 sv_flags;
  };
  struct anonymous_w2c_8 {
    _INT64 offset;
    _INT64 runs;
  };
  struct partition_stack_entry {
    _INT32 left;
    _INT32 right;
    _INT32 qsort_break_even;
  };
  struct regnode {
                _UINT8 flags;
                _UINT8 type;
                _UINT16 next_off;
              };
              struct reg_data;
              struct reg_substr_data;
              struct regexp {
              _INT32 * startp;
              _INT32 * endp;
              struct regnode * regstclass;
              struct reg_substr_data * substrs;
              _INT8 * precomp;
              struct reg_data * data;
              _INT8 * subbeg;
              _UINT32 * offsets;
              _INT32 sublen;
              _INT32 refcnt;
              _INT32 minlen;
              _INT32 prelen;
              _UINT32 nparens;
              _UINT32 lastparen;
              _UINT32 lastcloseparen;
              _UINT32 reganch;
              struct regnode program[1LL];
            };
            struct op {
              struct op * op_next;
              struct op * op_sibling;
              struct op * (*op_ppaddr)(void);
              _UINT64 op_targ;
              _UINT16 op_type;
              _UINT16 op_seq;
              _UINT8 op_flags;
              _UINT8 op_private;
            };
            struct pmop {
            struct op * op_next;
            struct op * op_sibling;
            struct op * (*op_ppaddr)(void);
            _UINT64 op_targ;
            _UINT16 op_type;
            _UINT16 op_seq;
            _UINT8 op_flags;
            _UINT8 op_private;
            struct op * op_first;
            struct op * op_last;
            struct op * op_pmreplroot;
            struct op * op_pmreplstart;
            struct pmop * op_pmnext;
            struct regexp * op_pmregexp;
            _UINT32 op_pmflags;
            _UINT32 op_pmpermflags;
            _UINT8 op_pmdynflags;
            struct hv * op_pmstash;
          };
          struct hek {
              _UINT32 hek_hash;
              _INT32 hek_len;
              _INT8 hek_key[1LL];
            };
            struct he {
            struct he * hent_next;
            struct hek * hent_hek;
            struct sv * hent_val;
          };
          struct interpreter {
                  _INT8 broiled;
                };
                struct xpvav {
                    _INT8 * xav_array;
                    _INT64 xav_fill;
                    _INT64 xav_max;
                    _INT64 xof_off;
                    _IEEE64 xnv_nv;
                    struct magic * xmg_magic;
                    struct hv * xmg_stash;
                    struct sv ** xav_alloc;
                    struct sv * xav_arylen;
                    _UINT8 xav_flags;
                  };
                  struct av {
                  struct xpvav * sv_any;
                  _UINT32 sv_refcnt;
                  _UINT32 sv_flags;
                };
                struct clone_params {
                struct av * stashes;
                _UINT64 flags;
                struct interpreter * proto_perl;
              };
              struct mgvtbl {
              _INT32(*svt_get)(struct sv *, struct magic *);
              _INT32(*svt_set)(struct sv *, struct magic *);
              _UINT32(*svt_len)(struct sv *, struct magic *);
              _INT32(*svt_clear)(struct sv *, struct magic *);
              _INT32(*svt_free)(struct sv *, struct magic *);
              _INT32(*svt_copy)(struct sv *, struct magic *, struct sv *, const _INT8 *, _INT32);
              _INT32(*svt_dup)(struct magic *, struct clone_params *);
            };
            struct magic {
            struct magic * mg_moremagic;
            struct mgvtbl * mg_virtual;
            _UINT16 mg_private;
            _INT8 mg_type;
            _UINT8 mg_flags;
            struct sv * mg_obj;
            _INT8 * mg_ptr;
            _INT32 mg_len;
          };
          struct xpvhv {
          _INT8 * xhv_array;
          _UINT64 xhv_fill;
          _UINT64 xhv_max;
          _INT64 xhv_keys;
          _IEEE64 xnv_nv;
          struct magic * xmg_magic;
          struct hv * xmg_stash;
          _INT32 xhv_riter;
          struct he * xhv_eiter;
          struct pmop * xhv_pmroot;
          _INT8 * xhv_name;
        };
        struct hv {
        struct xpvhv * sv_any;
        _UINT32 sv_refcnt;
        _UINT32 sv_flags;
      };
      union any {
              void * any_ptr;
              _INT32 any_i32;
              _INT64 any_iv;
              _INT64 any_long;
              _INT8 any_bool;
              void(*any_dptr)(void *);
              void(*any_dxptr)(void *);
            };
            struct xpvcv {
            _INT8 * xpv_pv;
            _UINT64 xpv_cur;
            _UINT64 xpv_len;
            _INT64 xof_off;
            _IEEE64 xnv_nv;
            struct magic * xmg_magic;
            struct hv * xmg_stash;
            struct hv * xcv_stash;
            struct op * xcv_start;
            struct op * xcv_root;
            void(*xcv_xsub)(struct cv *);
            union any xcv_xsubany;
            struct gv * xcv_gv;
            _INT8 * xcv_file;
            _INT64 xcv_depth;
            struct av * xcv_padlist;
            struct cv * xcv_outside;
            _UINT16 xcv_flags;
            _UINT32 xcv_outside_seq;
          };
          struct cv {
          struct xpvcv * sv_any;
          _UINT32 sv_refcnt;
          _UINT32 sv_flags;
        };
        struct __dirstream;
              union anonymous_w2c_12 {
              struct __dirstream * xiou_dirp;
              void * xiou_any;
            };
            struct _PerlIO;
            struct xpvio {
            _INT8 * xpv_pv;
            _UINT64 xpv_cur;
            _UINT64 xpv_len;
            _INT64 xiv_iv;
            _IEEE64 xnv_nv;
            struct magic * xmg_magic;
            struct hv * xmg_stash;
            struct _PerlIO ** xio_ifp;
            struct _PerlIO ** xio_ofp;
            union anonymous_w2c_12 xio_dirpu;
            _INT64 xio_lines;
            _INT64 xio_page;
            _INT64 xio_page_len;
            _INT64 xio_lines_left;
            _INT8 * xio_top_name;
            struct gv * xio_top_gv;
            _INT8 * xio_fmt_name;
            struct gv * xio_fmt_gv;
            _INT8 * xio_bottom_name;
            struct gv * xio_bottom_gv;
            _INT16 xio_subprocess;
            _INT8 xio_type;
            _INT8 xio_flags;
          };
          struct io {
          struct xpvio * sv_any;
          _UINT32 sv_refcnt;
          _UINT32 sv_flags;
        };
        struct gp {
        struct sv * gp_sv;
        _UINT32 gp_refcnt;
        struct io * gp_io;
        struct cv * gp_form;
        struct av * gp_av;
        struct hv * gp_hv;
        struct gv * gp_egv;
        struct cv * gp_cv;
        _UINT32 gp_cvgen;
        _UINT32 gp_flags;
        _UINT32 gp_line;
        _INT8 * gp_file;
      };
      struct xpvgv {
      _INT8 * xpv_pv;
      _UINT64 xpv_cur;
      _UINT64 xpv_len;
      _INT64 xiv_iv;
      _IEEE64 xnv_nv;
      struct magic * xmg_magic;
      struct hv * xmg_stash;
      struct gp * xgv_gp;
      _INT8 * xgv_name;
      _UINT64 xgv_namelen;
      struct hv * xgv_stash;
      _UINT8 xgv_flags;
    };
    struct gv {
    struct xpvgv * sv_any;
    _UINT32 sv_refcnt;
    _UINT32 sv_flags;
  };
  struct listop {
        struct op * op_next;
        struct op * op_sibling;
        struct op * (*op_ppaddr)(void);
        _UINT64 op_targ;
        _UINT16 op_type;
        _UINT16 op_seq;
        _UINT8 op_flags;
        _UINT8 op_private;
        struct op * op_first;
        struct op * op_last;
      };
      struct subst {
                _INT32 sbu_iters;
                _INT32 sbu_maxiters;
                _INT32 sbu_rflags;
                _INT32 sbu_oldsave;
                _INT8 sbu_once;
                _INT8 sbu_rxtainted;
                _INT8 * sbu_orig;
                struct sv_w2c_0 * sbu_dstr;
                struct sv_w2c_0 * sbu_targ;
                _INT8 * sbu_s;
                _INT8 * sbu_m;
                _INT8 * sbu_strend;
                void * sbu_rxres;
                struct regexp * sbu_rx;
              };
              struct block_loop {
                    _INT8 * label;
                    _INT32 resetsp;
                    struct op * redo_op;
                    struct op * next_op;
                    struct op * last_op;
                    struct sv_w2c_0 ** itervar;
                    struct sv_w2c_0 * itersave;
                    struct sv_w2c_0 * iterlval;
                    struct av_w2c_1 * iterary;
                    _INT64 iterix;
                    _INT64 itermax;
                  };
                  struct block_eval {
                    _INT32 old_in_eval;
                    _INT32 old_op_type;
                    struct sv_w2c_0 * old_namesv;
                    struct op * old_eval_root;
                    struct sv_w2c_0 * cur_text;
                    struct cv_w2c_0 * cv;
                  };
                  struct block_sub {
                    struct cv_w2c_0 * cv;
                    struct gv_w2c_0 * gv;
                    struct gv_w2c_0 * dfoutgv;
                    struct av_w2c_1 * savearray;
                    struct av_w2c_1 * argarray;
                    _INT64 olddepth;
                    _UINT8 hasargs;
                    _UINT8 lval;
                    struct av_w2c_1 * oldcomppad;
                  };
                  union anonymous_w2c_19 {
                  struct block_sub blku_sub;
                  struct block_eval blku_eval;
                  struct block_loop blku_loop;
                };
                struct cop {
                  struct op * op_next;
                  struct op * op_sibling;
                  struct op * (*op_ppaddr)(void);
                  _UINT64 op_targ;
                  _UINT16 op_type;
                  _UINT16 op_seq;
                  _UINT8 op_flags;
                  _UINT8 op_private;
                  _INT8 * cop_label;
                  struct hv * cop_stash;
                  struct gv_w2c_0 * cop_filegv;
                  _UINT32 cop_seq;
                  _INT32 cop_arybase;
                  _UINT32 cop_line;
                  struct sv_w2c_0 * cop_warnings;
                  struct sv_w2c_0 * cop_io;
                };
                struct block {
                _INT32 blku_oldsp;
                struct cop * blku_oldcop;
                _INT32 blku_oldretsp;
                _INT32 blku_oldmarksp;
                _INT32 blku_oldscopesp;
                struct pmop * blku_oldpm;
                _UINT8 blku_gimme;
                union anonymous_w2c_19 blk_u;
              };
              union anonymous_w2c_18 {
              struct block cx_blk;
              struct subst cx_subst;
            };
            struct context {
            _UINT32 cx_type;
            union anonymous_w2c_18 cx_u;
          };
          struct stackinfo {
          struct av_w2c_1 * si_stack;
          struct context * si_cxstack;
          _INT32 si_cxix;
          _INT32 si_cxmax;
          _INT32 si_type;
          struct stackinfo * si_prev;
          struct stackinfo * si_next;
          _INT32 si_markoff;
        };
        /* File-level vars and routines */
extern __inline _UINT32 gnu_dev_major(_UINT64);

extern __inline _UINT32 gnu_dev_minor(_UINT64);

extern __inline _UINT64 gnu_dev_makedev(_UINT32, _UINT32);

extern __inline _INT32 tolower(_INT32);

extern const _INT32 ** __ctype_tolower_loc(void);

extern __inline _INT32 toupper(_INT32);

extern const _INT32 ** __ctype_toupper_loc(void);

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

extern __inline struct cmsghdr * __cmsg_nxthdr(struct msghdr *, struct cmsghdr *);

extern __inline _INT32 stat(const _INT8 *, struct stat_w2c_0 *);

extern _INT32 __xstat(_INT32, const _INT8 *, struct stat_w2c_0 *);

extern __inline _INT32 lstat(const _INT8 *, struct stat_w2c_0 *);

extern _INT32 __lxstat(_INT32, const _INT8 *, struct stat_w2c_0 *);

extern __inline _INT32 fstat(_INT32, struct stat_w2c_0 *);

extern _INT32 __fxstat(_INT32, _INT32, struct stat_w2c_0 *);

extern __inline _INT32 mknod(const _INT8 *, _UINT32, _UINT64);

extern _INT32 __xmknod(_INT32, const _INT8 *, _UINT32, _UINT64 *);

extern __inline _INT64 strtoimax(const _INT8 * restrict, _INT8 ** restrict, _INT32);

extern __inline _UINT64 strtoumax(const _INT8 * restrict, _INT8 ** restrict, _INT32);

extern __inline _INT64 wcstoimax(const _INT32 * restrict, _INT32 ** restrict, _INT32);

extern _INT64 __wcstol_internal(const _INT32 * restrict, _INT32 ** restrict, _INT32, _INT32);

extern __inline _UINT64 wcstoumax(const _INT32 * restrict, _INT32 ** restrict, _INT32);

extern _UINT64 __wcstoul_internal(const _INT32 * restrict, _INT32 ** restrict, _INT32, _INT32);

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

static _INT64 dynprep(struct sv **, struct sv **, _UINT64, _INT32(*)(struct sv *, struct sv *));

static _INT32 cmp_desc(struct sv *, struct sv *);

extern _INT32(*PL_sort_RealCmp)(struct sv *, struct sv *);

static void S_mergesortsv(struct sv **, _UINT64, _INT32(*)(struct sv *, struct sv *), _UINT32);

extern void * Perl_safesysmalloc(_UINT64);

extern void Perl_safesysfree(void *);

static void S_qsortsvu(struct sv **, _UINT64, _INT32(*)(struct sv *, struct sv *));

extern _IEEE64 spec_rand(void);

static struct sv * anon1;

static struct sv * anon2;

static struct sv * anon3;

static struct sv * anon4;

static struct sv * anon5;

static struct sv * anon6;

static struct sv * anon7;

static struct sv * anon8;

static struct sv * anon9;

static struct sv * anon10;

static struct sv * anon11;

static struct sv * anon12;

static struct sv * anon13;

static struct sv * anon14;

static struct sv * anon15;

static struct sv * anon16;

static _INT32 cmpindir(struct sv *, struct sv *);

static _INT32 cmpindir_desc(struct sv *, struct sv *);

static void S_qsortsv(struct sv **, _UINT64, _INT32(*)(struct sv *, struct sv *), _UINT32);

extern struct gv * Perl_gv_fetchpv(const _INT8 *, _INT32, _INT32);

extern _INT64 Perl_sv_2iv(struct sv *);

extern void Perl_sortsv(struct sv **, _UINT64, _INT32(*)(struct sv *, struct sv *));

extern void S_sortsv_desc(struct sv **, _UINT64, _INT32(*)(struct sv *, struct sv *));

extern struct op * Perl_pp_sort(void);

extern struct sv ** PL_stack_sp;

extern _INT32 * PL_markstack_ptr;

extern struct sv ** PL_stack_base;

extern struct op * PL_op;

extern _INT32 Perl_dowantarray(void);

extern struct sv PL_sv_undef;

extern void Perl_push_scope(void);

extern void Perl_save_vptr(void *);

extern struct op * PL_sortcop;

extern struct cop * volatile PL_curcop;

extern struct cv * Perl_sv_2cv(struct sv *, struct hv **, struct gv **, _INT32);

extern _INT8 * Perl_sv_2pv_flags(struct sv *, _UINT64 *, _INT32);

static _INT32 anon17;

static _INT32 anon18;

extern struct sv * Perl_sv_newmortal(void);

extern void Perl_gv_efullname4(struct sv *, struct gv *, const _INT8 *, _INT8);

extern struct op * Perl_die(const _INT8 *, ...);

extern struct op * (** PL_ppaddr)(void);

static _INT32 anon19;

extern _INT32 PL_savestack_ix;

extern _INT32 PL_savestack_max;

extern void Perl_savestack_grow(void);

extern struct av * PL_comppad;

extern union any * PL_savestack;

extern struct sv ** PL_curpad;

extern _INT32 Perl_mg_size(struct sv *);

extern struct sv ** PL_stack_max;

extern struct sv ** Perl_stack_grow(struct sv **, struct sv **, _INT32);

extern struct sv ** Perl_av_fetch(struct av *, _INT32, _INT32);

struct anonymous_w2c_20 {
      _UINT64 __val[16LL];
    };
    struct __jmp_buf_tag {
    _INT64 __jmpbuf[8LL];
    _INT32 __mask_was_saved;
    struct anonymous_w2c_20 __saved_mask;
  };
  struct jmpenv {
  struct __jmp_buf_tag je_buf[1LL];
  struct jmpenv * je_prev;
  _INT32 je_ret;
  _INT8 je_mustcatch;
};
extern struct jmpenv * PL_top_env;

extern void Perl_save_int(_INT32 *);

extern _INT32 PL_tmps_floor;

extern _INT32 PL_tmps_ix;

extern void Perl_save_op(void);

extern struct stackinfo * PL_curstackinfo;

extern struct stackinfo * Perl_new_stackinfo(_INT32, _INT32);

static struct av * anon20;

extern struct av * PL_curstack;

extern struct hv * PL_sortstash;

extern struct gv * PL_firstgv;

extern struct gv * PL_secondgv;

extern void Perl_save_sptr(struct sv **);

extern _INT32 Perl_cxinc(void);

extern _INT32 * PL_markstack;

extern _INT32 PL_scopestack_ix;

extern _INT32 PL_retstack_ix;

extern struct pmop * PL_curpm;

extern struct sv * PL_Sv;

extern void Perl_save_freesv(struct sv *);

extern _INT32 PL_sortcxix;

extern struct gv * PL_defgv;

static _INT32 sortcv_stacked(struct sv *, struct sv *);

static _INT32 sortcv(struct sv *, struct sv *);

static _INT32 sortcv_xsub(struct sv *, struct sv *);

static struct stackinfo * anon21;

extern _INT32 PerlIO_printf(struct _PerlIO **, const _INT8 *, ...);

extern struct gv * PL_stderrgv;

extern struct _PerlIO ** Perl_PerlIO_stderr(void);

extern void Perl_my_exit(_UINT32);

static struct av * anon22;

static _INT32 amagic_i_ncmp(struct sv *, struct sv *);

static _INT32 sv_i_ncmp(struct sv *, struct sv *);

static _INT32 amagic_ncmp(struct sv *, struct sv *);

static _INT32 sv_ncmp(struct sv *, struct sv *);

static _INT32 amagic_cmp(struct sv *, struct sv *);

extern _INT32 Perl_sv_cmp(struct sv *, struct sv *);

extern struct sv * Perl_newSVsv(struct sv *);

extern void Perl_av_clear(struct av *);

extern void Perl_av_extend(struct av *, _INT32);

extern struct sv ** Perl_av_store(struct av *, _INT32, struct sv *);

extern _INT32 Perl_mg_set(struct sv *);

extern struct sv * Perl_sv_2mortal(struct sv *);

extern void Perl_pop_scope(void);

extern _INT32(*PL_runops)(void);

extern void Perl_croak(const _INT8 *, ...);

extern void Perl_leave_scope(_INT32);

extern void * Perl_safesysrealloc(void *, _UINT64);

static _INT32 anon23;

extern _INT32 * PL_markstack_max;

extern void Perl_markstack_grow(void);

extern _IEEE64 Perl_sv_2nv(struct sv *);

extern _INT64 PL_amagic_generation;

extern struct sv * Perl_amagic_call(struct sv *, struct sv *, _INT32, _INT32);

