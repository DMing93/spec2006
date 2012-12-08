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
        struct hv_w2c_0 * op_pmstash;
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
            struct xpvav {
                _INT8 * xav_array;
                _INT64 xav_fill;
                _INT64 xav_max;
                _INT64 xof_off;
                _IEEE64 xnv_nv;
                struct magic * xmg_magic;
                struct hv_w2c_0 * xmg_stash;
                struct sv_w2c_0 ** xav_alloc;
                struct sv_w2c_0 * xav_arylen;
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
      struct hv_w2c_0 * xmg_stash;
      _INT32 xhv_riter;
      struct he * xhv_eiter;
      struct pmop * xhv_pmroot;
      _INT8 * xhv_name;
    };
    struct hv_w2c_0 {
    struct xpvhv * sv_any;
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
    struct sv_w2c_0 * op_sv;
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

static _INT32 S_do_trans_simple(struct sv *);

extern struct op * PL_op;

extern void Perl_croak(const _INT8 *, ...);

extern _INT8 * Perl_sv_2pv_flags(struct sv *, _UINT64 *, _INT32);

extern _INT32 Perl_mg_set(struct sv *);

extern void * Perl_safesysmalloc(_UINT64);

extern _UINT64 Perl_utf8n_to_uvuni(_UINT8 *, _UINT64, _UINT64 *, _UINT32);

extern _UINT8 * Perl_uvuni_to_utf8(_UINT8 *, _UINT64);

extern void * memmove(void *, const void *, _UINT64);

extern void Perl_sv_setpvn(struct sv *, const _INT8 *, _UINT64);

extern void Perl_safesysfree(void *);

static _INT32 S_do_trans_count(struct sv *);

static _INT32 S_do_trans_complex(struct sv *);

extern _UINT64 Perl_utf8_to_uvchr(_UINT8 *, _UINT64 *);

static _INT32 S_do_trans_simple_utf8(struct sv *);

extern struct sv ** Perl_hv_fetch(struct hv *, const _INT8 *, _INT32, _INT32);

extern _UINT64 Perl_sv_2uv(struct sv *);

extern _UINT8 * Perl_bytes_to_utf8(_UINT8 *, _UINT64 *);

extern _UINT64 Perl_swash_fetch(struct sv *, _UINT8 *, _INT8);

extern _UINT8 * PL_utf8skip;

extern void * Perl_safesysrealloc(void *, _UINT64);

static _INT32 S_do_trans_count_utf8(struct sv *);

static _INT32 S_do_trans_complex_utf8(struct sv *);

extern _UINT64 Perl_utf8_to_uvuni(_UINT8 *, _UINT64 *);

extern _INT32 Perl_do_trans(struct sv *);

extern void Perl_sv_force_normal(struct sv *);

extern _INT8 * PL_no_modify;

extern _INT8 * Perl_sv_pvn_force_flags(struct sv *, _UINT64 *, _INT32);

extern void Perl_do_join(struct sv *, struct sv *, struct sv **, struct sv **);

extern _INT8 Perl_sv_upgrade(struct sv *, _UINT32);

extern _INT8 * Perl_sv_grow(struct sv *, _UINT64);

extern _INT8 PL_tainting;

extern void Perl_sv_untaint(struct sv *);

extern void Perl_sv_catsv_flags(struct sv *, struct sv *, _INT32);

extern void Perl_do_sprintf(struct sv *, _INT32, struct sv **);

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
              union anonymous_w2c_18 {
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
            union anonymous_w2c_18 xio_dirpu;
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
extern struct cop * volatile PL_curcop;

extern void Perl_sv_vsetpvfn(struct sv *, const _INT8 *, _UINT64, struct __va_list_tag(*)[1LL], struct sv **, _INT32, _INT8 *);

extern void Perl_sv_taint(struct sv *);

extern _UINT64 Perl_do_vecget(struct sv *, _INT32, _INT32);

extern _INT8 Perl_sv_utf8_downgrade(struct sv *, _INT8);

extern _UINT8 PL_dowarn;

extern void Perl_warner(_UINT32, const _INT8 *, ...);

extern void Perl_do_vecset(struct sv *);

extern void Perl_do_chop(struct sv *, struct sv *);

extern _INT32 Perl_mg_size(struct sv *);

extern struct sv ** Perl_av_fetch(struct av *, _INT32, _INT32);

extern struct sv PL_sv_undef;

extern _INT32 Perl_hv_iterinit(struct hv *);

extern struct sv * Perl_hv_iterval(struct hv *, struct he *);

extern struct he * Perl_hv_iternext(struct hv *);

extern void Perl_sv_force_normal_flags(struct sv *, _UINT32);

extern _INT32 Perl_do_chomp(struct sv *);

extern struct sv * PL_rs;

extern _INT64 Perl_sv_2iv(struct sv *);

extern struct sv * PL_encoding;

extern _INT8 * Perl_sv_recode_to_utf8(struct sv *, struct sv *);

extern _UINT64 Perl_sv_len_utf8(struct sv *);

extern _UINT8 * Perl_bytes_from_utf8(_UINT8 *, _UINT64 *, _INT8 *);

extern struct sv * Perl_newSVpvn(const _INT8 *, _UINT64);

extern void Perl_sv_free(struct sv *);

extern void Perl_do_vop(_INT32, struct sv *, struct sv *, struct sv *);

extern _UINT64 Perl_sv_utf8_upgrade_flags(struct sv *, _INT32);

extern void Perl_sv_usepvn(struct sv *, _INT8 *, _UINT64);

extern void Perl_sv_catpvn_flags(struct sv *, const _INT8 *, _UINT64, _INT32);

extern _INT8 PL_tainted;

extern struct op * Perl_do_kv(void);

extern struct sv ** PL_stack_sp;

extern _INT32 Perl_block_gimme(void);

extern _INT32 Perl_is_lvalue_sub(void);

extern struct sv ** PL_curpad;

extern struct hv * Perl_avhv_keys(struct av *);

extern void Perl_sv_magic(struct sv *, struct sv *, _INT32, const _INT8 *, _INT32);

extern struct sv * PL_Sv;

extern struct magic * Perl_mg_find(struct sv *, _INT32);

extern void Perl_sv_setiv(struct sv *, _INT64);

static struct sv * anon1;

extern struct sv ** PL_stack_max;

extern struct sv ** Perl_stack_grow(struct sv **, struct sv **, _INT32);

extern struct sv * Perl_hv_iterkeysv(struct he *);

static struct sv * anon2;

extern struct sv * Perl_avhv_iterval(struct av *, struct he *);

static struct sv * anon3;

