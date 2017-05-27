typedef unsigned long int size_t;
typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;
typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;
typedef signed long int __int64_t;
typedef unsigned long int __uint64_t;
typedef long int __quad_t;
typedef unsigned long int __u_quad_t;
typedef unsigned long int __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long int __ino_t;
typedef unsigned long int __ino64_t;
typedef unsigned int __mode_t;
typedef unsigned long int __nlink_t;
typedef long int __off_t;
typedef long int __off64_t;
typedef int __pid_t;
struct __anon_type___fsid_t {
  int __val[2];
} ;
typedef struct __anon_type___fsid_t __fsid_t;
typedef long int __clock_t;
typedef unsigned long int __rlim_t;
typedef unsigned long int __rlim64_t;
typedef unsigned int __id_t;
typedef long int __time_t;
typedef unsigned int __useconds_t;
typedef long int __suseconds_t;
typedef int __daddr_t;
typedef int __key_t;
typedef int __clockid_t;
typedef void *__timer_t;
typedef long int __blksize_t;
typedef long int __blkcnt_t;
typedef long int __blkcnt64_t;
typedef unsigned long int __fsblkcnt_t;
typedef unsigned long int __fsblkcnt64_t;
typedef unsigned long int __fsfilcnt_t;
typedef unsigned long int __fsfilcnt64_t;
typedef long int __fsword_t;
typedef long int __ssize_t;
typedef long int __syscall_slong_t;
typedef unsigned long int __syscall_ulong_t;
typedef __off64_t __loff_t;
typedef __quad_t *__qaddr_t;
typedef char *__caddr_t;
typedef long int __intptr_t;
typedef unsigned int __socklen_t;
struct _IO_FILE ;
typedef struct _IO_FILE FILE;
typedef struct _IO_FILE __FILE;
union __anon_type_0 {
  unsigned int __wch;
  char __wchb[4];
} ;
struct __anon_type___mbstate_t {
  int __count;
  union __anon_type_0 __value;
} ;
typedef struct __anon_type___mbstate_t __mbstate_t;
struct __anon_type__G_fpos_t {
  __off_t __pos;
  __mbstate_t __state;
} ;
typedef struct __anon_type__G_fpos_t _G_fpos_t;
struct __anon_type__G_fpos64_t {
  __off64_t __pos;
  __mbstate_t __state;
} ;
typedef struct __anon_type__G_fpos_t _G_fpos64_t;
typedef __builtin_va_list __gnuc_va_list;
struct _IO_jump_t ;
typedef void _IO_lock_t;
struct _IO_marker {
  struct _IO_marker *_next;
  struct _IO_FILE *_sbuf;
  int _pos;
} ;
enum __codecvt_result {
  __codecvt_ok = 0,
  __codecvt_partial = 1,
  __codecvt_error = 2,
  __codecvt_noconv = 3
} ;
struct _IO_FILE {
  int _flags;
  char *_IO_read_ptr;
  char *_IO_read_end;
  char *_IO_read_base;
  char *_IO_write_base;
  char *_IO_write_ptr;
  char *_IO_write_end;
  char *_IO_buf_base;
  char *_IO_buf_end;
  char *_IO_save_base;
  char *_IO_backup_base;
  char *_IO_save_end;
  struct _IO_marker *_markers;
  struct _IO_FILE *_chain;
  int _fileno;
  int _flags2;
  __off_t _old_offset;
  unsigned short _cur_column;
  signed char _vtable_offset;
  char _shortbuf[1];
  _IO_lock_t *_lock;
  __off64_t _offset;
  void *__pad1;
  void *__pad2;
  void *__pad3;
  void *__pad4;
  size_t __pad5;
  int _mode;
  char _unused2[40];
} ;
typedef struct _IO_FILE _IO_FILE;
struct _IO_FILE_plus ;
extern struct _IO_FILE_plus _IO_2_1_stdin_;
extern struct _IO_FILE_plus _IO_2_1_stdout_;
extern struct _IO_FILE_plus _IO_2_1_stderr_;
typedef __ssize_t  __io_read_fn(void *__cookie, char *__buf, size_t __nbytes);
typedef __ssize_t  __io_write_fn(void *__cookie, const char *__buf, size_t __n);
typedef int __io_seek_fn(void *__cookie, __off64_t *__pos, int __w);
typedef int __io_close_fn(void *__cookie);
int __underflow(_IO_FILE *);
int __uflow(_IO_FILE *);
int __overflow(_IO_FILE *, int);
int _IO_getc(_IO_FILE *__fp);
int _IO_putc(int __c, _IO_FILE *__fp);
int _IO_feof(_IO_FILE *__fp);
int _IO_ferror(_IO_FILE *__fp);
int _IO_peekc_locked(_IO_FILE *__fp);
void _IO_flockfile(_IO_FILE *);
void _IO_funlockfile(_IO_FILE *);
int _IO_ftrylockfile(_IO_FILE *);
int _IO_vfscanf(_IO_FILE *, const char *, __gnuc_va_list , int *);
int _IO_vfprintf(_IO_FILE *, const char *, __gnuc_va_list );
__ssize_t  _IO_padn(_IO_FILE *, int, __ssize_t );
size_t  _IO_sgetn(_IO_FILE *, void *, size_t );
__off64_t  _IO_seekoff(_IO_FILE *, __off64_t , int, int);
__off64_t  _IO_seekpos(_IO_FILE *, __off64_t , int);
void _IO_free_backup_area(_IO_FILE *);
typedef __gnuc_va_list va_list;
typedef __off_t off_t;
typedef __ssize_t ssize_t;
typedef _G_fpos_t fpos_t;
extern struct _IO_FILE *stdin;
extern struct _IO_FILE *stdout;
extern struct _IO_FILE *stderr;
int remove(const char *__filename);
int rename(const char *__old, const char *__new);
int renameat(int __oldfd, const char *__old, int __newfd, const char *__new);
FILE * tmpfile();
char * tmpnam(char *__s);
char * tmpnam_r(char *__s);
char * tempnam(const char *__dir, const char *__pfx);
int fclose(FILE *__stream);
int fflush(FILE *__stream);
int fflush_unlocked(FILE *__stream);
FILE * fopen(const char *__filename, const char *__modes);
FILE * freopen(const char *__filename, const char *__modes, FILE *__stream);
FILE * fdopen(int __fd, const char *__modes);
FILE * fmemopen(void *__s, size_t __len, const char *__modes);
FILE * open_memstream(char **__bufloc, size_t *__sizeloc);
void setbuf(FILE *__stream, char *__buf);
int setvbuf(FILE *__stream, char *__buf, int __modes, size_t __n);
void setbuffer(FILE *__stream, char *__buf, size_t __size);
void setlinebuf(FILE *__stream);
int fprintf(FILE *__stream, const char *__format, ...);
int printf(const char *__format, ...);
int sprintf(char *__s, const char *__format, ...);
int vfprintf(FILE *__s, const char *__format, __gnuc_va_list __arg);
int vprintf(const char *__format, __gnuc_va_list __arg);
int vsprintf(char *__s, const char *__format, __gnuc_va_list __arg);
int snprintf(char *__s, size_t __maxlen, const char *__format, ...);
int vsnprintf(char *__s, size_t __maxlen, const char *__format, __gnuc_va_list __arg);
int vdprintf(int __fd, const char *__fmt, __gnuc_va_list __arg);
int dprintf(int __fd, const char *__fmt, ...);
int fscanf(FILE *__stream, const char *__format, ...);
int scanf(const char *__format, ...);
int sscanf(const char *__s, const char *__format, ...);
int vfscanf(FILE *__s, const char *__format, __gnuc_va_list __arg);
int vscanf(const char *__format, __gnuc_va_list __arg);
int vsscanf(const char *__s, const char *__format, __gnuc_va_list __arg);
int fgetc(FILE *__stream);
int getc(FILE *__stream);
int getchar();
int getc_unlocked(FILE *__stream);
int getchar_unlocked();
int fgetc_unlocked(FILE *__stream);
int fputc(int __c, FILE *__stream);
int putc(int __c, FILE *__stream);
int putchar(int __c);
int fputc_unlocked(int __c, FILE *__stream);
int putc_unlocked(int __c, FILE *__stream);
int putchar_unlocked(int __c);
int getw(FILE *__stream);
int putw(int __w, FILE *__stream);
char * fgets(char *__s, int __n, FILE *__stream);
__ssize_t  __getdelim(char **__lineptr, size_t *__n, int __delimiter, FILE *__stream);
__ssize_t  getdelim(char **__lineptr, size_t *__n, int __delimiter, FILE *__stream);
__ssize_t  getline(char **__lineptr, size_t *__n, FILE *__stream);
int fputs(const char *__s, FILE *__stream);
int puts(const char *__s);
int ungetc(int __c, FILE *__stream);
size_t  fread(void *__ptr, size_t __size, size_t __n, FILE *__stream);
size_t  fwrite(const void *__ptr, size_t __size, size_t __n, FILE *__s);
size_t  fread_unlocked(void *__ptr, size_t __size, size_t __n, FILE *__stream);
size_t  fwrite_unlocked(const void *__ptr, size_t __size, size_t __n, FILE *__stream);
int fseek(FILE *__stream, long int __off, int __whence);
long int ftell(FILE *__stream);
void rewind(FILE *__stream);
int fseeko(FILE *__stream, __off_t __off, int __whence);
__off_t  ftello(FILE *__stream);
int fgetpos(FILE *__stream, fpos_t *__pos);
int fsetpos(FILE *__stream, fpos_t *__pos);
void clearerr(FILE *__stream);
int feof(FILE *__stream);
int ferror(FILE *__stream);
void clearerr_unlocked(FILE *__stream);
int feof_unlocked(FILE *__stream);
int ferror_unlocked(FILE *__stream);
void perror(const char *__s);
extern int sys_nerr;
extern const const char *sys_errlist[];
int fileno(FILE *__stream);
int fileno_unlocked(FILE *__stream);
FILE * popen(const char *__command, const char *__modes);
int pclose(FILE *__stream);
char * ctermid(char *__s);
void flockfile(FILE *__stream);
int ftrylockfile(FILE *__stream);
void funlockfile(FILE *__stream);
void __assert_fail(const char *__assertion, const char *__file, unsigned int __line, const char *__function);
void __assert_perror_fail(int __errnum, const char *__file, unsigned int __line, const char *__function);
void __assert(const char *__assertion, const char *__file, int __line);
int A = 0;
int B = 1;
int C = 2;
int X = 3;
struct state_elements_controller {
  _Bool ack;
  unsigned char state;
  _Bool pass_token;
} ;
struct state_elements_controller scontroller = {  };
void controller_initial();
void controller(_Bool clk, _Bool req, _Bool *ack, unsigned char sel, _Bool *pass_token, unsigned char id);
struct state_elements_arbiter {
  unsigned char state;
} ;
struct state_elements_arbiter sarbiter = {  };
void arbiter_initial();
void arbiter(_Bool clk, unsigned char *sel, _Bool active);
struct state_elements_client {
  unsigned char state;
  _Bool req;
} ;
struct state_elements_client sclient = {  };
void client_initial();
void client(_Bool clk, _Bool *req, _Bool ack);
void main();
extern void __VERIFIER_error(void);
void main_0();
void client_initial_1();
void controller_initial_2();
void arbiter_initial_3();
void client_4(_Bool clk, _Bool *req, _Bool ack);
void client_5(_Bool clk, _Bool *req, _Bool ack);
void client_6(_Bool clk, _Bool *req, _Bool ack);
void controller_7(_Bool clk, _Bool req, _Bool *ack, unsigned char sel, _Bool *pass_token, unsigned char id);
void controller_8(_Bool clk, _Bool req, _Bool *ack, unsigned char sel, _Bool *pass_token, unsigned char id);
void controller_9(_Bool clk, _Bool req, _Bool *ack, unsigned char sel, _Bool *pass_token, unsigned char id);
void arbiter_10(_Bool clk, unsigned char *sel, _Bool active);
void main_0() {
  _Bool clk;
  _Bool ackA;
  _Bool ackB;
  _Bool ackC;
  unsigned char sel;
  _Bool active;
  _Bool reqA;
  _Bool reqB;
  _Bool reqC;
  _Bool pass_tokenA;
  _Bool pass_tokenB;
  _Bool pass_tokenC;
  client_initial_1();
  controller_initial_2();
  arbiter_initial_3();
  client_4(clk, &reqA, ackA);
  client_5(clk, &reqB, ackB);
  client_6(clk, &reqC, ackC);
  controller_7(clk, reqA, &ackA, sel, &pass_tokenA, A);
  controller_8(clk, reqB, &ackB, sel, &pass_tokenB, B);
  controller_9(clk, reqC, &ackC, sel, &pass_tokenC, C);
  arbiter_10(clk, &sel, active);
  int __CPAchecker_TMP_0;
  __CPROVER_assume(pass_tokenA == 0);
  __CPROVER_assume(pass_tokenB == 0);
  __CPROVER_assume(pass_tokenC == 0);
  __CPAchecker_TMP_0 = 0;
  active = __CPAchecker_TMP_0;
  void __CPAchecker_TMP_2;
  __CPROVER_assume(!(ackA == 1));
  __CPROVER_assume(!(ackB == 1));
  __CPROVER_assume(!(ackC == 1));
  __VERIFIER_error(); // target state
  __assert_fail("(ackA == 1 && ackB == 1 || ackB == 1 && ackC == 1 || ackC == 1 && ackA ==1)", "cpa.c", 156, "__PRETTY_FUNCTION__");
}

void client_initial_1() {
  sclient.state = 0;
  sclient.req = 0;
}

void controller_initial_2() {
  scontroller.state = 0;
  scontroller.ack = 0;
  scontroller.pass_token = 1;
}

void arbiter_initial_3() {
  sarbiter.state = A;
}

void client_4(_Bool clk, _Bool *req, _Bool ack) {
  _Bool rand_choice = 0;
  __CPROVER_assume((sclient.state) == 0);
  __CPROVER_assume(rand_choice == 0);
  *req = sclient.req;
}

void client_5(_Bool clk, _Bool *req, _Bool ack) {
  _Bool rand_choice = 0;
  __CPROVER_assume((sclient.state) == 0);
  __CPROVER_assume(rand_choice == 0);
  *req = sclient.req;
}

void client_6(_Bool clk, _Bool *req, _Bool ack) {
  _Bool rand_choice = 0;
  __CPROVER_assume((sclient.state) == 0);
  __CPROVER_assume(rand_choice == 0);
  *req = sclient.req;
}

void controller_7(_Bool clk, _Bool req, _Bool *ack, unsigned char sel, _Bool *pass_token, unsigned char id) {
  _Bool is_selected;
  is_selected = (sel & (3 == id)) & 3;
  __CPROVER_assume((scontroller.state) == 0);
  __CPROVER_assume(is_selected == 0);
  scontroller.pass_token = 0;
  *ack = scontroller.ack;
  *pass_token = scontroller.pass_token;
}

void controller_8(_Bool clk, _Bool req, _Bool *ack, unsigned char sel, _Bool *pass_token, unsigned char id) {
  _Bool is_selected;
  is_selected = (sel & (3 == id)) & 3;
  __CPROVER_assume((scontroller.state) == 0);
  __CPROVER_assume(is_selected == 0);
  scontroller.pass_token = 0;
  *ack = scontroller.ack;
  *pass_token = scontroller.pass_token;
}

void controller_9(_Bool clk, _Bool req, _Bool *ack, unsigned char sel, _Bool *pass_token, unsigned char id) {
  _Bool is_selected;
  is_selected = (sel & (3 == id)) & 3;
  __CPROVER_assume((scontroller.state) == 0);
  __CPROVER_assume(is_selected == 0);
  scontroller.pass_token = 0;
  *ack = scontroller.ack;
  *pass_token = scontroller.pass_token;
}

void arbiter_10(_Bool clk, unsigned char *sel, _Bool active) {
  __CPROVER_assume(active == 0);
  int __CPAchecker_TMP_0;
  __CPROVER_assume(active == 0);
  __CPAchecker_TMP_0 = X;
  *sel = __CPAchecker_TMP_0;
}
