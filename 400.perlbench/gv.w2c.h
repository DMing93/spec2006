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
  