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
                  struct sv_w2c_0 * hent_val;
                };
                struct interpreter {
                        _INT8 broiled;
                      };
                      struct clone_params {
                      struct av * stashes;
                      _UINT64 flags;
                      struct interpreter * proto_perl;
                    };
                    struct mgvtbl {
                    _INT32(*svt_get)(struct sv_w2c_0 *, struct magic *);
                    _INT32(*svt_set)(struct sv_w2c_0 *, struct magic *);
                    _UINT32(*svt_len)(struct sv_w2c_0 *, struct magic *);
                    _INT32(*svt_clear)(struct sv_w2c_0 *, struct magic *);
                    _INT32(*svt_free)(struct sv_w2c_0 *, struct magic *);
                    _INT32(*svt_copy)(struct sv_w2c_0 *, struct magic *, struct sv_w2c_0 *, const _INT8 *, _INT32);
                    _INT32(*svt_dup)(struct magic *, struct clone_params *);
                  };
                  struct magic {
                  struct magic * mg_moremagic;
                  struct mgvtbl * mg_virtual;
                  _UINT16 mg_private;
                  _INT8 mg_type;
                  _UINT8 mg_flags;
                  struct sv_w2c_0 * mg_obj;
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
            struct xpvav {
            _INT8 * xav_array;
            _INT64 xav_fill;
            _INT64 xav_max;
            _INT64 xof_off;
            _IEEE64 xnv_nv;
            struct magic * xmg_magic;
            struct hv * xmg_stash;
            struct sv_w2c_0 ** xav_alloc;
            struct sv_w2c_0 * xav_arylen;
            _UINT8 xav_flags;
          };
          struct av {
          struct xpvav * sv_any;
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
                struct gv_w2c_1 * xcv_gv;
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
                union anonymous_w2c_13 xio_dirpu;
                _INT64 xio_lines;
                _INT64 xio_page;
                _INT64 xio_page_len;
                _INT64 xio_lines_left;
                _INT8 * xio_top_name;
                struct gv_w2c_1 * xio_top_gv;
                _INT8 * xio_fmt_name;
                struct gv_w2c_1 * xio_fmt_gv;
                _INT8 * xio_bottom_name;
                struct gv_w2c_1 * xio_bottom_gv;
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
            struct sv_w2c_0 * gp_sv;
            _UINT32 gp_refcnt;
            struct io * gp_io;
            struct cv * gp_form;
            struct av * gp_av;
            struct hv * gp_hv;
            struct gv_w2c_1 * gp_egv;
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
        struct gv_w2c_1 {
        struct xpvgv * sv_any;
        _UINT32 sv_refcnt;
        _UINT32 sv_flags;
      };
      struct unop {
          struct op * op_next;
          struct op * op_sibling;
          struct op * (*op_ppaddr)(void);
          _UINT64 op_targ;
          _UINT16 op_type;
          _UINT16 op_seq;
          _UINT8 op_flags;
          _UINT8 op_private;
          struct op * op_first;
        };
        static _INT8 oom_list_extend_w2c_12496[33LL] = "Out of memory during list extend";
  static _INT8 oom_string_extend_w2c_12504[35LL] = "Out of memory during string extend";
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

  extern struct op * Perl_pp_stub(void);

  extern struct sv ** PL_stack_sp;

  extern struct op * PL_op;

  extern _INT32 Perl_block_gimme(void);

  static struct sv * anon1;

  extern struct sv ** PL_stack_max;

  extern struct sv ** Perl_stack_grow(struct sv **, struct sv **, _INT32);

  extern struct sv PL_sv_undef;

  extern struct op * Perl_pp_scalar(void);

  extern struct op * Perl_pp_padav(void);

  extern struct sv ** PL_curpad;

  extern void Perl_save_clearsv(struct sv **);

  extern _INT32 Perl_is_lvalue_sub(void);

  extern _INT32 Perl_dowantarray(void);

  extern void Perl_croak(const _INT8 *, ...);

  extern _INT32 Perl_mg_size(struct sv *);

  extern struct sv ** Perl_av_fetch(struct av *, _INT32, _INT32);

  extern struct sv * Perl_sv_newmortal(void);

  extern void Perl_sv_setiv(struct sv *, _INT64);

  extern struct op * Perl_pp_padhv(void);

  static struct sv * anon2;

  extern struct op * Perl_do_kv(void);

  extern struct sv * Perl_hv_scalar(struct hv *);

  extern struct op * Perl_pp_padany(void);

  extern struct op * Perl_die(const _INT8 *, ...);

  extern struct op * Perl_pp_rv2gv(void);

  extern _INT64 PL_amagic_generation;

  extern struct sv * Perl_amagic_call(struct sv *, struct sv *, _INT32, _INT32);

  extern void Perl_gv_init(struct gv *, struct hv *, const _INT8 *, _UINT64, _INT32);

  extern struct sv * PL_Sv;

  extern _INT32 Perl_mg_get(struct sv *);

  extern _INT8 * PL_no_modify;

  extern _INT8 * Perl_sv_2pv_flags(struct sv *, _UINT64 *, _INT32);

  extern struct sv * Perl_newSV(_UINT64);

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
  extern struct cop * volatile PL_curcop;

  extern struct gv * Perl_newGVgen(_INT8 *);

  extern _INT8 Perl_sv_upgrade(struct sv *, _UINT32);

  extern _INT32 Perl_sv_backoff(struct sv *);

  extern void Perl_safesysfree(void *);

  extern _INT32 Perl_mg_set(struct sv *);

  extern _INT8 * PL_no_usym;

  extern _UINT8 PL_dowarn;

  extern void Perl_report_uninit(void);

  extern struct gv * Perl_gv_fetchpv(const _INT8 *, _INT32, _INT32);

  extern _INT8 Perl_is_gv_magical(_INT8 *, _UINT64, _UINT32);

  extern _INT8 * PL_no_symref;

  extern void Perl_save_gp(struct gv *, _INT32);

  extern struct op * Perl_pp_rv2sv(void);

  extern struct sv * Perl_save_scalar(struct gv *);

  extern _INT8 * PL_no_localize_ref;

  extern void Perl_vivify_ref(struct sv *, _UINT32);

  extern struct op * Perl_pp_av2arylen(void);

  extern void Perl_sv_magic(struct sv *, struct sv *, _INT32, const _INT8 *, _INT32);

  extern struct op * Perl_pp_pos(void);

  extern void Perl_sv_free(struct sv *);

  extern struct magic * Perl_mg_find(struct sv *, _INT32);

  extern void Perl_sv_pos_b2u(struct sv *, _INT32 *);

  static struct sv * anon3;

  extern struct op * Perl_pp_rv2cv(void);

  extern struct cv * Perl_sv_2cv(struct sv *, struct hv **, struct gv **, _INT32);

  extern struct sv * Perl_sv_2mortal(struct sv *);

  extern struct cv * Perl_cv_clone(struct cv *);

  extern struct gv * Perl_gv_autoload4(struct hv *, const _INT8 *, _UINT64, _INT32);

  extern struct op * Perl_pp_prototype(void);

  extern _INT32 Perl_keyword(_INT8 *, _INT32);

  static _INT32 anon4;

  extern _INT8 ** PL_op_name;

  static _INT32 anon5;

  extern _INT8 ** PL_op_desc;

  extern _UINT32 * PL_opargs;

  extern struct sv * Perl_newSVpvn(const _INT8 *, _UINT64);

  extern struct op * Perl_pp_anoncode(void);

  extern struct op * Perl_pp_srefgen(void);

  static struct sv * S_refto(struct sv *);

  extern struct op * Perl_pp_refgen(void);

  extern _INT32 * PL_markstack_ptr;

  extern struct sv ** PL_stack_base;

  extern _INT32 PL_tmps_ix;

  extern _INT32 PL_tmps_max;

  extern void Perl_tmps_grow(_INT32);

  extern void Perl_vivify_defelem(struct sv *);

  extern void Perl_av_reify(struct av *);

  extern struct sv * Perl_newSVsv(struct sv *);

  extern struct op * Perl_pp_ref(void);

  extern struct sv PL_sv_no;

  extern _INT8 * Perl_sv_reftype(struct sv *, _INT32);

  extern void Perl_sv_setpvn(struct sv *, const _INT8 *, _UINT64);

  static struct sv * anon6;

  extern struct op * Perl_pp_bless(void);

  extern void Perl_warner(_UINT32, const _INT8 *, ...);

  extern struct hv * Perl_gv_stashpvn(const _INT8 *, _UINT32, _INT32);

  extern struct sv * Perl_sv_bless(struct sv *, struct hv *);

  extern struct op * Perl_pp_gelem(void);

  static _INT32 anon7;

  static _INT32 anon9;

  static _INT32 anon10;

  static _INT32 anon11;

  extern void Perl_deprecate(_INT8 *);

  static _INT32 anon13;

  static _INT32 anon15;

  static _INT32 anon16;

  static _INT32 anon17;

  static _INT32 anon18;

  static _INT32 anon19;

  static _INT32 anon20;

  static _INT32 anon21;

  extern struct sv * Perl_newSVpv(const _INT8 *, _UINT64);

  static _INT32 anon23;

  extern struct sv * Perl_newRV(struct sv *);

  static struct sv * anon25;

  extern struct op * Perl_pp_study(void);

  extern struct sv * PL_lastscream;

  extern struct sv PL_sv_yes;

  extern _INT32 PL_maxscream;

  extern void * Perl_safesysmalloc(_UINT64);

  extern _INT32 * PL_screamfirst;

  extern _INT32 * PL_screamnext;

  extern void * Perl_safesysrealloc(void *, _UINT64);

  extern struct op * Perl_pp_trans(void);

  extern struct gv * PL_defgv;

  extern _INT32 Perl_do_trans(struct sv *);

  static struct sv * anon26;

  extern struct op * Perl_pp_schop(void);

  extern void Perl_do_chop(struct sv *, struct sv *);

  static struct sv * anon27;

  extern struct op * Perl_pp_chop(void);

  static struct sv * anon28;

  extern struct op * Perl_pp_schomp(void);

  extern _INT32 Perl_do_chomp(struct sv *);

  static struct sv * anon29;

  extern struct op * Perl_pp_chomp(void);

  static struct sv * anon30;

  extern struct op * Perl_pp_defined(void);

  extern struct op * Perl_pp_undef(void);

  extern void Perl_sv_force_normal(struct sv *);

  extern void Perl_av_undef(struct av *);

  extern void Perl_hv_undef(struct hv *);

  extern struct sv * Perl_cv_const_sv(struct cv *);

  extern void Perl_cv_undef(struct cv *);

  extern void Perl_sv_setsv_flags(struct sv *, struct sv *, _INT32);

  extern void Perl_gp_free(struct gv *);

  extern struct gp * Perl_gp_ref(struct gp *);

  extern struct op * Perl_pp_predec(void);

  extern void Perl_sv_dec(struct sv *);

  extern struct op * Perl_pp_postinc(void);

  extern void Perl_sv_inc(struct sv *);

  extern struct op * Perl_pp_postdec(void);

  extern struct op * Perl_pp_pow(void);

  static struct sv * anon31;

  extern _INT64 Perl_sv_2iv(struct sv *);

  extern void Perl_sv_setnv(struct sv *, _IEEE64);

  static struct sv * anon32;

  extern void Perl_sv_setuv(struct sv *, _UINT64);

  static struct sv * anon33;

  static struct sv * anon34;

  static struct sv * anon35;

  static struct sv * anon36;

  extern _IEEE64 Perl_sv_2nv(struct sv *);

  static struct sv * anon37;

  extern struct op * Perl_pp_multiply(void);

  static struct sv * anon38;

  static struct sv * anon39;

  static struct sv * anon40;

  static struct sv * anon41;

  static struct sv * anon42;

  static struct sv * anon43;

  extern struct op * Perl_pp_divide(void);

  static struct sv * anon44;

  static struct sv * anon45;

  static struct sv * anon46;

  static struct sv * anon47;

  static struct sv * anon48;

  extern struct op * Perl_pp_modulo(void);

  static struct sv * anon49;

  extern _UINT64 Perl_cast_uv(_IEEE64);

  extern _IEEE64 fmod(_IEEE64, _IEEE64);

  static struct sv * anon50;

  extern struct op * Perl_pp_repeat(void);

  static struct sv * anon51;

  extern _UINT64 Perl_sv_2uv(struct sv *);

  extern void Perl_repeatcpy(_INT8 *, const _INT8 *, _INT32, _INT32);

  extern _INT8 * Perl_sv_pvn_force_flags(struct sv *, _UINT64 *, _INT32);

  extern _INT8 * Perl_sv_grow(struct sv *, _UINT64);

  static struct sv * anon52;

  extern struct op * Perl_pp_subtract(void);

  static struct sv * anon53;

  static struct sv * anon54;

  static struct sv * anon55;

  static struct sv * anon56;

  static struct sv * anon57;

  static struct sv * anon58;

  extern struct op * Perl_pp_left_shift(void);

  static struct sv * anon59;

  static struct sv * anon60;

  static struct sv * anon61;

  extern struct op * Perl_pp_right_shift(void);

  static struct sv * anon62;

  static struct sv * anon63;

  static struct sv * anon64;

  extern struct op * Perl_pp_lt(void);

  extern struct op * Perl_pp_gt(void);

  extern struct op * Perl_pp_le(void);

  extern struct op * Perl_pp_ge(void);

  extern struct op * Perl_pp_ne(void);

  extern struct op * Perl_pp_ncmp(void);

  static struct sv * anon65;

  static struct sv * anon66;

  static struct sv * anon67;

  static struct sv * anon68;

  extern struct op * Perl_pp_slt(void);

  extern _INT32 Perl_sv_cmp(struct sv *, struct sv *);

  extern struct op * Perl_pp_sgt(void);

  extern struct op * Perl_pp_sle(void);

  extern struct op * Perl_pp_sge(void);

  extern struct op * Perl_pp_seq(void);

  extern _INT32 Perl_sv_eq(struct sv *, struct sv *);

  extern struct op * Perl_pp_sne(void);

  extern struct op * Perl_pp_scmp(void);

  static struct sv * anon69;

  static struct sv * anon70;

  extern struct op * Perl_pp_bit_and(void);

  static struct sv * anon71;

  static struct sv * anon72;

  static struct sv * anon73;

  extern void Perl_do_vop(_INT32, struct sv *, struct sv *, struct sv *);

  static struct sv * anon74;

  extern struct op * Perl_pp_bit_xor(void);

  static struct sv * anon75;

  static struct sv * anon76;

  static struct sv * anon77;

  static struct sv * anon78;

  extern struct op * Perl_pp_bit_or(void);

  static struct sv * anon79;

  static struct sv * anon80;

  static struct sv * anon81;

  static struct sv * anon82;

  extern struct op * Perl_pp_negate(void);

  static struct sv * anon83;

  static struct sv * anon84;

  static struct sv * anon85;

  static struct sv * anon86;

  static struct sv * anon87;

  static struct sv * anon88;

  extern void Perl_sv_catsv_flags(struct sv *, struct sv *, _INT32);

  static struct sv * anon89;

  static struct sv * anon90;

  extern struct op * Perl_pp_not(void);

  struct xpv {
    _INT8 * xpv_pv;
    _UINT64 xpv_cur;
    _UINT64 xpv_len;
  };
  extern struct xpv * PL_Xpv;

  extern _INT8 Perl_sv_2bool(struct sv *);

  extern struct op * Perl_pp_complement(void);

  static struct sv * anon91;

  static struct sv * anon92;

  static struct sv * anon93;

  extern _UINT64 Perl_utf8n_to_uvuni(_UINT8 *, _UINT64, _UINT64 *, _UINT32);

  extern _UINT8 * PL_utf8skip;

  extern _UINT8 * Perl_uvchr_to_utf8_flags(_UINT8 *, _UINT64, _UINT64);

  extern struct op * Perl_pp_i_multiply(void);

  static struct sv * anon94;

  static struct sv * anon95;

  extern struct op * Perl_pp_i_divide(void);

  static struct sv * anon96;

  static struct sv * anon97;

  static struct op * Perl_pp_i_modulo_0(void);

  static struct sv * anon98;

  static struct sv * anon99;

  static struct op * Perl_pp_i_modulo_1(void);

  static struct sv * anon100;

  static struct sv * anon101;

  extern struct op * Perl_pp_i_modulo(void);

  static struct sv * anon102;

  extern struct op * (** PL_ppaddr)(void);

  static struct sv * anon103;

  extern struct op * Perl_pp_i_add(void);

  static struct sv * anon104;

  static struct sv * anon105;

  extern struct op * Perl_pp_i_subtract(void);

  static struct sv * anon106;

  static struct sv * anon107;

  extern struct op * Perl_pp_i_lt(void);

  extern struct op * Perl_pp_i_gt(void);

  extern struct op * Perl_pp_i_le(void);

  extern struct op * Perl_pp_i_ge(void);

  extern struct op * Perl_pp_i_eq(void);

  extern struct op * Perl_pp_i_ne(void);

  extern struct op * Perl_pp_i_ncmp(void);

  static struct sv * anon108;

  static struct sv * anon109;

  extern struct op * Perl_pp_i_negate(void);

  static struct sv * anon110;

  static struct sv * anon111;

  extern struct op * Perl_pp_atan2(void);

  static struct sv * anon112;

  extern _IEEE64 atan2(_IEEE64, _IEEE64);

  static struct sv * anon113;

  extern struct op * Perl_pp_sin(void);

  static struct sv * anon114;

  static struct sv * anon115;

  extern struct op * Perl_pp_cos(void);

  static struct sv * anon116;

  static struct sv * anon117;

  extern struct op * Perl_pp_rand(void);

  extern _INT8 PL_srand_called;

  extern void spec_srand(_INT32);

  extern _UINT32 Perl_seed(void);

  extern _IEEE64 spec_rand(void);

  static struct sv * anon118;

  extern struct op * Perl_pp_srand(void);

  extern struct op * Perl_pp_exp(void);

  static struct sv * anon119;

  static struct sv * anon120;

  extern struct op * Perl_pp_log(void);

  static struct sv * anon121;

  extern _IEEE64 log(_IEEE64);

  static struct sv * anon122;

  extern struct op * Perl_pp_sqrt(void);

  static struct sv * anon123;

  extern _IEEE64 sqrt(_IEEE64);

  static struct sv * anon124;

  extern struct op * Perl_pp_int(void);

  static struct sv * anon125;

  static struct sv * anon126;

  static struct sv * anon127;

  static struct sv * anon128;

  static struct sv * anon129;

  static struct sv * anon130;

  extern _INT64 Perl_cast_iv(_IEEE64);

  static struct sv * anon131;

  extern _IEEE64 ceil(_IEEE64);

  static struct sv * anon132;

  extern struct op * Perl_pp_abs(void);

  static struct sv * anon133;

  static struct sv * anon134;

  static struct sv * anon135;

  static struct sv * anon136;

  static struct sv * anon137;

  static struct sv * anon138;

  static struct sv * anon139;

  extern struct op * Perl_pp_hex(void);

  extern _INT8 Perl_sv_utf8_downgrade(struct sv *, _INT8);

  extern _UINT64 Perl_grok_hex(_INT8 *, _UINT64 *, _INT32 *, _IEEE64 *);

  static struct sv * anon140;

  static struct sv * anon141;

  extern struct op * Perl_pp_oct(void);

  extern _UINT64 Perl_grok_bin(_INT8 *, _UINT64 *, _INT32 *, _IEEE64 *);

  extern _UINT64 Perl_grok_oct(_INT8 *, _UINT64 *, _INT32 *, _IEEE64 *);

  static struct sv * anon142;

  static struct sv * anon143;

  extern struct op * Perl_pp_length(void);

  extern _UINT64 Perl_sv_len_utf8(struct sv *);

  static struct sv * anon144;

  extern _UINT64 Perl_sv_len(struct sv *);

  static struct sv * anon145;

  extern struct op * Perl_pp_substr(void);

  extern _INT8 PL_tainting;

  extern void Perl_sv_untaint(struct sv *);

  extern _UINT64 Perl_sv_utf8_upgrade_flags(struct sv *, _INT32);

  extern void Perl_sv_pos_u2b(struct sv *, _INT32 *, _INT32 *);

  extern void Perl_sv_insert(struct sv *, _UINT64, _UINT64, _INT8 *, _UINT64);

  extern struct op * Perl_pp_vec(void);

  extern _UINT64 Perl_do_vecget(struct sv *, _INT32, _INT32);

  extern struct op * Perl_pp_index(void);

  extern struct sv * PL_encoding;

  extern _INT8 * Perl_sv_recode_to_utf8(struct sv *, struct sv *);

  extern _INT8 * Perl_fbm_instr(_UINT8 *, _UINT8 *, struct sv *, _UINT32);

  static struct sv * anon146;

  extern struct op * Perl_pp_rindex(void);

  extern _INT8 * Perl_rninstr(const _INT8 *, const _INT8 *, const _INT8 *, const _INT8 *);

  static struct sv * anon147;

  extern struct op * Perl_pp_sprintf(void);

  extern void Perl_do_sprintf(struct sv *, _INT32, struct sv **);

  extern _INT8 Perl_sv_tainted(struct sv *);

  extern _INT8 PL_tainted;

  static struct sv * anon148;

  extern struct op * Perl_pp_ord(void);

  static struct sv * anon149;

  extern struct op * Perl_pp_chr(void);

  static struct sv * anon150;

  extern _INT8 Perl_is_utf8_string(_UINT8 *, _UINT64);

  static struct sv * anon151;

  extern struct op * Perl_pp_crypt(void);

  extern struct op * Perl_pp_ucfirst(void);

  extern _UINT64 Perl_utf8_to_uvchr(_UINT8 *, _UINT64 *);

  extern _UINT64 Perl_to_utf8_title(_UINT8 *, _UINT8 *, _UINT64 *);

  extern void Perl_sv_catpvn_flags(struct sv *, const _INT8 *, _UINT64, _INT32);

  extern struct op * Perl_pp_lcfirst(void);

  extern _UINT64 Perl_to_utf8_lower(_UINT8 *, _UINT8 *, _UINT64 *);

  extern _UINT8 * Perl_uvuni_to_utf8(_UINT8 *, _UINT64);

  extern struct op * Perl_pp_uc(void);

  extern _UINT64 Perl_to_utf8_upper(_UINT8 *, _UINT8 *, _UINT64 *);

  extern struct op * Perl_pp_lc(void);

  extern struct op * Perl_pp_quotemeta(void);

  extern struct op * Perl_pp_aslice(void);

  extern void Perl_av_extend(struct av *, _INT32);

  extern _INT8 * PL_no_aelem;

  extern void Perl_save_aelem(struct av *, _INT32, struct sv **);

  extern struct op * Perl_pp_each(void);

  extern struct he * Perl_hv_iternext(struct hv *);

  extern struct he * Perl_avhv_iternext(struct av *);

  extern struct sv * Perl_hv_iterkeysv(struct he *);

  extern struct sv * Perl_hv_iterval(struct hv *, struct he *);

  extern struct sv * Perl_avhv_iterval(struct av *, struct he *);

  extern struct op * Perl_pp_values(void);

  extern struct op * Perl_pp_keys(void);

  extern struct op * Perl_pp_delete(void);

  extern struct sv * Perl_hv_delete_ent(struct hv *, struct sv *, _INT32, _UINT32);

  extern struct sv * Perl_av_delete(struct av *, _INT32, _INT32);

  extern struct sv * Perl_avhv_delete_ent(struct av *, struct sv *, _INT32, _UINT32);

  extern struct op * Perl_pp_exists(void);

  extern _INT8 Perl_hv_exists_ent(struct hv *, struct sv *, _UINT32);

  extern _INT8 Perl_av_exists(struct av *, _INT32);

  extern _INT8 Perl_avhv_exists_ent(struct av *, struct sv *, _UINT32);

  extern struct op * Perl_pp_hslice(void);

  extern struct gv * Perl_gv_fetchmethod_autoload(struct hv *, const _INT8 *, _INT32);

  extern struct he * Perl_hv_fetch_ent(struct hv *, struct sv *, _INT32, _UINT32);

  extern struct sv ** Perl_avhv_fetch_ent(struct av *, struct sv *, _INT32, _UINT32);

  extern _INT8 * PL_no_helem;

  extern void Perl_save_helem(struct hv *, struct sv *, struct sv **);

  extern void Perl_save_delete(struct hv *, _INT8 *, _INT32);

  extern _INT8 * Perl_savepvn(const _INT8 *, _INT32);

  extern struct op * Perl_pp_list(void);

  extern struct op * Perl_pp_lslice(void);

  extern struct op * Perl_pp_anonlist(void);

  extern struct av * Perl_av_make(_INT32, struct sv **);

  static struct sv * anon156;

  extern struct op * Perl_pp_anonhash(void);

  extern struct hv * Perl_newHV(void);

  extern struct he * Perl_hv_store_ent(struct hv *, struct sv *, struct sv *, _UINT32);

  static struct sv * anon157;

  extern struct op * Perl_pp_splice(void);

  static _INT32 anon158;

  extern _INT32 * PL_markstack_max;

  extern void Perl_markstack_grow(void);

  extern void Perl_push_scope(void);

  extern _INT32 Perl_call_method(const _INT8 *, _INT32);

  extern void Perl_pop_scope(void);

  extern void * memmove(void *, const void *, _UINT64);

  extern struct op * Perl_pp_push(void);

  static _INT32 anon159;

  extern void Perl_av_push(struct av *, struct sv *);

  static struct sv * anon160;

  extern struct op * Perl_pp_pop(void);

  extern struct sv * Perl_av_pop(struct av *);

  extern struct op * Perl_pp_shift(void);

  extern struct sv * Perl_av_shift(struct av *);

  extern struct op * Perl_pp_unshift(void);

  static _INT32 anon161;

  extern void Perl_av_unshift(struct av *, _INT32);

  extern struct sv ** Perl_av_store(struct av *, _INT32, struct sv *);

  static struct sv * anon162;

  extern struct op * Perl_pp_reverse(void);

  extern void Perl_do_join(struct sv *, struct sv *, struct sv **, struct sv **);

  static struct sv * anon163;

  extern struct op * Perl_pp_split(void);

  extern _UINT64 Perl_utf8_length(_UINT8 *, _UINT8 *);

  extern _INT32 PL_savestack_ix;

  extern _INT8 PL_reg_match_utf8;

  extern struct gv * Perl_gv_AVadd(struct gv *);

  extern void Perl_av_clear(struct av *);

  static _INT32 anon164;

  static struct sv * anon165;

  static struct av * anon166;

  extern _INT32 PL_savestack_max;

  extern void Perl_savestack_grow(void);

  extern struct av * PL_curstack;

  extern union any * PL_savestack;

  static struct av * anon167;

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
            union anonymous_w2c_48 {
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
          union anonymous_w2c_48 blk_u;
        };
        union anonymous_w2c_47 {
        struct block cx_blk;
        struct subst cx_subst;
      };
      struct context {
      _UINT32 cx_type;
      union anonymous_w2c_47 cx_u;
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
  extern struct stackinfo * PL_curstackinfo;

  extern const _UINT16 ** __ctype_b_loc(void);

  extern void Perl_save_int(_INT32 *);

  extern _INT32 PL_multiline;

  static struct sv * anon168;

  static struct sv * anon169;

  extern struct sv * (*PL_regint_string)(struct regexp *);

  static struct sv * anon170;

  extern _UINT8 * Perl_utf8_hop(_UINT8 *, _INT32);

  static struct sv * anon171;

  extern _INT32(*PL_regexecp)(struct regexp *, _INT8 *, _INT8 *, _INT8 *, _INT32, struct sv *, void *, _UINT32);

  static struct sv * anon172;

  static struct sv * anon173;

  static struct sv * anon174;

  extern void Perl_leave_scope(_INT32);

  static struct sv * anon175;

  extern struct op * Perl_pp_lock(void);

  extern void(*PL_lockhook)(struct sv *);

  extern struct op * Perl_pp_threadsv(void);

  static void __ompdo_Perl_pp_splice1();

  