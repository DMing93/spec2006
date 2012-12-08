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
                  struct hv_w2c_0 * xmg_stash;
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
              union anonymous_w2c_37 {
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
            union anonymous_w2c_37 blk_u;
          };
          union anonymous_w2c_36 {
          struct block cx_blk;
          struct subst cx_subst;
        };
        struct context {
        _UINT32 cx_type;
        union anonymous_w2c_36 cx_u;
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

extern _UINT8 * Perl_uvuni_to_utf8_flags(_UINT8 *, _UINT64, _UINT64);

extern struct cop * volatile PL_curcop;

extern _UINT8 PL_dowarn;

extern void Perl_warner(_UINT32, const _INT8 *, ...);

extern _UINT8 * Perl_uvuni_to_utf8(_UINT8 *, _UINT64);

extern _UINT64 Perl_is_utf8_char(_UINT8 *);

extern _UINT8 * PL_utf8skip;

extern _INT8 Perl_is_utf8_string(_UINT8 *, _UINT64);

extern _INT8 Perl_is_utf8_string_loc(_UINT8 *, _UINT64, _UINT8 **);

extern _UINT64 Perl_utf8n_to_uvuni(_UINT8 *, _UINT64, _UINT64 *, _UINT32);

extern struct sv * Perl_sv_2mortal(struct sv *);

extern struct sv * Perl_newSVpv(const _INT8 *, _UINT64);

extern void Perl_sv_catpv(struct sv *, const _INT8 *);

extern void Perl_sv_catpvf(struct sv *, const _INT8 *, ...);

extern struct op * PL_op;

extern _INT8 * Perl_custom_op_desc(struct op *);

extern _INT8 ** PL_op_desc;

extern _UINT64 Perl_utf8_to_uvchr(_UINT8 *, _UINT64 *);

extern _UINT64 Perl_utf8_to_uvuni(_UINT8 *, _UINT64 *);

extern _UINT64 Perl_utf8_length(_UINT8 *, _UINT8 *);

static _INT8 unees[53LL] = "Malformed UTF-8 character (unexpected end of string)";

extern _INT64 Perl_utf8_distance(_UINT8 *, _UINT8 *);

extern _UINT8 * Perl_utf8_hop(_UINT8 *, _INT32);

extern _UINT8 * Perl_utf8_to_bytes(_UINT8 *, _UINT64 *);

extern _UINT8 * Perl_bytes_from_utf8(_UINT8 *, _UINT64 *, _INT8 *);

extern void * Perl_safesysmalloc(_UINT64);

extern _UINT8 * Perl_bytes_to_utf8(_UINT8 *, _UINT64 *);

extern _UINT8 * Perl_utf16_to_utf8(_UINT8 *, _UINT8 *, _INT32, _INT32 *);

extern void Perl_croak(const _INT8 *, ...);

extern _UINT8 * Perl_utf16_to_utf8_reversed(_UINT8 *, _UINT8 *, _INT32, _INT32 *);

extern _INT8 Perl_is_uni_alnum(_UINT64);

extern _INT8 Perl_is_utf8_alnum(_UINT8 *);

extern _INT8 Perl_is_uni_alnumc(_UINT64);

extern _INT8 Perl_is_utf8_alnumc(_UINT8 *);

extern _INT8 Perl_is_uni_idfirst(_UINT64);

extern _INT8 Perl_is_utf8_idfirst(_UINT8 *);

extern _INT8 Perl_is_uni_alpha(_UINT64);

extern _INT8 Perl_is_utf8_alpha(_UINT8 *);

extern _INT8 Perl_is_uni_ascii(_UINT64);

extern _INT8 Perl_is_utf8_ascii(_UINT8 *);

extern _INT8 Perl_is_uni_space(_UINT64);

extern _INT8 Perl_is_utf8_space(_UINT8 *);

extern _INT8 Perl_is_uni_digit(_UINT64);

extern _INT8 Perl_is_utf8_digit(_UINT8 *);

extern _INT8 Perl_is_uni_upper(_UINT64);

extern _INT8 Perl_is_utf8_upper(_UINT8 *);

extern _INT8 Perl_is_uni_lower(_UINT64);

extern _INT8 Perl_is_utf8_lower(_UINT8 *);

extern _INT8 Perl_is_uni_cntrl(_UINT64);

extern _INT8 Perl_is_utf8_cntrl(_UINT8 *);

extern _INT8 Perl_is_uni_graph(_UINT64);

extern _INT8 Perl_is_utf8_graph(_UINT8 *);

extern _INT8 Perl_is_uni_print(_UINT64);

extern _INT8 Perl_is_utf8_print(_UINT8 *);

extern _INT8 Perl_is_uni_punct(_UINT64);

extern _INT8 Perl_is_utf8_punct(_UINT8 *);

extern _INT8 Perl_is_uni_xdigit(_UINT64);

extern _INT8 Perl_is_utf8_xdigit(_UINT8 *);

extern _UINT64 Perl_to_uni_upper(_UINT64, _UINT8 *, _UINT64 *);

extern _UINT64 Perl_to_utf8_upper(_UINT8 *, _UINT8 *, _UINT64 *);

extern _UINT64 Perl_to_uni_title(_UINT64, _UINT8 *, _UINT64 *);

extern _UINT64 Perl_to_utf8_title(_UINT8 *, _UINT8 *, _UINT64 *);

extern _UINT64 Perl_to_uni_lower(_UINT64, _UINT8 *, _UINT64 *);

extern _UINT64 Perl_to_utf8_lower(_UINT8 *, _UINT8 *, _UINT64 *);

extern _UINT64 Perl_to_uni_fold(_UINT64, _UINT8 *, _UINT64 *);

extern _UINT64 Perl_to_utf8_fold(_UINT8 *, _UINT8 *, _UINT64 *);

extern _INT8 Perl_is_uni_alnum_lc(_UINT64);

extern _INT8 Perl_is_uni_alnumc_lc(_UINT64);

extern _INT8 Perl_is_uni_idfirst_lc(_UINT64);

extern _INT8 Perl_is_uni_alpha_lc(_UINT64);

extern _INT8 Perl_is_uni_ascii_lc(_UINT64);

extern _INT8 Perl_is_uni_space_lc(_UINT64);

extern _INT8 Perl_is_uni_digit_lc(_UINT64);

extern _INT8 Perl_is_uni_upper_lc(_UINT64);

extern _INT8 Perl_is_uni_lower_lc(_UINT64);

extern _INT8 Perl_is_uni_cntrl_lc(_UINT64);

extern _INT8 Perl_is_uni_graph_lc(_UINT64);

extern _INT8 Perl_is_uni_print_lc(_UINT64);

extern _INT8 Perl_is_uni_punct_lc(_UINT64);

extern _INT8 Perl_is_uni_xdigit_lc(_UINT64);

extern _UINT32 Perl_to_uni_upper_lc(_UINT32);

extern _UINT32 Perl_to_uni_title_lc(_UINT32);

extern _UINT32 Perl_to_uni_lower_lc(_UINT32);

extern struct sv * PL_utf8_alnum;

extern struct sv * Perl_swash_init(_INT8 *, _INT8 *, struct sv *, _INT32, _INT32);

extern struct sv PL_sv_undef;

extern _UINT64 Perl_swash_fetch(struct sv *, _UINT8 *, _INT8);

extern struct sv * PL_utf8_idstart;

extern _INT8 Perl_is_utf8_idcont(_UINT8 *);

extern struct sv * PL_utf8_idcont;

extern struct sv * PL_utf8_alpha;

extern struct sv * PL_utf8_ascii;

extern struct sv * PL_utf8_space;

extern struct sv * PL_utf8_digit;

extern struct sv * PL_utf8_upper;

extern struct sv * PL_utf8_lower;

extern struct sv * PL_utf8_cntrl;

extern struct sv * PL_utf8_graph;

extern struct sv * PL_utf8_print;

extern struct sv * PL_utf8_punct;

extern struct sv * PL_utf8_xdigit;

extern _INT8 Perl_is_utf8_mark(_UINT8 *);

extern struct sv * PL_utf8_mark;

extern _UINT64 Perl_to_utf8_case(_UINT8 *, _UINT8 *, _UINT64 *, struct sv **, _INT8 *, _INT8 *);

extern struct hv * Perl_get_hv(const _INT8 *, _INT32);

extern struct sv ** Perl_hv_fetch(struct hv *, const _INT8 *, _INT32, _INT32);

extern _INT8 * Perl_sv_2pv_flags(struct sv *, _UINT64 *, _INT32);

extern struct sv * PL_utf8_toupper;

extern struct sv * PL_utf8_totitle;

extern struct sv * PL_utf8_tolower;

extern struct sv * PL_utf8_tofold;

extern struct sv * Perl_sv_newmortal(void);

extern struct sv ** PL_stack_sp;

extern struct hv * Perl_gv_stashpvn(const _INT8 *, _UINT32, _INT32);

extern struct stackinfo * PL_curstackinfo;

extern struct stackinfo * Perl_new_stackinfo(_INT32, _INT32);

static struct av * anon1;

extern struct sv ** PL_stack_base;

extern struct av * PL_curstack;

extern struct sv ** PL_stack_max;

extern void Perl_push_scope(void);

extern void Perl_save_I32(_INT32 *);

extern _UINT32 PL_hints;

extern void Perl_save_re_context(void);

extern struct gv * Perl_gv_fetchmeth(struct hv *, const _INT8 *, _UINT64, _INT32);

extern struct sv * Perl_newSVsv(struct sv *);

extern struct gv * PL_errgv;

extern void Perl_load_module(_UINT32, struct sv *, struct sv *, ...);

extern struct sv * Perl_newSVpvn(const _INT8 *, _UINT64);

struct xpv {
  _INT8 * xpv_pv;
  _UINT64 xpv_cur;
  _UINT64 xpv_len;
};
extern struct xpv * PL_Xpv;

extern _INT8 Perl_sv_2bool(struct sv *);

extern void Perl_sv_setsv_flags(struct sv *, struct sv *, _INT32);

extern void Perl_sv_free(struct sv *);

extern void Perl_pop_scope(void);

static _INT32 anon2;

extern _INT32 * PL_markstack_ptr;

extern _INT32 * PL_markstack_max;

extern void Perl_markstack_grow(void);

extern struct sv ** Perl_stack_grow(struct sv **, struct sv **, _INT32);

extern struct sv * Perl_newSViv(_INT64);

extern struct cop PL_compiling;

extern _INT32 PL_in_my;

extern void Perl_sv_setpv(struct sv *, const _INT8 *);

extern _INT8 PL_tokenbuf[256LL];

extern _INT32 Perl_call_method(const _INT8 *, _INT32);

static struct stackinfo * anon3;

extern _INT32 PerlIO_printf(struct _PerlIO **, const _INT8 *, ...);

extern struct gv * PL_stderrgv;

extern struct _PerlIO ** Perl_PerlIO_stderr(void);

extern void Perl_my_exit(_UINT32);

static struct av * anon4;

extern struct hv * PL_last_swash_hv;

extern _UINT32 PL_last_swash_klen;

extern _UINT8 PL_last_swash_key[10LL];

extern _UINT8 * PL_last_swash_tmps;

extern _UINT64 PL_last_swash_slen;

extern void Perl_save_int(_INT32 *);

extern _INT32 PL_tmps_floor;

extern _INT32 PL_tmps_ix;

static struct av * anon5;

static _INT32 anon6;

static struct stackinfo * anon7;

static struct av * anon8;

extern void Perl_free_tmps(void);

extern struct sv ** Perl_hv_store(struct hv *, const _INT8 *, _INT32, struct sv *, _UINT32);

extern _UINT8 * Perl_uvchr_to_utf8(_UINT8 *, _UINT64);

extern _UINT8 * Perl_uvchr_to_utf8_flags(_UINT8 *, _UINT64, _UINT64);

extern _UINT64 Perl_utf8n_to_uvchr(_UINT8 *, _UINT64, _UINT64 *, _UINT32);

extern _INT8 * Perl_pv_uni_display(struct sv *, _UINT8 *, _UINT64, _UINT64, _UINT64);

extern void Perl_sv_setpvn(struct sv *, const _INT8 *, _UINT64);

extern void Perl_sv_catpvn_flags(struct sv *, const _INT8 *, _UINT64, _INT32);

extern _INT8 * Perl_sv_uni_display(struct sv *, struct sv *, _UINT64, _UINT64);

extern _INT32 Perl_ibcmp_utf8(const _INT8 *, _INT8 **, _UINT64, _INT8, const _INT8 *, _INT8 **, _UINT64, _INT8);

