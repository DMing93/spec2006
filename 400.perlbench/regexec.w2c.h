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
    struct reg_data {
      _UINT32 count;
      _UINT8 * what;
      void * data[1LL];
    };
    struct sv {
          void * sv_any;
          _UINT32 sv_refcnt;
          _UINT32 sv_flags;
        };
        struct reg_substr_datum {
        _INT32 min_offset;
        _INT32 max_offset;
        struct sv * substr;
        struct sv * utf8_substr;
      };
      struct reg_substr_data {
      struct reg_substr_datum data[3LL];
    };
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
  struct re_scream_pos_data_s {
    _INT8 ** scream_olds;
    _INT32 * scream_pos;
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
    struct xpvbm {
    _INT8 * xpv_pv;
    _UINT64 xpv_cur;
    _UINT64 xpv_len;
    _INT64 xiv_iv;
    _IEEE64 xnv_nv;
    struct magic * xmg_magic;
    struct hv * xmg_stash;
    _INT32 xbm_useful;
    _UINT16 xbm_previous;
    _UINT8 xbm_rare;
  };
  struct curcur {
    _INT32 parenfloor;
    _INT32 cur;
    _INT32 min;
    _INT32 max;
    _INT32 minmod;
    struct regnode * scan;
    struct regnode * next;
    _INT8 * lastloc;
    struct curcur * oldcc;
  };
  struct re_cc_state {
      _INT32 ss;
      struct regnode * node;
      struct re_cc_state * prev;
      struct curcur * cc;
      struct regexp * re;
    };
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
            struct __dirstream;
                              union anonymous_w2c_17 {
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
                            union anonymous_w2c_17 xio_dirpu;
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
            union anonymous_w2c_20 {
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
            struct sv * cop_warnings;
            struct sv * cop_io;
          };
          struct block {
          _INT32 blku_oldsp;
          struct cop * blku_oldcop;
          _INT32 blku_oldretsp;
          _INT32 blku_oldmarksp;
          _INT32 blku_oldscopesp;
          struct pmop * blku_oldpm;
          _UINT8 blku_gimme;
          union anonymous_w2c_20 blk_u;
        };
        union anonymous_w2c_21 {
        struct block cx_blk;
        struct subst cx_subst;
      };
      struct context {
      _UINT32 cx_type;
      union anonymous_w2c_21 cx_u;
    };
    struct regnode_string {
    _UINT8 str_len;
    _UINT8 type;
    _UINT16 next_off;
    _INT8 string[1LL];
  };
  struct regnode__w2c_1 {
      _UINT8 flags;
      _UINT8 type;
      _UINT16 next_off;
      _UINT32 arg1;
    };
    struct anonymous_w2c_24 {
      _INT32 type;
      _INT32 prev;
      _INT32 lastcp;
      _INT32 lastparen;
      struct regnode * next;
      _INT8 * locinput;
      _INT32 nextchr;
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

static _INT32 S_regcppush(_INT32);

extern _INT32 PL_savestack_ix;

extern _INT32 PL_regsize;

extern void Perl_croak(const _INT8 *, ...);

extern _INT32 PL_savestack_max;

extern void Perl_savestack_grow_cnt(_INT32);

extern _INT32 * PL_regendp;

extern union any * PL_savestack;

extern _INT32 * PL_regstartp;

extern _INT8 ** PL_reg_start_tmp;

extern _UINT32 * PL_reglastparen;

extern _UINT32 * PL_reglastcloseparen;

extern _INT8 * PL_reginput;

static _INT8 * S_regcppop(void);

extern _INT32 PL_regnpar;

static _INT8 * S_regcp_set_to(_INT32);

extern _INT32 Perl_pregexec(struct regexp *, _INT8 *, _INT8 *, _INT8 *, _INT32, struct sv *, _UINT32);

extern _INT32 Perl_regexec_flags(struct regexp *, _INT8 *, _INT8 *, _INT8 *, _INT32, struct sv *, void *, _UINT32);

static void S_cache_re(struct regexp *);

extern _INT8 * PL_regprecomp;

extern struct reg_data * PL_regdata;

extern struct regexp * PL_reg_re;

extern _INT8 * Perl_re_intuit_start(struct regexp *, struct sv *, _INT8 *, _INT8 *, _UINT32, struct re_scream_pos_data_s *);

extern _INT8 PL_reg_match_utf8;

extern _UINT32 PL_reg_flags;

extern _INT8 * PL_regeol;

static void S_to_utf8_substr(struct regexp *);

static void S_to_byte_substr(struct regexp *);

extern struct sv PL_sv_undef;

extern _INT32 PL_multiline;

static _UINT8 * S_reghop3(_UINT8 *, _INT32, _UINT8 *);

extern _UINT64 Perl_sv_len_utf8(struct sv *);

extern _INT64 Perl_utf8_distance(_UINT8 *, _UINT8 *);

extern _INT32 * PL_screamfirst;

extern _INT8 * Perl_screaminstr(struct sv *, struct sv *, _INT32, _INT32, _INT32 *, _INT32);

extern _INT8 * Perl_fbm_instr(_UINT8 *, _UINT8 *, struct sv *, _UINT32);

static _UINT8 * S_reghopmaybe3(_UINT8 *, _INT32, _UINT8 *);

extern void Perl_sv_free(struct sv *);

extern _UINT8 * PL_regkind;

static _INT8 * S_find_byclass(struct regexp *, struct regnode *, _INT8 *, _INT8 *, _INT8 *, _INT32);

static _INT8 S_reginclass(struct regnode *, _UINT8 *, _UINT64 *, _INT8);

static _INT32 S_regtry(struct regexp *, _INT8 *);

extern _UINT8 * PL_utf8skip;

extern _UINT64 Perl_to_utf8_lower(_UINT8 *, _UINT8 *, _UINT64 *);

extern _UINT64 Perl_to_utf8_upper(_UINT8 *, _UINT8 *, _UINT64 *);

extern _UINT64 Perl_utf8n_to_uvuni(_UINT8 *, _UINT64, _UINT64 *, _UINT32);

extern struct cop * volatile PL_curcop;

extern _UINT8 PL_dowarn;

extern _UINT8 * PL_fold;

extern _UINT8 * PL_fold_locale;

extern _INT32 Perl_ibcmp_utf8(const _INT8 *, _INT8 **, _UINT64, _INT8, const _INT8 *, _INT8 **, _UINT64, _INT8);

extern _UINT8 * Perl_uvuni_to_utf8(_UINT8 *, _UINT64);

extern _UINT64 Perl_to_utf8_fold(_UINT8 *, _UINT8 *, _UINT64 *);

extern _INT32 Perl_ibcmp(const _INT8 *, const _INT8 *, _INT32);

extern _INT32 Perl_ibcmp_locale(const _INT8 *, const _INT8 *, _INT32);

extern _INT8 * PL_bostr;

extern _INT8 Perl_is_uni_alnum(_UINT64);

extern const _UINT16 ** __ctype_b_loc(void);

extern _INT8 Perl_is_uni_alnum_lc(_UINT64);

extern struct sv * PL_utf8_alnum;

extern void Perl_push_scope(void);

extern void Perl_save_re_context(void);

extern _INT8 Perl_is_utf8_alnum(_UINT8 *);

extern void Perl_pop_scope(void);

extern _UINT64 Perl_swash_fetch(struct sv *, _UINT8 *, _INT8);

extern _UINT64 Perl_utf8_to_uvchr(_UINT8 *, _UINT64 *);

extern struct sv * PL_utf8_space;

extern _INT8 Perl_is_utf8_space(_UINT8 *);

extern _INT8 Perl_is_uni_space_lc(_UINT64);

extern struct sv * PL_utf8_digit;

extern _INT8 Perl_is_utf8_digit(_UINT8 *);

extern _INT8 Perl_is_uni_digit_lc(_UINT64);

extern struct gv * PL_replgv;

extern struct curcur * PL_regcc;

extern _INT32 PL_reg_eval_set;

extern _INT32 PL_reg_maxiter;

extern _INT8 * PL_regbol;

extern struct sv * PL_reg_sv;

extern _INT8 * PL_regtill;

extern struct re_cc_state * PL_reg_call_cc;

extern _INT8 * PL_reg_ganch;

extern struct magic * Perl_mg_find(struct sv *, _INT32);

static _UINT8 * S_reghop(_UINT8 *, _INT32);

extern _INT8 * Perl_sv_2pv_flags(struct sv *, _UINT64 *, _INT32);

extern _INT8 * Perl_rninstr(const _INT8 *, const _INT8 *, const _INT8 *, const _INT8 *);

extern void Perl_sv_setsv_flags(struct sv *, struct sv *, _INT32);

static void restore_pos(void *);

extern void Perl_safesysfree(void *);

extern _INT8 * Perl_savepvn(const _INT8 *, _INT32);

extern void Perl_save_I32(_INT32 *);

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

extern struct sv ** PL_stack_sp;

extern struct sv ** PL_stack_base;

extern void Perl_save_int(_INT32 *);

extern _INT32 PL_tmps_floor;

extern _INT32 PL_tmps_ix;

extern struct gv * PL_defgv;

extern void Perl_save_sptr(struct sv **);

extern void Perl_sv_magic(struct sv *, struct sv *, _INT32, const _INT8 *, _INT32);

extern struct magic * PL_reg_magic;

extern _INT32 PL_reg_oldpos;

extern void Perl_save_destructor_x(void(*)(void *), void *);

extern struct pmop * PL_reg_curpm;

extern void * Perl_safesysmalloc(_UINT64);

extern struct pmop * PL_curpm;

extern struct pmop * PL_reg_oldcurpm;

extern _INT8 * PL_reg_oldsaved;

extern _UINT64 PL_reg_oldsavedlen;

extern _UINT32 PL_reg_start_tmpl;

extern void * Perl_safesysrealloc(void *, _UINT64);

static _INT32 S_regmatch(struct regnode *);

extern void Perl_leave_scope(_INT32);

extern struct sv * PL_utf8_mark;

extern _INT8 Perl_is_utf8_mark(_UINT8 *);

extern _INT32 PL_reg_leftiter;

extern struct op * PL_op;

extern struct av * PL_comppad;

extern struct sv ** PL_curpad;

extern _INT32(*PL_runops)(void);

extern _INT32 Perl_sv_unmagic(struct sv *, _INT32);

extern struct regexp * (*PL_regcompp)(_INT8 *, _INT8 *, struct pmop *);

extern void(*PL_regfree)(struct regexp *);

struct xpv {
  _INT8 * xpv_pv;
  _UINT64 xpv_cur;
  _UINT64 xpv_len;
};
extern struct xpv * PL_Xpv;

extern _INT8 Perl_sv_2bool(struct sv *);

extern struct sv * Perl_save_scalar(struct gv *);

extern _INT8 * PL_reg_poscache;

extern _UINT64 PL_reg_poscache_size;

extern void Perl_warner(_UINT32, const _INT8 *, ...);

extern _INT32 Perl_save_alloc(_INT32, _INT32);

static _INT32 S_regrepeat_hard(struct regnode *, _INT32, _INT32 *);

extern struct regnode * Perl_regnext(struct regnode *);

static _INT32 S_regrepeat(struct regnode *, _INT32);

static _UINT8 * S_reghopmaybe(_UINT8 *, _INT32);

extern _INT32 PerlIO_printf(struct _PerlIO **, const _INT8 *, ...);

extern struct gv * PL_stderrgv;

extern struct _PerlIO ** Perl_PerlIO_stderr(void);

extern struct sv * Perl_regclass_swash(struct regnode *, _INT8, struct sv **, struct sv **);

extern struct sv * Perl_swash_init(_INT8 *, _INT8 *, struct sv *, _INT32, _INT32);

extern struct sv ** Perl_av_store(struct av *, _INT32, struct sv *);

extern struct sv ** Perl_av_fetch(struct av *, _INT32, _INT32);

extern _INT32 Perl_av_len(struct av *);

extern struct sv * Perl_newSVsv(struct sv *);

extern _UINT64 Perl_sv_utf8_upgrade_flags(struct sv *, _INT32);

extern _INT8 Perl_sv_utf8_downgrade(struct sv *, _INT8);

