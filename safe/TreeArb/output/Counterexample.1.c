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
int I1 = 0;
int I2 = 1;
int R1 = 2;
int R2 = 3;
int A1 = 4;
int A2 = 5;
struct state_elements_cell {
  _Bool state;
} ;
void initial_cell(struct state_elements_cell *scell);
void cell(struct state_elements_cell *scell, _Bool clk, _Bool ack0, _Bool req1, _Bool req2, _Bool *req0, _Bool *ack1, _Bool *ack2);
struct state_elements_proc {
  _Bool state;
} ;
void initial_proc(struct state_elements_cell *sproc);
void proc(struct state_elements_proc *sproc, _Bool clk, _Bool ack, _Bool choice, _Bool *req);
void main();
extern void __VERIFIER_error(void);
void main_0();
void initial_cell_1(struct state_elements_cell *scell);
void initial_cell_2(struct state_elements_cell *scell);
void initial_cell_3(struct state_elements_cell *scell);
void initial_cell_4(struct state_elements_cell *scell);
void initial_cell_5(struct state_elements_cell *scell);
void initial_cell_6(struct state_elements_cell *scell);
void initial_cell_7(struct state_elements_cell *scell);
void initial_proc_8(struct state_elements_cell *sproc);
void initial_proc_9(struct state_elements_cell *sproc);
void initial_proc_10(struct state_elements_cell *sproc);
void initial_proc_11(struct state_elements_cell *sproc);
void initial_proc_12(struct state_elements_cell *sproc);
void initial_proc_13(struct state_elements_cell *sproc);
void initial_proc_14(struct state_elements_cell *sproc);
void initial_proc_15(struct state_elements_cell *sproc);
void cell_16(struct state_elements_cell *scell, _Bool clk, _Bool ack0, _Bool req1, _Bool req2, _Bool *req0, _Bool *ack1, _Bool *ack2);
void cell_17(struct state_elements_cell *scell, _Bool clk, _Bool ack0, _Bool req1, _Bool req2, _Bool *req0, _Bool *ack1, _Bool *ack2);
void cell_18(struct state_elements_cell *scell, _Bool clk, _Bool ack0, _Bool req1, _Bool req2, _Bool *req0, _Bool *ack1, _Bool *ack2);
void cell_19(struct state_elements_cell *scell, _Bool clk, _Bool ack0, _Bool req1, _Bool req2, _Bool *req0, _Bool *ack1, _Bool *ack2);
void cell_20(struct state_elements_cell *scell, _Bool clk, _Bool ack0, _Bool req1, _Bool req2, _Bool *req0, _Bool *ack1, _Bool *ack2);
void cell_21(struct state_elements_cell *scell, _Bool clk, _Bool ack0, _Bool req1, _Bool req2, _Bool *req0, _Bool *ack1, _Bool *ack2);
void cell_22(struct state_elements_cell *scell, _Bool clk, _Bool ack0, _Bool req1, _Bool req2, _Bool *req0, _Bool *ack1, _Bool *ack2);
void proc_23(struct state_elements_proc *sproc, _Bool clk, _Bool ack, _Bool choice, _Bool *req);
void proc_24(struct state_elements_proc *sproc, _Bool clk, _Bool ack, _Bool choice, _Bool *req);
void proc_25(struct state_elements_proc *sproc, _Bool clk, _Bool ack, _Bool choice, _Bool *req);
void proc_26(struct state_elements_proc *sproc, _Bool clk, _Bool ack, _Bool choice, _Bool *req);
void proc_27(struct state_elements_proc *sproc, _Bool clk, _Bool ack, _Bool choice, _Bool *req);
void proc_28(struct state_elements_proc *sproc, _Bool clk, _Bool ack, _Bool choice, _Bool *req);
void proc_29(struct state_elements_proc *sproc, _Bool clk, _Bool ack, _Bool choice, _Bool *req);
void proc_30(struct state_elements_proc *sproc, _Bool clk, _Bool ack, _Bool choice, _Bool *req);
void main_0() {
  _Bool clk;
  _Bool a3;
  _Bool a2[2];
  _Bool a1[4];
  _Bool a0[8];
  _Bool r3;
  _Bool r2[2];
  _Bool r1[4];
  _Bool r0[8];
  _Bool choice[8];
  struct state_elements_cell c0;
  struct state_elements_cell c1;
  struct state_elements_cell c2;
  struct state_elements_cell c3;
  struct state_elements_cell c4;
  struct state_elements_cell c5;
  struct state_elements_cell c10;
  initial_cell_1(&c10);
  initial_cell_2(&c0);
  initial_cell_3(&c1);
  initial_cell_4(&c2);
  initial_cell_5(&c3);
  initial_cell_6(&c4);
  initial_cell_7(&c5);
  struct state_elements_proc p0;
  struct state_elements_proc p1;
  struct state_elements_proc p2;
  struct state_elements_proc p3;
  struct state_elements_proc p4;
  struct state_elements_proc p5;
  struct state_elements_proc p6;
  struct state_elements_proc p7;
  initial_proc_8(&p0);
  initial_proc_9(&p1);
  initial_proc_10(&p2);
  initial_proc_11(&p3);
  initial_proc_12(&p4);
  initial_proc_13(&p5);
  initial_proc_14(&p6);
  initial_proc_15(&p7);
  cell_16(&c10, clk, r2[0], r2[1], a2[0], &(a2[1]), &r3, &a3);
  a3 = r3;
  cell_17(&c0, clk, r1[0], r1[1], a1[0], &(a1[1]), &(r2[0]), &(a2[0]));
  cell_18(&c1, clk, r1[2], r1[3], a1[2], &(a1[3]), &(r2[1]), &(a2[1]));
  cell_19(&c2, clk, r0[0], r0[1], a0[0], &(a0[1]), &(r1[0]), &(a1[0]));
  cell_20(&c3, clk, r0[2], r0[3], a0[2], &(a0[3]), &(r1[1]), &(a1[1]));
  cell_21(&c4, clk, r0[4], r0[5], a0[4], &(a0[5]), &(r1[2]), &(a1[2]));
  cell_22(&c5, clk, r0[6], r0[7], a0[6], &(a0[7]), &(r1[3]), &(a1[3]));
  proc_23(&p0, clk, a0[0], r0[0], &(choice[0]));
  proc_24(&p1, clk, a0[1], r0[1], &(choice[1]));
  proc_25(&p2, clk, a0[2], r0[2], &(choice[2]));
  proc_26(&p3, clk, a0[3], r0[3], &(choice[3]));
  proc_27(&p4, clk, a0[4], r0[4], &(choice[4]));
  proc_28(&p5, clk, a0[5], r0[5], &(choice[5]));
  proc_29(&p6, clk, a0[6], r0[6], &(choice[6]));
  proc_30(&p7, clk, a0[7], r0[7], &(choice[7]));
  void __CPAchecker_TMP_1;
  if (!((p0.state) == 2)) {
    __CPROVER_assume(!((p0.state) == 2));
    if (!((p1.state) == 2)) {
      __CPROVER_assume(!((p1.state) == 2));
      if (!((p2.state) == 2)) {
        __CPROVER_assume(!((p2.state) == 2));
        if ((p3.state) == 2) {
          __CPROVER_assume((p3.state) == 2);
          goto label_1024;
          label_1024: ;
          if (!((p4.state) == 2)) {
            __CPROVER_assume(!((p4.state) == 2));
            if (!((p5.state) == 2)) {
              __CPROVER_assume(!((p5.state) == 2));
              if (!((p6.state) == 2)) {
                __CPROVER_assume(!((p6.state) == 2));
                if (!((p7.state) == 2)) {
                  __CPROVER_assume(!((p7.state) == 2));
                  goto label_1036;
                  label_1036: ;
                  if (!((p0.state) == 2)) {
                    __CPROVER_assume(!((p0.state) == 2));
                    if (!((p1.state) == 2)) {
                      __CPROVER_assume(!((p1.state) == 2));
                      if (!((p4.state) == 2)) {
                        __CPROVER_assume(!((p4.state) == 2));
                        if ((p5.state) == 2) {
                          __CPROVER_assume((p5.state) == 2);
                          goto label_1047;
                          label_1047: ;
                          if (!((p2.state) == 2)) {
                            __CPROVER_assume(!((p2.state) == 2));
                            if (!((p3.state) == 2)) {
                              __CPROVER_assume(!((p3.state) == 2));
                              if (!((p6.state) == 2)) {
                                __CPROVER_assume(!((p6.state) == 2));
                                if (!((p7.state) == 2)) {
                                  __CPROVER_assume(!((p7.state) == 2));
                                  goto label_1060;
                                  label_1060: ;
                                  if (!((p0.state) == 2)) {
                                    __CPROVER_assume(!((p0.state) == 2));
                                    if (!((p2.state) == 2)) {
                                      __CPROVER_assume(!((p2.state) == 2));
                                      if (!((p4.state) == 2)) {
                                        __CPROVER_assume(!((p4.state) == 2));
                                        __CPROVER_assume((p6.state) == 2);
                                        goto label_1071;
                                      }

                                      else if ((p4.state) == 2) {
                                        __CPROVER_assume((p4.state) == 2);
                                        goto label_1071;
                                      }

                                    }

                                    else if ((p2.state) == 2) {
                                      __CPROVER_assume((p2.state) == 2);
                                      goto label_1071;
                                    }

                                  }

                                  else if ((p0.state) == 2) {
                                    __CPROVER_assume((p0.state) == 2);
                                    goto label_1071;
                                  }

                                  label_1071: ;
                                  if (!((p1.state) == 2)) {
                                    __CPROVER_assume(!((p1.state) == 2));
                                    if (!((p3.state) == 2)) {
                                      __CPROVER_assume(!((p3.state) == 2));
                                      if (!((p5.state) == 2)) {
                                        __CPROVER_assume(!((p5.state) == 2));
                                        __CPROVER_assume((p7.state) == 2);
                                        goto label_1083;
                                      }

                                      else if ((p5.state) == 2) {
                                        __CPROVER_assume((p5.state) == 2);
                                        goto label_1083;
                                      }

                                    }

                                    else if ((p3.state) == 2) {
                                      __CPROVER_assume((p3.state) == 2);
                                      goto label_1083;
                                    }

                                  }

                                  else if ((p1.state) == 2) {
                                    __CPROVER_assume((p1.state) == 2);
                                    goto label_1083;
                                  }

                                }

                                else if ((p7.state) == 2) {
                                  __CPROVER_assume((p7.state) == 2);
                                  goto label_1083;
                                }

                              }

                              else if ((p6.state) == 2) {
                                __CPROVER_assume((p6.state) == 2);
                                goto label_1083;
                              }

                            }

                            else if ((p3.state) == 2) {
                              __CPROVER_assume((p3.state) == 2);
                              goto label_1083;
                            }

                          }

                          else if ((p2.state) == 2) {
                            __CPROVER_assume((p2.state) == 2);
                            goto label_1083;
                          }

                        }

                        else if (!((p5.state) == 2)) {
                          __CPROVER_assume(!((p5.state) == 2));
                          goto label_1060;
                        }

                      }

                      else if ((p4.state) == 2) {
                        __CPROVER_assume((p4.state) == 2);
                        goto label_1047;
                      }

                    }

                    else if ((p1.state) == 2) {
                      __CPROVER_assume((p1.state) == 2);
                      goto label_1047;
                    }

                  }

                  else if ((p0.state) == 2) {
                    __CPROVER_assume((p0.state) == 2);
                    goto label_1047;
                  }

                }

                else if ((p7.state) == 2) {
                  __CPROVER_assume((p7.state) == 2);
                  goto label_1083;
                }

              }

              else if ((p6.state) == 2) {
                __CPROVER_assume((p6.state) == 2);
                goto label_1083;
              }

            }

            else if ((p5.state) == 2) {
              __CPROVER_assume((p5.state) == 2);
              goto label_1083;
            }

          }

          else if ((p4.state) == 2) {
            __CPROVER_assume((p4.state) == 2);
            goto label_1083;
          }

        }

        else if (!((p3.state) == 2)) {
          __CPROVER_assume(!((p3.state) == 2));
          goto label_1036;
        }

      }

      else if ((p2.state) == 2) {
        __CPROVER_assume((p2.state) == 2);
        goto label_1024;
      }

    }

    else if ((p1.state) == 2) {
      __CPROVER_assume((p1.state) == 2);
      goto label_1024;
    }

  }

  else if ((p0.state) == 2) {
    __CPROVER_assume((p0.state) == 2);
    goto label_1024;
  }

  label_1083: ;
  __VERIFIER_error(); // target state
  __assert_fail("!((p0.state==2 || p1.state==2 || p2.state==2 || p3.state==2) && (p4.state==2 || p5.state==2 || p6.state==2 || p7.state==2) || (p0.state==2 || p1.state==2 || p4.state==2 || p5.state==2) && (p2.state==2 || p3.state==2 || p6.state==2 || p7.state==2) || (p0.state==2 || p2.state==2 || p4.state==2 || p6.state==2) && (p1.state==2 || p3.state==2 || p5.state==2 || p7.state==2))", "main.c", 161, "__PRETTY_FUNCTION__");
}

void initial_cell_1(struct state_elements_cell *scell) {
  scell->state = I1;
}

void initial_cell_2(struct state_elements_cell *scell) {
  scell->state = I1;
}

void initial_cell_3(struct state_elements_cell *scell) {
  scell->state = I1;
}

void initial_cell_4(struct state_elements_cell *scell) {
  scell->state = I1;
}

void initial_cell_5(struct state_elements_cell *scell) {
  scell->state = I1;
}

void initial_cell_6(struct state_elements_cell *scell) {
  scell->state = I1;
}

void initial_cell_7(struct state_elements_cell *scell) {
  scell->state = I1;
}

void initial_proc_8(struct state_elements_cell *sproc) {
  sproc->state = 0;
}

void initial_proc_9(struct state_elements_cell *sproc) {
  sproc->state = 0;
}

void initial_proc_10(struct state_elements_cell *sproc) {
  sproc->state = 0;
}

void initial_proc_11(struct state_elements_cell *sproc) {
  sproc->state = 0;
}

void initial_proc_12(struct state_elements_cell *sproc) {
  sproc->state = 0;
}

void initial_proc_13(struct state_elements_cell *sproc) {
  sproc->state = 0;
}

void initial_proc_14(struct state_elements_cell *sproc) {
  sproc->state = 0;
}

void initial_proc_15(struct state_elements_cell *sproc) {
  sproc->state = 0;
}

void cell_16(struct state_elements_cell *scell, _Bool clk, _Bool ack0, _Bool req1, _Bool req2, _Bool *req0, _Bool *ack1, _Bool *ack2) {
  if ((scell->state) == I1) {
    __CPROVER_assume((scell->state) == I1);
    if (req1 == 0) {
      __CPROVER_assume(req1 == 0);
      if (req2 == 0) {
        __CPROVER_assume(req2 == 0);
        goto label_133;
      }

      else if (!(req2 == 0)) {
        __CPROVER_assume(!(req2 == 0));
        scell->state = R2;
        goto label_133;
      }

    }

    else if (!(req1 == 0)) {
      __CPROVER_assume(!(req1 == 0));
      scell->state = R1;
      goto label_133;
    }

    label_133: ;
    goto label_135;
  }

  else if (!((scell->state) == I1)) {
    __CPROVER_assume(!((scell->state) == I1));
    if ((scell->state) == R1) {
      __CPROVER_assume((scell->state) == R1);
      if (!(ack0 == 0)) {
        __CPROVER_assume(!(ack0 == 0));
        scell->state = A1;
        goto label_120;
      }

      else if (ack0 == 0) {
        __CPROVER_assume(ack0 == 0);
        goto label_120;
      }

      label_120: ;
      goto label_135;
    }

    else if (!((scell->state) == R1)) {
      __CPROVER_assume(!((scell->state) == R1));
      if ((scell->state) == A1) {
        __CPROVER_assume((scell->state) == A1);
        if (req1 == 0) {
          __CPROVER_assume(req1 == 0);
          scell->state = I2;
          goto label_113;
        }

        else if (!(req1 == 0)) {
          __CPROVER_assume(!(req1 == 0));
          goto label_113;
        }

        label_113: ;
        goto label_135;
      }

      else if (!((scell->state) == A1)) {
        __CPROVER_assume(!((scell->state) == A1));
        if ((scell->state) == I2) {
          __CPROVER_assume((scell->state) == I2);
          if (req2 == 0) {
            __CPROVER_assume(req2 == 0);
            if (req1 == 0) {
              __CPROVER_assume(req1 == 0);
              goto label_106;
            }

            else if (!(req1 == 0)) {
              __CPROVER_assume(!(req1 == 0));
              scell->state = R1;
              goto label_106;
            }

          }

          else if (!(req2 == 0)) {
            __CPROVER_assume(!(req2 == 0));
            scell->state = R2;
            goto label_106;
          }

          label_106: ;
          goto label_135;
        }

        else if (!((scell->state) == I2)) {
          __CPROVER_assume(!((scell->state) == I2));
          if ((scell->state) == R2) {
            __CPROVER_assume((scell->state) == R2);
            if (!(ack0 == 0)) {
              __CPROVER_assume(!(ack0 == 0));
              scell->state = A2;
              goto label_93;
            }

            else if (ack0 == 0) {
              __CPROVER_assume(ack0 == 0);
              goto label_93;
            }

            label_93: ;
            goto label_135;
          }

          else if (!((scell->state) == R2)) {
            __CPROVER_assume(!((scell->state) == R2));
            if ((scell->state) == A2) {
              __CPROVER_assume((scell->state) == A2);
              if (req2 == 0) {
                __CPROVER_assume(req2 == 0);
                scell->state = I1;
                goto label_135;
              }

              else if (!(req2 == 0)) {
                __CPROVER_assume(!(req2 == 0));
                goto label_135;
              }

            }

            else if (!((scell->state) == A2)) {
              __CPROVER_assume(!((scell->state) == A2));
              goto label_135;
            }

          }

        }

      }

    }

  }

  label_135: ;
  int __CPAchecker_TMP_0;
  if (!((scell->state) == R1)) {
    __CPROVER_assume(!((scell->state) == R1));
    if (!((scell->state) == R2)) {
      __CPROVER_assume(!((scell->state) == R2));
      if (!((scell->state) == A1)) {
        __CPROVER_assume(!((scell->state) == A1));
        if (!((scell->state) == A2)) {
          __CPROVER_assume(!((scell->state) == A2));
          __CPAchecker_TMP_0 = 0;
          goto label_150;
        }

        else if ((scell->state) == A2) {
          __CPROVER_assume((scell->state) == A2);
          goto label_147;
          label_147: ;
          __CPAchecker_TMP_0 = 1;
          goto label_150;
        }

      }

      else if ((scell->state) == A1) {
        __CPROVER_assume((scell->state) == A1);
        goto label_147;
      }

    }

    else if ((scell->state) == R2) {
      __CPROVER_assume((scell->state) == R2);
      goto label_147;
    }

  }

  else if ((scell->state) == R1) {
    __CPROVER_assume((scell->state) == R1);
    goto label_147;
  }

  label_150: ;
  *req0 = __CPAchecker_TMP_0;
  *ack1 = (scell->state) == A1;
  *ack2 = (scell->state) == A2;
}

void cell_17(struct state_elements_cell *scell, _Bool clk, _Bool ack0, _Bool req1, _Bool req2, _Bool *req0, _Bool *ack1, _Bool *ack2) {
  if ((scell->state) == I1) {
    __CPROVER_assume((scell->state) == I1);
    if (req1 == 0) {
      __CPROVER_assume(req1 == 0);
      if (req2 == 0) {
        __CPROVER_assume(req2 == 0);
        goto label_221;
      }

      else if (!(req2 == 0)) {
        __CPROVER_assume(!(req2 == 0));
        scell->state = R2;
        goto label_221;
      }

    }

    else if (!(req1 == 0)) {
      __CPROVER_assume(!(req1 == 0));
      scell->state = R1;
      goto label_221;
    }

    label_221: ;
    goto label_223;
  }

  else if (!((scell->state) == I1)) {
    __CPROVER_assume(!((scell->state) == I1));
    if ((scell->state) == R1) {
      __CPROVER_assume((scell->state) == R1);
      if (!(ack0 == 0)) {
        __CPROVER_assume(!(ack0 == 0));
        scell->state = A1;
        goto label_208;
      }

      else if (ack0 == 0) {
        __CPROVER_assume(ack0 == 0);
        goto label_208;
      }

      label_208: ;
      goto label_223;
    }

    else if (!((scell->state) == R1)) {
      __CPROVER_assume(!((scell->state) == R1));
      if ((scell->state) == A1) {
        __CPROVER_assume((scell->state) == A1);
        if (req1 == 0) {
          __CPROVER_assume(req1 == 0);
          scell->state = I2;
          goto label_201;
        }

        else if (!(req1 == 0)) {
          __CPROVER_assume(!(req1 == 0));
          goto label_201;
        }

        label_201: ;
        goto label_223;
      }

      else if (!((scell->state) == A1)) {
        __CPROVER_assume(!((scell->state) == A1));
        if ((scell->state) == I2) {
          __CPROVER_assume((scell->state) == I2);
          if (req2 == 0) {
            __CPROVER_assume(req2 == 0);
            if (req1 == 0) {
              __CPROVER_assume(req1 == 0);
              goto label_194;
            }

            else if (!(req1 == 0)) {
              __CPROVER_assume(!(req1 == 0));
              scell->state = R1;
              goto label_194;
            }

          }

          else if (!(req2 == 0)) {
            __CPROVER_assume(!(req2 == 0));
            scell->state = R2;
            goto label_194;
          }

          label_194: ;
          goto label_223;
        }

        else if (!((scell->state) == I2)) {
          __CPROVER_assume(!((scell->state) == I2));
          if ((scell->state) == R2) {
            __CPROVER_assume((scell->state) == R2);
            if (!(ack0 == 0)) {
              __CPROVER_assume(!(ack0 == 0));
              scell->state = A2;
              goto label_181;
            }

            else if (ack0 == 0) {
              __CPROVER_assume(ack0 == 0);
              goto label_181;
            }

            label_181: ;
            goto label_223;
          }

          else if (!((scell->state) == R2)) {
            __CPROVER_assume(!((scell->state) == R2));
            if ((scell->state) == A2) {
              __CPROVER_assume((scell->state) == A2);
              if (req2 == 0) {
                __CPROVER_assume(req2 == 0);
                scell->state = I1;
                goto label_223;
              }

              else if (!(req2 == 0)) {
                __CPROVER_assume(!(req2 == 0));
                goto label_223;
              }

            }

            else if (!((scell->state) == A2)) {
              __CPROVER_assume(!((scell->state) == A2));
              goto label_223;
            }

          }

        }

      }

    }

  }

  label_223: ;
  int __CPAchecker_TMP_0;
  if (!((scell->state) == R1)) {
    __CPROVER_assume(!((scell->state) == R1));
    if (!((scell->state) == R2)) {
      __CPROVER_assume(!((scell->state) == R2));
      if (!((scell->state) == A1)) {
        __CPROVER_assume(!((scell->state) == A1));
        if (!((scell->state) == A2)) {
          __CPROVER_assume(!((scell->state) == A2));
          __CPAchecker_TMP_0 = 0;
          goto label_238;
        }

        else if ((scell->state) == A2) {
          __CPROVER_assume((scell->state) == A2);
          goto label_235;
          label_235: ;
          __CPAchecker_TMP_0 = 1;
          goto label_238;
        }

      }

      else if ((scell->state) == A1) {
        __CPROVER_assume((scell->state) == A1);
        goto label_235;
      }

    }

    else if ((scell->state) == R2) {
      __CPROVER_assume((scell->state) == R2);
      goto label_235;
    }

  }

  else if ((scell->state) == R1) {
    __CPROVER_assume((scell->state) == R1);
    goto label_235;
  }

  label_238: ;
  *req0 = __CPAchecker_TMP_0;
  *ack1 = (scell->state) == A1;
  *ack2 = (scell->state) == A2;
}

void cell_18(struct state_elements_cell *scell, _Bool clk, _Bool ack0, _Bool req1, _Bool req2, _Bool *req0, _Bool *ack1, _Bool *ack2) {
  if ((scell->state) == I1) {
    __CPROVER_assume((scell->state) == I1);
    if (req1 == 0) {
      __CPROVER_assume(req1 == 0);
      if (req2 == 0) {
        __CPROVER_assume(req2 == 0);
        goto label_308;
      }

      else if (!(req2 == 0)) {
        __CPROVER_assume(!(req2 == 0));
        scell->state = R2;
        goto label_308;
      }

    }

    else if (!(req1 == 0)) {
      __CPROVER_assume(!(req1 == 0));
      scell->state = R1;
      goto label_308;
    }

    label_308: ;
    goto label_310;
  }

  else if (!((scell->state) == I1)) {
    __CPROVER_assume(!((scell->state) == I1));
    if ((scell->state) == R1) {
      __CPROVER_assume((scell->state) == R1);
      if (!(ack0 == 0)) {
        __CPROVER_assume(!(ack0 == 0));
        scell->state = A1;
        goto label_295;
      }

      else if (ack0 == 0) {
        __CPROVER_assume(ack0 == 0);
        goto label_295;
      }

      label_295: ;
      goto label_310;
    }

    else if (!((scell->state) == R1)) {
      __CPROVER_assume(!((scell->state) == R1));
      if ((scell->state) == A1) {
        __CPROVER_assume((scell->state) == A1);
        if (req1 == 0) {
          __CPROVER_assume(req1 == 0);
          scell->state = I2;
          goto label_288;
        }

        else if (!(req1 == 0)) {
          __CPROVER_assume(!(req1 == 0));
          goto label_288;
        }

        label_288: ;
        goto label_310;
      }

      else if (!((scell->state) == A1)) {
        __CPROVER_assume(!((scell->state) == A1));
        if ((scell->state) == I2) {
          __CPROVER_assume((scell->state) == I2);
          if (req2 == 0) {
            __CPROVER_assume(req2 == 0);
            if (req1 == 0) {
              __CPROVER_assume(req1 == 0);
              goto label_281;
            }

            else if (!(req1 == 0)) {
              __CPROVER_assume(!(req1 == 0));
              scell->state = R1;
              goto label_281;
            }

          }

          else if (!(req2 == 0)) {
            __CPROVER_assume(!(req2 == 0));
            scell->state = R2;
            goto label_281;
          }

          label_281: ;
          goto label_310;
        }

        else if (!((scell->state) == I2)) {
          __CPROVER_assume(!((scell->state) == I2));
          if ((scell->state) == R2) {
            __CPROVER_assume((scell->state) == R2);
            if (!(ack0 == 0)) {
              __CPROVER_assume(!(ack0 == 0));
              scell->state = A2;
              goto label_268;
            }

            else if (ack0 == 0) {
              __CPROVER_assume(ack0 == 0);
              goto label_268;
            }

            label_268: ;
            goto label_310;
          }

          else if (!((scell->state) == R2)) {
            __CPROVER_assume(!((scell->state) == R2));
            if ((scell->state) == A2) {
              __CPROVER_assume((scell->state) == A2);
              if (req2 == 0) {
                __CPROVER_assume(req2 == 0);
                scell->state = I1;
                goto label_310;
              }

              else if (!(req2 == 0)) {
                __CPROVER_assume(!(req2 == 0));
                goto label_310;
              }

            }

            else if (!((scell->state) == A2)) {
              __CPROVER_assume(!((scell->state) == A2));
              goto label_310;
            }

          }

        }

      }

    }

  }

  label_310: ;
  int __CPAchecker_TMP_0;
  if (!((scell->state) == R1)) {
    __CPROVER_assume(!((scell->state) == R1));
    if (!((scell->state) == R2)) {
      __CPROVER_assume(!((scell->state) == R2));
      if (!((scell->state) == A1)) {
        __CPROVER_assume(!((scell->state) == A1));
        if (!((scell->state) == A2)) {
          __CPROVER_assume(!((scell->state) == A2));
          __CPAchecker_TMP_0 = 0;
          goto label_325;
        }

        else if ((scell->state) == A2) {
          __CPROVER_assume((scell->state) == A2);
          goto label_322;
          label_322: ;
          __CPAchecker_TMP_0 = 1;
          goto label_325;
        }

      }

      else if ((scell->state) == A1) {
        __CPROVER_assume((scell->state) == A1);
        goto label_322;
      }

    }

    else if ((scell->state) == R2) {
      __CPROVER_assume((scell->state) == R2);
      goto label_322;
    }

  }

  else if ((scell->state) == R1) {
    __CPROVER_assume((scell->state) == R1);
    goto label_322;
  }

  label_325: ;
  *req0 = __CPAchecker_TMP_0;
  *ack1 = (scell->state) == A1;
  *ack2 = (scell->state) == A2;
}

void cell_19(struct state_elements_cell *scell, _Bool clk, _Bool ack0, _Bool req1, _Bool req2, _Bool *req0, _Bool *ack1, _Bool *ack2) {
  if ((scell->state) == I1) {
    __CPROVER_assume((scell->state) == I1);
    if (req1 == 0) {
      __CPROVER_assume(req1 == 0);
      if (req2 == 0) {
        __CPROVER_assume(req2 == 0);
        goto label_395;
      }

      else if (!(req2 == 0)) {
        __CPROVER_assume(!(req2 == 0));
        scell->state = R2;
        goto label_395;
      }

    }

    else if (!(req1 == 0)) {
      __CPROVER_assume(!(req1 == 0));
      scell->state = R1;
      goto label_395;
    }

    label_395: ;
    goto label_397;
  }

  else if (!((scell->state) == I1)) {
    __CPROVER_assume(!((scell->state) == I1));
    if ((scell->state) == R1) {
      __CPROVER_assume((scell->state) == R1);
      if (!(ack0 == 0)) {
        __CPROVER_assume(!(ack0 == 0));
        scell->state = A1;
        goto label_382;
      }

      else if (ack0 == 0) {
        __CPROVER_assume(ack0 == 0);
        goto label_382;
      }

      label_382: ;
      goto label_397;
    }

    else if (!((scell->state) == R1)) {
      __CPROVER_assume(!((scell->state) == R1));
      if ((scell->state) == A1) {
        __CPROVER_assume((scell->state) == A1);
        if (req1 == 0) {
          __CPROVER_assume(req1 == 0);
          scell->state = I2;
          goto label_375;
        }

        else if (!(req1 == 0)) {
          __CPROVER_assume(!(req1 == 0));
          goto label_375;
        }

        label_375: ;
        goto label_397;
      }

      else if (!((scell->state) == A1)) {
        __CPROVER_assume(!((scell->state) == A1));
        if ((scell->state) == I2) {
          __CPROVER_assume((scell->state) == I2);
          if (req2 == 0) {
            __CPROVER_assume(req2 == 0);
            if (req1 == 0) {
              __CPROVER_assume(req1 == 0);
              goto label_368;
            }

            else if (!(req1 == 0)) {
              __CPROVER_assume(!(req1 == 0));
              scell->state = R1;
              goto label_368;
            }

          }

          else if (!(req2 == 0)) {
            __CPROVER_assume(!(req2 == 0));
            scell->state = R2;
            goto label_368;
          }

          label_368: ;
          goto label_397;
        }

        else if (!((scell->state) == I2)) {
          __CPROVER_assume(!((scell->state) == I2));
          if ((scell->state) == R2) {
            __CPROVER_assume((scell->state) == R2);
            if (!(ack0 == 0)) {
              __CPROVER_assume(!(ack0 == 0));
              scell->state = A2;
              goto label_355;
            }

            else if (ack0 == 0) {
              __CPROVER_assume(ack0 == 0);
              goto label_355;
            }

            label_355: ;
            goto label_397;
          }

          else if (!((scell->state) == R2)) {
            __CPROVER_assume(!((scell->state) == R2));
            if ((scell->state) == A2) {
              __CPROVER_assume((scell->state) == A2);
              if (req2 == 0) {
                __CPROVER_assume(req2 == 0);
                scell->state = I1;
                goto label_397;
              }

              else if (!(req2 == 0)) {
                __CPROVER_assume(!(req2 == 0));
                goto label_397;
              }

            }

            else if (!((scell->state) == A2)) {
              __CPROVER_assume(!((scell->state) == A2));
              goto label_397;
            }

          }

        }

      }

    }

  }

  label_397: ;
  int __CPAchecker_TMP_0;
  if (!((scell->state) == R1)) {
    __CPROVER_assume(!((scell->state) == R1));
    if (!((scell->state) == R2)) {
      __CPROVER_assume(!((scell->state) == R2));
      if (!((scell->state) == A1)) {
        __CPROVER_assume(!((scell->state) == A1));
        if (!((scell->state) == A2)) {
          __CPROVER_assume(!((scell->state) == A2));
          __CPAchecker_TMP_0 = 0;
          goto label_412;
        }

        else if ((scell->state) == A2) {
          __CPROVER_assume((scell->state) == A2);
          goto label_409;
          label_409: ;
          __CPAchecker_TMP_0 = 1;
          goto label_412;
        }

      }

      else if ((scell->state) == A1) {
        __CPROVER_assume((scell->state) == A1);
        goto label_409;
      }

    }

    else if ((scell->state) == R2) {
      __CPROVER_assume((scell->state) == R2);
      goto label_409;
    }

  }

  else if ((scell->state) == R1) {
    __CPROVER_assume((scell->state) == R1);
    goto label_409;
  }

  label_412: ;
  *req0 = __CPAchecker_TMP_0;
  *ack1 = (scell->state) == A1;
  *ack2 = (scell->state) == A2;
}

void cell_20(struct state_elements_cell *scell, _Bool clk, _Bool ack0, _Bool req1, _Bool req2, _Bool *req0, _Bool *ack1, _Bool *ack2) {
  if ((scell->state) == I1) {
    __CPROVER_assume((scell->state) == I1);
    if (req1 == 0) {
      __CPROVER_assume(req1 == 0);
      if (req2 == 0) {
        __CPROVER_assume(req2 == 0);
        goto label_482;
      }

      else if (!(req2 == 0)) {
        __CPROVER_assume(!(req2 == 0));
        scell->state = R2;
        goto label_482;
      }

    }

    else if (!(req1 == 0)) {
      __CPROVER_assume(!(req1 == 0));
      scell->state = R1;
      goto label_482;
    }

    label_482: ;
    goto label_484;
  }

  else if (!((scell->state) == I1)) {
    __CPROVER_assume(!((scell->state) == I1));
    if ((scell->state) == R1) {
      __CPROVER_assume((scell->state) == R1);
      if (!(ack0 == 0)) {
        __CPROVER_assume(!(ack0 == 0));
        scell->state = A1;
        goto label_469;
      }

      else if (ack0 == 0) {
        __CPROVER_assume(ack0 == 0);
        goto label_469;
      }

      label_469: ;
      goto label_484;
    }

    else if (!((scell->state) == R1)) {
      __CPROVER_assume(!((scell->state) == R1));
      if ((scell->state) == A1) {
        __CPROVER_assume((scell->state) == A1);
        if (req1 == 0) {
          __CPROVER_assume(req1 == 0);
          scell->state = I2;
          goto label_462;
        }

        else if (!(req1 == 0)) {
          __CPROVER_assume(!(req1 == 0));
          goto label_462;
        }

        label_462: ;
        goto label_484;
      }

      else if (!((scell->state) == A1)) {
        __CPROVER_assume(!((scell->state) == A1));
        if ((scell->state) == I2) {
          __CPROVER_assume((scell->state) == I2);
          if (req2 == 0) {
            __CPROVER_assume(req2 == 0);
            if (req1 == 0) {
              __CPROVER_assume(req1 == 0);
              goto label_455;
            }

            else if (!(req1 == 0)) {
              __CPROVER_assume(!(req1 == 0));
              scell->state = R1;
              goto label_455;
            }

          }

          else if (!(req2 == 0)) {
            __CPROVER_assume(!(req2 == 0));
            scell->state = R2;
            goto label_455;
          }

          label_455: ;
          goto label_484;
        }

        else if (!((scell->state) == I2)) {
          __CPROVER_assume(!((scell->state) == I2));
          if ((scell->state) == R2) {
            __CPROVER_assume((scell->state) == R2);
            if (!(ack0 == 0)) {
              __CPROVER_assume(!(ack0 == 0));
              scell->state = A2;
              goto label_442;
            }

            else if (ack0 == 0) {
              __CPROVER_assume(ack0 == 0);
              goto label_442;
            }

            label_442: ;
            goto label_484;
          }

          else if (!((scell->state) == R2)) {
            __CPROVER_assume(!((scell->state) == R2));
            if ((scell->state) == A2) {
              __CPROVER_assume((scell->state) == A2);
              if (req2 == 0) {
                __CPROVER_assume(req2 == 0);
                scell->state = I1;
                goto label_484;
              }

              else if (!(req2 == 0)) {
                __CPROVER_assume(!(req2 == 0));
                goto label_484;
              }

            }

            else if (!((scell->state) == A2)) {
              __CPROVER_assume(!((scell->state) == A2));
              goto label_484;
            }

          }

        }

      }

    }

  }

  label_484: ;
  int __CPAchecker_TMP_0;
  if (!((scell->state) == R1)) {
    __CPROVER_assume(!((scell->state) == R1));
    if (!((scell->state) == R2)) {
      __CPROVER_assume(!((scell->state) == R2));
      if (!((scell->state) == A1)) {
        __CPROVER_assume(!((scell->state) == A1));
        if (!((scell->state) == A2)) {
          __CPROVER_assume(!((scell->state) == A2));
          __CPAchecker_TMP_0 = 0;
          goto label_499;
        }

        else if ((scell->state) == A2) {
          __CPROVER_assume((scell->state) == A2);
          goto label_496;
          label_496: ;
          __CPAchecker_TMP_0 = 1;
          goto label_499;
        }

      }

      else if ((scell->state) == A1) {
        __CPROVER_assume((scell->state) == A1);
        goto label_496;
      }

    }

    else if ((scell->state) == R2) {
      __CPROVER_assume((scell->state) == R2);
      goto label_496;
    }

  }

  else if ((scell->state) == R1) {
    __CPROVER_assume((scell->state) == R1);
    goto label_496;
  }

  label_499: ;
  *req0 = __CPAchecker_TMP_0;
  *ack1 = (scell->state) == A1;
  *ack2 = (scell->state) == A2;
}

void cell_21(struct state_elements_cell *scell, _Bool clk, _Bool ack0, _Bool req1, _Bool req2, _Bool *req0, _Bool *ack1, _Bool *ack2) {
  if ((scell->state) == I1) {
    __CPROVER_assume((scell->state) == I1);
    if (req1 == 0) {
      __CPROVER_assume(req1 == 0);
      if (req2 == 0) {
        __CPROVER_assume(req2 == 0);
        goto label_569;
      }

      else if (!(req2 == 0)) {
        __CPROVER_assume(!(req2 == 0));
        scell->state = R2;
        goto label_569;
      }

    }

    else if (!(req1 == 0)) {
      __CPROVER_assume(!(req1 == 0));
      scell->state = R1;
      goto label_569;
    }

    label_569: ;
    goto label_571;
  }

  else if (!((scell->state) == I1)) {
    __CPROVER_assume(!((scell->state) == I1));
    if ((scell->state) == R1) {
      __CPROVER_assume((scell->state) == R1);
      if (!(ack0 == 0)) {
        __CPROVER_assume(!(ack0 == 0));
        scell->state = A1;
        goto label_556;
      }

      else if (ack0 == 0) {
        __CPROVER_assume(ack0 == 0);
        goto label_556;
      }

      label_556: ;
      goto label_571;
    }

    else if (!((scell->state) == R1)) {
      __CPROVER_assume(!((scell->state) == R1));
      if ((scell->state) == A1) {
        __CPROVER_assume((scell->state) == A1);
        if (req1 == 0) {
          __CPROVER_assume(req1 == 0);
          scell->state = I2;
          goto label_549;
        }

        else if (!(req1 == 0)) {
          __CPROVER_assume(!(req1 == 0));
          goto label_549;
        }

        label_549: ;
        goto label_571;
      }

      else if (!((scell->state) == A1)) {
        __CPROVER_assume(!((scell->state) == A1));
        if ((scell->state) == I2) {
          __CPROVER_assume((scell->state) == I2);
          if (req2 == 0) {
            __CPROVER_assume(req2 == 0);
            if (req1 == 0) {
              __CPROVER_assume(req1 == 0);
              goto label_542;
            }

            else if (!(req1 == 0)) {
              __CPROVER_assume(!(req1 == 0));
              scell->state = R1;
              goto label_542;
            }

          }

          else if (!(req2 == 0)) {
            __CPROVER_assume(!(req2 == 0));
            scell->state = R2;
            goto label_542;
          }

          label_542: ;
          goto label_571;
        }

        else if (!((scell->state) == I2)) {
          __CPROVER_assume(!((scell->state) == I2));
          if ((scell->state) == R2) {
            __CPROVER_assume((scell->state) == R2);
            if (!(ack0 == 0)) {
              __CPROVER_assume(!(ack0 == 0));
              scell->state = A2;
              goto label_529;
            }

            else if (ack0 == 0) {
              __CPROVER_assume(ack0 == 0);
              goto label_529;
            }

            label_529: ;
            goto label_571;
          }

          else if (!((scell->state) == R2)) {
            __CPROVER_assume(!((scell->state) == R2));
            if ((scell->state) == A2) {
              __CPROVER_assume((scell->state) == A2);
              if (req2 == 0) {
                __CPROVER_assume(req2 == 0);
                scell->state = I1;
                goto label_571;
              }

              else if (!(req2 == 0)) {
                __CPROVER_assume(!(req2 == 0));
                goto label_571;
              }

            }

            else if (!((scell->state) == A2)) {
              __CPROVER_assume(!((scell->state) == A2));
              goto label_571;
            }

          }

        }

      }

    }

  }

  label_571: ;
  int __CPAchecker_TMP_0;
  if (!((scell->state) == R1)) {
    __CPROVER_assume(!((scell->state) == R1));
    if (!((scell->state) == R2)) {
      __CPROVER_assume(!((scell->state) == R2));
      if (!((scell->state) == A1)) {
        __CPROVER_assume(!((scell->state) == A1));
        if (!((scell->state) == A2)) {
          __CPROVER_assume(!((scell->state) == A2));
          __CPAchecker_TMP_0 = 0;
          goto label_586;
        }

        else if ((scell->state) == A2) {
          __CPROVER_assume((scell->state) == A2);
          goto label_583;
          label_583: ;
          __CPAchecker_TMP_0 = 1;
          goto label_586;
        }

      }

      else if ((scell->state) == A1) {
        __CPROVER_assume((scell->state) == A1);
        goto label_583;
      }

    }

    else if ((scell->state) == R2) {
      __CPROVER_assume((scell->state) == R2);
      goto label_583;
    }

  }

  else if ((scell->state) == R1) {
    __CPROVER_assume((scell->state) == R1);
    goto label_583;
  }

  label_586: ;
  *req0 = __CPAchecker_TMP_0;
  *ack1 = (scell->state) == A1;
  *ack2 = (scell->state) == A2;
}

void cell_22(struct state_elements_cell *scell, _Bool clk, _Bool ack0, _Bool req1, _Bool req2, _Bool *req0, _Bool *ack1, _Bool *ack2) {
  if ((scell->state) == I1) {
    __CPROVER_assume((scell->state) == I1);
    if (req1 == 0) {
      __CPROVER_assume(req1 == 0);
      if (req2 == 0) {
        __CPROVER_assume(req2 == 0);
        goto label_656;
      }

      else if (!(req2 == 0)) {
        __CPROVER_assume(!(req2 == 0));
        scell->state = R2;
        goto label_656;
      }

    }

    else if (!(req1 == 0)) {
      __CPROVER_assume(!(req1 == 0));
      scell->state = R1;
      goto label_656;
    }

    label_656: ;
    goto label_658;
  }

  else if (!((scell->state) == I1)) {
    __CPROVER_assume(!((scell->state) == I1));
    if ((scell->state) == R1) {
      __CPROVER_assume((scell->state) == R1);
      if (!(ack0 == 0)) {
        __CPROVER_assume(!(ack0 == 0));
        scell->state = A1;
        goto label_643;
      }

      else if (ack0 == 0) {
        __CPROVER_assume(ack0 == 0);
        goto label_643;
      }

      label_643: ;
      goto label_658;
    }

    else if (!((scell->state) == R1)) {
      __CPROVER_assume(!((scell->state) == R1));
      if ((scell->state) == A1) {
        __CPROVER_assume((scell->state) == A1);
        if (req1 == 0) {
          __CPROVER_assume(req1 == 0);
          scell->state = I2;
          goto label_636;
        }

        else if (!(req1 == 0)) {
          __CPROVER_assume(!(req1 == 0));
          goto label_636;
        }

        label_636: ;
        goto label_658;
      }

      else if (!((scell->state) == A1)) {
        __CPROVER_assume(!((scell->state) == A1));
        if ((scell->state) == I2) {
          __CPROVER_assume((scell->state) == I2);
          if (req2 == 0) {
            __CPROVER_assume(req2 == 0);
            if (req1 == 0) {
              __CPROVER_assume(req1 == 0);
              goto label_629;
            }

            else if (!(req1 == 0)) {
              __CPROVER_assume(!(req1 == 0));
              scell->state = R1;
              goto label_629;
            }

          }

          else if (!(req2 == 0)) {
            __CPROVER_assume(!(req2 == 0));
            scell->state = R2;
            goto label_629;
          }

          label_629: ;
          goto label_658;
        }

        else if (!((scell->state) == I2)) {
          __CPROVER_assume(!((scell->state) == I2));
          if ((scell->state) == R2) {
            __CPROVER_assume((scell->state) == R2);
            if (!(ack0 == 0)) {
              __CPROVER_assume(!(ack0 == 0));
              scell->state = A2;
              goto label_616;
            }

            else if (ack0 == 0) {
              __CPROVER_assume(ack0 == 0);
              goto label_616;
            }

            label_616: ;
            goto label_658;
          }

          else if (!((scell->state) == R2)) {
            __CPROVER_assume(!((scell->state) == R2));
            if ((scell->state) == A2) {
              __CPROVER_assume((scell->state) == A2);
              if (req2 == 0) {
                __CPROVER_assume(req2 == 0);
                scell->state = I1;
                goto label_658;
              }

              else if (!(req2 == 0)) {
                __CPROVER_assume(!(req2 == 0));
                goto label_658;
              }

            }

            else if (!((scell->state) == A2)) {
              __CPROVER_assume(!((scell->state) == A2));
              goto label_658;
            }

          }

        }

      }

    }

  }

  label_658: ;
  int __CPAchecker_TMP_0;
  if (!((scell->state) == R1)) {
    __CPROVER_assume(!((scell->state) == R1));
    if (!((scell->state) == R2)) {
      __CPROVER_assume(!((scell->state) == R2));
      if (!((scell->state) == A1)) {
        __CPROVER_assume(!((scell->state) == A1));
        if (!((scell->state) == A2)) {
          __CPROVER_assume(!((scell->state) == A2));
          __CPAchecker_TMP_0 = 0;
          goto label_673;
        }

        else if ((scell->state) == A2) {
          __CPROVER_assume((scell->state) == A2);
          goto label_670;
          label_670: ;
          __CPAchecker_TMP_0 = 1;
          goto label_673;
        }

      }

      else if ((scell->state) == A1) {
        __CPROVER_assume((scell->state) == A1);
        goto label_670;
      }

    }

    else if ((scell->state) == R2) {
      __CPROVER_assume((scell->state) == R2);
      goto label_670;
    }

  }

  else if ((scell->state) == R1) {
    __CPROVER_assume((scell->state) == R1);
    goto label_670;
  }

  label_673: ;
  *req0 = __CPAchecker_TMP_0;
  *ack1 = (scell->state) == A1;
  *ack2 = (scell->state) == A2;
}

void proc_23(struct state_elements_proc *sproc, _Bool clk, _Bool ack, _Bool choice, _Bool *req) {
  int idle = 0;
  int requesting = 1;
  int locking = 2;
  if ((sproc->state) == idle) {
    __CPROVER_assume((sproc->state) == idle);
    if (!(choice == 0)) {
      __CPROVER_assume(!(choice == 0));
      sproc->state = requesting;
      goto label_704;
    }

    else if (choice == 0) {
      __CPROVER_assume(choice == 0);
      goto label_704;
    }

    label_704: ;
    goto label_706;
  }

  else if (!((sproc->state) == idle)) {
    __CPROVER_assume(!((sproc->state) == idle));
    if ((sproc->state) == requesting) {
      __CPROVER_assume((sproc->state) == requesting);
      if (!(ack == 0)) {
        __CPROVER_assume(!(ack == 0));
        sproc->state = locking;
        goto label_697;
      }

      else if (ack == 0) {
        __CPROVER_assume(ack == 0);
        goto label_697;
      }

      label_697: ;
      goto label_706;
    }

    else if (!((sproc->state) == requesting)) {
      __CPROVER_assume(!((sproc->state) == requesting));
      if ((sproc->state) == locking) {
        __CPROVER_assume((sproc->state) == locking);
        if (choice == 0) {
          __CPROVER_assume(choice == 0);
          goto label_706;
        }

        else if (!(choice == 0)) {
          __CPROVER_assume(!(choice == 0));
          sproc->state = idle;
          goto label_706;
        }

      }

      else if (!((sproc->state) == locking)) {
        __CPROVER_assume(!((sproc->state) == locking));
        goto label_706;
      }

    }

  }

  label_706: ;
  int __CPAchecker_TMP_0;
  if (!((sproc->state) == requesting)) {
    __CPROVER_assume(!((sproc->state) == requesting));
    if (!((sproc->state) == locking)) {
      __CPROVER_assume(!((sproc->state) == locking));
      __CPAchecker_TMP_0 = 0;
      goto label_715;
    }

    else if ((sproc->state) == locking) {
      __CPROVER_assume((sproc->state) == locking);
      goto label_712;
      label_712: ;
      __CPAchecker_TMP_0 = 1;
      goto label_715;
    }

  }

  else if ((sproc->state) == requesting) {
    __CPROVER_assume((sproc->state) == requesting);
    goto label_712;
  }

  label_715: ;
  *req = __CPAchecker_TMP_0;
}

void proc_24(struct state_elements_proc *sproc, _Bool clk, _Bool ack, _Bool choice, _Bool *req) {
  int idle = 0;
  int requesting = 1;
  int locking = 2;
  if ((sproc->state) == idle) {
    __CPROVER_assume((sproc->state) == idle);
    if (!(choice == 0)) {
      __CPROVER_assume(!(choice == 0));
      sproc->state = requesting;
      goto label_746;
    }

    else if (choice == 0) {
      __CPROVER_assume(choice == 0);
      goto label_746;
    }

    label_746: ;
    goto label_748;
  }

  else if (!((sproc->state) == idle)) {
    __CPROVER_assume(!((sproc->state) == idle));
    if ((sproc->state) == requesting) {
      __CPROVER_assume((sproc->state) == requesting);
      if (!(ack == 0)) {
        __CPROVER_assume(!(ack == 0));
        sproc->state = locking;
        goto label_739;
      }

      else if (ack == 0) {
        __CPROVER_assume(ack == 0);
        goto label_739;
      }

      label_739: ;
      goto label_748;
    }

    else if (!((sproc->state) == requesting)) {
      __CPROVER_assume(!((sproc->state) == requesting));
      if ((sproc->state) == locking) {
        __CPROVER_assume((sproc->state) == locking);
        if (choice == 0) {
          __CPROVER_assume(choice == 0);
          goto label_748;
        }

        else if (!(choice == 0)) {
          __CPROVER_assume(!(choice == 0));
          sproc->state = idle;
          goto label_748;
        }

      }

      else if (!((sproc->state) == locking)) {
        __CPROVER_assume(!((sproc->state) == locking));
        goto label_748;
      }

    }

  }

  label_748: ;
  int __CPAchecker_TMP_0;
  if (!((sproc->state) == requesting)) {
    __CPROVER_assume(!((sproc->state) == requesting));
    if (!((sproc->state) == locking)) {
      __CPROVER_assume(!((sproc->state) == locking));
      __CPAchecker_TMP_0 = 0;
      goto label_757;
    }

    else if ((sproc->state) == locking) {
      __CPROVER_assume((sproc->state) == locking);
      goto label_754;
      label_754: ;
      __CPAchecker_TMP_0 = 1;
      goto label_757;
    }

  }

  else if ((sproc->state) == requesting) {
    __CPROVER_assume((sproc->state) == requesting);
    goto label_754;
  }

  label_757: ;
  *req = __CPAchecker_TMP_0;
}

void proc_25(struct state_elements_proc *sproc, _Bool clk, _Bool ack, _Bool choice, _Bool *req) {
  int idle = 0;
  int requesting = 1;
  int locking = 2;
  if ((sproc->state) == idle) {
    __CPROVER_assume((sproc->state) == idle);
    if (!(choice == 0)) {
      __CPROVER_assume(!(choice == 0));
      sproc->state = requesting;
      goto label_788;
    }

    else if (choice == 0) {
      __CPROVER_assume(choice == 0);
      goto label_788;
    }

    label_788: ;
    goto label_790;
  }

  else if (!((sproc->state) == idle)) {
    __CPROVER_assume(!((sproc->state) == idle));
    if ((sproc->state) == requesting) {
      __CPROVER_assume((sproc->state) == requesting);
      if (!(ack == 0)) {
        __CPROVER_assume(!(ack == 0));
        sproc->state = locking;
        goto label_781;
      }

      else if (ack == 0) {
        __CPROVER_assume(ack == 0);
        goto label_781;
      }

      label_781: ;
      goto label_790;
    }

    else if (!((sproc->state) == requesting)) {
      __CPROVER_assume(!((sproc->state) == requesting));
      if ((sproc->state) == locking) {
        __CPROVER_assume((sproc->state) == locking);
        if (choice == 0) {
          __CPROVER_assume(choice == 0);
          goto label_790;
        }

        else if (!(choice == 0)) {
          __CPROVER_assume(!(choice == 0));
          sproc->state = idle;
          goto label_790;
        }

      }

      else if (!((sproc->state) == locking)) {
        __CPROVER_assume(!((sproc->state) == locking));
        goto label_790;
      }

    }

  }

  label_790: ;
  int __CPAchecker_TMP_0;
  if (!((sproc->state) == requesting)) {
    __CPROVER_assume(!((sproc->state) == requesting));
    if (!((sproc->state) == locking)) {
      __CPROVER_assume(!((sproc->state) == locking));
      __CPAchecker_TMP_0 = 0;
      goto label_799;
    }

    else if ((sproc->state) == locking) {
      __CPROVER_assume((sproc->state) == locking);
      goto label_796;
      label_796: ;
      __CPAchecker_TMP_0 = 1;
      goto label_799;
    }

  }

  else if ((sproc->state) == requesting) {
    __CPROVER_assume((sproc->state) == requesting);
    goto label_796;
  }

  label_799: ;
  *req = __CPAchecker_TMP_0;
}

void proc_26(struct state_elements_proc *sproc, _Bool clk, _Bool ack, _Bool choice, _Bool *req) {
  int idle = 0;
  int requesting = 1;
  int locking = 2;
  if ((sproc->state) == idle) {
    __CPROVER_assume((sproc->state) == idle);
    if (!(choice == 0)) {
      __CPROVER_assume(!(choice == 0));
      sproc->state = requesting;
      goto label_830;
    }

    else if (choice == 0) {
      __CPROVER_assume(choice == 0);
      goto label_830;
    }

    label_830: ;
    goto label_832;
  }

  else if (!((sproc->state) == idle)) {
    __CPROVER_assume(!((sproc->state) == idle));
    if ((sproc->state) == requesting) {
      __CPROVER_assume((sproc->state) == requesting);
      if (!(ack == 0)) {
        __CPROVER_assume(!(ack == 0));
        sproc->state = locking;
        goto label_823;
      }

      else if (ack == 0) {
        __CPROVER_assume(ack == 0);
        goto label_823;
      }

      label_823: ;
      goto label_832;
    }

    else if (!((sproc->state) == requesting)) {
      __CPROVER_assume(!((sproc->state) == requesting));
      if ((sproc->state) == locking) {
        __CPROVER_assume((sproc->state) == locking);
        if (choice == 0) {
          __CPROVER_assume(choice == 0);
          goto label_832;
        }

        else if (!(choice == 0)) {
          __CPROVER_assume(!(choice == 0));
          sproc->state = idle;
          goto label_832;
        }

      }

      else if (!((sproc->state) == locking)) {
        __CPROVER_assume(!((sproc->state) == locking));
        goto label_832;
      }

    }

  }

  label_832: ;
  int __CPAchecker_TMP_0;
  if (!((sproc->state) == requesting)) {
    __CPROVER_assume(!((sproc->state) == requesting));
    if (!((sproc->state) == locking)) {
      __CPROVER_assume(!((sproc->state) == locking));
      __CPAchecker_TMP_0 = 0;
      goto label_841;
    }

    else if ((sproc->state) == locking) {
      __CPROVER_assume((sproc->state) == locking);
      goto label_838;
      label_838: ;
      __CPAchecker_TMP_0 = 1;
      goto label_841;
    }

  }

  else if ((sproc->state) == requesting) {
    __CPROVER_assume((sproc->state) == requesting);
    goto label_838;
  }

  label_841: ;
  *req = __CPAchecker_TMP_0;
}

void proc_27(struct state_elements_proc *sproc, _Bool clk, _Bool ack, _Bool choice, _Bool *req) {
  int idle = 0;
  int requesting = 1;
  int locking = 2;
  if ((sproc->state) == idle) {
    __CPROVER_assume((sproc->state) == idle);
    if (!(choice == 0)) {
      __CPROVER_assume(!(choice == 0));
      sproc->state = requesting;
      goto label_872;
    }

    else if (choice == 0) {
      __CPROVER_assume(choice == 0);
      goto label_872;
    }

    label_872: ;
    goto label_874;
  }

  else if (!((sproc->state) == idle)) {
    __CPROVER_assume(!((sproc->state) == idle));
    if ((sproc->state) == requesting) {
      __CPROVER_assume((sproc->state) == requesting);
      if (!(ack == 0)) {
        __CPROVER_assume(!(ack == 0));
        sproc->state = locking;
        goto label_865;
      }

      else if (ack == 0) {
        __CPROVER_assume(ack == 0);
        goto label_865;
      }

      label_865: ;
      goto label_874;
    }

    else if (!((sproc->state) == requesting)) {
      __CPROVER_assume(!((sproc->state) == requesting));
      if ((sproc->state) == locking) {
        __CPROVER_assume((sproc->state) == locking);
        if (choice == 0) {
          __CPROVER_assume(choice == 0);
          goto label_874;
        }

        else if (!(choice == 0)) {
          __CPROVER_assume(!(choice == 0));
          sproc->state = idle;
          goto label_874;
        }

      }

      else if (!((sproc->state) == locking)) {
        __CPROVER_assume(!((sproc->state) == locking));
        goto label_874;
      }

    }

  }

  label_874: ;
  int __CPAchecker_TMP_0;
  if (!((sproc->state) == requesting)) {
    __CPROVER_assume(!((sproc->state) == requesting));
    if (!((sproc->state) == locking)) {
      __CPROVER_assume(!((sproc->state) == locking));
      __CPAchecker_TMP_0 = 0;
      goto label_883;
    }

    else if ((sproc->state) == locking) {
      __CPROVER_assume((sproc->state) == locking);
      goto label_880;
      label_880: ;
      __CPAchecker_TMP_0 = 1;
      goto label_883;
    }

  }

  else if ((sproc->state) == requesting) {
    __CPROVER_assume((sproc->state) == requesting);
    goto label_880;
  }

  label_883: ;
  *req = __CPAchecker_TMP_0;
}

void proc_28(struct state_elements_proc *sproc, _Bool clk, _Bool ack, _Bool choice, _Bool *req) {
  int idle = 0;
  int requesting = 1;
  int locking = 2;
  if ((sproc->state) == idle) {
    __CPROVER_assume((sproc->state) == idle);
    if (!(choice == 0)) {
      __CPROVER_assume(!(choice == 0));
      sproc->state = requesting;
      goto label_914;
    }

    else if (choice == 0) {
      __CPROVER_assume(choice == 0);
      goto label_914;
    }

    label_914: ;
    goto label_916;
  }

  else if (!((sproc->state) == idle)) {
    __CPROVER_assume(!((sproc->state) == idle));
    if ((sproc->state) == requesting) {
      __CPROVER_assume((sproc->state) == requesting);
      if (!(ack == 0)) {
        __CPROVER_assume(!(ack == 0));
        sproc->state = locking;
        goto label_907;
      }

      else if (ack == 0) {
        __CPROVER_assume(ack == 0);
        goto label_907;
      }

      label_907: ;
      goto label_916;
    }

    else if (!((sproc->state) == requesting)) {
      __CPROVER_assume(!((sproc->state) == requesting));
      if ((sproc->state) == locking) {
        __CPROVER_assume((sproc->state) == locking);
        if (choice == 0) {
          __CPROVER_assume(choice == 0);
          goto label_916;
        }

        else if (!(choice == 0)) {
          __CPROVER_assume(!(choice == 0));
          sproc->state = idle;
          goto label_916;
        }

      }

      else if (!((sproc->state) == locking)) {
        __CPROVER_assume(!((sproc->state) == locking));
        goto label_916;
      }

    }

  }

  label_916: ;
  int __CPAchecker_TMP_0;
  if (!((sproc->state) == requesting)) {
    __CPROVER_assume(!((sproc->state) == requesting));
    if (!((sproc->state) == locking)) {
      __CPROVER_assume(!((sproc->state) == locking));
      __CPAchecker_TMP_0 = 0;
      goto label_925;
    }

    else if ((sproc->state) == locking) {
      __CPROVER_assume((sproc->state) == locking);
      goto label_922;
      label_922: ;
      __CPAchecker_TMP_0 = 1;
      goto label_925;
    }

  }

  else if ((sproc->state) == requesting) {
    __CPROVER_assume((sproc->state) == requesting);
    goto label_922;
  }

  label_925: ;
  *req = __CPAchecker_TMP_0;
}

void proc_29(struct state_elements_proc *sproc, _Bool clk, _Bool ack, _Bool choice, _Bool *req) {
  int idle = 0;
  int requesting = 1;
  int locking = 2;
  if ((sproc->state) == idle) {
    __CPROVER_assume((sproc->state) == idle);
    if (!(choice == 0)) {
      __CPROVER_assume(!(choice == 0));
      sproc->state = requesting;
      goto label_956;
    }

    else if (choice == 0) {
      __CPROVER_assume(choice == 0);
      goto label_956;
    }

    label_956: ;
    goto label_958;
  }

  else if (!((sproc->state) == idle)) {
    __CPROVER_assume(!((sproc->state) == idle));
    if ((sproc->state) == requesting) {
      __CPROVER_assume((sproc->state) == requesting);
      if (!(ack == 0)) {
        __CPROVER_assume(!(ack == 0));
        sproc->state = locking;
        goto label_949;
      }

      else if (ack == 0) {
        __CPROVER_assume(ack == 0);
        goto label_949;
      }

      label_949: ;
      goto label_958;
    }

    else if (!((sproc->state) == requesting)) {
      __CPROVER_assume(!((sproc->state) == requesting));
      if ((sproc->state) == locking) {
        __CPROVER_assume((sproc->state) == locking);
        if (choice == 0) {
          __CPROVER_assume(choice == 0);
          goto label_958;
        }

        else if (!(choice == 0)) {
          __CPROVER_assume(!(choice == 0));
          sproc->state = idle;
          goto label_958;
        }

      }

      else if (!((sproc->state) == locking)) {
        __CPROVER_assume(!((sproc->state) == locking));
        goto label_958;
      }

    }

  }

  label_958: ;
  int __CPAchecker_TMP_0;
  if (!((sproc->state) == requesting)) {
    __CPROVER_assume(!((sproc->state) == requesting));
    if (!((sproc->state) == locking)) {
      __CPROVER_assume(!((sproc->state) == locking));
      __CPAchecker_TMP_0 = 0;
      goto label_967;
    }

    else if ((sproc->state) == locking) {
      __CPROVER_assume((sproc->state) == locking);
      goto label_964;
      label_964: ;
      __CPAchecker_TMP_0 = 1;
      goto label_967;
    }

  }

  else if ((sproc->state) == requesting) {
    __CPROVER_assume((sproc->state) == requesting);
    goto label_964;
  }

  label_967: ;
  *req = __CPAchecker_TMP_0;
}

void proc_30(struct state_elements_proc *sproc, _Bool clk, _Bool ack, _Bool choice, _Bool *req) {
  int idle = 0;
  int requesting = 1;
  int locking = 2;
  if ((sproc->state) == idle) {
    __CPROVER_assume((sproc->state) == idle);
    if (!(choice == 0)) {
      __CPROVER_assume(!(choice == 0));
      sproc->state = requesting;
      goto label_998;
    }

    else if (choice == 0) {
      __CPROVER_assume(choice == 0);
      goto label_998;
    }

    label_998: ;
    goto label_1000;
  }

  else if (!((sproc->state) == idle)) {
    __CPROVER_assume(!((sproc->state) == idle));
    if ((sproc->state) == requesting) {
      __CPROVER_assume((sproc->state) == requesting);
      if (!(ack == 0)) {
        __CPROVER_assume(!(ack == 0));
        sproc->state = locking;
        goto label_991;
      }

      else if (ack == 0) {
        __CPROVER_assume(ack == 0);
        goto label_991;
      }

      label_991: ;
      goto label_1000;
    }

    else if (!((sproc->state) == requesting)) {
      __CPROVER_assume(!((sproc->state) == requesting));
      if ((sproc->state) == locking) {
        __CPROVER_assume((sproc->state) == locking);
        if (choice == 0) {
          __CPROVER_assume(choice == 0);
          goto label_1000;
        }

        else if (!(choice == 0)) {
          __CPROVER_assume(!(choice == 0));
          sproc->state = idle;
          goto label_1000;
        }

      }

      else if (!((sproc->state) == locking)) {
        __CPROVER_assume(!((sproc->state) == locking));
        goto label_1000;
      }

    }

  }

  label_1000: ;
  int __CPAchecker_TMP_0;
  if (!((sproc->state) == requesting)) {
    __CPROVER_assume(!((sproc->state) == requesting));
    if (!((sproc->state) == locking)) {
      __CPROVER_assume(!((sproc->state) == locking));
      __CPAchecker_TMP_0 = 0;
      goto label_1009;
    }

    else if ((sproc->state) == locking) {
      __CPROVER_assume((sproc->state) == locking);
      goto label_1006;
      label_1006: ;
      __CPAchecker_TMP_0 = 1;
      goto label_1009;
    }

  }

  else if ((sproc->state) == requesting) {
    __CPROVER_assume((sproc->state) == requesting);
    goto label_1006;
  }

  label_1009: ;
  *req = __CPAchecker_TMP_0;
}
