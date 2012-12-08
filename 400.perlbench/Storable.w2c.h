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
  struct _PerlIO;
    struct extendable {
      _INT8 * arena;
      _UINT64 asiz;
      _INT8 * aptr;
      _INT8 * aend;
    };
    struct stcxt {
    _INT32 entry;
    _INT32 optype;
    struct hv * hseen;
    struct av * hook_seen;
    struct av * aseen;
    _INT64 where_is_undef;
    struct hv * hclass;
    struct av * aclass;
    struct hv * hook;
    _INT64 tagnum;
    _INT64 classnum;
    _INT32 netorder;
    _INT32 s_tainted;
    _INT32 forgive_me;
    _INT32 deparse;
    struct sv * eval;
    _INT32 canonical;
    _INT32 accept_future_minor;
    _INT32 s_dirty;
    _INT32 membuf_ro;
    struct extendable keybuf;
    struct extendable membuf;
    struct extendable msaved;
    struct _PerlIO ** fio;
    _INT32 ver_major;
    _INT32 ver_minor;
    struct sv * (** retrieve_vtbl)();
    struct sv * prev;
    struct sv * my_sv;
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
              union anonymous_w2c_8 {
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
            union anonymous_w2c_8 xio_dirpu;
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
        struct sv_w2c_0 * gp_sv;
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
  static _UINT8 network_file_header_w2c_13766[6LL] = {112, 115, 116, 48, 5, 6};
  static _UINT8 file_header_w2c_13767[19LL] = {112, 115, 116, 48, 4, 6, 8, 49, 50, 51, 52, 53, 54, 55, 56, 4, 8, 8, 8};
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

static void init_perinterp(void);

static struct stcxt * Context_ptr;

static struct sv * anon1;

extern struct sv * Perl_newSV(_UINT64);

extern struct sv * Perl_newRV_noinc(struct sv *);

extern struct sv * Perl_sv_bless(struct sv *, struct hv *);

extern struct hv * Perl_gv_stashpv(const _INT8 *, _INT32);

static void reset_context(struct stcxt *);

static void init_store_context(struct stcxt *, struct _PerlIO **, _INT32, _INT32);

extern struct hv * Perl_newHV(void);

extern struct av * Perl_newAV(void);

static void clean_store_context(struct stcxt *);

extern _INT32 Perl_hv_iterinit(struct hv *);

extern struct sv PL_sv_undef;

extern struct he * Perl_hv_iternext(struct hv *);

extern void Perl_hv_undef(struct hv *);

extern void Perl_sv_free(struct sv *);

extern void Perl_av_undef(struct av *);

static void init_retrieve_context(struct stcxt *, _INT32, _INT32);

static struct sv * (*sv_old_retrieve[28LL])(struct stcxt *, _INT8 *) = {0LL, &retrieve_lscalar, &old_retrieve_array, &old_retrieve_hash, &retrieve_ref, &retrieve_undef, &retrieve_integer, &retrieve_double, &retrieve_byte, &retrieve_netint, &retrieve_scalar, &retrieve_tied_array, &retrieve_tied_hash, &retrieve_tied_scalar, &retrieve_other, &retrieve_other, &retrieve_other, &retrieve_other, &retrieve_other, &retrieve_other, &retrieve_other, &retrieve_other, &retrieve_other, &retrieve_other, &retrieve_other, &retrieve_other, &retrieve_other, &retrieve_other};

static void clean_retrieve_context(struct stcxt *);

static void clean_context(struct stcxt *);

static struct extendable anon2;

static struct stcxt * allocate_context(struct stcxt *);

static struct sv * anon3;

static void free_context(struct stcxt *);

extern _INT32 is_storing(void);

extern _INT32 is_retrieving(void);

extern _INT32 last_op_in_netorder(void);

static struct sv * pkg_fetchmeth(struct hv *, struct hv *, _INT8 *);

extern struct gv * Perl_gv_fetchmethod_autoload(struct hv *, const _INT8 *, _INT32);

extern struct sv * Perl_newRV(struct sv *);

extern struct sv * Perl_newSVsv(struct sv *);

extern struct sv ** Perl_hv_store(struct hv *, const _INT8 *, _INT32, struct sv *, _UINT32);

static void pkg_hide(struct hv *, struct hv *, _INT8 *);

static void pkg_uncache(struct hv *, struct hv *, _INT8 *);

extern struct sv * Perl_hv_delete(struct hv *, const _INT8 *, _INT32, _INT32);

static struct sv * pkg_can(struct hv *, struct hv *, _INT8 *);

extern struct sv ** Perl_hv_fetch(struct hv *, const _INT8 *, _INT32, _INT32);

static struct sv * scalar_call(struct sv *, struct sv *, _INT32, struct av *, _INT32);

extern struct sv ** PL_stack_sp;

extern void Perl_push_scope(void);

extern void Perl_save_int(_INT32 *);

extern _INT32 PL_tmps_floor;

extern _INT32 PL_tmps_ix;

static _INT32 anon4;

extern _INT32 * PL_markstack_ptr;

extern _INT32 * PL_markstack_max;

extern void Perl_markstack_grow(void);

extern struct sv ** PL_stack_base;

static struct sv * anon5;

extern struct sv ** PL_stack_max;

extern struct sv ** Perl_stack_grow(struct sv **, struct sv **, _INT32);

static struct sv * anon6;

extern struct sv * Perl_sv_2mortal(struct sv *);

extern struct sv * Perl_newSViv(_INT64);

static struct sv * anon7;

static struct sv * anon8;

extern _INT32 Perl_call_sv(struct sv *, _INT32);

extern struct sv * PL_Sv;

extern void Perl_free_tmps(void);

extern void Perl_pop_scope(void);

static struct av * array_call(struct sv *, struct sv *, _INT32);

static _INT32 anon9;

static struct sv * anon10;

static struct sv * anon11;

extern struct sv ** Perl_av_store(struct av *, _INT32, struct sv *);

static _INT32 known_class(struct stcxt *, _INT8 *, _INT32, _INT32 *);

extern void Perl_croak(const _INT8 *, ...);

static _INT32 store_ref(struct stcxt *, struct sv *);

extern _INT64 PL_amagic_generation;

extern _INT8 Perl_Gv_AMupdate(struct hv *);

static _INT8 * anon12;

extern void * Perl_safesysrealloc(void *, _UINT64);

extern _INT32 PerlIO_putc(struct _PerlIO **, _INT32);

static _INT8 * anon13;

static _INT8 * anon14;

static _INT32 store(struct stcxt *, struct sv *);

static _INT32 store_scalar(struct stcxt *, struct sv *);

static _INT8 * anon15;

static _INT8 * anon16;

extern struct sv PL_sv_yes;

static _INT8 * anon17;

extern struct sv PL_sv_no;

static _INT8 * anon18;

extern _INT8 * Perl_sv_2pv_flags(struct sv *, _UINT64 *, _INT32);

extern _INT64 Perl_sv_2iv(struct sv *);

extern _UINT64 Perl_sv_2uv(struct sv *);

static _INT8 * anon19;

static _INT8 * anon20;

extern _INT64 Perl_PerlIO_write(struct _PerlIO **, const void *, _UINT64);

static _INT8 * anon25;

static _INT8 * anon26;

static _INT8 * anon27;

extern _IEEE64 Perl_sv_2nv(struct sv *);

static _INT8 * anon28;

static _INT8 * anon29;

static _INT8 * anon30;

static _INT8 * anon31;

static _INT8 * anon32;

static _INT8 * anon33;

static _INT8 * anon34;

static _INT8 * anon35;

static _UINT32 anon36;

static _INT8 * anon37;

static _INT8 * anon38;

static _INT8 * anon39;

static _INT8 * anon40;

static _INT8 * anon41;

static _INT8 * anon42;

static _INT8 * anon43;

static _INT8 * anon44;

static _INT8 * anon45;

static _INT8 * anon46;

static _INT8 * anon47;

static _UINT32 anon48;

static _INT8 * anon49;

static _INT8 * anon50;

static _INT8 * anon51;

static _INT8 * anon52;

static _INT8 * anon53;

static _INT8 * anon54;

extern _INT8 * Perl_sv_reftype(struct sv *, _INT32);

static _INT32 store_array(struct stcxt *, struct av *);

extern _INT32 Perl_av_len(struct av *);

static _INT8 * anon55;

static _UINT32 anon56;

static _INT8 * anon57;

static _INT8 * anon58;

static _INT8 * anon59;

static _INT8 * anon60;

extern struct sv ** Perl_av_fetch(struct av *, _INT32, _INT32);

static _INT8 * anon61;

static _INT32 store_hash(struct stcxt *, struct hv *);

static _INT8 * anon62;

static _INT8 * anon63;

static _INT8 * anon64;

static _UINT32 anon65;

static _INT8 * anon66;

static _INT8 * anon67;

static _INT8 * anon68;

static _INT8 * anon69;

extern struct sv * Perl_get_sv(const _INT8 *, _INT32);

struct xpv {
  _INT8 * xpv_pv;
  _UINT64 xpv_cur;
  _UINT64 xpv_len;
};
extern struct xpv * PL_Xpv;

extern _INT8 Perl_sv_2bool(struct sv *);

extern struct he * Perl_hv_iternext_flags(struct hv *, _INT32);

extern struct sv * Perl_hv_iterkeysv(struct he *);

extern void Perl_sortsv(struct sv **, _UINT64, _INT32(*)(struct sv *, struct sv *));

extern _INT32 Perl_sv_cmp(struct sv *, struct sv *);

extern struct sv * Perl_av_shift(struct av *);

extern struct he * Perl_hv_fetch_ent(struct hv *, struct sv *, _INT32, _UINT32);

extern _UINT8 * Perl_bytes_from_utf8(_UINT8 *, _UINT64 *, _INT8 *);

static _INT8 * anon70;

static _UINT32 anon71;

static _INT8 * anon72;

static _INT8 * anon73;

static _INT8 * anon74;

static _INT8 * anon75;

static _INT8 * anon76;

static _INT8 * anon77;

extern void Perl_safesysfree(void *);

extern struct sv * Perl_hv_iterval(struct hv *, struct he *);

extern struct sv PL_sv_placeholder;

static _INT8 * anon78;

static _UINT32 anon79;

static _INT8 * anon80;

static _INT8 * anon81;

static _INT8 * anon82;

static _INT8 * anon83;

static _INT8 * anon84;

static _INT8 * anon85;

static _INT32 store_code(struct stcxt *, struct cv *);

static _INT32 store_other(struct stcxt *, struct sv *);

extern void Perl_load_module(_UINT32, struct sv *, struct sv *, ...);

extern struct sv * Perl_newSVpvn(const _INT8 *, _UINT64);

extern struct sv * Perl_newSVnv(_IEEE64);

static _INT32 anon86;

static struct sv * anon87;

extern _INT32 Perl_call_method(const _INT8 *, _INT32);

static _INT32 anon88;

static struct sv * anon89;

static struct sv * anon90;

extern _INT8 * Perl_sv_2pv_nolen(struct sv *);

static _INT8 * anon91;

static _INT8 * anon92;

static _INT8 * anon93;

static _INT8 * anon94;

static _INT8 * anon95;

static _INT8 * anon96;

static _UINT32 anon97;

static _INT8 * anon98;

static _INT8 * anon99;

static _INT8 * anon100;

static _INT8 * anon101;

static _INT8 * anon102;

static _INT8 * anon103;

static _INT32 store_tied(struct stcxt *, struct sv *);

static _INT8 * anon104;

static _INT8 * anon105;

static _INT8 * anon106;

extern struct magic * Perl_mg_find(struct sv *, _INT32);

static _INT32 store_tied_item(struct stcxt *, struct sv *);

static _INT8 * anon107;

static _INT8 * anon108;

static _UINT32 anon109;

static _INT8 * anon110;

static _INT8 * anon111;

static _INT8 * anon112;

static _INT8 * anon113;

static _INT32 store_hook(struct stcxt *, struct sv *, _INT32, struct hv *, struct sv *);

static _INT32 store_blessed(struct stcxt *, struct sv *, _INT32, struct hv *);

static _INT8 * anon114;

static _INT8 * anon115;

static _INT8 * anon116;

static _INT8 * anon117;

static _INT8 * anon118;

static _INT8 * anon119;

static _INT8 * anon120;

static _INT8 * anon121;

static _UINT32 anon122;

static _INT8 * anon123;

static _INT8 * anon124;

static _INT8 * anon125;

static _INT8 * anon126;

static _INT8 * anon127;

static _UINT32 anon128;

static _INT8 * anon129;

static _INT8 * anon130;

static _INT8 * anon131;

static _INT8 * anon132;

static _INT8 * anon133;

static _INT8 * anon134;

static _INT8 * anon135;

static _UINT32 anon136;

static _INT8 * anon137;

static _INT8 * anon138;

static _INT8 * anon139;

static _INT8 * anon140;

static _INT8 * anon141;

static _INT8 * anon142;

static _INT8 * anon143;

static _UINT32 anon144;

static _INT8 * anon145;

static _INT8 * anon146;

static _INT8 * anon147;

static _INT8 * anon148;

static _INT8 * anon149;

static _UINT32 anon150;

static _INT8 * anon151;

static _INT8 * anon152;

static _INT8 * anon153;

static _INT8 * anon154;

static _INT8 * anon155;

static _UINT32 anon156;

static _INT8 * anon157;

static _INT8 * anon158;

static _INT8 * anon159;

static _INT8 * anon160;

static _INT8 * anon161;

static _INT8 * anon162;

static _INT8 * anon163;

static _UINT32 anon164;

static _INT8 * anon165;

static _INT8 * anon166;

static _INT8 * anon167;

static _INT8 * anon168;

static _INT8 * anon169;

static _INT8 * anon170;

static _INT32(*sv_store[8LL])(struct stcxt *, struct sv *) = {&store_ref, &store_scalar, (_INT32(*)(struct stcxt *, struct sv *)) & store_array, (_INT32(*)(struct stcxt *, struct sv *)) & store_hash, &store_tied, &store_tied_item, (_INT32(*)(struct stcxt *, struct sv *)) & store_code, &store_other};

extern void Perl_warn(const _INT8 *, ...);

extern _INT32 sprintf(_INT8 *, const _INT8 *, ...);

static _INT8 * anon171;

static _INT8 * anon172;

static _INT8 * anon173;

static _INT8 * anon174;

static _INT8 * anon175;

static _UINT32 anon176;

static _INT8 * anon177;

static _INT8 * anon178;

static _INT8 * anon179;

static _INT8 * anon180;

static _INT8 * anon181;

static _INT8 * anon182;

static _INT32 sv_type(struct sv *);

static _UINT32 anon183;

static _INT8 * anon184;

static _INT8 * anon185;

static _INT8 * anon186;

static _INT32 magic_write(struct stcxt *);

static _INT8 * anon187;

static _INT8 * anon188;

static _INT32 do_store(struct _PerlIO **, struct sv *, _INT32, _INT32, struct sv **);

extern void * Perl_safesysmalloc(_UINT64);

static struct sv * mbuf2sv(void);

extern _INT32 pstore(struct _PerlIO **, struct sv *);

extern _INT32 net_pstore(struct _PerlIO **, struct sv *);

extern struct sv * Perl_newSVpv(const _INT8 *, _UINT64);

extern struct sv * mstore(struct sv *);

extern struct sv * net_mstore(struct sv *);

static struct sv * retrieve_other(struct stcxt *, _INT8 *);

static struct sv * retrieve_idx_blessed(struct stcxt *, _INT8 *);

extern _INT32 PerlIO_getc(struct _PerlIO **);

extern _INT64 Perl_PerlIO_read(struct _PerlIO **, void *, _UINT64);

static _UINT32 anon189;

static struct sv * retrieve(struct stcxt *, _INT8 *);

static struct sv * retrieve_blessed(struct stcxt *, _INT8 *);

static _UINT32 anon190;

static struct sv * retrieve_hook(struct stcxt *, _INT8 *);

static _UINT32 anon191;

static _UINT32 anon192;

static _UINT32 anon193;

extern _INT8 PL_tainting;

extern _INT8 PL_tainted;

extern void Perl_sv_taint(struct sv *);

static _UINT32 anon194;

extern void Perl_av_extend(struct av *, _INT32);

static _UINT32 anon195;

extern void Perl_sv_catpv(struct sv *, const _INT8 *);

extern _INT32 Perl_eval_sv(struct sv *, _INT32);

extern _INT8 Perl_sv_upgrade(struct sv *, _UINT32);

extern void Perl_sv_magic(struct sv *, struct sv *, _INT32, const _INT8 *, _INT32);

static struct sv * retrieve_ref(struct stcxt *, _INT8 *);

static struct sv * retrieve_overloaded(struct stcxt *, _INT8 *);

static struct sv * retrieve_tied_array(struct stcxt *, _INT8 *);

static struct sv * retrieve_tied_hash(struct stcxt *, _INT8 *);

static struct sv * retrieve_tied_scalar(struct stcxt *, _INT8 *);

static struct sv * retrieve_tied_key(struct stcxt *, _INT8 *);

static struct sv * retrieve_tied_idx(struct stcxt *, _INT8 *);

static _UINT32 anon196;

static struct sv * retrieve_lscalar(struct stcxt *, _INT8 *);

static _UINT32 anon197;

static struct sv * retrieve_scalar(struct stcxt *, _INT8 *);

extern _INT8 * Perl_sv_grow(struct sv *, _UINT64);

static struct sv * retrieve_utf8str(struct stcxt *, _INT8 *);

static struct sv * retrieve_lutf8str(struct stcxt *, _INT8 *);

static struct sv * retrieve_integer(struct stcxt *, _INT8 *);

static struct sv * retrieve_netint(struct stcxt *, _INT8 *);

static _UINT32 anon198;

static struct sv * retrieve_double(struct stcxt *, _INT8 *);

static struct sv * retrieve_byte(struct stcxt *, _INT8 *);

static struct sv * retrieve_undef(struct stcxt *, _INT8 *);

static struct sv * retrieve_sv_undef(struct stcxt *, _INT8 *);

static struct sv * retrieve_sv_yes(struct stcxt *, _INT8 *);

static struct sv * retrieve_sv_no(struct stcxt *, _INT8 *);

static struct sv * retrieve_array(struct stcxt *, _INT8 *);

static _UINT32 anon199;

static struct sv * retrieve_hash(struct stcxt *, _INT8 *);

static _UINT32 anon200;

extern void Perl_hv_ksplit(struct hv *, _INT64);

static _UINT32 anon201;

static struct sv * retrieve_flag_hash(struct stcxt *, _INT8 *);

static _UINT32 anon202;

extern struct he * Perl_hv_store_ent(struct hv *, struct sv *, struct sv *, _UINT32);

static _UINT32 anon203;

extern struct sv ** Perl_hv_store_flags(struct hv *, const _INT8 *, _INT32, struct sv *, _UINT32, _INT32);

static struct sv * retrieve_code(struct stcxt *, _INT8 *);

extern void Perl_sv_setpv(struct sv *, const _INT8 *);

static _INT32 anon204;

static struct sv * anon205;

extern struct sv * Perl_eval_pv(const _INT8 *, _INT32);

static struct sv * old_retrieve_array(struct stcxt *, _INT8 *);

static _UINT32 anon206;

static struct sv * old_retrieve_hash(struct stcxt *, _INT8 *);

static _UINT32 anon207;

static _UINT32 anon208;

static struct sv * magic_check(struct stcxt *);

static struct sv * (*sv_retrieve[28LL])(struct stcxt *, _INT8 *) = {0LL, &retrieve_lscalar, &retrieve_array, &retrieve_hash, &retrieve_ref, &retrieve_undef, &retrieve_integer, &retrieve_double, &retrieve_byte, &retrieve_netint, &retrieve_scalar, &retrieve_tied_array, &retrieve_tied_hash, &retrieve_tied_scalar, &retrieve_sv_undef, &retrieve_sv_yes, &retrieve_sv_no, &retrieve_blessed, &retrieve_idx_blessed, &retrieve_hook, &retrieve_overloaded, &retrieve_tied_key, &retrieve_tied_idx, &retrieve_utf8str, &retrieve_lutf8str, &retrieve_flag_hash, &retrieve_code, &retrieve_other};

static _UINT32 anon209;

static _UINT32 anon210;

static struct sv * do_retrieve(struct _PerlIO **, struct sv *, _INT32);

extern struct sv * Perl_sv_newmortal(void);

static _INT8 * anon211;

extern _INT8 Perl_sv_tainted(struct sv *);

static struct extendable anon212;

extern struct sv * pretrieve(struct _PerlIO **);

extern struct sv * mretrieve(struct sv *);

extern struct sv * dclone(struct sv *);

extern void XS_Storable__Cxt_DESTROY(struct cv *);

extern void XS_Storable_init_perinterp(struct cv *);

extern void XS_Storable_pstore(struct cv *);

extern struct io * Perl_sv_2io(struct sv *);

extern struct op * PL_op;

extern struct sv ** PL_curpad;

extern void Perl_sv_setiv(struct sv *, _INT64);

static struct sv * anon213;

extern _INT32 Perl_mg_set(struct sv *);

extern void XS_Storable_net_pstore(struct cv *);

static struct sv * anon214;

extern void XS_Storable_mstore(struct cv *);

extern void XS_Storable_net_mstore(struct cv *);

extern void XS_Storable_pretrieve(struct cv *);

extern void XS_Storable_mretrieve(struct cv *);

extern void XS_Storable_dclone(struct cv *);

extern void XS_Storable_last_op_in_netorder(struct cv *);

static struct sv * anon215;

extern void XS_Storable_is_storing(struct cv *);

static struct sv * anon216;

extern void XS_Storable_is_retrieving(struct cv *);

static struct sv * anon217;

extern void boot_Storable(struct cv *);

extern struct cv * Perl_newXS(_INT8 *, void(*)(struct cv *), _INT8 *);

extern struct gv * Perl_gv_fetchpv(const _INT8 *, _INT32, _INT32);

