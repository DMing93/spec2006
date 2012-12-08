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
                  struct PerlIOl;
                  struct xpvio {
                  _INT8 * xpv_pv;
                  _UINT64 xpv_cur;
                  _UINT64 xpv_len;
                  _INT64 xiv_iv;
                  _IEEE64 xnv_nv;
                  struct magic * xmg_magic;
                  struct hv * xmg_stash;
                  struct PerlIOl ** xio_ifp;
                  struct PerlIOl ** xio_ofp;
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
        union anonymous_w2c_5 {
        _INT32 ival;
        _INT8 * pval;
        struct op * opval;
        struct gv * gvval;
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
                  struct cv_w2c_0 * cv;
                };
                struct block_sub {
                  struct cv_w2c_0 * cv;
                  struct gv * gv;
                  struct gv * dfoutgv;
                  struct av * savearray;
                  struct av * argarray;
                  _INT64 olddepth;
                  _UINT8 hasargs;
                  _UINT8 lval;
                  struct av * oldcomppad;
                };
                union anonymous_w2c_66 {
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
              union anonymous_w2c_66 blk_u;
            };
            union anonymous_w2c_65 {
            struct block cx_blk;
            struct subst cx_subst;
          };
          struct context {
          _UINT32 cx_type;
          union anonymous_w2c_65 cx_u;
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

  static _INT32 S_ao(_INT32);

  extern _INT8 * PL_bufptr;

  extern union anonymous_w2c_5 PL_yylval;

  static void S_no_op(_INT8 *, _INT8 *);

  extern _INT8 * PL_oldbufptr;

  extern _INT8 * PL_linestart;

  extern _INT32 Perl_yywarn(_INT8 *);

  extern _INT8 * Perl_form(const _INT8 *, ...);

  extern struct cop * volatile PL_curcop;

  extern void Perl_warner(_UINT32, const _INT8 *, ...);

  extern _INT8 * PL_oldoldbufptr;

  extern struct sv * PL_linestr;

  extern _UINT32 PL_hints;

  extern _INT8 Perl_is_utf8_idcont(_UINT8 *);

  extern _INT8 Perl_is_utf8_digit(_UINT8 *);

  extern _INT8 Perl_is_utf8_alnum(_UINT8 *);

  static void S_missingterm(_INT8 *);

  extern _INT32 PL_multi_close;

  extern void Perl_croak(const _INT8 *, ...);

  extern void Perl_deprecate(_INT8 *);

  extern _UINT8 PL_dowarn;

  extern void Perl_deprecate_old(_INT8 *);

  static void S_depcom(void);

  extern void Perl_lex_start(struct sv *);

  extern void Perl_save_I32(_INT32 *);

  extern _INT32 PL_lex_dojoin;

  extern _INT32 PL_lex_brackets;

  extern _INT32 PL_lex_casemods;

  extern _INT32 PL_lex_starts;

  extern _UINT32 PL_lex_state;

  extern void Perl_save_vptr(void *);

  extern struct op * PL_lex_inpat;

  extern _INT32 PL_lex_inwhat;

  extern _INT32 PL_nexttoke;

  extern _INT32 PL_nexttype[5LL];

  extern union anonymous_w2c_5 PL_nextval[5LL];

  extern void Perl_save_pptr(_INT8 **);

  extern _INT8 * PL_bufend;

  extern _INT8 * PL_last_lop;

  extern _INT8 * PL_last_uni;

  extern void Perl_save_sptr(struct sv **);

  extern void Perl_save_generic_pvref(_INT8 **);

  extern _INT8 * PL_lex_brackstack;

  extern _INT8 * PL_lex_casestack;

  extern void Perl_save_destructor_x(void(*)(void *), void *);

  static void restore_rsfp(void *);

  extern struct PerlIOl ** volatile PL_rsfp;

  extern struct sv * PL_lex_stuff;

  extern _UINT32 PL_lex_defer;

  struct _sublex_info {
    _INT32 super_state;
    _INT32 sub_inwhat;
    struct op * sub_op;
    _INT8 * super_bufptr;
    _INT8 * super_bufend;
  };
  extern struct _sublex_info PL_sublex_info;

  extern struct sv * PL_lex_repl;

  extern void Perl_save_int(_INT32 *);

  extern _INT32 PL_expect;

  extern _INT32 PL_lex_expect;

  extern void * Perl_safesysmalloc(_UINT64);

  extern struct sv * Perl_sv_2mortal(struct sv *);

  extern struct sv * Perl_newSVsv(struct sv *);

  extern _INT8 * Perl_sv_2pv_flags(struct sv *, _UINT64 *, _INT32);

  extern void Perl_sv_catpvn_flags(struct sv *, const _INT8 *, _UINT64, _INT32);

  extern void Perl_lex_end(void);

  extern _INT8 PL_doextract;

  static void S_incline(_INT8 *);

  extern void Perl_sv_free(struct sv *);

  extern struct gv * Perl_gv_fetchfile(const _INT8 *);

  extern struct sv * PL_Sv;

  static _INT8 * S_skipspace(_INT8 *);

  extern _INT32 PL_lex_formbrack;

  extern volatile _INT32 PL_in_eval;

  static _INT8 * S_filter_gets(struct sv *, struct PerlIOl **, _UINT64);

  extern _INT8 PL_minus_p;

  extern void Perl_sv_setpv(struct sv *, const _INT8 *);

  extern _INT8 PL_minus_n;

  extern void Perl_sv_setpvn(struct sv *, const _INT8 *, _UINT64);

  extern _INT8 PL_preprocess;

  extern _INT32 Perl_my_pclose(struct PerlIOl **);

  extern struct PerlIOl ** Perl_PerlIO_stdin(void);

  extern void Perl_PerlIO_clearerr(struct PerlIOl **);

  extern _INT32 Perl_PerlIO_close(struct PerlIOl **);

  extern _UINT32 PL_perldb;

  extern struct hv * PL_curstash;

  extern struct hv * PL_debstash;

  extern struct sv * Perl_newSV(_UINT64);

  extern _INT8 Perl_sv_upgrade(struct sv *, _UINT32);

  extern _INT32 Perl_sv_backoff(struct sv *);

  extern struct sv ** Perl_av_store(struct av *, _INT32, struct sv *);

  static void S_check_uni(void);

  static _INT32 S_lop(_INT32, _INT32, _INT8 *);

  extern _UINT32 PL_copline;

  extern _UINT16 PL_last_lop_op;

  static void S_force_next(_INT32);

  static _INT8 * S_force_word(_INT8 *, _INT32, _INT32, _INT32, _INT32);

  static _INT8 * S_scan_word(_INT8 *, _INT8 *, _UINT64, _INT32, _UINT64 *);

  extern _INT8 PL_tokenbuf[256LL];

  extern _INT32 Perl_keyword(_INT8 *, _INT32);

  extern struct op * Perl_newSVOP(_INT32, _INT32, struct sv *);

  extern struct sv * Perl_newSVpv(const _INT8 *, _UINT64);

  extern _INT8 Perl_is_utf8_string(_UINT8 *, _UINT64);

  static void S_force_ident(_INT8 *, _INT32);

  extern struct gv * Perl_gv_fetchpv(const _INT8 *, _INT32, _INT32);

  extern _IEEE64 Perl_str_to_version(struct sv *);

  extern _UINT64 Perl_utf8n_to_uvuni(_UINT8 *, _UINT64, _UINT64 *, _UINT32);

  static _INT8 * S_force_version(_INT8 *, _INT32);

  extern _INT8 * Perl_scan_num(_INT8 *, union anonymous_w2c_5 *);

  static struct sv * S_tokeq(struct sv *);

  extern _INT8 * Perl_sv_pvn_force_flags(struct sv *, _UINT64 *, _INT32);

  extern struct sv * Perl_newSVpvn(const _INT8 *, _UINT64);

  static struct sv * S_new_constant(_INT8 *, _UINT64, const _INT8 *, struct sv *, struct sv *, const _INT8 *);

  static _INT32 S_sublex_start(void);

  extern struct op * PL_lex_op;

  static _INT32 S_sublex_push(void);

  extern void Perl_push_scope(void);

  extern void Perl_save_freesv(struct sv *);

  extern _INT32 PL_multi_start;

  static _INT32 S_sublex_done(void);

  extern _INT32 Perl_yylex(void);

  extern void Perl_pop_scope(void);

  static _INT8 * S_scan_const(_INT8 *);

  extern _UINT8 * Perl_utf8_hop(_UINT8 *, _INT32);

  extern _INT8 * Perl_sv_grow(struct sv *, _UINT64);

  extern _UINT64 Perl_grok_oct(_INT8 *, _UINT64 *, _INT32 *, _IEEE64 *);

  extern _INT32 Perl_yyerror(_INT8 *);

  extern _UINT64 Perl_grok_hex(_INT8 *, _UINT64 *, _INT32 *, _IEEE64 *);

  extern _UINT8 * Perl_uvuni_to_utf8(_UINT8 *, _UINT64);

  extern _UINT64 Perl_sv_utf8_upgrade_flags(struct sv *, _INT32);

  extern struct sv * PL_encoding;

  extern _INT8 * Perl_sv_recode_to_utf8(struct sv *, struct sv *);

  extern void * Perl_safesysrealloc(void *, _UINT64);

  static _INT32 S_intuit_more(_INT8 *);

  static _INT8 * S_scan_ident(_INT8 *, _INT8 *, _INT8 *, _UINT64, _INT32);

  static _INT32 S_intuit_method(_INT8 *, struct gv *);

  extern struct hv * Perl_gv_stashpvn(const _INT8 *, _UINT32, _INT32);

  static _INT8 * S_incl_perldb(void);

  extern _INT8 * getenv(const _INT8 *);

  extern _INT32 * __errno_location(void);

  extern struct sv * Perl_filter_add(_INT32(*)(_INT32, struct sv *, _INT32), struct sv *);

  extern struct av * PL_rsfp_filters;

  extern struct av * Perl_newAV(void);

  extern struct op * Perl_die(const _INT8 *, ...);

  extern void Perl_av_unshift(struct av *, _INT32);

  extern void Perl_filter_del(_INT32(*)(_INT32, struct sv *, _INT32));

  extern struct sv * Perl_av_pop(struct av *);

  extern _INT32 Perl_filter_read(_INT32, struct sv *, _INT32);

  extern _INT64 Perl_PerlIO_read(struct PerlIOl **, void *, _UINT64);

  extern _INT32 Perl_PerlIO_error(struct PerlIOl **);

  extern _INT8 * Perl_sv_gets(struct sv *, struct PerlIOl **, _INT32);

  extern struct sv PL_sv_undef;

  static struct hv * S_find_in_my_stash(_INT8 *, _INT32);

  static _INT32 anon1;

  extern struct sv * Perl_cv_const_sv(struct cv *);

  extern _INT8 * Perl_sv_2pv_nolen(struct sv *);

  extern struct hv * Perl_gv_stashpv(const _INT8 *, _INT32);

  extern _INT8 PL_pending_ident;

  static _INT32 S_pending_ident(void);

  static _INT8 * S_scan_formline(_INT8 *);

  extern _INT8 PL_preambled;

  extern struct av * PL_preambleav;

  extern struct sv * Perl_av_shift(struct av *);

  extern void Perl_sv_catsv_flags(struct sv *, struct sv *, _INT32);

  extern void Perl_sv_catpv(struct sv *, const _INT8 *);

  extern _INT8 PL_minus_l;

  extern _INT8 PL_minus_a;

  extern _INT8 PL_minus_F;

  extern _INT8 * PL_splitstr;

  extern void Perl_sv_catpvf(struct sv *, const _INT8 *, ...);

  extern void Perl_sv_setsv_flags(struct sv *, struct sv *, _INT32);

  extern _INT64 Perl_PerlIO_tell(struct PerlIOl **);

  static _INT8 * S_swallow_bom(_UINT8 *);

  extern _INT8 * Perl_instr(const _INT8 *, const _INT8 *);

  extern _INT8 PL_minus_c;

  extern _INT8 ** PL_origargv;

  extern _INT32 PL_origargc;

  extern _INT32 execv(const _INT8 *, _INT8 * const *);

  extern _INT8 PL_doswitches;

  extern _INT8 * Perl_moreswitches(_INT8 *);

  extern void Perl_init_argv_symbols(_INT32, _INT8 **);

  extern _INT8 * PL_origfilename;

  extern _INT32 PL_in_my;

  static _INT8 * S_scan_str(_INT8 *, _INT32, _INT32);

  extern void Perl_op_free(struct op *);

  extern struct op * Perl_append_elem(_INT32, struct op *, struct op *);

  static _INT32 anon3;

  static _INT32 anon4;

  static _INT32 anon5;

  static _INT32 anon6;

  extern struct cv * PL_compcv;

  static _INT32 anon7;

  static _INT32 anon8;

  static _INT32 anon9;

  static _INT32 anon10;

  extern _UINT8 * PL_utf8skip;

  extern _INT8 * PL_warn_nosemi;

  static _INT8 * S_scan_heredoc(_INT8 *);

  static _INT8 * S_scan_inputsymbol(_INT8 *);

  extern struct sv * Perl_newSViv(_INT64);

  extern struct cop PL_compiling;

  static _INT32 anon11;

  static _INT32 anon12;

  extern struct cv * Perl_get_cv(const _INT8 *, _INT32);

  static _INT8 * S_scan_pat(_INT8 *, _INT32);

  static void S_set_csh(void);

  static _INT32 anon13;

  static _INT32 anon14;

  extern _INT8 * Perl_savepv(const _INT8 *);

  extern struct sv ** Perl_hv_fetch(struct hv *, const _INT8 *, _INT32, _INT32);

  extern struct hv * PL_globalstash;

  extern struct gv * PL_incgv;

  extern struct gv * Perl_gv_HVadd(struct gv *);

  extern _UINT32 * PL_opargs;

  extern struct op * Perl_newCVREF(_INT32, struct op *);

  extern struct op * Perl_newGVOP(_INT32, _INT32, struct gv *);

  extern struct sv * PL_subname;

  extern _INT8 * PL_warn_reserved;

  extern struct sv * Perl_newSVpvf(const _INT8 *, ...);

  extern struct hv * PL_defstash;

  extern struct io * Perl_newIO(void);

  extern _INT32 Perl_PerlIO_fileno(struct PerlIOl **);

  extern _INT32 fcntl(_INT32, _INT32, ...);

  extern _INT32 PerlIO_apply_layers(struct PerlIOl **, const _INT8 *, const _INT8 *);

  extern struct sv ** PL_stack_sp;

  extern _INT32 PL_tmps_floor;

  extern _INT32 PL_tmps_ix;

  static _INT32 anon15;

  extern _INT32 * PL_markstack_ptr;

  extern _INT32 * PL_markstack_max;

  extern void Perl_markstack_grow(void);

  extern struct sv ** PL_stack_base;

  extern struct sv ** PL_stack_max;

  extern struct sv ** Perl_stack_grow(struct sv **, struct sv **, _INT32);

  static struct sv * anon16;

  extern _INT32 Perl_call_method(const _INT8 *, _INT32);

  extern void Perl_free_tmps(void);

  extern struct hv * PL_in_my_stash;

  extern _INT32 sprintf(_INT8 *, const _INT8 *, ...);

  static void S_checkcomma(_INT8 *, _INT8 *, _INT8 *);

  static _INT8 * S_scan_subst(_INT8 *);

  extern struct sv * PL_curstname;

  static _INT8 * S_scan_trans(_INT8 *);

  extern _UINT64 Perl_allocmy(_INT8 *);

  extern _INT8 * PL_no_myglob;

  extern struct op * Perl_newOP(_INT32, _INT32);

  extern _UINT64 Perl_pad_findmy(_INT8 *);

  extern struct sv ** Perl_av_fetch(struct av *, _INT32, _INT32);

  extern struct av * PL_comppad_name;

  extern struct gv * PL_hintgv;

  static _INT32 anon17;

  static _INT32 anon18;

  extern struct stackinfo * PL_curstackinfo;

  extern struct stackinfo * Perl_new_stackinfo(_INT32, _INT32);

  static struct av * anon19;

  extern struct av * PL_curstack;

  static _INT32 anon20;

  extern _INT32 Perl_call_sv(struct sv *, _INT32);

  extern struct gv * PL_errgv;

  struct xpv {
    _INT8 * xpv_pv;
    _UINT64 xpv_cur;
    _UINT64 xpv_len;
  };
  extern struct xpv * PL_Xpv;

  extern _INT8 Perl_sv_2bool(struct sv *);

  static struct stackinfo * anon21;

  extern _INT32 PerlIO_printf(struct PerlIOl **, const _INT8 *, ...);

  extern struct gv * PL_stderrgv;

  extern struct PerlIOl ** Perl_PerlIO_stderr(void);

  extern void Perl_my_exit(_UINT32);

  static struct av * anon22;

  static _INT8 ident_too_long[20LL] = "Identifier too long";

  extern _INT8 Perl_is_utf8_mark(_UINT8 *);

  static _INT32 anon23;

  static _INT32 anon24;

  extern void Perl_pmflag(_UINT32 *, _INT32);

  extern struct op * Perl_newPMOP(_INT32, _INT32);

  extern _INT32 PL_multi_open;

  static _INT8 c_without_g[45LL] = "Use of /c modifier is meaningless without /g";

  static _INT8 c_in_subst[42LL] = "Use of /c modifier is meaningless in s///";

  extern _INT32 PL_multi_end;

  extern struct op * Perl_newPVOP(_INT32, _INT32, _INT8 *);

  extern _INT8 * Perl_delimcpy(_INT8 *, _INT8 *, _INT8 *, _INT8 *, _INT32, _INT32 *);

  extern _INT8 * Perl_ninstr(const _INT8 *, const _INT8 *, const _INT8 *, const _INT8 *);

  extern struct op * Perl_newUNOP(_INT32, _INT32, struct op *);

  extern _UINT64 Perl_utf8_to_uvchr(_UINT8 *, _UINT64 *);

  extern _INT8 Perl_sv_cat_decode(struct sv *, struct sv *, struct sv *, _INT32 *, _INT8 *, _INT32);

  extern void Perl_sv_setnv(struct sv *, _IEEE64);

  extern void Perl_sv_setuv(struct sv *, _UINT64);

  extern _INT32 Perl_grok_number(const _INT8 *, _UINT64, _UINT64 *);

  extern void Perl_sv_setiv(struct sv *, _INT64);

  extern _IEEE64 Perl_my_atof(const _INT8 *);

  extern _INT8 * Perl_scan_vstring(_INT8 *, struct sv *);

  extern void * memchr(const void *, _INT32, _UINT64);

  extern _INT32 PL_cshlen;

  extern _INT8 * PL_cshname;

  extern _INT32 Perl_start_subparse(_INT32, _UINT32);

  extern _INT32 PL_savestack_ix;

  extern _INT32 PL_subline;

  extern void Perl_save_item(struct sv *);

  extern struct av * Perl_pad_new(_INT32);

  extern _UINT32 PL_cop_seqmax;

  extern _INT32 PL_yychar;

  extern const _UINT16 ** __ctype_b_loc(void);

  extern void Perl_qerror(struct sv *);

  extern _INT32 PL_error_count;

  static _INT32 utf16rev_textfilter(_INT32, struct sv *, _INT32);

  extern _UINT8 * Perl_utf16_to_utf8_reversed(_UINT8 *, _UINT8 *, _INT32, _INT32 *);

  extern void Perl_safesysfree(void *);

  static _INT32 utf16_textfilter(_INT32, struct sv *, _INT32);

  extern _UINT8 * Perl_utf16_to_utf8(_UINT8 *, _UINT8 *, _INT32, _INT32 *);

  extern void Perl_sv_usepvn(struct sv *, _INT8 *, _UINT64);

  extern void Perl_sv_magic(struct sv *, struct sv *, _INT32, const _INT8 *, _INT32);

  static void __ompdo_S_scan_const1();

  