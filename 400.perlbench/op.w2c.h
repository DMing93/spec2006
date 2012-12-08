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
          struct sv {
              void * sv_any;
              _UINT32 sv_refcnt;
              _UINT32 sv_flags;
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
            struct gv_w2c_0 * xcv_gv;
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
              union anonymous_w2c_5 {
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
            union anonymous_w2c_5 xio_dirpu;
            _INT64 xio_lines;
            _INT64 xio_page;
            _INT64 xio_page_len;
            _INT64 xio_lines_left;
            _INT8 * xio_top_name;
            struct gv_w2c_0 * xio_top_gv;
            _INT8 * xio_fmt_name;
            struct gv_w2c_0 * xio_fmt_gv;
            _INT8 * xio_bottom_name;
            struct gv_w2c_0 * xio_bottom_gv;
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
        struct gv_w2c_0 * gp_egv;
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
    struct gv_w2c_0 {
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
      struct binop_w2c_0 {
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
    struct padop_w2c_0 {
    struct op * op_next;
    struct op * op_sibling;
    struct op * (*op_ppaddr)(void);
    _UINT64 op_targ;
    _UINT16 op_type;
    _UINT16 op_seq;
    _UINT8 op_flags;
    _UINT8 op_private;
    _UINT64 op_padix;
  };
  struct pvop_w2c_0 {
    struct op * op_next;
    struct op * op_sibling;
    struct op * (*op_ppaddr)(void);
    _UINT64 op_targ;
    _UINT16 op_type;
    _UINT16 op_seq;
    _UINT8 op_flags;
    _UINT8 op_private;
    _INT8 * op_pv;
  };
  struct loop_w2c_0 {
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
    struct op * op_redoop;
    struct op * op_nextop;
    struct op * op_lastop;
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

static _INT8 * S_gv_ename(struct gv *);

extern struct sv * Perl_sv_newmortal(void);

extern void Perl_gv_efullname4(struct sv *, struct gv *, const _INT8 *, _INT8);

extern _INT8 * Perl_sv_2pv_flags(struct sv *, _UINT64 *, _INT32);

static struct op * S_no_fh_allowed(struct op *);

extern _INT32 Perl_yyerror(_INT8 *);

extern _INT8 * Perl_form(const _INT8 *, ...);

extern _INT8 * Perl_custom_op_desc(struct op *);

extern _INT8 ** PL_op_desc;

static struct op * S_too_few_arguments(struct op *, _INT8 *);

static struct op * S_too_many_arguments(struct op *, _INT8 *);

static void S_bad_type(_INT32, _INT8 *, _INT8 *, struct op *);

static void S_no_bareword_allowed(struct op *);

extern void Perl_qerror(struct sv *);

extern struct sv * Perl_mess(const _INT8 *, ...);

extern _UINT64 Perl_allocmy(_INT8 *);

extern _INT32 PL_in_my;

extern _UINT32 PL_hints;

extern void Perl_pad_check_dup(_INT8 *, _INT8, struct hv *);

extern struct hv * PL_curstash;

extern struct hv * PL_defstash;

extern struct hv * PL_in_my_stash;

extern _UINT64 Perl_pad_add_name(_INT8 *, struct hv *, struct hv *, _INT8);

extern void Perl_op_free(struct op *);

static void S_cop_free(struct cop *);

extern void Perl_op_clear(struct op *);

extern void Perl_safesysfree(void *);

extern struct op * (** PL_check)(struct op *);

extern struct op * Perl_ck_ftst(struct op *);

extern void Perl_sv_free(struct sv *);

extern void(*PL_regfree)(struct regexp *);

extern void Perl_pad_free(_UINT64);

extern void Perl_op_null(struct op *);

extern struct op * (** PL_ppaddr)(void);

extern void Perl_op_refcnt_lock(void);

extern void Perl_op_refcnt_unlock(void);

extern struct op * Perl_linklist(struct op *);

extern struct op * Perl_scalarkids(struct op *);

extern struct op * Perl_scalar(struct op *);

static struct op * S_scalarboolean(struct op *);

extern struct cop * volatile PL_curcop;

extern _UINT8 PL_dowarn;

extern _UINT32 PL_copline;

extern void Perl_warner(_UINT32, const _INT8 *, ...);

extern _INT32 PL_error_count;

extern void Perl_deprecate_old(_INT8 *);

extern struct op * Perl_scalarvoid(struct op *);

extern struct cop PL_compiling;

extern _UINT32 * PL_opargs;

extern _IEEE64 Perl_sv_2nv(struct sv *);

extern struct op * Perl_listkids(struct op *);

extern struct op * Perl_list(struct op *);

extern struct op * Perl_gen_constant_list(struct op *);

extern struct op * Perl_scalarseq(struct op *);

extern struct op * Perl_newOP(_INT32, _INT32);

static struct op * S_modkids(struct op *, _INT32);

extern struct op * Perl_mod(struct op *, _INT32);

extern _INT32 PL_modcount;

extern struct op * PL_eval_start;

extern _INT64 Perl_sv_2iv(struct sv *);

extern void Perl_save_I32(_INT32 *);

extern void Perl_croak(const _INT8 *, ...);

extern void * Perl_safesysmalloc(_UINT64);

static _INT8 S_scalar_mod_type(struct op *, _INT32);

extern struct op * Perl_ref(struct op *, _INT32);

extern struct sv ** Perl_av_fetch(struct av *, _INT32, _INT32);

extern struct av * PL_comppad_name;

extern _INT8 * Perl_sv_2pv_nolen(struct sv *);

extern _UINT64 Perl_pad_alloc(_INT32, _UINT32);

static _INT8 S_is_handle_constructor(struct op *, _INT32);

extern struct op * Perl_refkids(struct op *, _INT32);

static struct op * S_dup_attrlist(struct op *);

extern struct op * Perl_newSVOP(_INT32, _INT32, struct sv *);

extern struct sv * PL_Sv;

extern struct op * Perl_append_elem(_INT32, struct op *, struct op *);

static void S_apply_attrs(struct hv *, struct sv *, struct op *, _INT8);

extern void Perl_push_scope(void);

extern void Perl_save_int(_INT32 *);

extern _INT32 PL_expect;

extern struct sv * Perl_newSVpv(const _INT8 *, _UINT64);

extern struct sv PL_sv_no;

extern struct sv ** Perl_hv_fetch(struct hv *, const _INT8 *, _INT32, _INT32);

extern struct gv * PL_incgv;

extern struct gv * Perl_gv_HVadd(struct gv *);

extern struct sv PL_sv_undef;

extern void Perl_load_module(_UINT32, struct sv *, struct sv *, ...);

extern struct sv * Perl_newSVpvn(const _INT8 *, _UINT64);

extern struct op * Perl_prepend_elem(_INT32, struct op *, struct op *);

extern struct sv * Perl_newRV(struct sv *);

extern void Perl_pop_scope(void);

static void S_apply_attrs_my(struct hv *, struct op *, struct op *, struct op **);

extern struct sv ** PL_curpad;

extern struct op * Perl_newUNOP(_INT32, _INT32, struct op *);

extern _INT8 Perl_sv_upgrade(struct sv *, _UINT32);

extern _INT32 Perl_sv_backoff(struct sv *);

static _UINT64 anon1;

extern struct op * Perl_convert(_INT32, _INT32, struct op *);

extern void Perl_apply_attrs_string(_INT8 *, struct cv *, _INT8 *, _UINT64);

static struct op * S_my_kid(struct op *, struct op *, struct op **);

extern struct op * Perl_my_attrs(struct op *, struct op *);

extern void Perl_save_freeop(struct op *);

extern struct op * Perl_append_list(_INT32, struct listop *, struct listop *);

extern struct op * Perl_my(struct op *);

extern struct op * Perl_sawparens(struct op *);

extern struct op * Perl_bind_match(_INT32, struct op *, struct op *);

extern struct op * Perl_newBINOP(_INT32, _INT32, struct op *, struct op *);

extern struct op * Perl_pmruntime(struct op *, struct op *, struct op *);

extern struct op * Perl_newPMOP(_INT32, _INT32);

extern struct op * Perl_invert(struct op *);

extern struct op * Perl_scope(struct op *);

extern _UINT32 PL_perldb;

extern _INT8 PL_tainting;

extern struct op * Perl_newLISTOP(_INT32, _INT32, struct op *, struct op *);

extern void Perl_save_hints(void);

extern _INT32 Perl_block_start(_INT32);

extern _INT32 PL_savestack_ix;

extern _INT32 PL_yynerrs;

extern void Perl_pad_block_start(_INT32);

static _INT32 anon2;

extern _INT32 PL_savestack_max;

extern void Perl_savestack_grow(void);

extern struct gv * PL_hintgv;

extern union any * PL_savestack;

extern struct hv * Perl_newHVhv(struct hv *);

extern void Perl_save_sptr(struct sv **);

extern struct sv * Perl_newSVsv(struct sv *);

extern void Perl_save_freesv(struct sv *);

extern struct op * Perl_block_end(_INT32, struct op *);

extern void Perl_leave_scope(_INT32);

extern void Perl_pad_leavemy(void);

static struct op * S_newDEFSVOP(void);

extern struct op * Perl_newSVREF(struct op *);

extern struct op * Perl_newGVOP(_INT32, _INT32, struct gv *);

extern struct gv * PL_defgv;

extern void Perl_newPROG(struct op *);

extern volatile _INT32 PL_in_eval;

extern struct op * PL_eval_root;

extern void(*PL_peepp)(struct op *);

extern struct cv * PL_compcv;

extern struct op * PL_main_root;

extern struct op * PL_main_start;

extern struct cv * Perl_get_cv(const _INT8 *, _INT32);

extern struct sv ** PL_stack_sp;

static _INT32 anon3;

extern _INT32 * PL_markstack_ptr;

extern _INT32 * PL_markstack_max;

extern void Perl_markstack_grow(void);

extern struct sv ** PL_stack_base;

static struct sv * anon4;

extern struct sv ** PL_stack_max;

extern struct sv ** Perl_stack_grow(struct sv **, struct sv **, _INT32);

extern _INT32 Perl_call_sv(struct sv *, _INT32);

extern struct op * Perl_localize(struct op *, _INT32);

extern _INT8 * PL_bufptr;

extern _INT8 * PL_oldbufptr;

extern struct op * Perl_jmaybe(struct op *);

extern struct gv * Perl_gv_fetchpv(const _INT8 *, _INT32, _INT32);

extern struct op * Perl_fold_constants(struct op *);

extern struct op * PL_op;

extern _INT32(*PL_runops)(void);

extern void Perl_pad_swipe(_UINT64, _INT8);

extern _INT32 PL_tmps_floor;

extern struct op * Perl_pp_pushmark(void);

extern struct op * Perl_pp_anonlist(void);

extern _INT8 * PL_op_mask;

extern struct op * Perl_newNULLLIST(void);

extern struct op * Perl_force_list(struct op *);

static _INT32 uvcompare(const void *, const void *);

extern struct op * Perl_pmtrans(struct op *, struct op *, struct op *);

extern _UINT8 * Perl_bytes_to_utf8(_UINT8 *, _UINT64 *);

extern _UINT64 Perl_utf8n_to_uvuni(_UINT8 *, _UINT64, _UINT64 *, _UINT32);

extern void qsort(void *, _UINT64, _UINT64, _INT32(*)(const void *, const void *));

extern _UINT8 * Perl_uvuni_to_utf8(_UINT8 *, _UINT64);

extern void Perl_sv_catpvn_flags(struct sv *, const _INT8 *, _UINT64, _INT32);

extern _UINT8 * Perl_uvuni_to_utf8_flags(_UINT8 *, _UINT64, _UINT64);

extern void Perl_sv_catpvf(struct sv *, const _INT8 *, ...);

extern struct sv * Perl_swash_init(_INT8 *, _INT8 *, struct sv *, _INT32, _INT32);

extern struct sv ** Perl_hv_store(struct hv *, const _INT8 *, _INT32, struct sv *, _UINT32);

extern struct sv * Perl_newSVuv(_UINT64);

extern void * Perl_safesysrealloc(void *, _UINT64);

extern void Perl_sv_setpvn(struct sv *, const _INT8 *, _UINT64);

extern struct regexp * (*PL_regcompp)(_INT8 *, _INT8 *, struct pmop *);

static _INT32 anon5;

static _INT32 anon6;

extern _INT32 PL_multi_end;

extern struct op * Perl_newPADOP(_INT32, _INT32, struct sv *);

extern struct op * Perl_newPVOP(_INT32, _INT32, _INT8 *);

extern void Perl_package(struct op *);

extern void Perl_save_hptr(struct hv **);

extern void Perl_save_item(struct sv *);

extern struct sv * PL_curstname;

extern struct hv * Perl_gv_stashpvn(const _INT8 *, _UINT32, _INT32);

extern void Perl_deprecate(_INT8 *);

extern void Perl_sv_setpv(struct sv *, const _INT8 *);

extern void Perl_utilize(_INT32, _INT32, struct op *, struct op *, struct op *);

static _UINT64 anon7;

static _UINT64 anon8;

extern struct cv * Perl_newATTRSUB(_INT32, struct op *, struct op *, struct op *, struct op *);

extern struct op * Perl_newSTATEOP(_INT32, _INT8 *, struct op *);

extern _UINT32 PL_cop_seqmax;

extern void Perl_vload_module(_UINT32, struct sv *, struct sv *, struct __va_list_tag(*)[1LL]);

extern _INT32 Perl_start_subparse(_INT32, _UINT32);

extern struct op * Perl_dofile(struct op *);

extern struct op * Perl_ck_subr(struct op *);

extern struct op * Perl_newSLICEOP(_INT32, struct op *, struct op *);

static _INT32 S_list_assignment(struct op *);

extern struct op * Perl_newASSIGNOP(_INT32, struct op *, _INT32, struct op *);

extern struct op * Perl_newLOGOP(_INT32, _INT32, struct op *, struct op *);

extern _INT32 PL_generation;

extern void Perl_sv_setiv(struct sv *, _INT64);

extern _UINT32 Perl_intro_my(void);

extern struct hv * PL_debstash;

static struct op * S_new_logop(_INT32, _INT32, struct op **, struct op **);

struct xpv {
  _INT8 * xpv_pv;
  _UINT64 xpv_cur;
  _UINT64 xpv_len;
};
extern struct xpv * PL_Xpv;

extern _INT8 Perl_sv_2bool(struct sv *);

extern struct op * Perl_newCONDOP(_INT32, struct op *, struct op *, struct op *);

extern struct op * Perl_newRANGE(_INT32, struct op *, struct op *);

extern struct op * Perl_newLOOPOP(_INT32, _INT32, struct op *, struct op *);

extern struct op * Perl_newWHILEOP(_INT32, _INT32, struct loop *, _INT32, struct op *, struct op *, struct op *);

extern struct op * Perl_newFOROP(_INT32, _INT8 *, _UINT32, struct op *, struct op *, struct op *, struct op *);

extern struct op * Perl_newLOOPEX(_INT32, struct op *);

extern _INT8 * Perl_savepv(const _INT8 *);

extern void Perl_cv_undef(struct cv *);

static _INT32 anon9;

extern struct av * PL_comppad;

extern void Perl_pad_undef(struct cv *);

extern void Perl_cv_ckproto(struct cv *, struct gv *, _INT8 *);

static _INT32 anon10;

extern void Perl_sv_catpv(struct sv *, const _INT8 *);

extern struct sv * Perl_cv_const_sv(struct cv *);

extern struct sv * Perl_op_const_sv(struct op *, struct cv *);

extern void Perl_newMYSUB(_INT32, struct op *, struct op *, struct op *, struct op *);

extern struct cv * Perl_newSUB(_INT32, struct op *, struct op *, struct op *);

extern void Perl_sv_setpvf(struct sv *, const _INT8 *, ...);

extern _UINT32 PL_sub_generation;

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
          union anonymous_w2c_54 {
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
        union anonymous_w2c_54 blk_u;
      };
      union anonymous_w2c_53 {
      struct block cx_blk;
      struct subst cx_subst;
    };
    struct context {
    _UINT32 cx_type;
    union anonymous_w2c_53 cx_u;
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

extern struct op * PL_sortcop;

extern _INT32 Perl_sv_cmp(struct sv *, struct sv *);

static void const_sv_xsub(struct cv *);

extern struct cv * Perl_newCONSTSUB(struct hv *, _INT8 *, struct sv *);

extern void Perl_pad_fixup_inner_anons(struct av *, struct cv *, struct cv *);

static _INT32 anon11;

extern struct gv * PL_errgv;

extern void Perl_pad_tidy(_UINT32);

extern struct sv * Perl_newSV(_UINT64);

extern _INT32 PL_subline;

extern struct gv * PL_DBsub;

extern _INT8 Perl_hv_exists(struct hv *, const _INT8 *, _INT32);

static _INT32 anon13;

static struct sv * anon14;

static _INT32 anon15;

extern _INT32 PL_scopestack_ix;

extern struct av * PL_beginav;

extern struct av * Perl_newAV(void);

extern void Perl_av_push(struct av *, struct sv *);

extern void Perl_call_list(_INT32, struct av *);

static _INT32 anon17;

static _INT32 anon18;

extern struct av * PL_endav;

extern void Perl_av_unshift(struct av *, _INT32);

extern struct sv ** Perl_av_store(struct av *, _INT32, struct sv *);

static _INT32 anon19;

extern struct av * PL_checkav;

static _INT32 anon21;

extern struct av * PL_initav;

static _INT32 anon23;

extern struct cv * Perl_newXS(_INT8 *, void(*)(struct cv *), _INT8 *);

static _INT32 anon24;

extern struct gv * Perl_gv_fetchfile(const _INT8 *);

static _INT32 anon26;

static _INT32 anon28;

static _INT32 anon29;

static _INT32 anon30;

static _INT32 anon32;

extern void Perl_newFORM(_INT32, struct op *, struct op *);

extern struct op * Perl_newANONLIST(struct op *);

extern struct op * Perl_newANONHASH(struct op *);

extern struct op * Perl_newANONSUB(_INT32, struct op *, struct op *);

extern struct op * Perl_newANONATTRSUB(_INT32, struct op *, struct op *, struct op *);

extern struct op * Perl_oopsAV(struct op *);

extern struct op * Perl_oopsHV(struct op *);

extern struct op * Perl_newAVREF(struct op *);

extern struct op * Perl_newGVREF(_INT32, struct op *);

extern struct op * Perl_newHVREF(struct op *);

extern struct op * Perl_oopsCV(struct op *);

extern struct op * Perl_newCVREF(_INT32, struct op *);

extern struct op * Perl_ck_anoncode(struct op *);

extern _UINT64 Perl_pad_add_anon(struct sv *, _UINT16);

extern struct op * Perl_ck_bitop(struct op *);

extern struct op * Perl_ck_concat(struct op *);

extern struct op * Perl_ck_spair(struct op *);

extern struct op * Perl_ck_fun(struct op *);

extern struct op * Perl_ck_delete(struct op *);

extern struct op * Perl_ck_die(struct op *);

extern struct op * Perl_ck_eof(struct op *);

extern struct gv * PL_argvgv;

extern struct op * Perl_ck_eval(struct op *);

extern struct op * Perl_ck_exit(struct op *);

extern struct op * Perl_ck_exec(struct op *);

extern struct op * Perl_ck_exists(struct op *);

extern struct op * Perl_ck_rvconst(struct op *);

extern struct gv * PL_stdingv;

extern struct sv * Perl_newSVpvf(const _INT8 *, ...);

extern struct sv * Perl_sv_2mortal(struct sv *);

extern struct op * Perl_ck_glob(struct op *);

extern struct sv * Perl_newSViv(_INT64);

extern _INT32 PL_glob_index;

extern struct gv * Perl_newGVgen(_INT8 *);

extern struct gv * Perl_gv_IOadd(struct gv *);

extern struct op * Perl_ck_grep(struct op *);

extern struct op * Perl_ck_sort(struct op *);

extern struct op * Perl_ck_index(struct op *);

extern void Perl_fbm_compile(struct sv *, _UINT32);

extern struct op * Perl_ck_lengthconst(struct op *);

extern struct op * Perl_ck_lfun(struct op *);

extern struct op * Perl_ck_defined(struct op *);

extern struct op * Perl_ck_rfun(struct op *);

extern struct op * Perl_ck_listiob(struct op *);

extern struct op * Perl_ck_sassign(struct op *);

extern struct op * Perl_ck_match(struct op *);

extern struct op * Perl_ck_method(struct op *);

extern struct sv * Perl_newSVpvn_share(const _INT8 *, _INT32, _UINT32);

extern struct op * Perl_ck_null(struct op *);

extern struct op * Perl_ck_open(struct op *);

extern _INT32 Perl_mode_from_discipline(struct sv *);

extern struct op * Perl_ck_repeat(struct op *);

extern struct op * Perl_ck_require(struct op *);

extern void * memmove(void *, const void *, _UINT64);

extern struct op * Perl_ck_return(struct op *);

extern struct op * Perl_ck_select(struct op *);

extern struct op * Perl_ck_shift(struct op *);

static void S_simplify_sort(struct op *);

extern struct op * Perl_ck_split(struct op *);

extern struct op * Perl_ck_join(struct op *);

extern void Perl_gv_fullname4(struct sv *, struct gv *, const _INT8 *, _INT8);

extern struct op * Perl_ck_svconst(struct op *);

extern struct op * Perl_ck_trunc(struct op *);

extern struct op * Perl_ck_substr(struct op *);

extern void Perl_peep(struct op *);

extern void Perl_save_op(void);

extern void Perl_save_vptr(void *);

extern _UINT16 PL_op_seqmax;

extern struct gv * Perl_gv_AVadd(struct gv *);

extern _INT8 * Perl_custom_op_name(struct op *);

extern struct hv * PL_custom_op_names;

extern _INT8 ** PL_op_name;

extern struct he * Perl_hv_fetch_ent(struct hv *, struct sv *, _INT32, _UINT32);

extern struct hv * PL_custom_op_descs;

