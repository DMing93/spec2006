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
  struct sv_w2c_0 {
    void * sv_any;
    _UINT32 sv_refcnt;
    _UINT32 sv_flags;
  };
  struct magic_state {
    struct sv_w2c_0 * mgs_sv;
    _UINT32 mgs_flags;
    _INT32 mgs_ss_ix;
  };
  struct interpreter {
          _INT8 broiled;
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
                  struct sv_w2c_0 * hent_val;
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
  struct anonymous_w2c_8 {
    _UINT64 __val[16LL];
  };
  struct gv {
              struct xpvgv * sv_any;
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
              union anonymous_w2c_6 {
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
            union anonymous_w2c_6 xio_dirpu;
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
        struct sv_w2c_0 * gp_sv;
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
    struct ufuncs {
    _INT32(*uf_val)(_INT64, struct sv_w2c_0 *);
    _INT32(*uf_set)(_INT64, struct sv_w2c_0 *);
    _INT64 uf_index;
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
                struct gv * gv;
                struct gv * dfoutgv;
                struct av * savearray;
                struct av * argarray;
                _INT64 olddepth;
                _UINT8 hasargs;
                _UINT8 lval;
                struct av * oldcomppad;
              };
              union anonymous_w2c_26 {
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
              struct gv * cop_filegv;
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
            union anonymous_w2c_26 blk_u;
          };
          union anonymous_w2c_25 {
          struct block cx_blk;
          struct subst cx_subst;
        };
        struct context {
        _UINT32 cx_type;
        union anonymous_w2c_25 cx_u;
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
    struct xpv {
    _INT8 * xpv_pv;
    _UINT64 xpv_cur;
    _UINT64 xpv_len;
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

static void S_save_magic(_INT32, struct sv *);

extern void Perl_save_destructor_x(void(*)(void *), void *);

static void restore_magic(void *);

extern union any * PL_savestack;

extern _INT32 PL_savestack_ix;

extern void Perl_mg_magical(struct sv *);

extern _INT32 Perl_mg_get(struct sv *);

extern _INT32 Perl_save_alloc(_INT32, _INT32);

extern struct sv * Perl_sv_2mortal(struct sv *);

extern struct sv * PL_Sv;

extern _INT32 Perl_sv_backoff(struct sv *);

extern _INT32 Perl_mg_set(struct sv *);

extern _UINT32 Perl_mg_length(struct sv *);

extern struct cop * volatile PL_curcop;

extern _INT8 * Perl_sv_2pv_flags(struct sv *, _UINT64 *, _INT32);

extern _UINT64 Perl_utf8_length(_UINT8 *, _UINT8 *);

extern _INT32 Perl_mg_size(struct sv *);

extern void Perl_croak(const _INT8 *, ...);

extern _INT32 Perl_mg_clear(struct sv *);

extern struct magic * Perl_mg_find(struct sv *, _INT32);

extern _INT32 Perl_mg_copy(struct sv *, struct sv *, const _INT8 *, _INT32);

extern void Perl_sv_magic(struct sv *, struct sv *, _INT32, const _INT8 *, _INT32);

extern struct sv * Perl_newRV(struct sv *);

extern _INT32 Perl_mg_free(struct sv *);

extern void Perl_safesysfree(void *);

extern void Perl_sv_free(struct sv *);

extern __inline _INT32 __sigismember(const struct anonymous_w2c_8 *, _INT32);

extern __inline _INT32 __sigaddset(struct anonymous_w2c_8 *, _INT32);

extern __inline _INT32 __sigdelset(struct anonymous_w2c_8 *, _INT32);

extern _UINT32 Perl_magic_regdata_cnt(struct sv *, struct magic *);

extern struct pmop * PL_curpm;

extern _INT32 Perl_magic_regdatum_get(struct sv *, struct magic *);

extern void Perl_sv_setiv(struct sv *, _INT64);

extern _INT32 Perl_magic_regdatum_set(struct sv *, struct magic *);

extern _INT8 * PL_no_modify;

extern _UINT32 Perl_magic_len(struct sv *, struct magic *);

extern _INT8 Perl_is_utf8_string(_UINT8 *, _UINT64);

extern _UINT8 PL_dowarn;

extern void Perl_report_uninit(void);

extern _INT32 Perl_magic_get(struct sv *, struct magic *);

extern void Perl_sv_setsv_flags(struct sv *, struct sv *, _INT32);

extern struct sv * PL_bodytarget;

extern _INT8 PL_minus_c;

extern volatile _UINT32 PL_debug;

extern _INT32 * __errno_location(void);

extern void Perl_sv_setnv(struct sv *, _IEEE64);

extern void Perl_sv_setpv(struct sv *, const _INT8 *);

extern _INT8 * strerror(_INT32);

static _INT32 anon1;

extern struct sv * PL_encoding;

extern _INT32 PL_maxsysfd;

extern _UINT32 PL_hints;

extern _INT8 * PL_inplace;

extern struct sv PL_sv_undef;

extern _INT8 * PL_osname;

extern _INT8 PL_tainting;

extern void Perl_sv_untaint(struct sv *);

static _INT32 anon3;

extern struct cop PL_compiling;

extern _UINT32 PL_perldb;

extern _UINT32 PL_lex_state;

extern volatile _INT32 PL_in_eval;

extern _INT64 PL_basetime;

static _INT32 anon5;

extern _INT8 PL_taint_warn;

extern _INT8 PL_unsafe;

static _INT32 anon7;

extern void Perl_sv_setuv(struct sv *, _UINT64);

extern _UINT32 PL_unicode;

static _INT32 anon9;

extern _INT8 PL_utf8locale;

static _INT32 anon11;

extern void Perl_sv_setpvn(struct sv *, const _INT8 *, _UINT64);

extern struct hv * Perl_get_hv(const _INT8 *, _INT32);

extern struct sv ** Perl_hv_fetch(struct hv *, const _INT8 *, _INT32, _INT32);

extern _INT8 PL_tainted;

extern void Perl_sv_taint(struct sv *);

extern struct gv * PL_last_in_gv;

extern _INT32 PL_statusvalue;

extern struct gv * PL_defoutgv;

extern void Perl_sv_catpv(struct sv *, const _INT8 *);

extern struct sv * PL_ors_sv;

extern void Perl_sv_copypv(struct sv *, struct sv *);

extern _INT8 * PL_ofmt;

extern _UINT32 PL_uid;

extern _UINT32 PL_euid;

extern _UINT32 PL_gid;

extern _UINT32 PL_egid;

extern _INT32 Perl_magic_getuvar(struct sv *, struct magic *);

extern _INT32 Perl_magic_setenv(struct sv *, struct magic *);

extern void Perl_my_setenv(_INT8 *, _INT8 *);

static _INT32 anon13;

extern _INT8 * Perl_delimcpy(_INT8 *, _INT8 *, _INT8 *, _INT8 *, _INT32, _INT32 *);

extern _INT32 Perl_magic_clearenv(struct sv *, struct magic *);

extern _INT32 Perl_magic_set_all_env(struct sv *, struct magic *);

extern _INT32 PL_localizing;

extern _INT32 Perl_magic_clear_all_env(struct sv *, struct magic *);

extern _INT32 Perl_hv_iterinit(struct hv *);

extern _INT8 * Perl_hv_iterkey(struct he *, _INT32 *);

extern struct sv * Perl_hv_iterval(struct hv *, struct he *);

extern struct he * Perl_hv_iternext(struct hv *);

extern _INT32 PL_use_safe_putenv;

extern _INT8 ** environ;

extern _INT8 ** PL_origenviron;

extern void * Perl_safesysmalloc(_UINT64);

extern _INT32 Perl_magic_getsig(struct sv *, struct magic *);

extern _INT32 Perl_whichsig(_INT8 *);

extern struct sv ** PL_psig_ptr;

extern void(*Perl_rsignal_state(_INT32))(_INT32);

extern _INT32 Perl_magic_clearsig(struct sv *, struct magic *);

static _INT32 anon15;

extern struct sv * PL_diehook;

static _INT32 anon17;

extern struct sv * PL_warnhook;

extern _INT32 PL_sig_pending;

extern void Perl_despatch_signals(void);

extern void(*Perl_rsignal(_INT32, void(*)(_INT32)))(_INT32);

extern struct sv ** PL_psig_name;

extern void Perl_pop_scope(void);

extern void Perl_raise_signal(_INT32);

extern _INT32 * PL_psig_pend;

extern void Perl_csighandler(_INT32);

extern _UINT32 PL_signals;

extern void(*PL_sighandlerp)(_INT32);

extern _INT32 Perl_magic_setsig(struct sv *, struct magic *);

static _INT32 anon19;

static _INT32 anon21;

extern void Perl_warner(_UINT32, const _INT8 *, ...);

extern struct sv * Perl_newSVpvn(const _INT8 *, _UINT64);

extern void(*PL_csighandlerp)(_INT32);

extern _INT8 * Perl_sv_pvn_force_flags(struct sv *, _UINT64 *, _INT32);

static _INT32 anon23;

static _INT32 anon25;

extern void Perl_sv_insert(struct sv *, _UINT64, _UINT64, _INT8 *, _UINT64);

extern _INT32 Perl_magic_setisa(struct sv *, struct magic *);

extern _UINT32 PL_sub_generation;

extern _INT32 Perl_magic_setamagic(struct sv *, struct magic *);

extern _INT64 PL_amagic_generation;

extern _INT32 Perl_magic_getnkeys(struct sv *, struct magic *);

extern _INT32 Perl_magic_setnkeys(struct sv *, struct magic *);

extern void Perl_hv_ksplit(struct hv *, _INT64);

extern _INT64 Perl_sv_2iv(struct sv *);

static _INT32 S_magic_methcall(struct sv *, struct magic *, _INT8 *, _INT32, _INT32, struct sv *);

extern struct sv ** PL_stack_sp;

static _INT32 anon27;

extern _INT32 * PL_markstack_ptr;

extern _INT32 * PL_markstack_max;

extern void Perl_markstack_grow(void);

extern struct sv ** PL_stack_base;

extern struct sv ** PL_stack_max;

extern struct sv ** Perl_stack_grow(struct sv **, struct sv **, _INT32);

extern struct sv * Perl_newSViv(_INT64);

extern _INT32 Perl_call_method(const _INT8 *, _INT32);

static _INT32 S_magic_methpack(struct sv *, struct magic *, _INT8 *);

extern void Perl_push_scope(void);

extern void Perl_save_int(_INT32 *);

extern _INT32 PL_tmps_floor;

extern _INT32 PL_tmps_ix;

extern struct stackinfo * PL_curstackinfo;

extern struct stackinfo * Perl_new_stackinfo(_INT32, _INT32);

static struct av * anon28;

extern struct av * PL_curstack;

static struct stackinfo * anon29;

extern _INT32 PerlIO_printf(struct _PerlIO **, const _INT8 *, ...);

extern struct gv * PL_stderrgv;

extern struct _PerlIO ** Perl_PerlIO_stderr(void);

extern void Perl_my_exit(_UINT32);

static struct av * anon30;

extern void Perl_free_tmps(void);

extern _INT32 Perl_magic_getpack(struct sv *, struct magic *);

extern _INT32 Perl_magic_setpack(struct sv *, struct magic *);

static struct av * anon31;

static struct stackinfo * anon32;

static struct av * anon33;

extern _INT32 Perl_magic_clearpack(struct sv *, struct magic *);

extern _UINT32 Perl_magic_sizepack(struct sv *, struct magic *);

static struct av * anon34;

static struct stackinfo * anon35;

static struct av * anon36;

extern _INT32 Perl_magic_wipepack(struct sv *, struct magic *);

static struct av * anon37;

static _INT32 anon38;

static struct sv * anon39;

static struct stackinfo * anon40;

static struct av * anon41;

extern _INT32 Perl_magic_nextpack(struct sv *, struct magic *, struct sv *);

static struct av * anon42;

static _INT32 anon43;

static struct stackinfo * anon44;

static struct av * anon45;

extern _INT32 Perl_magic_existspack(struct sv *, struct magic *);

extern struct sv * Perl_magic_scalarpack(struct hv *, struct magic *);

extern struct gv * Perl_gv_fetchmethod_autoload(struct hv *, const _INT8 *, _INT32);

extern struct sv PL_sv_yes;

extern struct sv * Perl_sv_newmortal(void);

extern struct sv PL_sv_no;

static struct av * anon46;

static _INT32 anon47;

static struct stackinfo * anon48;

static struct av * anon49;

extern _INT32 Perl_magic_setdbline(struct sv *, struct magic *);

extern struct gv * PL_DBline;

extern struct xpv * PL_Xpv;

extern _INT8 Perl_sv_2bool(struct sv *);

extern struct sv ** Perl_av_fetch(struct av *, _INT32, _INT32);

extern _INT32 Perl_magic_getarylen(struct sv *, struct magic *);

extern _INT32 Perl_magic_setarylen(struct sv *, struct magic *);

extern void Perl_av_fill(struct av *, _INT32);

extern _INT32 Perl_magic_getpos(struct sv *, struct magic *);

extern void Perl_sv_pos_b2u(struct sv *, _INT32 *);

extern _INT32 Perl_magic_setpos(struct sv *, struct magic *);

extern _UINT64 Perl_sv_len(struct sv *);

extern _UINT64 Perl_sv_len_utf8(struct sv *);

extern void Perl_sv_pos_u2b(struct sv *, _INT32 *, _INT32 *);

extern _INT32 Perl_magic_getglob(struct sv *, struct magic *);

extern void Perl_gv_efullname4(struct sv *, struct gv *, const _INT8 *, _INT8);

extern _INT32 Perl_magic_setglob(struct sv *, struct magic *);

extern struct gv * Perl_gv_fetchpv(const _INT8 *, _INT32, _INT32);

extern void Perl_gp_free(struct gv *);

extern struct gp * Perl_gp_ref(struct gp *);

extern _INT32 Perl_magic_getsubstr(struct sv *, struct magic *);

extern _INT32 Perl_magic_setsubstr(struct sv *, struct magic *);

extern _UINT64 Perl_sv_utf8_upgrade_flags(struct sv *, _INT32);

extern _UINT8 * Perl_bytes_to_utf8(_UINT8 *, _UINT64 *);

extern _INT32 Perl_magic_gettaint(struct sv *, struct magic *);

extern _INT32 Perl_magic_settaint(struct sv *, struct magic *);

extern _INT32 Perl_magic_getvec(struct sv *, struct magic *);

extern _UINT64 Perl_do_vecget(struct sv *, _INT32, _INT32);

extern _INT32 Perl_magic_setvec(struct sv *, struct magic *);

extern void Perl_do_vecset(struct sv *);

extern _INT32 Perl_magic_getdefelem(struct sv *, struct magic *);

extern struct he * Perl_hv_fetch_ent(struct hv *, struct sv *, _INT32, _UINT32);

extern struct sv ** Perl_avhv_fetch_ent(struct av *, struct sv *, _INT32, _UINT32);

extern _INT32 Perl_magic_setdefelem(struct sv *, struct magic *);

extern void Perl_vivify_defelem(struct sv *);

extern _INT8 * PL_no_helem;

extern _INT8 * PL_no_aelem;

extern _INT32 Perl_magic_killbackrefs(struct sv *, struct magic *);

extern _INT32 Perl_magic_setmglob(struct sv *, struct magic *);

extern _INT32 Perl_magic_setbm(struct sv *, struct magic *);

extern _INT32 Perl_sv_unmagic(struct sv *, _INT32);

extern _INT32 Perl_magic_setfm(struct sv *, struct magic *);

extern _INT32 Perl_magic_setuvar(struct sv *, struct magic *);

extern _INT32 Perl_magic_setregexp(struct sv *, struct magic *);

extern _INT32 Perl_magic_freeregexp(struct sv *, struct magic *);

extern void(*PL_regfree)(struct regexp *);

extern _INT32 Perl_magic_setutf8(struct sv *, struct magic *);

extern _INT32 Perl_magic_set(struct sv *, struct magic *);

static _INT32 anon50;

extern struct sv * Perl_newSVsv(struct sv *);

extern _INT8 * Perl_savesvpv(struct sv *);

extern void Perl_taint_proper(const _INT8 *, const _INT8 *);

static _INT32 anon52;

extern struct sv * PL_DBsingle;

extern void Perl_init_debugger(void);

static _INT32 anon54;

extern void Perl_save_sptr(struct sv **);

extern _INT32 Perl_PerlIO_flush(struct _PerlIO **);

extern _INT32 PL_multiline;

extern struct sv * PL_rs;

extern struct sv * PL_ofs_sv;

extern _INT32 PL_delaymagic;

extern _INT32 setuid(_UINT32);

extern _UINT32 getuid(void);

extern _UINT32 geteuid(void);

extern _INT32 setgid(_UINT32);

extern _UINT32 getgid(void);

extern _UINT32 getegid(void);

extern _INT8 * PL_chopset;

extern _UINT32 PL_origalen;

extern _INT8 ** PL_origargv;

extern _INT32 PL_origargc;

extern _INT8 ** PL_sig_name;

static _INT32 anon56;

extern _INT32 * PL_sig_num;

static _INT32 anon57;

static _INT32 anon59;

static _INT32 anon60;

extern void Perl_sighandler(_INT32);

extern struct op * PL_op;

extern _INT32 PL_savestack_max;

extern _INT32 PL_retstack_max;

extern _INT32 PL_retstack_ix;

extern _INT32 PL_scopestack_max;

extern _INT32 PL_scopestack_ix;

extern void exit(_INT32);

static void unwind_handler_stack(void *);

extern struct op ** PL_retstack;

extern struct cv * Perl_sv_2cv(struct sv *, struct hv **, struct gv **, _INT32);

static struct sv * sig_sv;

static struct av * anon61;

static _INT32 anon62;

extern _INT32 Perl_call_sv(struct sv *, _INT32);

static struct stackinfo * anon63;

static struct av * anon64;

extern struct gv * PL_errgv;

extern struct op * Perl_die(const _INT8 *, ...);

