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
  struct _PerlIO;
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

extern _INT32 Perl_fprintf_nocontext(struct _PerlIO **, const _INT8 *, ...);

extern _INT32 PerlIO_vprintf(struct _PerlIO **, const _INT8 *, struct __va_list_tag *);

extern _INT32 Perl_printf_nocontext(const _INT8 *, ...);

extern struct _PerlIO ** Perl_PerlIO_stdout(void);

_INT8 * PL_sig_name[17LL] = {"ZERO", "HUP", "INT", "QUIT", "ILL", "TRAP", "ABRT", "BUS", "FPE", "KILL", "USR1", "SEGV", "USR2", "PIPE", "ALRM", "TERM", 0LL};

_INT32 PL_sig_num[17LL] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 0};

_UINT8 PL_fold_locale[256LL] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 91, 92, 93, 94, 95, 96, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255};

_INT8 * PL_op_name[352LL] = {"null", "stub", "scalar", "pushmark", "wantarray", "const", "gvsv", "gv", "gelem", "padsv", "padav", "padhv", "padany", "pushre", "rv2gv", "rv2sv", "av2arylen", "rv2cv", "anoncode", "prototype", "refgen", "srefgen", "ref", "bless", "backtick", "glob", "readline", "rcatline", "regcmaybe", "regcreset", "regcomp", "match", "qr", "subst", "substcont", "trans", "sassign", "aassign", "chop", "schop", "chomp", "schomp", "defined", "undef", "study", "pos", "preinc", "i_preinc", "predec", "i_predec", "postinc", "i_postinc", "postdec", "i_postdec", "pow", "multiply", "i_multiply", "divide", "i_divide", "modulo", "i_modulo", "repeat", "add", "i_add", "subtract", "i_subtract", "concat", "stringify", "left_shift", "right_shift", "lt", "i_lt", "gt", "i_gt", "le", "i_le", "ge", "i_ge", "eq", "i_eq", "ne", "i_ne", "ncmp", "i_ncmp", "slt", "sgt", "sle", "sge", "seq", "sne", "scmp", "bit_and", "bit_xor", "bit_or", "negate", "i_negate", "not", "complement", "atan2", "sin", "cos", "rand", "srand", "exp", "log", "sqrt", "int", "hex", "oct", "abs", "length", "substr", "vec", "index", "rindex", "sprintf", "formline", "ord", "chr", "crypt", "ucfirst", "lcfirst", "uc", "lc", "quotemeta", "rv2av", "aelemfast", "aelem", "aslice", "each", "values", "keys", "delete", "exists", "rv2hv", "helem", "hslice", "unpack", "pack", "split", "join", "list", "lslice", "anonlist", "anonhash", "splice", "push", "pop", "shift", "unshift", "sort", "reverse", "grepstart", "grepwhile", "mapstart", "mapwhile", "range", "flip", "flop", "and", "or", "xor", "cond_expr", "andassign", "orassign", "method", "entersub", "leavesub", "leavesublv", "caller", "warn", "die", "reset", "lineseq", "nextstate", "dbstate", "unstack", "enter", "leave", "scope", "enteriter", "iter", "enterloop", "leaveloop", "return", "last", "next", "redo", "dump", "goto", "exit", "open", "close", "pipe_op", "fileno", "umask", "binmode", "tie", "untie", "tied", "dbmopen", "dbmclose", "sselect", "select", "getc", "read", "enterwrite", "leavewrite", "prtf", "print", "sysopen", "sysseek", "sysread", "syswrite", "send", "recv", "eof", "tell", "seek", "truncate", "fcntl", "ioctl", "flock", "socket", "sockpair", "bind", "connect", "listen", "accept", "shutdown", "gsockopt", "ssockopt", "getsockname", "getpeername", "lstat", "stat", "ftrread", "ftrwrite", "ftrexec", "fteread", "ftewrite", "fteexec", "ftis", "fteowned", "ftrowned", "ftzero", "ftsize", "ftmtime", "ftatime", "ftctime", "ftsock", "ftchr", "ftblk", "ftfile", "ftdir", "ftpipe", "ftlink", "ftsuid", "ftsgid", "ftsvtx", "fttty", "fttext", "ftbinary", "chdir", "chown", "chroot", "unlink", "chmod", "utime", "rename", "link", "symlink", "readlink", "mkdir", "rmdir", "open_dir", "readdir", "telldir", "seekdir", "rewinddir", "closedir", "fork", "wait", "waitpid", "system", "exec", "kill", "getppid", "getpgrp", "setpgrp", "getpriority", "setpriority", "time", "tms", "localtime", "gmtime", "alarm", "sleep", "shmget", "shmctl", "shmread", "shmwrite", "msgget", "msgctl", "msgsnd", "msgrcv", "semget", "semctl", "semop", "require", "dofile", "entereval", "leaveeval", "entertry", "leavetry", "ghbyname", "ghbyaddr", "ghostent", "gnbyname", "gnbyaddr", "gnetent", "gpbyname", "gpbynumber", "gprotoent", "gsbyname", "gsbyport", "gservent", "shostent", "snetent", "sprotoent", "sservent", "ehostent", "enetent", "eprotoent", "eservent", "gpwnam", "gpwuid", "gpwent", "spwent", "epwent", "ggrnam", "ggrgid", "ggrent", "sgrent", "egrent", "getlogin", "syscall", "lock", "threadsv", "setstate", "method_named", "custom"};

_INT8 * PL_op_desc[352LL] = {"null operation", "stub", "scalar", "pushmark", "wantarray", "constant item", "scalar variable", "glob value", "glob elem", "private variable", "private array", "private hash", "private value", "push regexp", "ref-to-glob cast", "scalar dereference", "array length", "subroutine dereference", "anonymous subroutine", "subroutine prototype", "reference constructor", "single ref constructor", "reference-type operator", "bless", "quoted execution (``, qx)", "glob", "<HANDLE>", "append I/O operator", "regexp internal guard", "regexp internal reset", "regexp compilation", "pattern match (m//)", "pattern quote (qr//)", "substitution (s///)", "substitution iterator", "transliteration (tr///)", "scalar assignment", "list assignment", "chop", "scalar chop", "chomp", "scalar chomp", "defined operator", "undef operator", "study", "match position", "preincrement (++)", "integer preincrement (++)", "predecrement (--)", "integer predecrement (--)", "postincrement (++)", "integer postincrement (++)", "postdecrement (--)", "integer postdecrement (--)", "exponentiation (**)", "multiplication (*)", "integer multiplication (*)", "division (/)", "integer division (/)", "modulus (%)", "integer modulus (%)", "repeat (x)", "addition (+)", "integer addition (+)", "subtraction (-)", "integer subtraction (-)", "concatenation (.) or string", "string", "left bitshift (<<)", "right bitshift (>>)", "numeric lt (<)", "integer lt (<)", "numeric gt (>)", "integer gt (>)", "numeric le (<=)", "integer le (<=)", "numeric ge (>=)", "integer ge (>=)", "numeric eq (==)", "integer eq (==)", "numeric ne (!=)", "integer ne (!=)", "numeric comparison (<=>)", "integer comparison (<=>)", "string lt", "string gt", "string le", "string ge", "string eq", "string ne", "string comparison (cmp)", "bitwise and (&)", "bitwise xor (^)", "bitwise or (|)", "negation (-)", "integer negation (-)", "not", "1\'s complement (~)", "atan2", "sin", "cos", "rand", "srand", "exp", "log", "sqrt", "int", "hex", "oct", "abs", "length", "substr", "vec", "index", "rindex", "sprintf", "formline", "ord", "chr", "crypt", "ucfirst", "lcfirst", "uc", "lc", "quotemeta", "array dereference", "constant array element", "array element", "array slice", "each", "values", "keys", "delete", "exists", "hash dereference", "hash element", "hash slice", "unpack", "pack", "split", "join or string", "list", "list slice", "anonymous list ([])", "anonymous hash ({})", "splice", "push", "pop", "shift", "unshift", "sort", "reverse", "grep", "grep iterator", "map", "map iterator", "flipflop", "range (or flip)", "range (or flop)", "logical and (&&)", "logical or (||)", "logical xor", "conditional expression", "logical and assignment (&&=)", "logical or assignment (||=)", "method lookup", "subroutine entry", "subroutine exit", "lvalue subroutine return", "caller", "warn", "die", "symbol reset", "line sequence", "next statement", "debug next statement", "iteration finalizer", "block entry", "block exit", "block", "foreach loop entry", "foreach loop iterator", "loop entry", "loop exit", "return", "last", "next", "redo", "dump", "goto", "exit", "open", "close", "pipe", "fileno", "umask", "binmode", "tie", "untie", "tied", "dbmopen", "dbmclose", "select system call", "select", "getc", "read", "write", "write exit", "printf", "print", "sysopen", "sysseek", "sysread", "syswrite", "send", "recv", "eof", "tell", "seek", "truncate", "fcntl", "ioctl", "flock", "socket", "socketpair", "bind", "connect", "listen", "accept", "shutdown", "getsockopt", "setsockopt", "getsockname", "getpeername", "lstat", "stat", "-R", "-W", "-X", "-r", "-w", "-x", "-e", "-O", "-o", "-z", "-s", "-M", "-A", "-C", "-S", "-c", "-b", "-f", "-d", "-p", "-l", "-u", "-g", "-k", "-t", "-T", "-B", "chdir", "chown", "chroot", "unlink", "chmod", "utime", "rename", "link", "symlink", "readlink", "mkdir", "rmdir", "opendir", "readdir", "telldir", "seekdir", "rewinddir", "closedir", "fork", "wait", "waitpid", "system", "exec", "kill", "getppid", "getpgrp", "setpgrp", "getpriority", "setpriority", "time", "times", "localtime", "gmtime", "alarm", "sleep", "shmget", "shmctl", "shmread", "shmwrite", "msgget", "msgctl", "msgsnd", "msgrcv", "semget", "semctl", "semop", "require", "do \"file\"", "eval \"string\"", "eval \"string\" exit", "eval {block}", "eval {block} exit", "gethostbyname", "gethostbyaddr", "gethostent", "getnetbyname", "getnetbyaddr", "getnetent", "getprotobyname", "getprotobynumber", "getprotoent", "getservbyname", "getservbyport", "getservent", "sethostent", "setnetent", "setprotoent", "setservent", "endhostent", "endnetent", "endprotoent", "endservent", "getpwnam", "getpwuid", "getpwent", "setpwent", "endpwent", "getgrnam", "getgrgid", "getgrent", "setgrent", "endgrent", "getlogin", "syscall", "lock", "per-thread value", "set statement info", "method with known name", "unknown custom operator"};

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
struct op * (*PL_ppaddr[351LL])(void) = {&Perl_pp_null, &Perl_pp_stub, &Perl_pp_scalar, &Perl_pp_pushmark, &Perl_pp_wantarray, &Perl_pp_const, &Perl_pp_gvsv, &Perl_pp_gv, &Perl_pp_gelem, &Perl_pp_padsv, &Perl_pp_padav, &Perl_pp_padhv, &Perl_pp_padany, &Perl_pp_pushre, &Perl_pp_rv2gv, &Perl_pp_rv2sv, &Perl_pp_av2arylen, &Perl_pp_rv2cv, &Perl_pp_anoncode, &Perl_pp_prototype, &Perl_pp_refgen, &Perl_pp_srefgen, &Perl_pp_ref, &Perl_pp_bless, &Perl_pp_backtick, &Perl_pp_glob, &Perl_pp_readline, &Perl_pp_rcatline, &Perl_pp_regcmaybe, &Perl_pp_regcreset, &Perl_pp_regcomp, &Perl_pp_match, &Perl_pp_qr, &Perl_pp_subst, &Perl_pp_substcont, &Perl_pp_trans, &Perl_pp_sassign, &Perl_pp_aassign, &Perl_pp_chop, &Perl_pp_schop, &Perl_pp_chomp, &Perl_pp_schomp, &Perl_pp_defined, &Perl_pp_undef, &Perl_pp_study, &Perl_pp_pos, &Perl_pp_preinc, &Perl_pp_preinc, &Perl_pp_predec, &Perl_pp_predec, &Perl_pp_postinc, &Perl_pp_postinc, &Perl_pp_postdec, &Perl_pp_postdec, &Perl_pp_pow, &Perl_pp_multiply, &Perl_pp_i_multiply, &Perl_pp_divide, &Perl_pp_i_divide, &Perl_pp_modulo, &Perl_pp_i_modulo, &Perl_pp_repeat, &Perl_pp_add, &Perl_pp_i_add, &Perl_pp_subtract, &Perl_pp_i_subtract, &Perl_pp_concat, &Perl_pp_stringify, &Perl_pp_left_shift, &Perl_pp_right_shift, &Perl_pp_lt, &Perl_pp_i_lt, &Perl_pp_gt, &Perl_pp_i_gt, &Perl_pp_le, &Perl_pp_i_le, &Perl_pp_ge, &Perl_pp_i_ge, &Perl_pp_eq, &Perl_pp_i_eq, &Perl_pp_ne, &Perl_pp_i_ne, &Perl_pp_ncmp, &Perl_pp_i_ncmp, &Perl_pp_slt, &Perl_pp_sgt, &Perl_pp_sle, &Perl_pp_sge, &Perl_pp_seq, &Perl_pp_sne, &Perl_pp_scmp, &Perl_pp_bit_and, &Perl_pp_bit_xor, &Perl_pp_bit_or, &Perl_pp_negate, &Perl_pp_i_negate, &Perl_pp_not, &Perl_pp_complement, &Perl_pp_atan2, &Perl_pp_sin, &Perl_pp_cos, &Perl_pp_rand, &Perl_pp_srand, &Perl_pp_exp, &Perl_pp_log, &Perl_pp_sqrt, &Perl_pp_int, &Perl_pp_hex, &Perl_pp_oct, &Perl_pp_abs, &Perl_pp_length, &Perl_pp_substr, &Perl_pp_vec, &Perl_pp_index, &Perl_pp_rindex, &Perl_pp_sprintf, &Perl_pp_formline, &Perl_pp_ord, &Perl_pp_chr, &Perl_pp_crypt, &Perl_pp_ucfirst, &Perl_pp_lcfirst, &Perl_pp_uc, &Perl_pp_lc, &Perl_pp_quotemeta, &Perl_pp_rv2av, &Perl_pp_aelemfast, &Perl_pp_aelem, &Perl_pp_aslice, &Perl_pp_each, &Perl_pp_values, &Perl_pp_keys, &Perl_pp_delete, &Perl_pp_exists, &Perl_pp_rv2hv, &Perl_pp_helem, &Perl_pp_hslice, &Perl_pp_unpack, &Perl_pp_pack, &Perl_pp_split, &Perl_pp_join, &Perl_pp_list, &Perl_pp_lslice, &Perl_pp_anonlist, &Perl_pp_anonhash, &Perl_pp_splice, &Perl_pp_push, &Perl_pp_pop, &Perl_pp_shift, &Perl_pp_unshift, &Perl_pp_sort, &Perl_pp_reverse, &Perl_pp_grepstart, &Perl_pp_grepwhile, &Perl_pp_mapstart, &Perl_pp_mapwhile, &Perl_pp_range, &Perl_pp_flip, &Perl_pp_flop, &Perl_pp_and, &Perl_pp_or, &Perl_pp_xor, &Perl_pp_cond_expr, &Perl_pp_andassign, &Perl_pp_orassign, &Perl_pp_method, &Perl_pp_entersub, &Perl_pp_leavesub, &Perl_pp_leavesublv, &Perl_pp_caller, &Perl_pp_warn, &Perl_pp_die, &Perl_pp_reset, &Perl_pp_lineseq, &Perl_pp_nextstate, &Perl_pp_dbstate, &Perl_pp_unstack, &Perl_pp_enter, &Perl_pp_leave, &Perl_pp_scope, &Perl_pp_enteriter, &Perl_pp_iter, &Perl_pp_enterloop, &Perl_pp_leaveloop, &Perl_pp_return, &Perl_pp_last, &Perl_pp_next, &Perl_pp_redo, &Perl_pp_dump, &Perl_pp_goto, &Perl_pp_exit, &Perl_pp_open, &Perl_pp_close, &Perl_pp_pipe_op, &Perl_pp_fileno, &Perl_pp_umask, &Perl_pp_binmode, &Perl_pp_tie, &Perl_pp_untie, &Perl_pp_tied, &Perl_pp_dbmopen, &Perl_pp_dbmclose, &Perl_pp_sselect, &Perl_pp_select, &Perl_pp_getc, &Perl_pp_read, &Perl_pp_enterwrite, &Perl_pp_leavewrite, &Perl_pp_prtf, &Perl_pp_print, &Perl_pp_sysopen, &Perl_pp_sysseek, &Perl_pp_sysread, &Perl_pp_syswrite, &Perl_pp_send, &Perl_pp_recv, &Perl_pp_eof, &Perl_pp_tell, &Perl_pp_seek, &Perl_pp_truncate, &Perl_pp_fcntl, &Perl_pp_ioctl, &Perl_pp_flock, &Perl_pp_socket, &Perl_pp_sockpair, &Perl_pp_bind, &Perl_pp_connect, &Perl_pp_listen, &Perl_pp_accept, &Perl_pp_shutdown, &Perl_pp_gsockopt, &Perl_pp_ssockopt, &Perl_pp_getsockname, &Perl_pp_getpeername, &Perl_pp_lstat, &Perl_pp_stat, &Perl_pp_ftrread, &Perl_pp_ftrwrite, &Perl_pp_ftrexec, &Perl_pp_fteread, &Perl_pp_ftewrite, &Perl_pp_fteexec, &Perl_pp_ftis, &Perl_pp_fteowned, &Perl_pp_ftrowned, &Perl_pp_ftzero, &Perl_pp_ftsize, &Perl_pp_ftmtime, &Perl_pp_ftatime, &Perl_pp_ftctime, &Perl_pp_ftsock, &Perl_pp_ftchr, &Perl_pp_ftblk, &Perl_pp_ftfile, &Perl_pp_ftdir, &Perl_pp_ftpipe, &Perl_pp_ftlink, &Perl_pp_ftsuid, &Perl_pp_ftsgid, &Perl_pp_ftsvtx, &Perl_pp_fttty, &Perl_pp_fttext, &Perl_pp_ftbinary, &Perl_pp_chdir, &Perl_pp_chown, &Perl_pp_chroot, &Perl_pp_unlink, &Perl_pp_chmod, &Perl_pp_utime, &Perl_pp_rename, &Perl_pp_link, &Perl_pp_symlink, &Perl_pp_readlink, &Perl_pp_mkdir, &Perl_pp_rmdir, &Perl_pp_open_dir, &Perl_pp_readdir, &Perl_pp_telldir, &Perl_pp_seekdir, &Perl_pp_rewinddir, &Perl_pp_closedir, &Perl_pp_fork, &Perl_pp_wait, &Perl_pp_waitpid, &Perl_pp_system, &Perl_pp_exec, &Perl_pp_kill, &Perl_pp_getppid, &Perl_pp_getpgrp, &Perl_pp_setpgrp, &Perl_pp_getpriority, &Perl_pp_setpriority, &Perl_pp_time, &Perl_pp_tms, &Perl_pp_localtime, &Perl_pp_gmtime, &Perl_pp_alarm, &Perl_pp_sleep, &Perl_pp_shmget, &Perl_pp_shmctl, &Perl_pp_shmread, &Perl_pp_shmwrite, &Perl_pp_msgget, &Perl_pp_msgctl, &Perl_pp_msgsnd, &Perl_pp_msgrcv, &Perl_pp_semget, &Perl_pp_semctl, &Perl_pp_semop, &Perl_pp_require, &Perl_pp_dofile, &Perl_pp_entereval, &Perl_pp_leaveeval, &Perl_pp_entertry, &Perl_pp_leavetry, &Perl_pp_ghbyname, &Perl_pp_ghbyaddr, &Perl_pp_ghostent, &Perl_pp_gnbyname, &Perl_pp_gnbyaddr, &Perl_pp_gnetent, &Perl_pp_gpbyname, &Perl_pp_gpbynumber, &Perl_pp_gprotoent, &Perl_pp_gsbyname, &Perl_pp_gsbyport, &Perl_pp_gservent, &Perl_pp_shostent, &Perl_pp_snetent, &Perl_pp_sprotoent, &Perl_pp_sservent, &Perl_pp_ehostent, &Perl_pp_enetent, &Perl_pp_eprotoent, &Perl_pp_eservent, &Perl_pp_gpwnam, &Perl_pp_gpwuid, &Perl_pp_gpwent, &Perl_pp_spwent, &Perl_pp_epwent, &Perl_pp_ggrnam, &Perl_pp_ggrgid, &Perl_pp_ggrent, &Perl_pp_sgrent, &Perl_pp_egrent, &Perl_pp_getlogin, &Perl_pp_syscall, &Perl_pp_lock, &Perl_pp_threadsv, &Perl_pp_setstate, &Perl_pp_method_named};

extern struct op * Perl_pp_null(void);

extern struct op * Perl_pp_stub(void);

extern struct op * Perl_pp_scalar(void);

extern struct op * Perl_pp_pushmark(void);

extern struct op * Perl_pp_wantarray(void);

extern struct op * Perl_pp_const(void);

extern struct op * Perl_pp_gvsv(void);

extern struct op * Perl_pp_gv(void);

extern struct op * Perl_pp_gelem(void);

extern struct op * Perl_pp_padsv(void);

extern struct op * Perl_pp_padav(void);

extern struct op * Perl_pp_padhv(void);

extern struct op * Perl_pp_padany(void);

extern struct op * Perl_pp_pushre(void);

extern struct op * Perl_pp_rv2gv(void);

extern struct op * Perl_pp_rv2sv(void);

extern struct op * Perl_pp_av2arylen(void);

extern struct op * Perl_pp_rv2cv(void);

extern struct op * Perl_pp_anoncode(void);

extern struct op * Perl_pp_prototype(void);

extern struct op * Perl_pp_refgen(void);

extern struct op * Perl_pp_srefgen(void);

extern struct op * Perl_pp_ref(void);

extern struct op * Perl_pp_bless(void);

extern struct op * Perl_pp_backtick(void);

extern struct op * Perl_pp_glob(void);

extern struct op * Perl_pp_readline(void);

extern struct op * Perl_pp_rcatline(void);

extern struct op * Perl_pp_regcmaybe(void);

extern struct op * Perl_pp_regcreset(void);

extern struct op * Perl_pp_regcomp(void);

extern struct op * Perl_pp_match(void);

extern struct op * Perl_pp_qr(void);

extern struct op * Perl_pp_subst(void);

extern struct op * Perl_pp_substcont(void);

extern struct op * Perl_pp_trans(void);

extern struct op * Perl_pp_sassign(void);

extern struct op * Perl_pp_aassign(void);

extern struct op * Perl_pp_chop(void);

extern struct op * Perl_pp_schop(void);

extern struct op * Perl_pp_chomp(void);

extern struct op * Perl_pp_schomp(void);

extern struct op * Perl_pp_defined(void);

extern struct op * Perl_pp_undef(void);

extern struct op * Perl_pp_study(void);

extern struct op * Perl_pp_pos(void);

extern struct op * Perl_pp_preinc(void);

extern struct op * Perl_pp_predec(void);

extern struct op * Perl_pp_postinc(void);

extern struct op * Perl_pp_postdec(void);

extern struct op * Perl_pp_pow(void);

extern struct op * Perl_pp_multiply(void);

extern struct op * Perl_pp_i_multiply(void);

extern struct op * Perl_pp_divide(void);

extern struct op * Perl_pp_i_divide(void);

extern struct op * Perl_pp_modulo(void);

extern struct op * Perl_pp_i_modulo(void);

extern struct op * Perl_pp_repeat(void);

extern struct op * Perl_pp_add(void);

extern struct op * Perl_pp_i_add(void);

extern struct op * Perl_pp_subtract(void);

extern struct op * Perl_pp_i_subtract(void);

extern struct op * Perl_pp_concat(void);

extern struct op * Perl_pp_stringify(void);

extern struct op * Perl_pp_left_shift(void);

extern struct op * Perl_pp_right_shift(void);

extern struct op * Perl_pp_lt(void);

extern struct op * Perl_pp_i_lt(void);

extern struct op * Perl_pp_gt(void);

extern struct op * Perl_pp_i_gt(void);

extern struct op * Perl_pp_le(void);

extern struct op * Perl_pp_i_le(void);

extern struct op * Perl_pp_ge(void);

extern struct op * Perl_pp_i_ge(void);

extern struct op * Perl_pp_eq(void);

extern struct op * Perl_pp_i_eq(void);

extern struct op * Perl_pp_ne(void);

extern struct op * Perl_pp_i_ne(void);

extern struct op * Perl_pp_ncmp(void);

extern struct op * Perl_pp_i_ncmp(void);

extern struct op * Perl_pp_slt(void);

extern struct op * Perl_pp_sgt(void);

extern struct op * Perl_pp_sle(void);

extern struct op * Perl_pp_sge(void);

extern struct op * Perl_pp_seq(void);

extern struct op * Perl_pp_sne(void);

extern struct op * Perl_pp_scmp(void);

extern struct op * Perl_pp_bit_and(void);

extern struct op * Perl_pp_bit_xor(void);

extern struct op * Perl_pp_bit_or(void);

extern struct op * Perl_pp_negate(void);

extern struct op * Perl_pp_i_negate(void);

extern struct op * Perl_pp_not(void);

extern struct op * Perl_pp_complement(void);

extern struct op * Perl_pp_atan2(void);

extern struct op * Perl_pp_sin(void);

extern struct op * Perl_pp_cos(void);

extern struct op * Perl_pp_rand(void);

extern struct op * Perl_pp_srand(void);

extern struct op * Perl_pp_exp(void);

extern struct op * Perl_pp_log(void);

extern struct op * Perl_pp_sqrt(void);

extern struct op * Perl_pp_int(void);

extern struct op * Perl_pp_hex(void);

extern struct op * Perl_pp_oct(void);

extern struct op * Perl_pp_abs(void);

extern struct op * Perl_pp_length(void);

extern struct op * Perl_pp_substr(void);

extern struct op * Perl_pp_vec(void);

extern struct op * Perl_pp_index(void);

extern struct op * Perl_pp_rindex(void);

extern struct op * Perl_pp_sprintf(void);

extern struct op * Perl_pp_formline(void);

extern struct op * Perl_pp_ord(void);

extern struct op * Perl_pp_chr(void);

extern struct op * Perl_pp_crypt(void);

extern struct op * Perl_pp_ucfirst(void);

extern struct op * Perl_pp_lcfirst(void);

extern struct op * Perl_pp_uc(void);

extern struct op * Perl_pp_lc(void);

extern struct op * Perl_pp_quotemeta(void);

extern struct op * Perl_pp_rv2av(void);

extern struct op * Perl_pp_aelemfast(void);

extern struct op * Perl_pp_aelem(void);

extern struct op * Perl_pp_aslice(void);

extern struct op * Perl_pp_each(void);

extern struct op * Perl_pp_values(void);

extern struct op * Perl_pp_keys(void);

extern struct op * Perl_pp_delete(void);

extern struct op * Perl_pp_exists(void);

extern struct op * Perl_pp_rv2hv(void);

extern struct op * Perl_pp_helem(void);

extern struct op * Perl_pp_hslice(void);

extern struct op * Perl_pp_unpack(void);

extern struct op * Perl_pp_pack(void);

extern struct op * Perl_pp_split(void);

extern struct op * Perl_pp_join(void);

extern struct op * Perl_pp_list(void);

extern struct op * Perl_pp_lslice(void);

extern struct op * Perl_pp_anonlist(void);

extern struct op * Perl_pp_anonhash(void);

extern struct op * Perl_pp_splice(void);

extern struct op * Perl_pp_push(void);

extern struct op * Perl_pp_pop(void);

extern struct op * Perl_pp_shift(void);

extern struct op * Perl_pp_unshift(void);

extern struct op * Perl_pp_sort(void);

extern struct op * Perl_pp_reverse(void);

extern struct op * Perl_pp_grepstart(void);

extern struct op * Perl_pp_grepwhile(void);

extern struct op * Perl_pp_mapstart(void);

extern struct op * Perl_pp_mapwhile(void);

extern struct op * Perl_pp_range(void);

extern struct op * Perl_pp_flip(void);

extern struct op * Perl_pp_flop(void);

extern struct op * Perl_pp_and(void);

extern struct op * Perl_pp_or(void);

extern struct op * Perl_pp_xor(void);

extern struct op * Perl_pp_cond_expr(void);

extern struct op * Perl_pp_andassign(void);

extern struct op * Perl_pp_orassign(void);

extern struct op * Perl_pp_method(void);

extern struct op * Perl_pp_entersub(void);

extern struct op * Perl_pp_leavesub(void);

extern struct op * Perl_pp_leavesublv(void);

extern struct op * Perl_pp_caller(void);

extern struct op * Perl_pp_warn(void);

extern struct op * Perl_pp_die(void);

extern struct op * Perl_pp_reset(void);

extern struct op * Perl_pp_lineseq(void);

extern struct op * Perl_pp_nextstate(void);

extern struct op * Perl_pp_dbstate(void);

extern struct op * Perl_pp_unstack(void);

extern struct op * Perl_pp_enter(void);

extern struct op * Perl_pp_leave(void);

extern struct op * Perl_pp_scope(void);

extern struct op * Perl_pp_enteriter(void);

extern struct op * Perl_pp_iter(void);

extern struct op * Perl_pp_enterloop(void);

extern struct op * Perl_pp_leaveloop(void);

extern struct op * Perl_pp_return(void);

extern struct op * Perl_pp_last(void);

extern struct op * Perl_pp_next(void);

extern struct op * Perl_pp_redo(void);

extern struct op * Perl_pp_dump(void);

extern struct op * Perl_pp_goto(void);

extern struct op * Perl_pp_exit(void);

extern struct op * Perl_pp_open(void);

extern struct op * Perl_pp_close(void);

extern struct op * Perl_pp_pipe_op(void);

extern struct op * Perl_pp_fileno(void);

extern struct op * Perl_pp_umask(void);

extern struct op * Perl_pp_binmode(void);

extern struct op * Perl_pp_tie(void);

extern struct op * Perl_pp_untie(void);

extern struct op * Perl_pp_tied(void);

extern struct op * Perl_pp_dbmopen(void);

extern struct op * Perl_pp_dbmclose(void);

extern struct op * Perl_pp_sselect(void);

extern struct op * Perl_pp_select(void);

extern struct op * Perl_pp_getc(void);

extern struct op * Perl_pp_read(void);

extern struct op * Perl_pp_enterwrite(void);

extern struct op * Perl_pp_leavewrite(void);

extern struct op * Perl_pp_prtf(void);

extern struct op * Perl_pp_print(void);

extern struct op * Perl_pp_sysopen(void);

extern struct op * Perl_pp_sysseek(void);

extern struct op * Perl_pp_sysread(void);

extern struct op * Perl_pp_syswrite(void);

extern struct op * Perl_pp_send(void);

extern struct op * Perl_pp_recv(void);

extern struct op * Perl_pp_eof(void);

extern struct op * Perl_pp_tell(void);

extern struct op * Perl_pp_seek(void);

extern struct op * Perl_pp_truncate(void);

extern struct op * Perl_pp_fcntl(void);

extern struct op * Perl_pp_ioctl(void);

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

extern struct op * Perl_pp_ftrread(void);

extern struct op * Perl_pp_ftrwrite(void);

extern struct op * Perl_pp_ftrexec(void);

extern struct op * Perl_pp_fteread(void);

extern struct op * Perl_pp_ftewrite(void);

extern struct op * Perl_pp_fteexec(void);

extern struct op * Perl_pp_ftis(void);

extern struct op * Perl_pp_fteowned(void);

extern struct op * Perl_pp_ftrowned(void);

extern struct op * Perl_pp_ftzero(void);

extern struct op * Perl_pp_ftsize(void);

extern struct op * Perl_pp_ftmtime(void);

extern struct op * Perl_pp_ftatime(void);

extern struct op * Perl_pp_ftctime(void);

extern struct op * Perl_pp_ftsock(void);

extern struct op * Perl_pp_ftchr(void);

extern struct op * Perl_pp_ftblk(void);

extern struct op * Perl_pp_ftfile(void);

extern struct op * Perl_pp_ftdir(void);

extern struct op * Perl_pp_ftpipe(void);

extern struct op * Perl_pp_ftlink(void);

extern struct op * Perl_pp_ftsuid(void);

extern struct op * Perl_pp_ftsgid(void);

extern struct op * Perl_pp_ftsvtx(void);

extern struct op * Perl_pp_fttty(void);

extern struct op * Perl_pp_fttext(void);

extern struct op * Perl_pp_ftbinary(void);

extern struct op * Perl_pp_chdir(void);

extern struct op * Perl_pp_chown(void);

extern struct op * Perl_pp_chroot(void);

extern struct op * Perl_pp_unlink(void);

extern struct op * Perl_pp_chmod(void);

extern struct op * Perl_pp_utime(void);

extern struct op * Perl_pp_rename(void);

extern struct op * Perl_pp_link(void);

extern struct op * Perl_pp_symlink(void);

extern struct op * Perl_pp_readlink(void);

extern struct op * Perl_pp_mkdir(void);

extern struct op * Perl_pp_rmdir(void);

extern struct op * Perl_pp_open_dir(void);

extern struct op * Perl_pp_readdir(void);

extern struct op * Perl_pp_telldir(void);

extern struct op * Perl_pp_seekdir(void);

extern struct op * Perl_pp_rewinddir(void);

extern struct op * Perl_pp_closedir(void);

extern struct op * Perl_pp_fork(void);

extern struct op * Perl_pp_wait(void);

extern struct op * Perl_pp_waitpid(void);

extern struct op * Perl_pp_system(void);

extern struct op * Perl_pp_exec(void);

extern struct op * Perl_pp_kill(void);

extern struct op * Perl_pp_getppid(void);

extern struct op * Perl_pp_getpgrp(void);

extern struct op * Perl_pp_setpgrp(void);

extern struct op * Perl_pp_getpriority(void);

extern struct op * Perl_pp_setpriority(void);

extern struct op * Perl_pp_time(void);

extern struct op * Perl_pp_tms(void);

extern struct op * Perl_pp_localtime(void);

extern struct op * Perl_pp_gmtime(void);

extern struct op * Perl_pp_alarm(void);

extern struct op * Perl_pp_sleep(void);

extern struct op * Perl_pp_shmget(void);

extern struct op * Perl_pp_shmctl(void);

extern struct op * Perl_pp_shmread(void);

extern struct op * Perl_pp_shmwrite(void);

extern struct op * Perl_pp_msgget(void);

extern struct op * Perl_pp_msgctl(void);

extern struct op * Perl_pp_msgsnd(void);

extern struct op * Perl_pp_msgrcv(void);

extern struct op * Perl_pp_semget(void);

extern struct op * Perl_pp_semctl(void);

extern struct op * Perl_pp_semop(void);

extern struct op * Perl_pp_require(void);

extern struct op * Perl_pp_dofile(void);

extern struct op * Perl_pp_entereval(void);

extern struct op * Perl_pp_leaveeval(void);

extern struct op * Perl_pp_entertry(void);

extern struct op * Perl_pp_leavetry(void);

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

extern struct op * Perl_pp_lock(void);

extern struct op * Perl_pp_threadsv(void);

extern struct op * Perl_pp_setstate(void);

extern struct op * Perl_pp_method_named(void);

struct op * (*PL_check[352LL])(struct op *) = {&Perl_ck_null, &Perl_ck_null, &Perl_ck_fun, &Perl_ck_null, &Perl_ck_null, &Perl_ck_svconst, &Perl_ck_null, &Perl_ck_null, &Perl_ck_null, &Perl_ck_null, &Perl_ck_null, &Perl_ck_null, &Perl_ck_null, &Perl_ck_null, &Perl_ck_rvconst, &Perl_ck_rvconst, &Perl_ck_null, &Perl_ck_rvconst, &Perl_ck_anoncode, &Perl_ck_null, &Perl_ck_spair, &Perl_ck_null, &Perl_ck_fun, &Perl_ck_fun, &Perl_ck_open, &Perl_ck_glob, &Perl_ck_null, &Perl_ck_null, &Perl_ck_fun, &Perl_ck_fun, &Perl_ck_null, &Perl_ck_match, &Perl_ck_match, &Perl_ck_null, &Perl_ck_null, &Perl_ck_null, &Perl_ck_sassign, &Perl_ck_null, &Perl_ck_spair, &Perl_ck_null, &Perl_ck_spair, &Perl_ck_null, &Perl_ck_defined, &Perl_ck_lfun, &Perl_ck_fun, &Perl_ck_lfun, &Perl_ck_lfun, &Perl_ck_lfun, &Perl_ck_lfun, &Perl_ck_lfun, &Perl_ck_lfun, &Perl_ck_lfun, &Perl_ck_lfun, &Perl_ck_lfun, &Perl_ck_null, &Perl_ck_null, &Perl_ck_null, &Perl_ck_null, &Perl_ck_null, &Perl_ck_null, &Perl_ck_null, &Perl_ck_repeat, &Perl_ck_null, &Perl_ck_null, &Perl_ck_null, &Perl_ck_null, &Perl_ck_concat, &Perl_ck_fun, &Perl_ck_bitop, &Perl_ck_bitop, &Perl_ck_null, &Perl_ck_null, &Perl_ck_null, &Perl_ck_null, &Perl_ck_null, &Perl_ck_null, &Perl_ck_null, &Perl_ck_null, &Perl_ck_null, &Perl_ck_null, &Perl_ck_null, &Perl_ck_null, &Perl_ck_null, &Perl_ck_null, &Perl_ck_null, &Perl_ck_null, &Perl_ck_null, &Perl_ck_null, &Perl_ck_null, &Perl_ck_null, &Perl_ck_null, &Perl_ck_bitop, &Perl_ck_bitop, &Perl_ck_bitop, &Perl_ck_null, &Perl_ck_null, &Perl_ck_null, &Perl_ck_bitop, &Perl_ck_fun, &Perl_ck_fun, &Perl_ck_fun, &Perl_ck_fun, &Perl_ck_fun, &Perl_ck_fun, &Perl_ck_fun, &Perl_ck_fun, &Perl_ck_fun, &Perl_ck_fun, &Perl_ck_fun, &Perl_ck_fun, &Perl_ck_lengthconst, &Perl_ck_substr, &Perl_ck_fun, &Perl_ck_index, &Perl_ck_index, &Perl_ck_fun, &Perl_ck_fun, &Perl_ck_fun, &Perl_ck_fun, &Perl_ck_fun, &Perl_ck_fun, &Perl_ck_fun, &Perl_ck_fun, &Perl_ck_fun, &Perl_ck_fun, &Perl_ck_rvconst, &Perl_ck_null, &Perl_ck_null, &Perl_ck_null, &Perl_ck_fun, &Perl_ck_fun, &Perl_ck_fun, &Perl_ck_delete, &Perl_ck_exists, &Perl_ck_rvconst, &Perl_ck_null, &Perl_ck_null, &Perl_ck_fun, &Perl_ck_fun, &Perl_ck_split, &Perl_ck_join, &Perl_ck_null, &Perl_ck_null, &Perl_ck_fun, &Perl_ck_fun, &Perl_ck_fun, &Perl_ck_fun, &Perl_ck_shift, &Perl_ck_shift, &Perl_ck_fun, &Perl_ck_sort, &Perl_ck_fun, &Perl_ck_grep, &Perl_ck_null, &Perl_ck_grep, &Perl_ck_null, &Perl_ck_null, &Perl_ck_null, &Perl_ck_null, &Perl_ck_null, &Perl_ck_null, &Perl_ck_null, &Perl_ck_null, &Perl_ck_null, &Perl_ck_null, &Perl_ck_method, &Perl_ck_subr, &Perl_ck_null, &Perl_ck_null, &Perl_ck_fun, &Perl_ck_fun, &Perl_ck_die, &Perl_ck_fun, &Perl_ck_null, &Perl_ck_null, &Perl_ck_null, &Perl_ck_null, &Perl_ck_null, &Perl_ck_null, &Perl_ck_null, &Perl_ck_null, &Perl_ck_null, &Perl_ck_null, &Perl_ck_null, &Perl_ck_return, &Perl_ck_null, &Perl_ck_null, &Perl_ck_null, &Perl_ck_null, &Perl_ck_null, &Perl_ck_exit, &Perl_ck_open, &Perl_ck_fun, &Perl_ck_fun, &Perl_ck_fun, &Perl_ck_fun, &Perl_ck_fun, &Perl_ck_fun, &Perl_ck_fun, &Perl_ck_fun, &Perl_ck_fun, &Perl_ck_fun, &Perl_ck_select, &Perl_ck_select, &Perl_ck_eof, &Perl_ck_fun, &Perl_ck_fun, &Perl_ck_null, &Perl_ck_listiob, &Perl_ck_listiob, &Perl_ck_fun, &Perl_ck_fun, &Perl_ck_fun, &Perl_ck_fun, &Perl_ck_fun, &Perl_ck_fun, &Perl_ck_eof, &Perl_ck_fun, &Perl_ck_fun, &Perl_ck_trunc, &Perl_ck_fun, &Perl_ck_fun, &Perl_ck_fun, &Perl_ck_fun, &Perl_ck_fun, &Perl_ck_fun, &Perl_ck_fun, &Perl_ck_fun, &Perl_ck_fun, &Perl_ck_fun, &Perl_ck_fun, &Perl_ck_fun, &Perl_ck_fun, &Perl_ck_fun, &Perl_ck_ftst, &Perl_ck_ftst, &Perl_ck_ftst, &Perl_ck_ftst, &Perl_ck_ftst, &Perl_ck_ftst, &Perl_ck_ftst, &Perl_ck_ftst, &Perl_ck_ftst, &Perl_ck_ftst, &Perl_ck_ftst, &Perl_ck_ftst, &Perl_ck_ftst, &Perl_ck_ftst, &Perl_ck_ftst, &Perl_ck_ftst, &Perl_ck_ftst, &Perl_ck_ftst, &Perl_ck_ftst, &Perl_ck_ftst, &Perl_ck_ftst, &Perl_ck_ftst, &Perl_ck_ftst, &Perl_ck_ftst, &Perl_ck_ftst, &Perl_ck_ftst, &Perl_ck_ftst, &Perl_ck_ftst, &Perl_ck_ftst, &Perl_ck_fun, &Perl_ck_fun, &Perl_ck_fun, &Perl_ck_fun, &Perl_ck_fun, &Perl_ck_fun, &Perl_ck_fun, &Perl_ck_fun, &Perl_ck_fun, &Perl_ck_fun, &Perl_ck_fun, &Perl_ck_fun, &Perl_ck_fun, &Perl_ck_fun, &Perl_ck_fun, &Perl_ck_fun, &Perl_ck_fun, &Perl_ck_fun, &Perl_ck_null, &Perl_ck_null, &Perl_ck_fun, &Perl_ck_exec, &Perl_ck_exec, &Perl_ck_fun, &Perl_ck_null, &Perl_ck_fun, &Perl_ck_fun, &Perl_ck_fun, &Perl_ck_fun, &Perl_ck_null, &Perl_ck_null, &Perl_ck_fun, &Perl_ck_fun, &Perl_ck_fun, &Perl_ck_fun, &Perl_ck_fun, &Perl_ck_fun, &Perl_ck_fun, &Perl_ck_fun, &Perl_ck_fun, &Perl_ck_fun, &Perl_ck_fun, &Perl_ck_fun, &Perl_ck_fun, &Perl_ck_fun, &Perl_ck_fun, &Perl_ck_require, &Perl_ck_fun, &Perl_ck_eval, &Perl_ck_null, &Perl_ck_null, &Perl_ck_null, &Perl_ck_fun, &Perl_ck_fun, &Perl_ck_null, &Perl_ck_fun, &Perl_ck_fun, &Perl_ck_null, &Perl_ck_fun, &Perl_ck_fun, &Perl_ck_null, &Perl_ck_fun, &Perl_ck_fun, &Perl_ck_null, &Perl_ck_fun, &Perl_ck_fun, &Perl_ck_fun, &Perl_ck_fun, &Perl_ck_null, &Perl_ck_null, &Perl_ck_null, &Perl_ck_null, &Perl_ck_fun, &Perl_ck_fun, &Perl_ck_null, &Perl_ck_null, &Perl_ck_null, &Perl_ck_fun, &Perl_ck_fun, &Perl_ck_null, &Perl_ck_null, &Perl_ck_null, &Perl_ck_null, &Perl_ck_fun, &Perl_ck_rfun, &Perl_ck_null, &Perl_ck_null, &Perl_ck_null, &Perl_ck_null};

extern struct op * Perl_ck_null(struct op *);

extern struct op * Perl_ck_fun(struct op *);

extern struct op * Perl_ck_svconst(struct op *);

extern struct op * Perl_ck_rvconst(struct op *);

extern struct op * Perl_ck_anoncode(struct op *);

extern struct op * Perl_ck_spair(struct op *);

extern struct op * Perl_ck_open(struct op *);

extern struct op * Perl_ck_glob(struct op *);

extern struct op * Perl_ck_match(struct op *);

extern struct op * Perl_ck_sassign(struct op *);

extern struct op * Perl_ck_defined(struct op *);

extern struct op * Perl_ck_lfun(struct op *);

extern struct op * Perl_ck_repeat(struct op *);

extern struct op * Perl_ck_concat(struct op *);

extern struct op * Perl_ck_bitop(struct op *);

extern struct op * Perl_ck_lengthconst(struct op *);

extern struct op * Perl_ck_substr(struct op *);

extern struct op * Perl_ck_index(struct op *);

extern struct op * Perl_ck_delete(struct op *);

extern struct op * Perl_ck_exists(struct op *);

extern struct op * Perl_ck_split(struct op *);

extern struct op * Perl_ck_join(struct op *);

extern struct op * Perl_ck_shift(struct op *);

extern struct op * Perl_ck_sort(struct op *);

extern struct op * Perl_ck_grep(struct op *);

extern struct op * Perl_ck_method(struct op *);

extern struct op * Perl_ck_subr(struct op *);

extern struct op * Perl_ck_die(struct op *);

extern struct op * Perl_ck_return(struct op *);

extern struct op * Perl_ck_exit(struct op *);

extern struct op * Perl_ck_select(struct op *);

extern struct op * Perl_ck_eof(struct op *);

extern struct op * Perl_ck_listiob(struct op *);

extern struct op * Perl_ck_trunc(struct op *);

extern struct op * Perl_ck_ftst(struct op *);

extern struct op * Perl_ck_exec(struct op *);

extern struct op * Perl_ck_require(struct op *);

extern struct op * Perl_ck_eval(struct op *);

extern struct op * Perl_ck_rfun(struct op *);

_UINT32 PL_opargs[352LL] = {0, 0, 13828, 4, 20, 3076, 3140, 3140, 140352, 68, 64, 64, 64, 2624, 580, 580, 532, 576, 3072, 13828, 16897, 8710, 79500, 1189892, 5640, 75784, 120328, 3080, 8708, 8708, 9732, 2624, 2564, 10836, 1620, 12308, 4, 279560, 22029, 79500, 22285, 79756, 79508, 79364, 79492, 79500, 8804, 8788, 8804, 8788, 8812, 9052, 8812, 9052, 140558, 140590, 140574, 140590, 140574, 140606, 140574, 148489, 140590, 140574, 140590, 140574, 140558, 10510, 140558, 140558, 140342, 140310, 140342, 140310, 140342, 140310, 140342, 140310, 140342, 140310, 140342, 140310, 140350, 140318, 140310, 140310, 140310, 140310, 140310, 140310, 140318, 140302, 140302, 140302, 8750, 8990, 8726, 8718, 141582, 79758, 79758, 79628, 79364, 79758, 79758, 79758, 79758, 79758, 79758, 79758, 79772, 321005580, 2238492, 19015964, 19015964, 272399, 272389, 79774, 79758, 141582, 79502, 79502, 79502, 79502, 79502, 584, 158724, 156676, 288769, 38400, 38408, 38408, 13824, 13844, 584, 164868, 296961, 141312, 272397, 2238472, 272397, 18433, 4490240, 18437, 18437, 87189505, 289053, 95748, 95748, 289053, 370689, 18441, 305217, 1608, 305217, 1608, 140800, 139776, 512, 1536, 1536, 140294, 1600, 1540, 1540, 576, 16969, 512, 512, 79368, 18461, 18525, 79380, 2048, 5124, 5124, 4, 0, 2048, 2048, 4672, 0, 4672, 1024, 18497, 6724, 6724, 6724, 6724, 6724, 79428, 5425181, 120340, 837652, 54812, 79388, 1230852, 4384853, 62996, 62980, 2263060, 38420, 35792904, 116748, 120332, 305055773, 120404, 512, 378901, 378901, 304269316, 2279428, 305055773, 321046557, 304269341, 36620317, 120340, 120332, 2279428, 141332, 2279436, 2279436, 182556, 35833876, 573360148, 182292, 182292, 182292, 837660, 182300, 2279444, 35833876, 54804, 54804, 55424, 55424, 55444, 55444, 55444, 55444, 55444, 55444, 55444, 55444, 55444, 55444, 55452, 55436, 55436, 55436, 55444, 55444, 55444, 55444, 55444, 55444, 55444, 55444, 55444, 55444, 55316, 55444, 55444, 79644, 18717, 79772, 18845, 18717, 18717, 141596, 141596, 141596, 79500, 1190172, 79772, 182292, 54784, 54796, 182276, 54788, 54804, 28, 284, 141596, 338205, 338269, 18781, 284, 79644, 1255708, 141596, 2238748, 284, 0, 79368, 79368, 79516, 79644, 2238493, 2238493, 35792925, 35792925, 141341, 2238493, 2238493, 572663837, 2238493, 35792925, 141341, 79552, 8768, 13888, 8704, 1536, 2048, 13824, 141312, 0, 13824, 141312, 0, 13824, 10240, 0, 141312, 141312, 0, 13844, 13844, 13844, 13844, 20, 20, 20, 20, 13824, 13824, 0, 20, 20, 13824, 13824, 0, 20, 20, 12, 272413, 62980, 68, 5124, 3136, 0};

_INT32 PL_origargc;

_INT8 ** PL_origargv;

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
            union anonymous_w2c_66 {
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
          union anonymous_w2c_66 xio_dirpu;
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
struct gv * PL_envgv;

struct gv * PL_incgv;

struct gv * PL_hintgv;

_INT8 * PL_origfilename;

struct sv * PL_diehook;

struct sv * PL_warnhook;

_INT8 PL_minus_c;

struct sv * PL_patchlevel;

_INT8 ** PL_localpatches;

_INT8 * PL_splitstr = " ";

_INT8 PL_preprocess;

_INT8 PL_minus_n;

_INT8 PL_minus_p;

_INT8 PL_minus_l;

_INT8 PL_minus_a;

_INT8 PL_minus_F;

_INT8 PL_doswitches;

_UINT8 PL_dowarn;

_INT8 PL_widesyscalls;

_INT8 PL_doextract;

_INT8 PL_sawampersand;

_INT8 PL_unsafe;

_INT8 * PL_inplace;

struct sv * PL_e_script;

_UINT32 PL_perldb;

_INT32 PL_perl_destruct_level;

_INT64 PL_basetime;

struct sv * PL_formfeed;

_INT32 PL_maxsysfd = 2;

_INT32 PL_multiline;

_INT32 PL_statusvalue;

_UINT8 PL_exit_flags;

struct gv * PL_stdingv;

struct gv * PL_stderrgv;

struct gv * PL_defgv;

struct gv * PL_argvgv;

struct gv * PL_argvoutgv;

struct av * PL_argvout_stack;

struct gv * PL_replgv;

struct gv * PL_errgv;

struct gv * PL_DBgv;

struct gv * PL_DBline;

struct gv * PL_DBsub;

struct sv * PL_DBsingle;

struct sv * PL_DBtrace;

struct sv * PL_DBsignal;

struct av * PL_lineary;

struct av * PL_dbargs;

struct hv * PL_debstash;

struct hv * PL_globalstash;

struct sv * PL_curstname;

struct av * PL_beginav;

struct av * PL_endav;

struct av * PL_checkav;

struct av * PL_initav;

struct hv * PL_strtab;

_UINT32 PL_sub_generation = 1;

_INT32 PL_sv_count;

_INT32 PL_sv_objcount;

struct sv * PL_sv_root;

struct sv * PL_sv_arenaroot;

_INT32 PL_forkprocess;

struct av * PL_fdpid;

_INT8 PL_tainting;

_INT8 * PL_op_mask;

struct cv * PL_main_cv;

struct op * PL_main_root;

struct op * PL_main_start;

struct op * PL_eval_root;

struct op * PL_eval_start;

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
struct cop * PL_curcopdb;

_UINT32 PL_copline = -1;

_INT32 PL_filemode;

_INT32 PL_lastfd;

_INT8 * PL_oldname;

_INT8 ** PL_Argv;

_INT8 * PL_Cmd;

_INT32 PL_gensym;

_INT8 PL_preambled;

struct av * PL_preambleav;

_INT32 PL_laststatval = -1;

_INT32 PL_laststype = 235;

struct sv * PL_mess_sv;

struct sv * PL_ors_sv;

_INT8 * PL_ofmt;

struct exitlistentry {
  void(*fn)(void *);
  void * ptr;
};
struct exitlistentry * PL_exitlist;

_INT32 PL_exitlistlen;

struct hv * PL_modglobal;

_UINT32 * PL_profiledata;

struct _PerlIO ** volatile PL_rsfp;

struct av * PL_rsfp_filters;

struct cop PL_compiling;

struct cv * PL_compcv;

struct av * PL_BINCOMPAT0;

struct av * PL_comppad_name;

_INT32 PL_comppad_name_fill;

_INT32 PL_comppad_name_floor;

_INT32 PL_generation = 100;

struct cv * PL_DBcv;

_INT8 PL_in_clean_objs;

_INT8 PL_in_clean_all;

_INT8 * PL_linestart;

_INT8 PL_pending_ident;

struct _sublex_info {
  _INT32 super_state;
  _INT32 sub_inwhat;
  struct op * sub_op;
  _INT8 * super_bufptr;
  _INT8 * super_bufend;
};
struct _sublex_info PL_sublex_info;

_UINT32 PL_uid;

_UINT32 PL_euid;

_UINT32 PL_gid;

_UINT32 PL_egid;

_INT8 PL_nomemok;

_UINT32 PL_an;

_UINT32 PL_cop_seqmax;

_UINT16 PL_op_seqmax;

_UINT32 PL_evalseq;

_INT8 ** PL_origenviron;

_UINT32 PL_origalen;

struct hv * PL_pidstatus;

_INT32 PL_maxo = 352;

_INT8 * PL_osname;

_INT8 * PL_sh_path_compat = "/bin/sh";

void(*PL_sighandlerp)(_INT32);

struct xpv {
  _INT8 * xpv_pv;
  _UINT64 xpv_cur;
  _UINT64 xpv_len;
};
struct xpv * PL_xiv_arenaroot;

_INT64 * PL_xiv_root;

_IEEE64 * PL_xnv_root;

struct xrv {
  struct sv * xrv_rv;
};
struct xrv * PL_xrv_root;

struct xpv * PL_xpv_root;

struct xpviv {
  _INT8 * xpv_pv;
  _UINT64 xpv_cur;
  _UINT64 xpv_len;
  _INT64 xiv_iv;
};
struct xpviv * PL_xpviv_root;

struct xpvnv {
  _INT8 * xpv_pv;
  _UINT64 xpv_cur;
  _UINT64 xpv_len;
  _INT64 xiv_iv;
  _IEEE64 xnv_nv;
};
struct xpvnv * PL_xpvnv_root;

struct xpvcv * PL_xpvcv_root;

struct xpvav * PL_xpvav_root;

struct xpvhv * PL_xpvhv_root;

struct xpvmg {
  _INT8 * xpv_pv;
  _UINT64 xpv_cur;
  _UINT64 xpv_len;
  _INT64 xiv_iv;
  _IEEE64 xnv_nv;
  struct magic * xmg_magic;
  struct hv * xmg_stash;
};
struct xpvmg * PL_xpvmg_root;

struct xpvlv {
  _INT8 * xpv_pv;
  _UINT64 xpv_cur;
  _UINT64 xpv_len;
  _INT64 xiv_iv;
  _IEEE64 xnv_nv;
  struct magic * xmg_magic;
  struct hv * xmg_stash;
  _UINT64 xlv_targoff;
  _UINT64 xlv_targlen;
  struct sv * xlv_targ;
  _INT8 xlv_type;
};
struct xpvlv * PL_xpvlv_root;

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
struct xpvbm * PL_xpvbm_root;

struct he * PL_he_root;

_INT8 * PL_nice_chunk;

_UINT32 PL_nice_chunk_size;

_INT32(*PL_runops)(void) = &Perl_runops_standard;

extern _INT32 Perl_runops_standard(void);

_INT8 PL_tokenbuf[256LL];

struct sv PL_sv_undef;

struct sv PL_sv_no;

struct sv PL_sv_yes;

_INT8 * PL_cshname = "";

_INT32 PL_cshlen;

_UINT32 PL_lex_state;

_UINT32 PL_lex_defer;

_INT32 PL_lex_expect;

_INT32 PL_lex_brackets;

_INT32 PL_lex_formbrack;

_INT32 PL_lex_casemods;

_INT32 PL_lex_dojoin;

_INT32 PL_lex_starts;

struct sv * PL_lex_stuff;

struct sv * PL_lex_repl;

struct op * PL_lex_op;

struct op * PL_lex_inpat;

_INT32 PL_lex_inwhat;

_INT8 * PL_lex_brackstack;

_INT8 * PL_lex_casestack;

union anonymous_w2c_71 {
  _INT32 ival;
  _INT8 * pval;
  struct op * opval;
  struct gv * gvval;
};
union anonymous_w2c_71 PL_nextval[5LL];

_INT32 PL_nexttype[5LL];

_INT32 PL_nexttoke;

struct sv * PL_linestr;

_INT8 * PL_bufptr;

_INT8 * PL_oldbufptr;

_INT8 * PL_oldoldbufptr;

_INT8 * PL_bufend;

_INT32 PL_expect = 3;

_INT32 PL_multi_start;

_INT32 PL_multi_end;

_INT32 PL_multi_open;

_INT32 PL_multi_close;

_INT32 PL_error_count;

_INT32 PL_subline;

struct sv * PL_subname;

_INT32 PL_min_intro_pending;

_INT32 PL_max_intro_pending;

_INT32 PL_padix;

_INT32 PL_padix_floor;

_INT32 PL_pad_reset_pending;

_INT8 * PL_last_uni;

_INT8 * PL_last_lop;

_UINT16 PL_last_lop_op;

_INT32 PL_in_my;

struct hv * PL_in_my_stash;

_UINT32 PL_hints;

volatile _UINT32 PL_debug;

_INT64 PL_amagic_generation;

struct sv * PL_utf8_alnum;

struct sv * PL_utf8_alnumc;

struct sv * PL_utf8_ascii;

struct sv * PL_utf8_alpha;

struct sv * PL_utf8_space;

struct sv * PL_utf8_cntrl;

struct sv * PL_utf8_graph;

struct sv * PL_utf8_digit;

struct sv * PL_utf8_upper;

struct sv * PL_utf8_lower;

struct sv * PL_utf8_print;

struct sv * PL_utf8_punct;

struct sv * PL_utf8_xdigit;

struct sv * PL_utf8_mark;

struct sv * PL_utf8_toupper;

struct sv * PL_utf8_totitle;

struct sv * PL_utf8_tolower;

struct sv * PL_utf8_tofold;

struct hv * PL_last_swash_hv;

_UINT32 PL_last_swash_klen;

_UINT8 PL_last_swash_key[10LL];

_UINT8 * PL_last_swash_tmps;

_UINT64 PL_last_swash_slen;

_INT32 PL_yydebug;

_INT32 PL_yynerrs;

_INT32 PL_yyerrflag;

_INT32 PL_yychar;

union anonymous_w2c_71 PL_yyval;

union anonymous_w2c_71 PL_yylval;

_INT32 PL_glob_index;

_INT8 PL_srand_called;

_INT8 PL_uudmap[256LL];

_INT8 * PL_bitcount;

struct sv ** PL_psig_ptr;

struct sv ** PL_psig_name;

struct av * PL_beginav_save;

struct hv * PL_nullstash;

struct xpv * PL_xnv_arenaroot;

struct xpv * PL_xrv_arenaroot;

struct xpv * PL_xpv_arenaroot;

struct xpviv * PL_xpviv_arenaroot;

struct xpvnv * PL_xpvnv_arenaroot;

struct xpvcv * PL_xpvcv_arenaroot;

struct xpvav * PL_xpvav_arenaroot;

struct xpvhv * PL_xpvhv_arenaroot;

struct xpvmg * PL_xpvmg_arenaroot;

struct xpvlv * PL_xpvlv_arenaroot;

struct xpvbm * PL_xpvbm_arenaroot;

struct xpv * PL_he_arenaroot;

_INT32 * PL_psig_pend;

_INT32 PL_sig_pending;

_INT8 PL_savebegin;

struct hv * PL_custom_op_names;

struct hv * PL_custom_op_descs;

struct _PerlIO ** PL_perlio;

struct PerlIO_list_s;
struct PerlIO_list_s * PL_known_layers;

struct PerlIO_list_s * PL_def_layerlist;

struct sv * PL_encoding;

struct perl_debug_pad {
  struct sv pad[3LL];
};
struct perl_debug_pad PL_debug_pad;

_INT8 PL_taint_warn;

_INT8 PL_utf8locale;

struct sv * PL_utf8_idstart;

struct sv * PL_utf8_idcont;

_INT32(*PL_sort_RealCmp)(struct sv *, struct sv *);

struct av * PL_checkav_save;

_INT64 PL_clocktick;

_INT32 PL_in_load_module;

_UINT32 PL_unicode;

_UINT32 PL_signals;

struct hv * PL_stashcache;

_INT32 PL_reentrant_retint;

void(*PL_sharehook)(struct sv *) = &Perl_sv_nosharing;

extern void Perl_sv_nosharing(struct sv *);

void(*PL_lockhook)(struct sv *) = &Perl_sv_nolocking;

extern void Perl_sv_nolocking(struct sv *);

void(*PL_unlockhook)(struct sv *) = &Perl_sv_nounlocking;

extern void Perl_sv_nounlocking(struct sv *);

_INT32(*PL_threadhook)(void) = &Perl_nothreadhook;

extern _INT32 Perl_nothreadhook(void);

_INT32(*PL_runops_std)(void) = &Perl_runops_standard;

_INT32(*PL_runops_dbg)(void) = &Perl_runops_debug;

extern _INT32 Perl_runops_debug(void);

_UINT64 PL_hash_seed;

_INT8 PL_hash_seed_set;

_UINT64 PL_rehash_seed;

_INT8 PL_rehash_seed_set;

_INT32 PL_fdscript = -1;

_INT32 PL_suidscript = -1;

struct sv ** PL_stack_sp;

struct op * PL_op;

struct sv ** PL_curpad;

struct sv ** PL_stack_base;

struct sv ** PL_stack_max;

_INT32 * PL_scopestack;

_INT32 PL_scopestack_ix;

_INT32 PL_scopestack_max;

union any * PL_savestack;

_INT32 PL_savestack_ix;

_INT32 PL_savestack_max;

struct sv ** PL_tmps_stack;

_INT32 PL_tmps_ix = -1;

_INT32 PL_tmps_floor = -1;

_INT32 PL_tmps_max;

_INT32 * PL_markstack;

_INT32 * PL_markstack_ptr;

_INT32 * PL_markstack_max;

struct op ** PL_retstack;

_INT32 PL_retstack_ix;

_INT32 PL_retstack_max;

struct sv * PL_Sv;

struct xpv * PL_Xpv;

_UINT64 PL_na;

struct stat_w2c_0 PL_statbuf;

struct stat_w2c_0 PL_statcache;

struct gv * PL_statgv;

struct sv * PL_statname;

_INT8 PL_tainted;

struct pmop * PL_curpm;

struct sv * PL_nrs;

struct sv * PL_rs;

struct gv * PL_last_in_gv;

struct sv * PL_ofs_sv;

struct gv * PL_defoutgv;

_INT8 * PL_chopset = " \n-";

struct sv * PL_formtarget;

struct sv * PL_bodytarget;

struct sv * PL_toptarget;

struct hv * PL_defstash;

struct hv * PL_curstash;

struct op * PL_restartop;

struct cop * volatile PL_curcop = &PL_compiling;

volatile _INT32 PL_in_eval;

_INT32 PL_delaymagic;

_INT8 PL_dirty;

_INT32 PL_localizing;

struct av * PL_curstack;

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
          union anonymous_w2c_76 {
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
        union anonymous_w2c_76 blk_u;
      };
      union anonymous_w2c_75 {
      struct block cx_blk;
      struct subst cx_subst;
    };
    struct context {
    _UINT32 cx_type;
    union anonymous_w2c_75 cx_u;
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
struct stackinfo * PL_curstackinfo;

struct av * PL_mainstack;

struct anonymous_w2c_77 {
      _UINT64 __val[16LL];
    };
    struct __jmp_buf_tag {
    _INT64 __jmpbuf[8LL];
    _INT32 __mask_was_saved;
    struct anonymous_w2c_77 __saved_mask;
  };
  struct jmpenv {
  struct __jmp_buf_tag je_buf[1LL];
  struct jmpenv * je_prev;
  _INT32 je_ret;
  _INT8 je_mustcatch;
};
struct jmpenv * PL_top_env;

struct jmpenv PL_start_env;

struct sv * PL_errors;

struct sv * PL_av_fetch_sv;

struct sv * PL_hv_fetch_sv;

struct he * PL_hv_fetch_ent_mh;

_INT32 PL_modcount;

struct op * PL_lastgotoprobe;

_INT32 PL_dumpindent = 4;

struct op * PL_sortcop;

struct hv * PL_sortstash;

struct gv * PL_firstgv;

struct gv * PL_secondgv;

_INT32 PL_sortcxix;

_INT8 * PL_efloatbuf;

_UINT64 PL_efloatsize;

_INT32 * PL_screamfirst;

_INT32 * PL_screamnext;

_INT32 PL_maxscream = -1;

struct sv * PL_lastscream;

struct regnode PL_regdummy;

_INT8 * PL_regcomp_parse;

_INT8 * PL_regxend;

struct regnode * PL_regcode;

_INT32 PL_regnaughty;

_INT32 PL_regsawback;

_INT8 * PL_regprecomp;

_INT32 PL_regnpar;

_INT32 PL_regsize;

_UINT32 PL_regflags;

_UINT32 PL_regseen;

_INT32 PL_seen_zerolen;

_INT32 PL_seen_evals;

struct regexp * PL_regcomp_rx;

_INT32 PL_extralen;

_INT32 PL_colorset;

_INT8 * PL_colors[6LL];

_INT32 PL_reg_whilem_seen;

_INT8 * PL_reginput;

_INT8 * PL_regbol;

_INT8 * PL_regeol;

_INT32 * PL_regstartp;

_INT32 * PL_regendp;

_UINT32 * PL_reglastparen;

_UINT32 * PL_reglastcloseparen;

_INT8 * PL_regtill;

_INT8 PL_regcompat1;

_INT8 ** PL_reg_start_tmp;

_UINT32 PL_reg_start_tmpl;

struct reg_data * PL_regdata;

_INT8 * PL_bostr;

_UINT32 PL_reg_flags;

_INT32 PL_reg_eval_set;

_INT32 PL_regnarrate;

struct regnode * PL_regprogram;

_INT32 PL_regindent;

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
struct curcur * PL_regcc;

struct re_cc_state;
struct re_cc_state * PL_reg_call_cc;

struct regexp * PL_reg_re;

_INT8 * PL_reg_ganch;

struct sv * PL_reg_sv;

struct magic * PL_reg_magic;

_INT32 PL_reg_oldpos;

struct pmop * PL_reg_oldcurpm;

struct pmop * PL_reg_curpm;

_INT8 * PL_reg_oldsaved;

_UINT64 PL_reg_oldsavedlen;

_INT32 PL_reg_maxiter;

_INT32 PL_reg_leftiter;

_INT8 * PL_reg_poscache;

_UINT64 PL_reg_poscache_size;

void(*PL_peepp)(struct op *) = &Perl_peep;

extern void Perl_peep(struct op *);

struct regexp * (*PL_regcompp)(_INT8 *, _INT8 *, struct pmop *) = &Perl_pregcomp;

extern struct regexp * Perl_pregcomp(_INT8 *, _INT8 *, struct pmop *);

_INT32(*PL_regexecp)(struct regexp *, _INT8 *, _INT8 *, _INT8 *, _INT32, struct sv *, void *, _UINT32) = &Perl_regexec_flags;

extern _INT32 Perl_regexec_flags(struct regexp *, _INT8 *, _INT8 *, _INT8 *, _INT32, struct sv *, void *, _UINT32);

struct re_scream_pos_data_s;
_INT8 * (*PL_regint_start)(struct regexp *, struct sv *, _INT8 *, _INT8 *, _UINT32, struct re_scream_pos_data_s *) = &Perl_re_intuit_start;

extern _INT8 * Perl_re_intuit_start(struct regexp *, struct sv *, _INT8 *, _INT8 *, _UINT32, struct re_scream_pos_data_s *);

struct sv * (*PL_regint_string)(struct regexp *) = &Perl_re_intuit_string;

extern struct sv * Perl_re_intuit_string(struct regexp *);

void(*PL_regfree)(struct regexp *) = &Perl_pregfree;

extern void Perl_pregfree(struct regexp *);

_INT32 PL_reginterp_cnt;

_INT8 * PL_reg_starttry;

_INT8 ** PL_watchaddr;

_INT8 * PL_watchok;

_INT8 PL_reg_match_utf8;

struct av * PL_comppad;

struct interpreter * PL_curinterp;

const _INT8 * PL_Yes = "1";

const _INT8 * PL_No = "";

const _INT8 * PL_hexdigit = "0123456789abcdef0123456789ABCDEF";

const _INT8 * PL_patleave = "\\.^$@dDwWsSbB+*?|()-nrtfeaxc0123456789[{]}";

_INT8 PL_do_undump;

_INT8 * PL_sh_path = "/bin/sh";

void(*PL_sigfpe_saved)(_INT32);

struct sv PL_sv_placeholder;

void(*PL_csighandlerp)(_INT32) = &Perl_csighandler;

extern void Perl_csighandler(_INT32);

_INT32 PL_use_safe_putenv = 1;

struct mgvtbl PL_vtbl_sv = {{&Perl_magic_get, &Perl_magic_set, &Perl_magic_len, 0LL, 0LL, }};

extern _INT32 Perl_magic_get(struct sv *, struct magic *);

extern _INT32 Perl_magic_set(struct sv *, struct magic *);

extern _UINT32 Perl_magic_len(struct sv *, struct magic *);

struct mgvtbl PL_vtbl_env = {{0LL, &Perl_magic_set_all_env, 0LL, &Perl_magic_clear_all_env, 0LL, }};

extern _INT32 Perl_magic_set_all_env(struct sv *, struct magic *);

extern _INT32 Perl_magic_clear_all_env(struct sv *, struct magic *);

struct mgvtbl PL_vtbl_envelem = {{0LL, &Perl_magic_setenv, 0LL, &Perl_magic_clearenv, 0LL, }};

extern _INT32 Perl_magic_setenv(struct sv *, struct magic *);

extern _INT32 Perl_magic_clearenv(struct sv *, struct magic *);

struct mgvtbl PL_vtbl_sig = {{0LL, 0LL, 0LL, 0LL, 0LL, }};

struct mgvtbl PL_vtbl_sigelem = {{&Perl_magic_getsig, &Perl_magic_setsig, 0LL, &Perl_magic_clearsig, 0LL, }};

extern _INT32 Perl_magic_getsig(struct sv *, struct magic *);

extern _INT32 Perl_magic_setsig(struct sv *, struct magic *);

extern _INT32 Perl_magic_clearsig(struct sv *, struct magic *);

struct mgvtbl PL_vtbl_pack = {{0LL, 0LL, &Perl_magic_sizepack, &Perl_magic_wipepack, 0LL, }};

extern _UINT32 Perl_magic_sizepack(struct sv *, struct magic *);

extern _INT32 Perl_magic_wipepack(struct sv *, struct magic *);

struct mgvtbl PL_vtbl_packelem = {{&Perl_magic_getpack, &Perl_magic_setpack, 0LL, &Perl_magic_clearpack, 0LL, }};

extern _INT32 Perl_magic_getpack(struct sv *, struct magic *);

extern _INT32 Perl_magic_setpack(struct sv *, struct magic *);

extern _INT32 Perl_magic_clearpack(struct sv *, struct magic *);

struct mgvtbl PL_vtbl_dbline = {{0LL, &Perl_magic_setdbline, 0LL, 0LL, 0LL, }};

extern _INT32 Perl_magic_setdbline(struct sv *, struct magic *);

struct mgvtbl PL_vtbl_isa = {{0LL, &Perl_magic_setisa, 0LL, &Perl_magic_setisa, 0LL, }};

extern _INT32 Perl_magic_setisa(struct sv *, struct magic *);

struct mgvtbl PL_vtbl_isaelem = {{0LL, &Perl_magic_setisa, 0LL, 0LL, 0LL, }};

struct mgvtbl PL_vtbl_arylen = {{&Perl_magic_getarylen, &Perl_magic_setarylen, 0LL, 0LL, 0LL, }};

extern _INT32 Perl_magic_getarylen(struct sv *, struct magic *);

extern _INT32 Perl_magic_setarylen(struct sv *, struct magic *);

struct mgvtbl PL_vtbl_glob = {{&Perl_magic_getglob, &Perl_magic_setglob, 0LL, 0LL, 0LL, }};

extern _INT32 Perl_magic_getglob(struct sv *, struct magic *);

extern _INT32 Perl_magic_setglob(struct sv *, struct magic *);

struct mgvtbl PL_vtbl_mglob = {{0LL, &Perl_magic_setmglob, 0LL, 0LL, 0LL, }};

extern _INT32 Perl_magic_setmglob(struct sv *, struct magic *);

struct mgvtbl PL_vtbl_nkeys = {{&Perl_magic_getnkeys, &Perl_magic_setnkeys, 0LL, 0LL, 0LL, }};

extern _INT32 Perl_magic_getnkeys(struct sv *, struct magic *);

extern _INT32 Perl_magic_setnkeys(struct sv *, struct magic *);

struct mgvtbl PL_vtbl_taint = {{&Perl_magic_gettaint, &Perl_magic_settaint, 0LL, 0LL, 0LL, }};

extern _INT32 Perl_magic_gettaint(struct sv *, struct magic *);

extern _INT32 Perl_magic_settaint(struct sv *, struct magic *);

struct mgvtbl PL_vtbl_substr = {{&Perl_magic_getsubstr, &Perl_magic_setsubstr, 0LL, 0LL, 0LL, }};

extern _INT32 Perl_magic_getsubstr(struct sv *, struct magic *);

extern _INT32 Perl_magic_setsubstr(struct sv *, struct magic *);

struct mgvtbl PL_vtbl_vec = {{&Perl_magic_getvec, &Perl_magic_setvec, 0LL, 0LL, 0LL, }};

extern _INT32 Perl_magic_getvec(struct sv *, struct magic *);

extern _INT32 Perl_magic_setvec(struct sv *, struct magic *);

struct mgvtbl PL_vtbl_pos = {{&Perl_magic_getpos, &Perl_magic_setpos, 0LL, 0LL, 0LL, }};

extern _INT32 Perl_magic_getpos(struct sv *, struct magic *);

extern _INT32 Perl_magic_setpos(struct sv *, struct magic *);

struct mgvtbl PL_vtbl_bm = {{0LL, &Perl_magic_setbm, 0LL, 0LL, 0LL, }};

extern _INT32 Perl_magic_setbm(struct sv *, struct magic *);

struct mgvtbl PL_vtbl_fm = {{0LL, &Perl_magic_setfm, 0LL, 0LL, 0LL, }};

extern _INT32 Perl_magic_setfm(struct sv *, struct magic *);

struct mgvtbl PL_vtbl_uvar = {{&Perl_magic_getuvar, &Perl_magic_setuvar, 0LL, 0LL, 0LL, }};

extern _INT32 Perl_magic_getuvar(struct sv *, struct magic *);

extern _INT32 Perl_magic_setuvar(struct sv *, struct magic *);

struct mgvtbl PL_vtbl_defelem = {{&Perl_magic_getdefelem, &Perl_magic_setdefelem, 0LL, 0LL, 0LL, }};

extern _INT32 Perl_magic_getdefelem(struct sv *, struct magic *);

extern _INT32 Perl_magic_setdefelem(struct sv *, struct magic *);

struct mgvtbl PL_vtbl_regexp = {{0LL, &Perl_magic_setregexp, 0LL, 0LL, &Perl_magic_freeregexp, }};

extern _INT32 Perl_magic_setregexp(struct sv *, struct magic *);

extern _INT32 Perl_magic_freeregexp(struct sv *, struct magic *);

struct mgvtbl PL_vtbl_regdata = {{0LL, 0LL, &Perl_magic_regdata_cnt, 0LL, 0LL, }};

extern _UINT32 Perl_magic_regdata_cnt(struct sv *, struct magic *);

struct mgvtbl PL_vtbl_regdatum = {{&Perl_magic_regdatum_get, &Perl_magic_regdatum_set, 0LL, 0LL, 0LL, }};

extern _INT32 Perl_magic_regdatum_get(struct sv *, struct magic *);

extern _INT32 Perl_magic_regdatum_set(struct sv *, struct magic *);

struct mgvtbl PL_vtbl_amagic = {{0LL, &Perl_magic_setamagic, 0LL, 0LL, &Perl_magic_setamagic, }};

extern _INT32 Perl_magic_setamagic(struct sv *, struct magic *);

struct mgvtbl PL_vtbl_amagicelem = {{0LL, &Perl_magic_setamagic, 0LL, 0LL, &Perl_magic_setamagic, }};

struct mgvtbl PL_vtbl_backref = {{0LL, 0LL, 0LL, 0LL, &Perl_magic_killbackrefs, }};

extern _INT32 Perl_magic_killbackrefs(struct sv *, struct magic *);

struct mgvtbl PL_vtbl_ovrld = {{0LL, 0LL, 0LL, 0LL, &Perl_magic_freeovrld, }};

extern _INT32 Perl_magic_freeovrld(struct sv *, struct magic *);

struct mgvtbl PL_vtbl_utf8 = {{0LL, &Perl_magic_setutf8, 0LL, 0LL, 0LL, }};

extern _INT32 Perl_magic_setutf8(struct sv *, struct magic *);

const _INT8 * PL_AMG_names[66LL] = {"()", "(abs", "(bool", "(nomethod", "(\"\"", "(0+", "(+", "(+=", "(-", "(-=", "(*", "(*=", "(/", "(/=", "(%", "(%=", "(**", "(**=", "(<<", "(<<=", "(>>", "(>>=", "(&", "(&=", "(|", "(|=", "(^", "(^=", "(<", "(<=", "(>", "(>=", "(==", "(!=", "(<=>", "(cmp", "(lt", "(le", "(gt", "(ge", "(eq", "(ne", "(!", "(~", "(++", "(--", "(atan2", "(cos", "(sin", "(exp", "(log", "(sqrt", "(x", "(x=", "(.", "(.=", "(=", "(neg", "(${}", "(@{}", "(%{}", "(*{}", "(&{}", "(<>", "(int", "DESTROY"};

struct cop;

