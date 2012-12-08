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
struct sv {
      void * sv_any;
      _UINT32 sv_refcnt;
      _UINT32 sv_flags;
    };
    struct svop {
    struct op * op_next;
    struct op * op_sibling;
    struct op * (*op_ppaddr)(void);
    _UINT64 op_targ;
    _UINT16 op_type;
    _UINT16 op_seq;
    _UINT8 op_flags;
    _UINT8 op_private;
    struct sv * op_sv;
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
                union anonymous_w2c_8 {
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
              union anonymous_w2c_8 xio_dirpu;
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
    struct gv * cop_filegv;
    _UINT32 cop_seq;
    _INT32 cop_arybase;
    _UINT32 cop_line;
    struct sv * cop_warnings;
    struct sv * cop_io;
  };
  struct logop {
    struct op * op_next;
    struct op * op_sibling;
    struct op * (*op_ppaddr)(void);
    _UINT64 op_targ;
    _UINT16 op_type;
    _UINT16 op_seq;
    _UINT8 op_flags;
    _UINT8 op_private;
    struct op * op_first;
    struct op * op_other;
  };
  struct binop {
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
  struct re_scream_pos_data_s;
    struct subst {
        _INT32 sbu_iters;
        _INT32 sbu_maxiters;
        _INT32 sbu_rflags;
        _INT32 sbu_oldsave;
        _INT8 sbu_once;
        _INT8 sbu_rxtainted;
        _INT8 * sbu_orig;
        struct sv * sbu_dstr;
        struct sv * sbu_targ;
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
            struct sv ** itervar;
            struct sv * itersave;
            struct sv * iterlval;
            struct av * iterary;
            _INT64 iterix;
            _INT64 itermax;
          };
          struct block_eval {
            _INT32 old_in_eval;
            _INT32 old_op_type;
            struct sv * old_namesv;
            struct op * old_eval_root;
            struct sv * cur_text;
            struct cv * cv;
          };
          struct block_sub {
            struct cv * cv;
            struct gv * gv;
            struct gv * dfoutgv;
            struct av * savearray;
            struct av * argarray;
            _INT64 olddepth;
            _UINT8 hasargs;
            _UINT8 lval;
            struct av * oldcomppad;
          };
          union anonymous_w2c_5 {
          struct block_sub blku_sub;
          struct block_eval blku_eval;
          struct block_loop blku_loop;
        };
        struct block {
        _INT32 blku_oldsp;
        struct cop * blku_oldcop;
        _INT32 blku_oldretsp;
        _INT32 blku_oldmarksp;
        _INT32 blku_oldscopesp;
        struct pmop * blku_oldpm;
        _UINT8 blku_gimme;
        union anonymous_w2c_5 blk_u;
      };
      union anonymous_w2c_6 {
      struct block cx_blk;
      struct subst cx_subst;
    };
    struct context {
    _UINT32 cx_type;
    union anonymous_w2c_6 cx_u;
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

extern struct op * Perl_pp_const(void);

extern struct sv ** PL_stack_sp;

static struct sv * anon1;

extern struct sv ** PL_stack_max;

extern struct sv ** Perl_stack_grow(struct sv **, struct sv **, _INT32);

extern struct op * PL_op;

extern struct op * Perl_pp_nextstate(void);

extern struct cop * volatile PL_curcop;

extern _INT8 PL_tainted;

struct stackinfo {
  struct av * si_stack;
  struct context * si_cxstack;
  _INT32 si_cxix;
  _INT32 si_cxmax;
  _INT32 si_type;
  struct stackinfo * si_prev;
  struct stackinfo * si_next;
  _INT32 si_markoff;
};
extern struct stackinfo * PL_curstackinfo;

extern struct sv ** PL_stack_base;

extern _INT32 PL_tmps_ix;

extern _INT32 PL_tmps_floor;

extern void Perl_free_tmps(void);

extern struct op * Perl_pp_gvsv(void);

extern struct sv * Perl_save_scalar(struct gv *);

extern struct op * Perl_pp_null(void);

extern struct op * Perl_pp_setstate(void);

extern struct op * Perl_pp_pushmark(void);

static _INT32 anon2;

extern _INT32 * PL_markstack_ptr;

extern _INT32 * PL_markstack_max;

extern void Perl_markstack_grow(void);

extern struct op * Perl_pp_stringify(void);

extern struct sv ** PL_curpad;

extern void Perl_sv_copypv(struct sv *, struct sv *);

static struct sv * anon3;

extern _INT32 Perl_mg_set(struct sv *);

extern struct op * Perl_pp_gv(void);

static struct sv * anon4;

extern struct op * Perl_pp_and(void);

struct xpv {
  _INT8 * xpv_pv;
  _UINT64 xpv_cur;
  _UINT64 xpv_len;
};
extern struct xpv * PL_Xpv;

extern _INT8 Perl_sv_2bool(struct sv *);

extern struct op * Perl_pp_sassign(void);

extern _INT8 PL_tainting;

extern _INT8 Perl_sv_tainted(struct sv *);

extern void Perl_sv_setsv_flags(struct sv *, struct sv *, _INT32);

extern struct op * Perl_pp_cond_expr(void);

extern struct sv * PL_Sv;

extern struct op * Perl_pp_unstack(void);

extern _INT32 * PL_scopestack;

extern _INT32 PL_scopestack_ix;

extern _INT32 PL_savestack_ix;

extern void Perl_leave_scope(_INT32);

extern struct op * Perl_pp_concat(void);

extern _INT64 PL_amagic_generation;

extern struct sv * Perl_amagic_call(struct sv *, struct sv *, _INT32, _INT32);

static struct sv * anon5;

extern _INT8 * Perl_sv_2pv_flags(struct sv *, _UINT64 *, _INT32);

extern struct sv * Perl_sv_2mortal(struct sv *);

extern struct sv * Perl_newSVpvn(const _INT8 *, _UINT64);

extern void Perl_sv_setpvn(struct sv *, const _INT8 *, _UINT64);

extern _INT32 Perl_mg_get(struct sv *);

extern void Perl_sv_setpv(struct sv *, const _INT8 *);

extern _UINT64 Perl_sv_utf8_upgrade_flags(struct sv *, _INT32);

extern void Perl_sv_catpvn_flags(struct sv *, const _INT8 *, _UINT64, _INT32);

static struct sv * anon6;

extern struct op * Perl_pp_padsv(void);

static struct sv * anon7;

extern void Perl_save_clearsv(struct sv **);

extern void Perl_vivify_ref(struct sv *, _UINT32);

extern struct op * Perl_pp_readline(void);

extern struct sv PL_sv_undef;

static struct sv * anon8;

extern struct gv * PL_last_in_gv;

static struct sv * anon9;

extern struct op * Perl_pp_rv2gv(void);

extern struct op * Perl_do_readline(void);

extern struct op * Perl_pp_eq(void);

extern struct sv PL_sv_yes;

extern struct sv PL_sv_no;

extern _INT64 Perl_sv_2iv(struct sv *);

extern _IEEE64 Perl_sv_2nv(struct sv *);

extern struct op * Perl_pp_preinc(void);

extern struct op * Perl_die(const _INT8 *, ...);

extern _INT8 * PL_no_modify;

extern void Perl_sv_inc(struct sv *);

extern struct op * Perl_pp_or(void);

extern struct op * Perl_pp_add(void);

static struct sv * anon10;

extern void Perl_sv_setuv(struct sv *, _UINT64);

static struct sv * anon11;

extern void Perl_sv_setiv(struct sv *, _INT64);

static struct sv * anon12;

extern void Perl_sv_setnv(struct sv *, _IEEE64);

static struct sv * anon13;

static struct sv * anon14;

static struct sv * anon15;

extern struct op * Perl_pp_aelemfast(void);

extern struct sv ** Perl_av_fetch(struct av *, _INT32, _INT32);

extern struct sv * Perl_sv_mortalcopy(struct sv *);

extern struct op * Perl_pp_join(void);

extern void Perl_do_join(struct sv *, struct sv *, struct sv **, struct sv **);

extern struct op * Perl_pp_pushre(void);

static struct sv * anon16;

extern struct op * Perl_pp_print(void);

extern struct gv * PL_defoutgv;

extern struct magic * Perl_mg_find(struct sv *, _INT32);

extern void * memmove(void *, const void *, _UINT64);

static _INT32 anon17;

extern struct sv * Perl_newRV(struct sv *);

extern void Perl_push_scope(void);

extern _INT32 Perl_call_method(const _INT8 *, _INT32);

extern void Perl_pop_scope(void);

extern _UINT8 PL_dowarn;

extern void Perl_report_evil_fh(struct gv *, struct io *, _INT32);

extern _INT32 * __errno_location(void);

extern struct sv * PL_ofs_sv;

extern _INT8 Perl_do_print(struct sv *, struct _PerlIO **);

extern struct sv * PL_ors_sv;

extern _INT32 Perl_PerlIO_flush(struct _PerlIO **);

extern struct op * Perl_pp_rv2av(void);

extern void Perl_croak(const _INT8 *, ...);

extern _INT32 Perl_is_lvalue_sub(void);

extern _INT32 Perl_dowantarray(void);

extern _INT8 * PL_no_localize_ref;

extern _INT8 * PL_no_usym;

extern void Perl_report_uninit(void);

extern struct gv * Perl_gv_fetchpv(const _INT8 *, _INT32, _INT32);

extern _INT8 Perl_is_gv_magical(_INT8 *, _UINT64, _UINT32);

extern _INT8 * PL_no_symref;

extern struct gv * Perl_gv_AVadd(struct gv *);

extern struct av * Perl_save_ary(struct gv *);

extern _INT32 Perl_mg_size(struct sv *);

extern _INT32 Perl_block_gimme(void);

static struct sv * anon18;

extern struct op * Perl_pp_rv2hv(void);

extern struct gv * Perl_gv_HVadd(struct gv *);

extern struct hv * Perl_save_hash(struct gv *);

extern struct op * Perl_do_kv(void);

extern struct hv * Perl_avhv_keys(struct av *);

extern struct sv * Perl_hv_scalar(struct hv *);

static struct sv * anon19;

static _INT32 S_do_maybe_phash(struct av *, struct sv **, struct sv **, struct sv **, struct sv **);

extern _INT32 Perl_av_len(struct av *);

extern void Perl_av_fill(struct av *, _INT32);

extern struct sv * Perl_sv_newmortal(void);

extern struct sv ** Perl_avhv_store_ent(struct av *, struct sv *, struct sv *, _UINT32);

static void S_do_oddball(struct hv *, struct sv **, struct sv **);

extern void Perl_warner(_UINT32, const _INT8 *, ...);

extern struct sv * Perl_newSV(_UINT64);

extern struct he * Perl_hv_store_ent(struct hv *, struct sv *, struct sv *, _UINT32);

extern struct op * Perl_pp_aassign(void);

extern _INT32 PL_delaymagic;

extern _INT32 PL_tmps_max;

extern void Perl_tmps_grow(_INT32);

extern void Perl_av_clear(struct av *);

extern void Perl_av_extend(struct av *, _INT32);

extern struct sv * Perl_newSVsv(struct sv *);

extern struct sv ** Perl_av_store(struct av *, _INT32, struct sv *);

extern void Perl_hv_clear(struct hv *);

extern _INT8 Perl_hv_exists_ent(struct hv *, struct sv *, _UINT32);

extern struct sv PL_sv_placeholder;

extern _UINT32 PL_uid;

extern _UINT32 PL_euid;

extern _INT32 setuid(_UINT32);

extern _UINT32 getuid(void);

extern _UINT32 geteuid(void);

extern _UINT32 PL_gid;

extern _UINT32 PL_egid;

extern _INT32 setgid(_UINT32);

extern _UINT32 getgid(void);

extern _UINT32 getegid(void);

static struct sv * anon20;

extern struct op * Perl_pp_qr(void);

extern struct sv * Perl_newSVrv(struct sv *, const _INT8 *);

extern void Perl_sv_taint(struct sv *);

extern void Perl_sv_magic(struct sv *, struct sv *, _INT32, const _INT8 *, _INT32);

extern struct op * Perl_pp_match(void);

extern struct gv * PL_defgv;

extern _INT8 PL_reg_match_utf8;

extern struct pmop * PL_curpm;

extern _INT8 PL_sawampersand;

extern void Perl_save_int(_INT32 *);

extern _INT32 PL_multiline;

extern _INT8 * PL_bostr;

extern _INT8 * (*PL_regint_start)(struct regexp *, struct sv *, _INT8 *, _INT8 *, _UINT32, struct re_scream_pos_data_s *);

extern _INT32(*PL_regexecp)(struct regexp *, _INT8 *, _INT8 *, _INT8 *, _INT32, struct sv *, void *, _UINT32);

extern _INT8 Perl_is_utf8_string(_UINT8 *, _UINT64);

static struct sv * anon21;

extern void Perl_safesysfree(void *);

extern _UINT8 * Perl_utf8_hop(_UINT8 *, _INT32);

extern _INT8 * Perl_savepvn(const _INT8 *, _INT32);

static _INT32 anon22;

static struct sv * anon23;

static struct sv * anon24;

extern _INT8 Perl_do_open(struct gv *, _INT8 *, _INT32, _INT32, _INT32, _INT32, struct _PerlIO **);

extern struct _PerlIO ** Perl_nextargv(struct gv *);

extern _INT8 Perl_do_close(struct gv *, _INT8);

extern struct _PerlIO ** Perl_start_glob(struct sv *, struct io *);

extern _INT8 * strerror(_INT32);

extern void Perl_sv_force_normal(struct sv *);

extern _INT32 Perl_sv_backoff(struct sv *);

static struct sv * anon25;

extern void Perl_sv_unref(struct sv *);

extern _INT8 Perl_sv_upgrade(struct sv *, _UINT32);

extern _INT8 * Perl_sv_grow(struct sv *, _UINT64);

extern _INT8 * Perl_sv_pvn_force_flags(struct sv *, _UINT64 *, _INT32);

extern _INT8 * Perl_sv_gets(struct sv *, struct _PerlIO **, _INT32);

extern struct sv * PL_rs;

extern _INT32 Perl_PerlIO_error(struct _PerlIO **);

extern void Perl_PerlIO_clearerr(struct _PerlIO **);

extern _INT32 PL_statusvalue;

static struct sv * anon26;

static struct sv * anon27;

extern struct stat_w2c_0 PL_statbuf;

extern _INT8 Perl_is_utf8_string_loc(_UINT8 *, _UINT64, _UINT8 **);

extern void * Perl_safesysrealloc(void *, _UINT64);

extern struct op * Perl_pp_enter(void);

extern _INT32 Perl_cxinc(void);

extern _INT32 * PL_markstack;

extern _INT32 PL_retstack_ix;

extern struct op * Perl_pp_helem(void);

extern struct gv * Perl_gv_fetchmethod_autoload(struct hv *, const _INT8 *, _INT32);

extern struct he * Perl_hv_fetch_ent(struct hv *, struct sv *, _INT32, _UINT32);

extern struct sv ** Perl_avhv_fetch_ent(struct av *, struct sv *, _INT32, _UINT32);

extern _INT8 * PL_no_helem;

extern void Perl_sv_free(struct sv *);

extern void Perl_save_gp(struct gv *, _INT32);

extern void Perl_save_delete(struct hv *, _INT8 *, _INT32);

extern void Perl_save_helem(struct hv *, struct sv *, struct sv **);

extern struct op * Perl_pp_leave(void);

extern struct op * Perl_pp_iter(void);

static _INT32 anon28;

extern struct sv * Perl_newSViv(_INT64);

extern struct av * PL_curstack;

extern struct op * Perl_pp_subst(void);

extern _UINT64 Perl_utf8_length(_UINT8 *, _UINT8 *);

extern struct sv * PL_encoding;

extern _INT8 * Perl_sv_recode_to_utf8(struct sv *, struct sv *);

extern void Perl_sv_chop(struct sv *, _INT8 *);

extern void Perl_rxres_save(void **, struct regexp *);

extern void Perl_sv_catsv_flags(struct sv *, struct sv *, _INT32);

extern struct op * Perl_pp_grepwhile(void);

static struct sv * anon29;

extern void Perl_save_vptr(void *);

extern struct op * Perl_pp_leavesub(void);

static struct av * anon30;

extern struct av * Perl_newAV(void);

static _INT64 anon31;

extern struct op * Perl_pop_return(void);

extern struct op * Perl_pp_leavesublv(void);

extern struct sv ** PL_tmps_stack;

static struct av * anon32;

static _INT64 anon33;

static struct av * anon34;

static _INT64 anon35;

static struct av * anon36;

static _INT64 anon37;

static struct av * anon38;

static _INT64 anon39;

static struct av * anon40;

static _INT64 anon41;

static struct cv * S_get_db_sub(struct sv **, struct cv *);

extern struct gv * PL_DBsub;

extern _UINT32 PL_perldb;

extern void Perl_save_item(struct sv *);

static _INT32 anon42;

static _INT32 anon43;

extern void Perl_gv_efullname4(struct sv *, struct gv *, const _INT8 *, _INT8);

extern void Perl_save_iv(_INT64 *);

extern struct cop * PL_curcopdb;

extern struct op * Perl_pp_entersub(void);

extern struct cv * Perl_get_cv(const _INT8 *, _INT32);

extern struct cv * Perl_sv_2cv(struct sv *, struct hv **, struct gv **, _INT32);

extern struct gv * Perl_gv_autoload4(struct hv *, const _INT8 *, _UINT64, _INT32);

extern void Perl_push_return(struct op *);

extern void Perl_save_freesv(struct sv *);

extern void Perl_pad_push(struct av *, _INT32, _INT32);

static _INT32 anon44;

extern _INT32 PL_savestack_max;

extern void Perl_savestack_grow(void);

extern struct av * PL_comppad;

extern union any * PL_savestack;

extern void Perl_sub_crush_depth(struct cv *);

extern struct op * Perl_pp_aelem(void);

extern _INT8 * PL_no_aelem;

extern void Perl_save_aelem(struct av *, _INT32, struct sv **);

extern struct hv * Perl_newHV(void);

extern struct op * Perl_pp_method(void);

static struct sv * S_method_common(struct sv *, _UINT32 *);

extern struct op * Perl_pp_method_named(void);

static struct sv * anon45;

extern struct hv * PL_stashcache;

extern _INT8 Perl_is_utf8_idcont(_UINT8 *);

extern _INT8 Perl_is_utf8_digit(_UINT8 *);

extern struct hv * Perl_gv_stashpvn(const _INT8 *, _UINT32, _INT32);

extern struct sv ** Perl_hv_store(struct hv *, const _INT8 *, _INT32, struct sv *, _UINT32);

extern _UINT32 PL_sub_generation;

extern struct gv * Perl_gv_fetchmethod(struct hv *, const _INT8 *);

