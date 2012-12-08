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
  struct anonymous_w2c_5 {
    _UINT64 __val[16LL];
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
struct _PerlIO;
  struct sv_w2c_0 {
            void * sv_any;
            _UINT32 sv_refcnt;
            _UINT32 sv_flags;
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
              union anonymous_w2c_13 {
              struct __dirstream * xiou_dirp;
              void * xiou_any;
            };
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
            union anonymous_w2c_13 xio_dirpu;
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
                  struct av * iterary;
                  _INT64 iterix;
                  _INT64 itermax;
                };
                struct block_eval {
                  _INT32 old_in_eval;
                  _INT32 old_op_type;
                  struct sv_w2c_0 * old_namesv;
                  struct op * old_eval_root;
                  struct sv_w2c_0 * cur_text;
                  struct cv * cv;
                };
                struct block_sub {
                  struct cv * cv;
                  struct gv_w2c_0 * gv;
                  struct gv_w2c_0 * dfoutgv;
                  struct av * savearray;
                  struct av * argarray;
                  _INT64 olddepth;
                  _UINT8 hasargs;
                  _UINT8 lval;
                  struct av * oldcomppad;
                };
                union anonymous_w2c_28 {
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
              union anonymous_w2c_28 blk_u;
            };
            union anonymous_w2c_27 {
            struct block cx_blk;
            struct subst cx_subst;
          };
          struct context {
          _UINT32 cx_type;
          union anonymous_w2c_27 cx_u;
        };
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
      struct timeval {
      _INT64 tv_sec;
      _INT64 tv_usec;
    };
    struct anonymous_w2c_33 {
      _INT64 __fds_bits[16LL];
    };
    struct tm {
        _INT32 tm_sec;
        _INT32 tm_min;
        _INT32 tm_hour;
        _INT32 tm_mday;
        _INT32 tm_mon;
        _INT32 tm_year;
        _INT32 tm_wday;
        _INT32 tm_yday;
        _INT32 tm_isdst;
        _INT64 tm_gmtoff;
        const _INT8 * tm_zone;
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

  extern __inline _INT32 __sigismember(const struct anonymous_w2c_5 *, _INT32);

  extern __inline _INT32 __sigaddset(struct anonymous_w2c_5 *, _INT32);

  extern __inline _INT32 __sigdelset(struct anonymous_w2c_5 *, _INT32);

  extern void Perl_croak(const _INT8 *, ...);

  extern struct op * Perl_pp_backtick(void);

  extern struct sv ** PL_stack_sp;

  extern struct op * PL_op;

  extern struct sv ** PL_curpad;

  extern struct sv * PL_Sv;

  extern _INT8 * Perl_sv_2pv_flags(struct sv *, _UINT64 *, _INT32);

  extern _INT32 Perl_block_gimme(void);

  extern _INT8 PL_tainting;

  extern void Perl_taint_proper(const _INT8 *, const _INT8 *);

  extern struct _PerlIO ** Perl_my_popen(_INT8 *, _INT8 *);

  extern struct cop * volatile PL_curcop;

  extern _INT8 * Perl_sv_2pv_nolen(struct sv *);

  extern _INT32 PerlIO_apply_layers(struct _PerlIO **, const _INT8 *, const _INT8 *);

  extern _INT64 Perl_PerlIO_read(struct _PerlIO **, void *, _UINT64);

  extern void Perl_push_scope(void);

  extern void Perl_save_sptr(struct sv **);

  extern struct sv * PL_rs;

  extern struct sv PL_sv_undef;

  extern void Perl_sv_setpv(struct sv *, const _INT8 *);

  extern _INT8 * Perl_sv_gets(struct sv *, struct _PerlIO **, _INT32);

  extern void Perl_pop_scope(void);

  static struct sv * anon1;

  extern struct sv ** PL_stack_max;

  extern struct sv ** Perl_stack_grow(struct sv **, struct sv **, _INT32);

  extern void Perl_sv_taint(struct sv *);

  extern struct sv * Perl_newSV(_UINT64);

  extern void Perl_sv_free(struct sv *);

  static struct sv * anon2;

  extern struct sv * Perl_sv_2mortal(struct sv *);

  extern void * Perl_safesysrealloc(void *, _UINT64);

  extern _INT32 Perl_my_pclose(struct _PerlIO **);

  extern _INT32 PL_statusvalue;

  extern _INT8 PL_tainted;

  extern struct op * Perl_pp_glob(void);

  extern _INT64 PL_amagic_generation;

  extern struct sv * Perl_amagic_call(struct sv *, struct sv *, _INT32, _INT32);

  extern void Perl_sv_setsv_flags(struct sv *, struct sv *, _INT32);

  static struct sv * anon3;

  extern _INT32 Perl_mg_set(struct sv *);

  extern _INT8 * PL_no_security;

  extern struct gv * PL_last_in_gv;

  extern struct sv * Perl_newSVpvn(const _INT8 *, _UINT64);

  extern struct op * Perl_do_readline(void);

  extern struct op * Perl_pp_rcatline(void);

  extern struct op * Perl_pp_warn(void);

  extern _INT32 * PL_markstack_ptr;

  extern struct sv ** PL_stack_base;

  extern void Perl_do_join(struct sv *, struct sv *, struct sv **, struct sv **);

  extern struct sv PL_sv_no;

  extern struct gv * PL_errgv;

  extern _INT8 Perl_sv_upgrade(struct sv *, _UINT32);

  extern void Perl_sv_catpv(struct sv *, const _INT8 *);

  extern void Perl_warn(const _INT8 *, ...);

  extern struct sv PL_sv_yes;

  extern struct op * Perl_pp_die(void);

  extern _INT32 Perl_sv_isobject(struct sv *);

  extern struct gv * Perl_gv_fetchmethod(struct hv *, const _INT8 *);

  extern struct sv * Perl_newSVpv(const _INT8 *, _UINT64);

  extern struct sv * Perl_newSVuv(_UINT64);

  static _INT32 anon4;

  extern _INT32 * PL_markstack_max;

  extern void Perl_markstack_grow(void);

  extern _INT32 Perl_call_sv(struct sv *, _INT32);

  extern struct op * Perl_die(const _INT8 *, ...);

  extern struct op * Perl_pp_open(void);

  extern _INT8 * PL_no_usym;

  extern struct magic * Perl_mg_find(struct sv *, _INT32);

  extern struct sv * Perl_newRV(struct sv *);

  static _INT32 anon5;

  extern _INT32 Perl_call_method(const _INT8 *, _INT32);

  extern _INT8 Perl_do_openn(struct gv *, _INT8 *, _INT32, _INT32, _INT32, _INT32, struct _PerlIO **, struct sv **, _INT32);

  extern void Perl_sv_setiv(struct sv *, _INT64);

  extern _INT32 PL_forkprocess;

  static struct sv * anon6;

  static struct sv * anon7;

  extern struct op * Perl_pp_close(void);

  extern struct gv * PL_defoutgv;

  static _INT32 anon8;

  static struct sv * anon9;

  extern _INT8 Perl_do_close(struct gv *, _INT8);

  extern struct op * Perl_pp_pipe_op(void);

  extern _INT8 * PL_no_func;

  extern struct op * Perl_pp_fileno(void);

  static _INT32 anon10;

  static struct sv * anon11;

  extern _INT32 Perl_PerlIO_fileno(struct _PerlIO **);

  static struct sv * anon12;

  extern struct op * Perl_pp_umask(void);

  extern _INT64 Perl_sv_2iv(struct sv *);

  static struct sv * anon13;

  extern struct op * Perl_pp_binmode(void);

  static _INT32 anon14;

  static struct sv * anon15;

  static struct sv * anon16;

  extern _UINT8 PL_dowarn;

  extern void Perl_report_evil_fh(struct gv *, struct io *, _INT32);

  extern _INT32 * __errno_location(void);

  extern _INT32 PerlIO_binmode(struct _PerlIO **, _INT32, _INT32, const _INT8 *);

  extern _INT32 Perl_mode_from_discipline(struct sv *);

  extern struct op * Perl_pp_tie(void);

  extern struct io * Perl_newIO(void);

  extern struct stackinfo * PL_curstackinfo;

  extern struct stackinfo * Perl_new_stackinfo(_INT32, _INT32);

  static struct av * anon17;

  extern struct av * PL_curstack;

  static _INT32 anon18;

  extern struct hv * Perl_gv_stashsv(struct sv *, _INT32);

  static struct av * anon19;

  static _INT32 anon20;

  static struct stackinfo * anon21;

  extern _INT32 PerlIO_printf(struct _PerlIO **, const _INT8 *, ...);

  extern struct gv * PL_stderrgv;

  extern struct _PerlIO ** Perl_PerlIO_stderr(void);

  extern void Perl_my_exit(_UINT32);

  static struct av * anon22;

  extern _INT32 Perl_sv_unmagic(struct sv *, _INT32);

  extern void Perl_sv_magic(struct sv *, struct sv *, _INT32, const _INT8 *, _INT32);

  extern struct op * Perl_pp_untie(void);

  extern struct gv * Perl_gv_fetchmethod_autoload(struct hv *, const _INT8 *, _INT32);

  static _INT32 anon23;

  static struct sv * anon24;

  static struct sv * anon25;

  extern struct sv * Perl_newSViv(_INT64);

  extern void Perl_warner(_UINT32, const _INT8 *, ...);

  extern struct op * Perl_pp_tied(void);

  extern struct sv * Perl_sv_mortalcopy(struct sv *);

  extern struct op * Perl_pp_dbmopen(void);

  extern void Perl_require_pv(const _INT8 *);

  static _INT32 anon26;

  static _INT32 anon27;

  extern struct op * Perl_pp_dbmclose(void);

  extern struct op * Perl_pp_sselect(void);

  extern _IEEE64 Perl_sv_2nv(struct sv *);

  extern _INT8 * Perl_sv_pvn_force_flags(struct sv *, _UINT64 *, _INT32);

  extern _INT8 * Perl_sv_grow(struct sv *, _UINT64);

  extern _INT32 select(_INT32, struct anonymous_w2c_33 * restrict, struct anonymous_w2c_33 * restrict, struct anonymous_w2c_33 * restrict, struct timeval * restrict);

  static struct sv * anon28;

  extern _INT32 Perl_dowantarray(void);

  extern void Perl_sv_setnv(struct sv *, _IEEE64);

  extern void Perl_setdefout(struct gv *);

  extern struct op * Perl_pp_select(void);

  static struct sv * anon29;

  extern struct sv ** Perl_hv_fetch(struct hv *, const _INT8 *, _INT32, _INT32);

  extern void Perl_gv_efullname4(struct sv *, struct gv *, const _INT8 *, _INT8);

  static struct sv * anon30;

  static struct sv * anon31;

  extern struct gv * Perl_gv_IOadd(struct gv *);

  extern struct op * Perl_pp_getc(void);

  extern struct gv * PL_stdingv;

  static _INT32 anon32;

  static struct sv * anon33;

  extern _INT8 Perl_do_eof(struct gv *);

  extern _INT32 PerlIO_getc(struct _PerlIO **);

  extern _INT32 PerlIO_isutf8(struct _PerlIO **);

  extern _UINT8 * PL_utf8skip;

  static struct sv * anon34;

  extern struct op * Perl_pp_read(void);

  extern struct op * Perl_pp_sysread(void);

  static struct op * S_doform(struct cv *, struct gv *, struct op *);

  extern void Perl_save_int(_INT32 *);

  extern _INT32 PL_tmps_floor;

  extern _INT32 PL_tmps_ix;

  extern void Perl_push_return(struct op *);

  extern _INT32 Perl_cxinc(void);

  extern _INT32 * PL_markstack;

  extern _INT32 PL_scopestack_ix;

  extern _INT32 PL_retstack_ix;

  extern struct pmop * PL_curpm;

  static _INT32 anon35;

  extern _INT32 PL_savestack_ix;

  extern _INT32 PL_savestack_max;

  extern void Perl_savestack_grow(void);

  extern struct av * PL_comppad;

  extern union any * PL_savestack;

  extern struct op * Perl_pp_enterwrite(void);

  extern struct sv * Perl_sv_newmortal(void);

  extern struct cv * Perl_cv_clone(struct cv *);

  extern struct op * Perl_pp_leavewrite(void);

  extern struct sv * PL_formtarget;

  extern struct sv * PL_toptarget;

  extern _INT8 * Perl_savepv(const _INT8 *);

  extern struct sv * Perl_newSVpvf(const _INT8 *, ...);

  extern struct gv * Perl_gv_fetchpv(const _INT8 *, _INT32, _INT32);

  extern _INT8 * Perl_savesvpv(struct sv *);

  extern _INT8 Perl_do_print(struct sv *, struct _PerlIO **);

  extern void Perl_sv_chop(struct sv *, _INT8 *);

  extern struct sv * PL_formfeed;

  extern _INT32 Perl_PerlIO_flush(struct _PerlIO **);

  extern struct sv * PL_bodytarget;

  extern struct op * Perl_pop_return(void);

  extern struct op * Perl_pp_prtf(void);

  extern void * memmove(void *, const void *, _UINT64);

  static _INT32 anon36;

  extern void Perl_do_sprintf(struct sv *, _INT32, struct sv **);

  extern struct op * Perl_pp_sysopen(void);

  extern _INT8 Perl_do_open(struct gv *, _INT8 *, _INT32, _INT32, _INT32, _INT32, struct _PerlIO **);

  static _INT32 anon37;

  extern void Perl_sv_setpvn(struct sv *, const _INT8 *, _UINT64);

  extern _INT8 * Perl_sv_pvutf8n_force(struct sv *, _UINT64 *);

  extern _INT8 * PL_no_sock_func;

  extern _UINT64 Perl_sv_len_utf8(struct sv *);

  extern _UINT8 * Perl_utf8_hop(_UINT8 *, _INT32);

  extern _INT64 read(_INT32, void *, _UINT64);

  extern _INT32 Perl_PerlIO_error(struct _PerlIO **);

  extern void Perl_sv_catsv_flags(struct sv *, struct sv *, _INT32);

  static struct sv * anon38;

  extern struct op * Perl_pp_syswrite(void);

  extern _UINT64 Perl_sv_len(struct sv *);

  extern struct op * Perl_pp_send(void);

  static _INT32 anon39;

  extern struct sv * Perl_newSVsv(struct sv *);

  extern _INT8 * Perl_sv_2pvutf8(struct sv *, _UINT64 *);

  extern _INT8 Perl_sv_utf8_downgrade(struct sv *, _INT8);

  extern _INT64 write(_INT32, const void *, _UINT64);

  extern _UINT64 Perl_utf8_length(_UINT8 *, _UINT8 *);

  static struct sv * anon40;

  extern struct op * Perl_pp_recv(void);

  extern struct op * Perl_pp_eof(void);

  extern struct gv * PL_argvgv;

  extern _INT32 Perl_av_len(struct av *);

  extern struct gv * Perl_gv_AVadd(struct gv *);

  extern struct _PerlIO ** Perl_nextargv(struct gv *);

  static _INT32 anon41;

  static struct sv * anon42;

  extern struct op * Perl_pp_tell(void);

  static _INT32 anon43;

  static struct sv * anon44;

  extern _INT64 Perl_do_tell(struct gv *);

  static struct sv * anon45;

  extern struct op * Perl_pp_seek(void);

  extern struct op * Perl_pp_sysseek(void);

  static _INT32 anon46;

  static struct sv * anon47;

  static struct sv * anon48;

  static struct sv * anon49;

  extern _INT8 Perl_do_seek(struct gv *, _INT64, _INT32);

  extern _INT64 Perl_do_sysseek(struct gv *, _INT64, _INT32);

  static _INT8 zero_but_true[11LL] = "0 but true";

  extern struct op * Perl_pp_truncate(void);

  extern _INT32 ftruncate(_INT32, _INT64);

  extern _INT32 truncate(const _INT8 *, _INT64);

  extern struct op * Perl_pp_fcntl(void);

  extern struct op * Perl_pp_ioctl(void);

  extern _UINT64 Perl_sv_2uv(struct sv *);

  extern _INT32 ioctl(_INT32, _UINT64, ...);

  extern _INT32 fcntl(_INT32, _INT32, ...);

  extern _INT8 * Perl_custom_op_name(struct op *);

  extern _INT8 ** PL_op_name;

  static struct sv * anon50;

  static struct sv * anon51;

  extern struct op * Perl_pp_flock(void);

  extern struct op * Perl_pp_socket(void);

  extern struct op * Perl_pp_sockpair(void);

  extern struct op * Perl_pp_bind(void);

  extern struct op * Perl_pp_connect(void);

  extern struct op * Perl_pp_listen(void);

  extern struct op * Perl_pp_accept(void);

  extern struct op * Perl_pp_shutdown(void);

  extern struct op * Perl_pp_gsockopt(void);

  extern struct op * Perl_pp_ssockopt(void);

  extern struct op * Perl_pp_getsockname(void);

  extern struct op * Perl_pp_getpeername(void);

  extern struct op * Perl_pp_lstat(void);

  extern struct op * Perl_pp_stat(void);

  extern struct gv * PL_defgv;

  extern _INT32 PL_laststype;

  extern struct gv * PL_statgv;

  extern struct sv * PL_statname;

  extern struct stat_w2c_0 PL_statcache;

  extern _INT32 PL_laststatval;

  extern _INT8 * PL_warn_nl;

  static struct sv * anon52;

  extern _INT32 PL_tmps_max;

  extern void Perl_tmps_grow(_INT32);

  extern struct op * Perl_pp_ftrread(void);

  extern _INT32 Perl_my_stat(void);

  extern _INT8 Perl_cando(_UINT32, _UINT32, struct stat_w2c_0 *);

  extern struct op * Perl_pp_ftrwrite(void);

  extern struct op * Perl_pp_ftrexec(void);

  extern struct op * Perl_pp_fteread(void);

  extern struct op * Perl_pp_ftewrite(void);

  extern struct op * Perl_pp_fteexec(void);

  extern struct op * Perl_pp_ftis(void);

  extern struct op * Perl_pp_fteowned(void);

  extern struct op * Perl_pp_ftrowned(void);

  extern _UINT32 PL_euid;

  extern _UINT32 PL_uid;

  extern struct op * Perl_pp_ftzero(void);

  extern struct op * Perl_pp_ftsize(void);

  static struct sv * anon53;

  extern struct op * Perl_pp_ftmtime(void);

  extern _INT64 PL_basetime;

  static struct sv * anon54;

  extern struct op * Perl_pp_ftatime(void);

  static struct sv * anon55;

  extern struct op * Perl_pp_ftctime(void);

  static struct sv * anon56;

  extern struct op * Perl_pp_ftsock(void);

  extern struct op * Perl_pp_ftchr(void);

  extern struct op * Perl_pp_ftblk(void);

  extern struct op * Perl_pp_ftfile(void);

  extern struct op * Perl_pp_ftdir(void);

  extern struct op * Perl_pp_ftpipe(void);

  extern struct op * Perl_pp_ftlink(void);

  extern _INT32 Perl_my_lstat(void);

  extern struct op * Perl_pp_ftsuid(void);

  extern struct op * Perl_pp_ftsgid(void);

  extern struct op * Perl_pp_ftsvtx(void);

  extern struct op * Perl_pp_fttty(void);

  extern _INT32 isatty(_INT32);

  extern struct op * Perl_pp_fttext(void);

  extern _INT32 PerlIO_has_base(struct _PerlIO **);

  extern _INT32 Perl_PerlIO_get_cnt(struct _PerlIO **);

  extern _INT32 PerlIO_ungetc(struct _PerlIO **, _INT32);

  extern _INT32 Perl_PerlIO_get_bufsiz(struct _PerlIO **);

  extern _INT8 * Perl_PerlIO_get_base(struct _PerlIO **);

  extern struct _PerlIO ** PerlIO_open(const _INT8 *, const _INT8 *);

  extern _INT32 Perl_PerlIO_close(struct _PerlIO **);

  extern struct op * Perl_pp_ftbinary(void);

  extern struct op * Perl_pp_chdir(void);

  extern struct gv * PL_envgv;

  extern struct gv * Perl_gv_HVadd(struct gv *);

  extern void Perl_deprecate(_INT8 *);

  static struct sv * anon57;

  extern _INT32 chdir(const _INT8 *);

  static struct sv * anon58;

  extern struct op * Perl_pp_chown(void);

  extern struct op * Perl_pp_chroot(void);

  extern struct op * Perl_pp_unlink(void);

  extern _INT32 Perl_apply(_INT32, struct sv **, struct sv **);

  static struct sv * anon59;

  extern struct op * Perl_pp_chmod(void);

  static struct sv * anon60;

  extern struct op * Perl_pp_utime(void);

  static struct sv * anon61;

  extern struct op * Perl_pp_rename(void);

  extern struct stat_w2c_0 PL_statbuf;

  extern _INT32 Perl_same_dirent(_INT8 *, _INT8 *);

  extern _INT32 unlink(const _INT8 *);

  extern _INT32 link(const _INT8 *, const _INT8 *);

  static struct sv * anon62;

  extern struct op * Perl_pp_link(void);

  extern struct op * Perl_pp_symlink(void);

  extern struct op * Perl_pp_readlink(void);

  extern struct op * Perl_pp_mkdir(void);

  extern _INT8 * Perl_savepvn(const _INT8 *, _INT32);

  extern _INT32 mkdir(const _INT8 *, _UINT32);

  static struct sv * anon63;

  extern void Perl_safesysfree(void *);

  extern struct op * Perl_pp_rmdir(void);

  extern _INT32 rmdir(const _INT8 *);

  static struct sv * anon64;

  extern struct op * Perl_pp_open_dir(void);

  extern _INT8 * PL_no_dir_func;

  extern struct op * Perl_pp_readdir(void);

  extern struct op * Perl_pp_telldir(void);

  extern struct op * Perl_pp_seekdir(void);

  extern struct op * Perl_pp_rewinddir(void);

  extern struct op * Perl_pp_closedir(void);

  extern struct op * Perl_pp_fork(void);

  extern _INT32 Perl_my_fork(void);

  extern _INT32 getpid(void);

  extern void Perl_hv_clear(struct hv *);

  extern struct hv * PL_pidstatus;

  static struct sv * anon65;

  extern struct op * Perl_pp_wait(void);

  extern _UINT32 PL_signals;

  extern _INT32 Perl_wait4pid(_INT32, _INT32 *, _INT32);

  extern _INT32 PL_sig_pending;

  extern void Perl_despatch_signals(void);

  static struct sv * anon66;

  extern struct op * Perl_pp_waitpid(void);

  static struct sv * anon67;

  extern struct op * Perl_pp_system(void);

  extern void Perl_taint_env(void);

  extern _INT32 pipe(_INT32 *);

  static struct sv * anon68;

  extern _INT32 close(_INT32);

  extern _UINT32 sleep(_UINT32);

  extern void Perl_do_execfree(void);

  static struct sv * anon69;

  extern _INT8 Perl_do_aexec5(struct sv *, struct sv **, struct sv **, _INT32, _INT32);

  extern _INT8 Perl_do_exec3(_INT8 *, _INT32, _INT32);

  extern void _exit(_INT32);

  extern struct op * Perl_pp_exec(void);

  extern _INT8 Perl_do_aexec(struct sv *, struct sv **, struct sv **);

  extern _INT8 Perl_do_exec(_INT8 *);

  static struct sv * anon70;

  extern struct op * Perl_pp_kill(void);

  extern struct op * Perl_pp_getppid(void);

  extern struct op * Perl_pp_getpgrp(void);

  extern struct op * Perl_pp_setpgrp(void);

  extern struct op * Perl_pp_getpriority(void);

  extern struct op * Perl_pp_setpriority(void);

  extern struct op * Perl_pp_time(void);

  extern _INT64 time(_INT64 *);

  static struct sv * anon71;

  extern struct op * Perl_pp_tms(void);

  extern struct op * Perl_pp_localtime(void);

  extern struct op * Perl_pp_gmtime(void);

  extern struct tm * localtime(const _INT64 *);

  extern struct tm * gmtime(const _INT64 *);

  extern struct op * Perl_pp_alarm(void);

  extern struct op * Perl_pp_sleep(void);

  static struct sv * anon72;

  extern struct op * Perl_pp_shmget(void);

  extern struct op * Perl_pp_semget(void);

  extern struct op * Perl_pp_shmctl(void);

  extern struct op * Perl_pp_semctl(void);

  extern struct op * Perl_pp_shmread(void);

  extern struct op * Perl_pp_shmwrite(void);

  extern struct op * Perl_pp_msgget(void);

  extern struct op * Perl_pp_msgctl(void);

  extern struct op * Perl_pp_msgsnd(void);

  extern struct op * Perl_pp_msgrcv(void);

  extern struct op * Perl_pp_semop(void);

  extern struct op * Perl_pp_ghbyname(void);

  extern struct op * Perl_pp_ghbyaddr(void);

  extern struct op * Perl_pp_ghostent(void);

  extern struct op * Perl_pp_gnbyname(void);

  extern struct op * Perl_pp_gnbyaddr(void);

  extern struct op * Perl_pp_gnetent(void);

  extern struct op * Perl_pp_gpbyname(void);

  extern struct op * Perl_pp_gpbynumber(void);

  extern struct op * Perl_pp_gprotoent(void);

  extern struct op * Perl_pp_gsbyname(void);

  extern struct op * Perl_pp_gsbyport(void);

  extern struct op * Perl_pp_gservent(void);

  extern struct op * Perl_pp_shostent(void);

  extern struct op * Perl_pp_snetent(void);

  extern struct op * Perl_pp_sprotoent(void);

  extern struct op * Perl_pp_sservent(void);

  extern struct op * Perl_pp_ehostent(void);

  extern struct op * Perl_pp_enetent(void);

  extern struct op * Perl_pp_eprotoent(void);

  extern struct op * Perl_pp_eservent(void);

  extern struct op * Perl_pp_gpwnam(void);

  extern struct op * Perl_pp_gpwuid(void);

  extern struct op * Perl_pp_gpwent(void);

  extern struct op * Perl_pp_spwent(void);

  extern struct op * Perl_pp_epwent(void);

  extern struct op * Perl_pp_ggrnam(void);

  extern struct op * Perl_pp_ggrgid(void);

  extern struct op * Perl_pp_ggrent(void);

  extern struct op * Perl_pp_sgrent(void);

  extern struct op * Perl_pp_egrent(void);

  extern struct op * Perl_pp_getlogin(void);

  extern struct op * Perl_pp_syscall(void);

  static void __ompdo_Perl_pp_sselect1();

  