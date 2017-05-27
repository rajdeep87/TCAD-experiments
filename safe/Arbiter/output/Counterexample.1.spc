CONTROL AUTOMATON ErrorPath1

INITIAL STATE ARG0;

STATE USEFIRST ARG0 :
    MATCH "" -> GOTO ARG1;
    TRUE -> STOP;

STATE USEFIRST ARG1 :
    MATCH "typedef long unsigned int size_t;" -> GOTO ARG2_1_1;
STATE USEFIRST ARG2_0_1 :
    MATCH "typedef long unsigned int size_t;" -> GOTO ARG2_1_1;
STATE USEFIRST ARG2_1_1 :
    MATCH "typedef unsigned char __u_char;" -> GOTO ARG2_2_1;
STATE USEFIRST ARG2_2_1 :
    MATCH "typedef unsigned short int __u_short;" -> GOTO ARG2_3_1;
STATE USEFIRST ARG2_3_1 :
    MATCH "typedef unsigned int __u_int;" -> GOTO ARG2_4_1;
STATE USEFIRST ARG2_4_1 :
    MATCH "typedef unsigned long int __u_long;" -> GOTO ARG2_5_1;
STATE USEFIRST ARG2_5_1 :
    MATCH "typedef signed char __int8_t;" -> GOTO ARG2_6_1;
STATE USEFIRST ARG2_6_1 :
    MATCH "typedef unsigned char __uint8_t;" -> GOTO ARG2_7_1;
STATE USEFIRST ARG2_7_1 :
    MATCH "typedef signed short int __int16_t;" -> GOTO ARG2_8_1;
STATE USEFIRST ARG2_8_1 :
    MATCH "typedef unsigned short int __uint16_t;" -> GOTO ARG2_9_1;
STATE USEFIRST ARG2_9_1 :
    MATCH "typedef signed int __int32_t;" -> GOTO ARG2_10_1;
STATE USEFIRST ARG2_10_1 :
    MATCH "typedef unsigned int __uint32_t;" -> GOTO ARG2_11_1;
STATE USEFIRST ARG2_11_1 :
    MATCH "typedef signed long int __int64_t;" -> GOTO ARG2_12_1;
STATE USEFIRST ARG2_12_1 :
    MATCH "typedef unsigned long int __uint64_t;" -> GOTO ARG2_13_1;
STATE USEFIRST ARG2_13_1 :
    MATCH "typedef long int __quad_t;" -> GOTO ARG2_14_1;
STATE USEFIRST ARG2_14_1 :
    MATCH "typedef unsigned long int __u_quad_t;" -> GOTO ARG2_15_1;
STATE USEFIRST ARG2_15_1 :
    MATCH "typedef unsigned long int __dev_t;" -> GOTO ARG2_16_1;
STATE USEFIRST ARG2_16_1 :
    MATCH "typedef unsigned int __uid_t;" -> GOTO ARG2_17_1;
STATE USEFIRST ARG2_17_1 :
    MATCH "typedef unsigned int __gid_t;" -> GOTO ARG2_18_1;
STATE USEFIRST ARG2_18_1 :
    MATCH "typedef unsigned long int __ino_t;" -> GOTO ARG2_19_1;
STATE USEFIRST ARG2_19_1 :
    MATCH "typedef unsigned long int __ino64_t;" -> GOTO ARG2_20_1;
STATE USEFIRST ARG2_20_1 :
    MATCH "typedef unsigned int __mode_t;" -> GOTO ARG2_21_1;
STATE USEFIRST ARG2_21_1 :
    MATCH "typedef unsigned long int __nlink_t;" -> GOTO ARG2_22_1;
STATE USEFIRST ARG2_22_1 :
    MATCH "typedef long int __off_t;" -> GOTO ARG2_23_1;
STATE USEFIRST ARG2_23_1 :
    MATCH "typedef long int __off64_t;" -> GOTO ARG2_24_1;
STATE USEFIRST ARG2_24_1 :
    MATCH "typedef int __pid_t;" -> GOTO ARG2_25_1;
STATE USEFIRST ARG2_25_1 :
    MATCH "typedef struct { int __val[2]; } __fsid_t;" -> GOTO ARG2_26_1;
STATE USEFIRST ARG2_26_1 :
    MATCH "typedef struct { int __val[2]; } __fsid_t;" -> GOTO ARG2_27_1;
STATE USEFIRST ARG2_27_1 :
    MATCH "typedef long int __clock_t;" -> GOTO ARG2_28_1;
STATE USEFIRST ARG2_28_1 :
    MATCH "typedef unsigned long int __rlim_t;" -> GOTO ARG2_29_1;
STATE USEFIRST ARG2_29_1 :
    MATCH "typedef unsigned long int __rlim64_t;" -> GOTO ARG2_30_1;
STATE USEFIRST ARG2_30_1 :
    MATCH "typedef unsigned int __id_t;" -> GOTO ARG2_31_1;
STATE USEFIRST ARG2_31_1 :
    MATCH "typedef long int __time_t;" -> GOTO ARG2_32_1;
STATE USEFIRST ARG2_32_1 :
    MATCH "typedef unsigned int __useconds_t;" -> GOTO ARG2_33_1;
STATE USEFIRST ARG2_33_1 :
    MATCH "typedef long int __suseconds_t;" -> GOTO ARG2_34_1;
STATE USEFIRST ARG2_34_1 :
    MATCH "typedef int __daddr_t;" -> GOTO ARG2_35_1;
STATE USEFIRST ARG2_35_1 :
    MATCH "typedef int __key_t;" -> GOTO ARG2_36_1;
STATE USEFIRST ARG2_36_1 :
    MATCH "typedef int __clockid_t;" -> GOTO ARG2_37_1;
STATE USEFIRST ARG2_37_1 :
    MATCH "typedef void * __timer_t;" -> GOTO ARG2_38_1;
STATE USEFIRST ARG2_38_1 :
    MATCH "typedef long int __blksize_t;" -> GOTO ARG2_39_1;
STATE USEFIRST ARG2_39_1 :
    MATCH "typedef long int __blkcnt_t;" -> GOTO ARG2_40_1;
STATE USEFIRST ARG2_40_1 :
    MATCH "typedef long int __blkcnt64_t;" -> GOTO ARG2_41_1;
STATE USEFIRST ARG2_41_1 :
    MATCH "typedef unsigned long int __fsblkcnt_t;" -> GOTO ARG2_42_1;
STATE USEFIRST ARG2_42_1 :
    MATCH "typedef unsigned long int __fsblkcnt64_t;" -> GOTO ARG2_43_1;
STATE USEFIRST ARG2_43_1 :
    MATCH "typedef unsigned long int __fsfilcnt_t;" -> GOTO ARG2_44_1;
STATE USEFIRST ARG2_44_1 :
    MATCH "typedef unsigned long int __fsfilcnt64_t;" -> GOTO ARG2_45_1;
STATE USEFIRST ARG2_45_1 :
    MATCH "typedef long int __fsword_t;" -> GOTO ARG2_46_1;
STATE USEFIRST ARG2_46_1 :
    MATCH "typedef long int __ssize_t;" -> GOTO ARG2_47_1;
STATE USEFIRST ARG2_47_1 :
    MATCH "typedef long int __syscall_slong_t;" -> GOTO ARG2_48_1;
STATE USEFIRST ARG2_48_1 :
    MATCH "typedef unsigned long int __syscall_ulong_t;" -> GOTO ARG2_49_1;
STATE USEFIRST ARG2_49_1 :
    MATCH "typedef __off64_t __loff_t;" -> GOTO ARG2_50_1;
STATE USEFIRST ARG2_50_1 :
    MATCH "typedef __quad_t *__qaddr_t;" -> GOTO ARG2_51_1;
STATE USEFIRST ARG2_51_1 :
    MATCH "typedef char *__caddr_t;" -> GOTO ARG2_52_1;
STATE USEFIRST ARG2_52_1 :
    MATCH "typedef long int __intptr_t;" -> GOTO ARG2_53_1;
STATE USEFIRST ARG2_53_1 :
    MATCH "typedef unsigned int __socklen_t;" -> GOTO ARG2_54_1;
STATE USEFIRST ARG2_54_1 :
    MATCH "struct _IO_FILE;" -> GOTO ARG2_55_1;
STATE USEFIRST ARG2_55_1 :
    MATCH "typedef struct _IO_FILE FILE;" -> GOTO ARG2_56_1;
STATE USEFIRST ARG2_56_1 :
    MATCH "typedef struct _IO_FILE __FILE;" -> GOTO ARG2_57_1;
STATE USEFIRST ARG2_57_1 :
    MATCH "typedef struct\n{\n  int __count;\n  union\n  {\n\n    unsigned int __wch;\n\n\n\n    char __wchb[4];\n  } __value;\n} __mbstate_t;" -> GOTO ARG2_58_1;
STATE USEFIRST ARG2_58_1 :
    MATCH "typedef struct\n{\n  int __count;\n  union\n  {\n\n    unsigned int __wch;\n\n\n\n    char __wchb[4];\n  } __value;\n} __mbstate_t;" -> GOTO ARG2_59_1;
STATE USEFIRST ARG2_59_1 :
    MATCH "typedef struct\n{\n  int __count;\n  union\n  {\n\n    unsigned int __wch;\n\n\n\n    char __wchb[4];\n  } __value;\n} __mbstate_t;" -> GOTO ARG2_60_1;
STATE USEFIRST ARG2_60_1 :
    MATCH "typedef struct\n{\n  __off_t __pos;\n  __mbstate_t __state;\n} _G_fpos_t;" -> GOTO ARG2_61_1;
STATE USEFIRST ARG2_61_1 :
    MATCH "typedef struct\n{\n  __off_t __pos;\n  __mbstate_t __state;\n} _G_fpos_t;" -> GOTO ARG2_62_1;
STATE USEFIRST ARG2_62_1 :
    MATCH "typedef struct\n{\n  __off64_t __pos;\n  __mbstate_t __state;\n} _G_fpos64_t;" -> GOTO ARG2_63_1;
STATE USEFIRST ARG2_63_1 :
    MATCH "typedef struct\n{\n  __off64_t __pos;\n  __mbstate_t __state;\n} _G_fpos64_t;" -> GOTO ARG2_64_1;
STATE USEFIRST ARG2_64_1 :
    MATCH "typedef __builtin_va_list __gnuc_va_list;" -> GOTO ARG2_65_1;
STATE USEFIRST ARG2_65_1 :
    MATCH "struct _IO_jump_t;" -> GOTO ARG2_66_1;
STATE USEFIRST ARG2_66_1 :
    MATCH "typedef void _IO_lock_t;" -> GOTO ARG2_67_1;
STATE USEFIRST ARG2_67_1 :
    MATCH "struct _IO_marker {\n  struct _IO_marker *_next;\n  struct _IO_FILE *_sbuf;\n\n\n\n  int _pos;\n# 173 \"/usr/include/libio.h\" 3 4\n};" -> GOTO ARG2_68_1;
STATE USEFIRST ARG2_68_1 :
    MATCH "enum __codecvt_result\n{\n  __codecvt_ok,\n  __codecvt_partial,\n  __codecvt_error,\n  __codecvt_noconv\n};" -> GOTO ARG2_69_1;
STATE USEFIRST ARG2_69_1 :
    MATCH "struct _IO_FILE {\n  int _flags;\n\n\n\n\n  char* _IO_read_ptr;\n  char* _IO_read_end;\n  char* _IO_read_base;\n  char* _IO_write_base;\n  char* _IO_write_ptr;\n  char* _IO_write_end;\n  char* _IO_buf_base;\n  char* _IO_buf_end;\n\n  char *_IO_save_base;\n  char *_IO_backup_base;\n  char *_IO_save_end;\n\n  struct _IO_marker *_markers;\n\n  struct _IO_FILE *_chain;\n\n  int _fileno;\n\n\n\n  int _flags2;\n\n  __off_t _old_offset;\n\n\n\n  unsigned short _cur_column;\n  signed char _vtable_offset;\n  char _shortbuf[1];\n\n\n\n  _IO_lock_t *_lock;\n# 289 \"/usr/include/libio.h\" 3 4\n  __off64_t _offset;\n\n\n\n\n\n\n\n  void *__pad1;\n  void *__pad2;\n  void *__pad3;\n  void *__pad4;\n\n  size_t __pad5;\n  int _mode;\n\n  char _unused2[15 * sizeof (int) - 4 * sizeof (void *) - sizeof (size_t)];\n\n};" -> GOTO ARG2_70_1;
STATE USEFIRST ARG2_70_1 :
    MATCH "typedef struct _IO_FILE _IO_FILE;" -> GOTO ARG2_71_1;
STATE USEFIRST ARG2_71_1 :
    MATCH "struct _IO_FILE_plus;" -> GOTO ARG2_72_1;
STATE USEFIRST ARG2_72_1 :
    MATCH "extern struct _IO_FILE_plus _IO_2_1_stdin_;" -> GOTO ARG2_73_1;
STATE USEFIRST ARG2_73_1 :
    MATCH "extern struct _IO_FILE_plus _IO_2_1_stdout_;" -> GOTO ARG2_74_1;
STATE USEFIRST ARG2_74_1 :
    MATCH "extern struct _IO_FILE_plus _IO_2_1_stderr_;" -> GOTO ARG2_75_1;
STATE USEFIRST ARG2_75_1 :
    MATCH "typedef __ssize_t __io_read_fn (void *__cookie, char *__buf, size_t __nbytes);" -> GOTO ARG2_76_1;
STATE USEFIRST ARG2_76_1 :
    MATCH "typedef __ssize_t __io_write_fn (void *__cookie, const char *__buf,\n     size_t __n);" -> GOTO ARG2_77_1;
STATE USEFIRST ARG2_77_1 :
    MATCH "typedef int __io_seek_fn (void *__cookie, __off64_t *__pos, int __w);" -> GOTO ARG2_78_1;
STATE USEFIRST ARG2_78_1 :
    MATCH "typedef int __io_close_fn (void *__cookie);" -> GOTO ARG2_79_1;
STATE USEFIRST ARG2_79_1 :
    MATCH "extern int __underflow (_IO_FILE *);" -> GOTO ARG2_80_1;
STATE USEFIRST ARG2_80_1 :
    MATCH "extern int __uflow (_IO_FILE *);" -> GOTO ARG2_81_1;
STATE USEFIRST ARG2_81_1 :
    MATCH "extern int __overflow (_IO_FILE *, int);" -> GOTO ARG2_82_1;
STATE USEFIRST ARG2_82_1 :
    MATCH "extern int _IO_getc (_IO_FILE *__fp);" -> GOTO ARG2_83_1;
STATE USEFIRST ARG2_83_1 :
    MATCH "extern int _IO_putc (int __c, _IO_FILE *__fp);" -> GOTO ARG2_84_1;
STATE USEFIRST ARG2_84_1 :
    MATCH "extern int _IO_feof (_IO_FILE *__fp) __attribute__ ((__nothrow__ , __leaf__));" -> GOTO ARG2_85_1;
STATE USEFIRST ARG2_85_1 :
    MATCH "extern int _IO_ferror (_IO_FILE *__fp) __attribute__ ((__nothrow__ , __leaf__));" -> GOTO ARG2_86_1;
STATE USEFIRST ARG2_86_1 :
    MATCH "extern int _IO_peekc_locked (_IO_FILE *__fp);" -> GOTO ARG2_87_1;
STATE USEFIRST ARG2_87_1 :
    MATCH "extern void _IO_flockfile (_IO_FILE *) __attribute__ ((__nothrow__ , __leaf__));" -> GOTO ARG2_88_1;
STATE USEFIRST ARG2_88_1 :
    MATCH "extern void _IO_funlockfile (_IO_FILE *) __attribute__ ((__nothrow__ , __leaf__));" -> GOTO ARG2_89_1;
STATE USEFIRST ARG2_89_1 :
    MATCH "extern int _IO_ftrylockfile (_IO_FILE *) __attribute__ ((__nothrow__ , __leaf__));" -> GOTO ARG2_90_1;
STATE USEFIRST ARG2_90_1 :
    MATCH "extern int _IO_vfscanf (_IO_FILE * __restrict, const char * __restrict,\n   __gnuc_va_list, int *__restrict);" -> GOTO ARG2_91_1;
STATE USEFIRST ARG2_91_1 :
    MATCH "extern int _IO_vfprintf (_IO_FILE *__restrict, const char *__restrict,\n    __gnuc_va_list);" -> GOTO ARG2_92_1;
STATE USEFIRST ARG2_92_1 :
    MATCH "extern __ssize_t _IO_padn (_IO_FILE *, int, __ssize_t);" -> GOTO ARG2_93_1;
STATE USEFIRST ARG2_93_1 :
    MATCH "extern size_t _IO_sgetn (_IO_FILE *, void *, size_t);" -> GOTO ARG2_94_1;
STATE USEFIRST ARG2_94_1 :
    MATCH "extern __off64_t _IO_seekoff (_IO_FILE *, __off64_t, int, int);" -> GOTO ARG2_95_1;
STATE USEFIRST ARG2_95_1 :
    MATCH "extern __off64_t _IO_seekpos (_IO_FILE *, __off64_t, int);" -> GOTO ARG2_96_1;
STATE USEFIRST ARG2_96_1 :
    MATCH "extern void _IO_free_backup_area (_IO_FILE *) __attribute__ ((__nothrow__ , __leaf__));" -> GOTO ARG2_97_1;
STATE USEFIRST ARG2_97_1 :
    MATCH "typedef __gnuc_va_list va_list;" -> GOTO ARG2_98_1;
STATE USEFIRST ARG2_98_1 :
    MATCH "typedef __off_t off_t;" -> GOTO ARG2_99_1;
STATE USEFIRST ARG2_99_1 :
    MATCH "typedef __ssize_t ssize_t;" -> GOTO ARG2_100_1;
STATE USEFIRST ARG2_100_1 :
    MATCH "typedef _G_fpos_t fpos_t;" -> GOTO ARG2_101_1;
STATE USEFIRST ARG2_101_1 :
    MATCH "extern struct _IO_FILE *stdin;" -> GOTO ARG2_102_1;
STATE USEFIRST ARG2_102_1 :
    MATCH "extern struct _IO_FILE *stdout;" -> GOTO ARG2_103_1;
STATE USEFIRST ARG2_103_1 :
    MATCH "extern struct _IO_FILE *stderr;" -> GOTO ARG2_104_1;
STATE USEFIRST ARG2_104_1 :
    MATCH "extern int remove (const char *__filename) __attribute__ ((__nothrow__ , __leaf__));" -> GOTO ARG2_105_1;
STATE USEFIRST ARG2_105_1 :
    MATCH "extern int rename (const char *__old, const char *__new) __attribute__ ((__nothrow__ , __leaf__));" -> GOTO ARG2_106_1;
STATE USEFIRST ARG2_106_1 :
    MATCH "extern int renameat (int __oldfd, const char *__old, int __newfd,\n       const char *__new) __attribute__ ((__nothrow__ , __leaf__));" -> GOTO ARG2_107_1;
STATE USEFIRST ARG2_107_1 :
    MATCH "extern FILE *tmpfile (void) ;" -> GOTO ARG2_108_1;
STATE USEFIRST ARG2_108_1 :
    MATCH "extern char *tmpnam (char *__s) __attribute__ ((__nothrow__ , __leaf__)) ;" -> GOTO ARG2_109_1;
STATE USEFIRST ARG2_109_1 :
    MATCH "extern char *tmpnam_r (char *__s) __attribute__ ((__nothrow__ , __leaf__)) ;" -> GOTO ARG2_110_1;
STATE USEFIRST ARG2_110_1 :
    MATCH "extern char *tempnam (const char *__dir, const char *__pfx)\n     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) ;" -> GOTO ARG2_111_1;
STATE USEFIRST ARG2_111_1 :
    MATCH "extern int fclose (FILE *__stream);" -> GOTO ARG2_112_1;
STATE USEFIRST ARG2_112_1 :
    MATCH "extern int fflush (FILE *__stream);" -> GOTO ARG2_113_1;
STATE USEFIRST ARG2_113_1 :
    MATCH "extern int fflush_unlocked (FILE *__stream);" -> GOTO ARG2_114_1;
STATE USEFIRST ARG2_114_1 :
    MATCH "extern FILE *fopen (const char *__restrict __filename,\n      const char *__restrict __modes) ;" -> GOTO ARG2_115_1;
STATE USEFIRST ARG2_115_1 :
    MATCH "extern FILE *freopen (const char *__restrict __filename,\n        const char *__restrict __modes,\n        FILE *__restrict __stream) ;" -> GOTO ARG2_116_1;
STATE USEFIRST ARG2_116_1 :
    MATCH "extern FILE *fdopen (int __fd, const char *__modes) __attribute__ ((__nothrow__ , __leaf__)) ;" -> GOTO ARG2_117_1;
STATE USEFIRST ARG2_117_1 :
    MATCH "extern FILE *fmemopen (void *__s, size_t __len, const char *__modes)\n  __attribute__ ((__nothrow__ , __leaf__)) ;" -> GOTO ARG2_118_1;
STATE USEFIRST ARG2_118_1 :
    MATCH "extern FILE *open_memstream (char **__bufloc, size_t *__sizeloc) __attribute__ ((__nothrow__ , __leaf__)) ;" -> GOTO ARG2_119_1;
STATE USEFIRST ARG2_119_1 :
    MATCH "extern void setbuf (FILE *__restrict __stream, char *__restrict __buf) __attribute__ ((__nothrow__ , __leaf__));" -> GOTO ARG2_120_1;
STATE USEFIRST ARG2_120_1 :
    MATCH "extern int setvbuf (FILE *__restrict __stream, char *__restrict __buf,\n      int __modes, size_t __n) __attribute__ ((__nothrow__ , __leaf__));" -> GOTO ARG2_121_1;
STATE USEFIRST ARG2_121_1 :
    MATCH "extern void setbuffer (FILE *__restrict __stream, char *__restrict __buf,\n         size_t __size) __attribute__ ((__nothrow__ , __leaf__));" -> GOTO ARG2_122_1;
STATE USEFIRST ARG2_122_1 :
    MATCH "extern void setlinebuf (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));" -> GOTO ARG2_123_1;
STATE USEFIRST ARG2_123_1 :
    MATCH "extern int fprintf (FILE *__restrict __stream,\n      const char *__restrict __format, ...);" -> GOTO ARG2_124_1;
STATE USEFIRST ARG2_124_1 :
    MATCH "extern int printf (const char *__restrict __format, ...);" -> GOTO ARG2_125_1;
STATE USEFIRST ARG2_125_1 :
    MATCH "extern int sprintf (char *__restrict __s,\n      const char *__restrict __format, ...) __attribute__ ((__nothrow__));" -> GOTO ARG2_126_1;
STATE USEFIRST ARG2_126_1 :
    MATCH "extern int vfprintf (FILE *__restrict __s, const char *__restrict __format,\n       __gnuc_va_list __arg);" -> GOTO ARG2_127_1;
STATE USEFIRST ARG2_127_1 :
    MATCH "extern int vprintf (const char *__restrict __format, __gnuc_va_list __arg);" -> GOTO ARG2_128_1;
STATE USEFIRST ARG2_128_1 :
    MATCH "extern int vsprintf (char *__restrict __s, const char *__restrict __format,\n       __gnuc_va_list __arg) __attribute__ ((__nothrow__));" -> GOTO ARG2_129_1;
STATE USEFIRST ARG2_129_1 :
    MATCH "extern int snprintf (char *__restrict __s, size_t __maxlen,\n       const char *__restrict __format, ...)\n     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 4)));" -> GOTO ARG2_130_1;
STATE USEFIRST ARG2_130_1 :
    MATCH "extern int vsnprintf (char *__restrict __s, size_t __maxlen,\n        const char *__restrict __format, __gnuc_va_list __arg)\n     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 0)));" -> GOTO ARG2_131_1;
STATE USEFIRST ARG2_131_1 :
    MATCH "extern int vdprintf (int __fd, const char *__restrict __fmt,\n       __gnuc_va_list __arg)\n     __attribute__ ((__format__ (__printf__, 2, 0)));" -> GOTO ARG2_132_1;
STATE USEFIRST ARG2_132_1 :
    MATCH "extern int dprintf (int __fd, const char *__restrict __fmt, ...)\n     __attribute__ ((__format__ (__printf__, 2, 3)));" -> GOTO ARG2_133_1;
STATE USEFIRST ARG2_133_1 :
    MATCH "extern int fscanf (FILE *__restrict __stream,\n     const char *__restrict __format, ...) ;" -> GOTO ARG2_134_1;
STATE USEFIRST ARG2_134_1 :
    MATCH "extern int scanf (const char *__restrict __format, ...) ;" -> GOTO ARG2_135_1;
STATE USEFIRST ARG2_135_1 :
    MATCH "extern int sscanf (const char *__restrict __s,\n     const char *__restrict __format, ...) __attribute__ ((__nothrow__ , __leaf__));" -> GOTO ARG2_136_1;
STATE USEFIRST ARG2_136_1 :
    MATCH "extern int vfscanf (FILE *__restrict __s, const char *__restrict __format,\n      __gnuc_va_list __arg)\n     __attribute__ ((__format__ (__scanf__, 2, 0))) ;" -> GOTO ARG2_137_1;
STATE USEFIRST ARG2_137_1 :
    MATCH "extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg)\n     __attribute__ ((__format__ (__scanf__, 1, 0))) ;" -> GOTO ARG2_138_1;
STATE USEFIRST ARG2_138_1 :
    MATCH "extern int vsscanf (const char *__restrict __s,\n      const char *__restrict __format, __gnuc_va_list __arg)\n     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__format__ (__scanf__, 2, 0)));" -> GOTO ARG2_139_1;
STATE USEFIRST ARG2_139_1 :
    MATCH "extern int fgetc (FILE *__stream);" -> GOTO ARG2_140_1;
STATE USEFIRST ARG2_140_1 :
    MATCH "extern int getc (FILE *__stream);" -> GOTO ARG2_141_1;
STATE USEFIRST ARG2_141_1 :
    MATCH "extern int getchar (void);" -> GOTO ARG2_142_1;
STATE USEFIRST ARG2_142_1 :
    MATCH "extern int getc_unlocked (FILE *__stream);" -> GOTO ARG2_143_1;
STATE USEFIRST ARG2_143_1 :
    MATCH "extern int getchar_unlocked (void);" -> GOTO ARG2_144_1;
STATE USEFIRST ARG2_144_1 :
    MATCH "extern int fgetc_unlocked (FILE *__stream);" -> GOTO ARG2_145_1;
STATE USEFIRST ARG2_145_1 :
    MATCH "extern int fputc (int __c, FILE *__stream);" -> GOTO ARG2_146_1;
STATE USEFIRST ARG2_146_1 :
    MATCH "extern int putc (int __c, FILE *__stream);" -> GOTO ARG2_147_1;
STATE USEFIRST ARG2_147_1 :
    MATCH "extern int putchar (int __c);" -> GOTO ARG2_148_1;
STATE USEFIRST ARG2_148_1 :
    MATCH "extern int fputc_unlocked (int __c, FILE *__stream);" -> GOTO ARG2_149_1;
STATE USEFIRST ARG2_149_1 :
    MATCH "extern int putc_unlocked (int __c, FILE *__stream);" -> GOTO ARG2_150_1;
STATE USEFIRST ARG2_150_1 :
    MATCH "extern int putchar_unlocked (int __c);" -> GOTO ARG2_151_1;
STATE USEFIRST ARG2_151_1 :
    MATCH "extern int getw (FILE *__stream);" -> GOTO ARG2_152_1;
STATE USEFIRST ARG2_152_1 :
    MATCH "extern int putw (int __w, FILE *__stream);" -> GOTO ARG2_153_1;
STATE USEFIRST ARG2_153_1 :
    MATCH "extern char *fgets (char *__restrict __s, int __n, FILE *__restrict __stream)\n     ;" -> GOTO ARG2_154_1;
STATE USEFIRST ARG2_154_1 :
    MATCH "extern __ssize_t __getdelim (char **__restrict __lineptr,\n          size_t *__restrict __n, int __delimiter,\n          FILE *__restrict __stream) ;" -> GOTO ARG2_155_1;
STATE USEFIRST ARG2_155_1 :
    MATCH "extern __ssize_t getdelim (char **__restrict __lineptr,\n        size_t *__restrict __n, int __delimiter,\n        FILE *__restrict __stream) ;" -> GOTO ARG2_156_1;
STATE USEFIRST ARG2_156_1 :
    MATCH "extern __ssize_t getline (char **__restrict __lineptr,\n       size_t *__restrict __n,\n       FILE *__restrict __stream) ;" -> GOTO ARG2_157_1;
STATE USEFIRST ARG2_157_1 :
    MATCH "extern int fputs (const char *__restrict __s, FILE *__restrict __stream);" -> GOTO ARG2_158_1;
STATE USEFIRST ARG2_158_1 :
    MATCH "extern int puts (const char *__s);" -> GOTO ARG2_159_1;
STATE USEFIRST ARG2_159_1 :
    MATCH "extern int ungetc (int __c, FILE *__stream);" -> GOTO ARG2_160_1;
STATE USEFIRST ARG2_160_1 :
    MATCH "extern size_t fread (void *__restrict __ptr, size_t __size,\n       size_t __n, FILE *__restrict __stream) ;" -> GOTO ARG2_161_1;
STATE USEFIRST ARG2_161_1 :
    MATCH "extern size_t fwrite (const void *__restrict __ptr, size_t __size,\n        size_t __n, FILE *__restrict __s);" -> GOTO ARG2_162_1;
STATE USEFIRST ARG2_162_1 :
    MATCH "extern size_t fread_unlocked (void *__restrict __ptr, size_t __size,\n         size_t __n, FILE *__restrict __stream) ;" -> GOTO ARG2_163_1;
STATE USEFIRST ARG2_163_1 :
    MATCH "extern size_t fwrite_unlocked (const void *__restrict __ptr, size_t __size,\n          size_t __n, FILE *__restrict __stream);" -> GOTO ARG2_164_1;
STATE USEFIRST ARG2_164_1 :
    MATCH "extern int fseek (FILE *__stream, long int __off, int __whence);" -> GOTO ARG2_165_1;
STATE USEFIRST ARG2_165_1 :
    MATCH "extern long int ftell (FILE *__stream) ;" -> GOTO ARG2_166_1;
STATE USEFIRST ARG2_166_1 :
    MATCH "extern void rewind (FILE *__stream);" -> GOTO ARG2_167_1;
STATE USEFIRST ARG2_167_1 :
    MATCH "extern int fseeko (FILE *__stream, __off_t __off, int __whence);" -> GOTO ARG2_168_1;
STATE USEFIRST ARG2_168_1 :
    MATCH "extern __off_t ftello (FILE *__stream) ;" -> GOTO ARG2_169_1;
STATE USEFIRST ARG2_169_1 :
    MATCH "extern int fgetpos (FILE *__restrict __stream, fpos_t *__restrict __pos);" -> GOTO ARG2_170_1;
STATE USEFIRST ARG2_170_1 :
    MATCH "extern int fsetpos (FILE *__stream, const fpos_t *__pos);" -> GOTO ARG2_171_1;
STATE USEFIRST ARG2_171_1 :
    MATCH "extern void clearerr (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));" -> GOTO ARG2_172_1;
STATE USEFIRST ARG2_172_1 :
    MATCH "extern int feof (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;" -> GOTO ARG2_173_1;
STATE USEFIRST ARG2_173_1 :
    MATCH "extern int ferror (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;" -> GOTO ARG2_174_1;
STATE USEFIRST ARG2_174_1 :
    MATCH "extern void clearerr_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));" -> GOTO ARG2_175_1;
STATE USEFIRST ARG2_175_1 :
    MATCH "extern int feof_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;" -> GOTO ARG2_176_1;
STATE USEFIRST ARG2_176_1 :
    MATCH "extern int ferror_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;" -> GOTO ARG2_177_1;
STATE USEFIRST ARG2_177_1 :
    MATCH "extern void perror (const char *__s);" -> GOTO ARG2_178_1;
STATE USEFIRST ARG2_178_1 :
    MATCH "extern int sys_nerr;" -> GOTO ARG2_179_1;
STATE USEFIRST ARG2_179_1 :
    MATCH "extern const char *const sys_errlist[];" -> GOTO ARG2_180_1;
STATE USEFIRST ARG2_180_1 :
    MATCH "extern int fileno (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;" -> GOTO ARG2_181_1;
STATE USEFIRST ARG2_181_1 :
    MATCH "extern int fileno_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;" -> GOTO ARG2_182_1;
STATE USEFIRST ARG2_182_1 :
    MATCH "extern FILE *popen (const char *__command, const char *__modes) ;" -> GOTO ARG2_183_1;
STATE USEFIRST ARG2_183_1 :
    MATCH "extern int pclose (FILE *__stream);" -> GOTO ARG2_184_1;
STATE USEFIRST ARG2_184_1 :
    MATCH "extern char *ctermid (char *__s) __attribute__ ((__nothrow__ , __leaf__));" -> GOTO ARG2_185_1;
STATE USEFIRST ARG2_185_1 :
    MATCH "extern void flockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));" -> GOTO ARG2_186_1;
STATE USEFIRST ARG2_186_1 :
    MATCH "extern int ftrylockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;" -> GOTO ARG2_187_1;
STATE USEFIRST ARG2_187_1 :
    MATCH "extern void funlockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));" -> GOTO ARG2_188_1;
STATE USEFIRST ARG2_188_1 :
    MATCH "extern void __assert_fail (const char *__assertion, const char *__file,\n      unsigned int __line, const char *__function)\n     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));" -> GOTO ARG2_189_1;
STATE USEFIRST ARG2_189_1 :
    MATCH "extern void __assert_perror_fail (int __errnum, const char *__file,\n      unsigned int __line, const char *__function)\n     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));" -> GOTO ARG2_190_1;
STATE USEFIRST ARG2_190_1 :
    MATCH "extern void __assert (const char *__assertion, const char *__file, int __line)\n     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));" -> GOTO ARG2_191_1;
STATE USEFIRST ARG2_191_1 :
    MATCH "int A = 0;" -> GOTO ARG2_192_1;
STATE USEFIRST ARG2_192_1 :
    MATCH "int B = 1;" -> GOTO ARG2_193_1;
STATE USEFIRST ARG2_193_1 :
    MATCH "int C = 2;" -> GOTO ARG2_194_1;
STATE USEFIRST ARG2_194_1 :
    MATCH "int X = 3;" -> GOTO ARG2_195_1;
STATE USEFIRST ARG2_195_1 :
    MATCH "struct state_elements_controller{\n  _Bool ack;\n  unsigned char state;\n  _Bool pass_token;\n};" -> GOTO ARG2_196_1;
STATE USEFIRST ARG2_196_1 :
    MATCH "struct state_elements_controller scontroller;" -> GOTO ARG2_197_1;
STATE USEFIRST ARG2_197_1 :
    MATCH "void controller_initial()" -> GOTO ARG2_198_1;
STATE USEFIRST ARG2_198_1 :
    MATCH "void controller(_Bool clk, _Bool req, _Bool *ack, unsigned char sel, _Bool *pass_token, unsigned char id)" -> GOTO ARG2_199_1;
STATE USEFIRST ARG2_199_1 :
    MATCH "struct state_elements_arbiter{\n  unsigned char state;\n};" -> GOTO ARG2_200_1;
STATE USEFIRST ARG2_200_1 :
    MATCH "struct state_elements_arbiter sarbiter;" -> GOTO ARG2_201_1;
STATE USEFIRST ARG2_201_1 :
    MATCH "void arbiter_initial()" -> GOTO ARG2_202_1;
STATE USEFIRST ARG2_202_1 :
    MATCH "void arbiter(_Bool clk, unsigned char *sel, _Bool active)" -> GOTO ARG2_203_1;
STATE USEFIRST ARG2_203_1 :
    MATCH "struct state_elements_client{\n  unsigned char state;\n  _Bool req;\n};" -> GOTO ARG2_204_1;
STATE USEFIRST ARG2_204_1 :
    MATCH "struct state_elements_client sclient;" -> GOTO ARG2_205_1;
STATE USEFIRST ARG2_205_1 :
    MATCH "void client_initial()" -> GOTO ARG2_206_1;
STATE USEFIRST ARG2_206_1 :
    MATCH "void client(_Bool clk, _Bool *req, _Bool ack)" -> GOTO ARG2_207_1;
STATE USEFIRST ARG2_207_1 :
    MATCH "void main()" -> GOTO ARG2_208_1;
STATE USEFIRST ARG2_208_1 :
    MATCH "" -> GOTO ARG2_209_1;
STATE USEFIRST ARG2_209_1 :
    MATCH "_Bool clk, ackA, ackB, ackC;" -> GOTO ARG2_210_1;
STATE USEFIRST ARG2_210_1 :
    MATCH "_Bool clk, ackA, ackB, ackC;" -> GOTO ARG2_211_1;
STATE USEFIRST ARG2_211_1 :
    MATCH "_Bool clk, ackA, ackB, ackC;" -> GOTO ARG2_212_1;
STATE USEFIRST ARG2_212_1 :
    MATCH "_Bool clk, ackA, ackB, ackC;" -> GOTO ARG2_213_1;
STATE USEFIRST ARG2_213_1 :
    MATCH "unsigned char sel;" -> GOTO ARG2_214_1;
STATE USEFIRST ARG2_214_1 :
    MATCH "_Bool active;" -> GOTO ARG2_215_1;
STATE USEFIRST ARG2_215_1 :
    MATCH "_Bool reqA, reqB, reqC;" -> GOTO ARG2_216_1;
STATE USEFIRST ARG2_216_1 :
    MATCH "_Bool reqA, reqB, reqC;" -> GOTO ARG2_217_1;
STATE USEFIRST ARG2_217_1 :
    MATCH "_Bool reqA, reqB, reqC;" -> GOTO ARG2_218_1;
STATE USEFIRST ARG2_218_1 :
    MATCH "_Bool pass_tokenA, pass_tokenB, pass_tokenC;" -> GOTO ARG2_219_1;
STATE USEFIRST ARG2_219_1 :
    MATCH "_Bool pass_tokenA, pass_tokenB, pass_tokenC;" -> GOTO ARG2_220_1;
STATE USEFIRST ARG2_220_1 :
    MATCH "_Bool pass_tokenA, pass_tokenB, pass_tokenC;" -> ASSUME {ackB == ((_Bool)(2));A == (0);X == (3);B == (1);pass_tokenA == ((_Bool)(8));pass_tokenB == ((_Bool)(7));pass_tokenC == ((_Bool)(6));ackC == ((_Bool)(4));C == (2);active == (0);reqA == ((_Bool)(11));reqB == ((_Bool)(10));reqC == ((_Bool)(9));sel == (5U);ackA == (1);} GOTO ARG2;
    TRUE -> STOP;

STATE USEFIRST ARG2 :
    MATCH "client_initial();" -> GOTO ARG3;
    TRUE -> STOP;

STATE USEFIRST ARG3 :
    MATCH "" -> GOTO ARG4_1_2;
STATE USEFIRST ARG4_0_2 :
    MATCH "" -> GOTO ARG4_1_2;
STATE USEFIRST ARG4_1_2 :
    MATCH "sclient.state = 0;" -> GOTO ARG4_2_2;
STATE USEFIRST ARG4_2_2 :
    MATCH "sclient.req = 0;" -> GOTO ARG4;
    TRUE -> STOP;

STATE USEFIRST ARG4 :
    MATCH "" -> GOTO ARG5;
    TRUE -> STOP;

STATE USEFIRST ARG5 :
    MATCH "" -> GOTO ARG6;
    TRUE -> STOP;

STATE USEFIRST ARG6 :
    MATCH "controller_initial();" -> GOTO ARG7;
    TRUE -> STOP;

STATE USEFIRST ARG7 :
    MATCH "" -> GOTO ARG8_1_3;
STATE USEFIRST ARG8_0_3 :
    MATCH "" -> GOTO ARG8_1_3;
STATE USEFIRST ARG8_1_3 :
    MATCH "scontroller.state = 0;" -> GOTO ARG8_2_3;
STATE USEFIRST ARG8_2_3 :
    MATCH "scontroller.ack = 0;" -> GOTO ARG8_3_3;
STATE USEFIRST ARG8_3_3 :
    MATCH "scontroller.pass_token = 1;" -> GOTO ARG8;
    TRUE -> STOP;

STATE USEFIRST ARG8 :
    MATCH "" -> GOTO ARG9;
    TRUE -> STOP;

STATE USEFIRST ARG9 :
    MATCH "" -> GOTO ARG10;
    TRUE -> STOP;

STATE USEFIRST ARG10 :
    MATCH "arbiter_initial();" -> GOTO ARG11;
    TRUE -> STOP;

STATE USEFIRST ARG11 :
    MATCH "" -> GOTO ARG12_1_4;
STATE USEFIRST ARG12_0_4 :
    MATCH "" -> GOTO ARG12_1_4;
STATE USEFIRST ARG12_1_4 :
    MATCH "sarbiter.state = A;" -> GOTO ARG12;
    TRUE -> STOP;

STATE USEFIRST ARG12 :
    MATCH "" -> GOTO ARG13;
    TRUE -> STOP;

STATE USEFIRST ARG13 :
    MATCH "" -> GOTO ARG14;
    TRUE -> STOP;

STATE USEFIRST ARG14 :
    MATCH "" -> GOTO ARG16;
    TRUE -> STOP;

STATE USEFIRST ARG16 :
    MATCH "1" -> GOTO ARG17;
    TRUE -> STOP;

STATE USEFIRST ARG17 :
    MATCH "client(clk, &reqA, ackA);" -> GOTO ARG18;
    TRUE -> STOP;

STATE USEFIRST ARG18 :
    MATCH "" -> GOTO ARG19_1_5;
STATE USEFIRST ARG19_0_5 :
    MATCH "" -> GOTO ARG19_1_5;
STATE USEFIRST ARG19_1_5 :
    MATCH "_Bool rand_choice = 0;" -> ASSUME {ack == (1);req == (310640387LL);rand_choice == (0);(*(req)) == ((_Bool)(11));} GOTO ARG19;
    TRUE -> STOP;

STATE USEFIRST ARG19 :
    MATCH "[(sclient.state) == 0]" -> GOTO ARG20;
    TRUE -> STOP;

STATE USEFIRST ARG20 :
    MATCH "[rand_choice == 0]" -> GOTO ARG45;
    TRUE -> STOP;

STATE USEFIRST ARG45 :
    MATCH "" -> GOTO ARG47;
    TRUE -> STOP;

STATE USEFIRST ARG47 :
    MATCH "*req = sclient.req;" -> ASSUME {(*(req)) == (0);} GOTO ARG48;
    TRUE -> STOP;

STATE USEFIRST ARG48 :
    MATCH "" -> GOTO ARG49;
    TRUE -> STOP;

STATE USEFIRST ARG49 :
    MATCH "" -> GOTO ARG50;
    TRUE -> STOP;

STATE USEFIRST ARG50 :
    MATCH "client(clk, &reqB, ackB);" -> GOTO ARG51;
    TRUE -> STOP;

STATE USEFIRST ARG51 :
    MATCH "" -> GOTO ARG52_1_6;
STATE USEFIRST ARG52_0_6 :
    MATCH "" -> GOTO ARG52_1_6;
STATE USEFIRST ARG52_1_6 :
    MATCH "_Bool rand_choice = 0;" -> ASSUME {req == (536739335LL);ack == ((_Bool)(2));(*(req)) == ((_Bool)(10));rand_choice == (0);} GOTO ARG52;
    TRUE -> STOP;

STATE USEFIRST ARG52 :
    MATCH "[(sclient.state) == 0]" -> GOTO ARG53;
    TRUE -> STOP;

STATE USEFIRST ARG53 :
    MATCH "[rand_choice == 0]" -> GOTO ARG78;
    TRUE -> STOP;

STATE USEFIRST ARG78 :
    MATCH "" -> GOTO ARG80;
    TRUE -> STOP;

STATE USEFIRST ARG80 :
    MATCH "*req = sclient.req;" -> ASSUME {(*(req)) == (0);} GOTO ARG81;
    TRUE -> STOP;

STATE USEFIRST ARG81 :
    MATCH "" -> GOTO ARG82;
    TRUE -> STOP;

STATE USEFIRST ARG82 :
    MATCH "" -> GOTO ARG83;
    TRUE -> STOP;

STATE USEFIRST ARG83 :
    MATCH "client(clk, &reqC, ackC);" -> GOTO ARG84;
    TRUE -> STOP;

STATE USEFIRST ARG84 :
    MATCH "" -> GOTO ARG85_1_7;
STATE USEFIRST ARG85_0_7 :
    MATCH "" -> GOTO ARG85_1_7;
STATE USEFIRST ARG85_1_7 :
    MATCH "_Bool rand_choice = 0;" -> ASSUME {rand_choice == (0);(*(req)) == ((_Bool)(9));req == (1073741823LL);ack == ((_Bool)(4));} GOTO ARG85;
    TRUE -> STOP;

STATE USEFIRST ARG85 :
    MATCH "[(sclient.state) == 0]" -> GOTO ARG86;
    TRUE -> STOP;

STATE USEFIRST ARG86 :
    MATCH "[rand_choice == 0]" -> GOTO ARG111;
    TRUE -> STOP;

STATE USEFIRST ARG111 :
    MATCH "" -> GOTO ARG113;
    TRUE -> STOP;

STATE USEFIRST ARG113 :
    MATCH "*req = sclient.req;" -> ASSUME {(*(req)) == (0);} GOTO ARG114;
    TRUE -> STOP;

STATE USEFIRST ARG114 :
    MATCH "" -> GOTO ARG115;
    TRUE -> STOP;

STATE USEFIRST ARG115 :
    MATCH "" -> GOTO ARG116;
    TRUE -> STOP;

STATE USEFIRST ARG116 :
    MATCH "controller(clk, reqA, &ackA, sel, &pass_tokenA, A);" -> GOTO ARG117;
    TRUE -> STOP;

STATE USEFIRST ARG117 :
    MATCH "" -> GOTO ARG118_1_8;
STATE USEFIRST ARG118_0_8 :
    MATCH "" -> GOTO ARG118_1_8;
STATE USEFIRST ARG118_1_8 :
    MATCH "_Bool is_selected;" -> GOTO ARG118_2_8;
STATE USEFIRST ARG118_2_8 :
    MATCH "is_selected = (sel&0x3 == id&0x3);" -> ASSUME {ack == (33619711LL);id == (0U);req == (0);(*(pass_token)) == ((_Bool)(8));is_selected == (0);(*(ack)) == (1);pass_token == (1107361791LL);sel == (5U);} GOTO ARG118;
    TRUE -> STOP;

STATE USEFIRST ARG118 :
    MATCH "[(scontroller.state) == 0]" -> GOTO ARG119;
    TRUE -> STOP;

STATE USEFIRST ARG119 :
    MATCH "[is_selected == 0]" -> GOTO ARG136;
    TRUE -> STOP;

STATE USEFIRST ARG136 :
    MATCH "scontroller.pass_token = 0;" -> GOTO ARG146;
    TRUE -> STOP;

STATE USEFIRST ARG146 :
    MATCH "" -> GOTO ARG148;
    TRUE -> STOP;

STATE USEFIRST ARG148 :
    MATCH "" -> GOTO ARG150;
    TRUE -> STOP;

STATE USEFIRST ARG150 :
    MATCH "*ack = scontroller.ack;" -> GOTO ARG151_1_9;
STATE USEFIRST ARG151_0_9 :
    MATCH "*ack = scontroller.ack;" -> GOTO ARG151_1_9;
STATE USEFIRST ARG151_1_9 :
    MATCH "*pass_token = scontroller.pass_token;" -> ASSUME {(*(pass_token)) == (0);(*(ack)) == (0);} GOTO ARG151;
    TRUE -> STOP;

STATE USEFIRST ARG151 :
    MATCH "" -> GOTO ARG152;
    TRUE -> STOP;

STATE USEFIRST ARG152 :
    MATCH "" -> GOTO ARG153;
    TRUE -> STOP;

STATE USEFIRST ARG153 :
    MATCH "controller(clk, reqB, &ackB, sel, &pass_tokenB, B);" -> GOTO ARG154;
    TRUE -> STOP;

STATE USEFIRST ARG154 :
    MATCH "" -> GOTO ARG155_1_10;
STATE USEFIRST ARG155_0_10 :
    MATCH "" -> GOTO ARG155_1_10;
STATE USEFIRST ARG155_1_10 :
    MATCH "_Bool is_selected;" -> GOTO ARG155_2_10;
STATE USEFIRST ARG155_2_10 :
    MATCH "is_selected = (sel&0x3 == id&0x3);" -> ASSUME {(*(pass_token)) == ((_Bool)(7));id == (1U);req == (0);is_selected == (0);(*(ack)) == ((_Bool)(2));ack == (33619713LL);pass_token == (1107427327LL);sel == (5U);} GOTO ARG155;
    TRUE -> STOP;

STATE USEFIRST ARG155 :
    MATCH "[(scontroller.state) == 0]" -> GOTO ARG156;
    TRUE -> STOP;

STATE USEFIRST ARG156 :
    MATCH "[is_selected == 0]" -> GOTO ARG173;
    TRUE -> STOP;

STATE USEFIRST ARG173 :
    MATCH "scontroller.pass_token = 0;" -> GOTO ARG183;
    TRUE -> STOP;

STATE USEFIRST ARG183 :
    MATCH "" -> GOTO ARG185;
    TRUE -> STOP;

STATE USEFIRST ARG185 :
    MATCH "" -> GOTO ARG187;
    TRUE -> STOP;

STATE USEFIRST ARG187 :
    MATCH "*ack = scontroller.ack;" -> GOTO ARG188_1_11;
STATE USEFIRST ARG188_0_11 :
    MATCH "*ack = scontroller.ack;" -> GOTO ARG188_1_11;
STATE USEFIRST ARG188_1_11 :
    MATCH "*pass_token = scontroller.pass_token;" -> ASSUME {(*(pass_token)) == (0);(*(ack)) == (0);} GOTO ARG188;
    TRUE -> STOP;

STATE USEFIRST ARG188 :
    MATCH "" -> GOTO ARG189;
    TRUE -> STOP;

STATE USEFIRST ARG189 :
    MATCH "" -> GOTO ARG190;
    TRUE -> STOP;

STATE USEFIRST ARG190 :
    MATCH "controller(clk, reqC, &ackC, sel, &pass_tokenC, C);" -> GOTO ARG191;
    TRUE -> STOP;

STATE USEFIRST ARG191 :
    MATCH "" -> GOTO ARG192_1_12;
STATE USEFIRST ARG192_0_12 :
    MATCH "" -> GOTO ARG192_1_12;
STATE USEFIRST ARG192_1_12 :
    MATCH "_Bool is_selected;" -> GOTO ARG192_2_12;
STATE USEFIRST ARG192_2_12 :
    MATCH "is_selected = (sel&0x3 == id&0x3);" -> ASSUME {req == (0);(*(ack)) == ((_Bool)(4));is_selected == (0);id == (2U);ack == (310378495LL);(*(pass_token)) == ((_Bool)(6));sel == (5U);pass_token == (1107427520LL);} GOTO ARG192;
    TRUE -> STOP;

STATE USEFIRST ARG192 :
    MATCH "[(scontroller.state) == 0]" -> GOTO ARG193;
    TRUE -> STOP;

STATE USEFIRST ARG193 :
    MATCH "[is_selected == 0]" -> GOTO ARG210;
    TRUE -> STOP;

STATE USEFIRST ARG210 :
    MATCH "scontroller.pass_token = 0;" -> GOTO ARG220;
    TRUE -> STOP;

STATE USEFIRST ARG220 :
    MATCH "" -> GOTO ARG222;
    TRUE -> STOP;

STATE USEFIRST ARG222 :
    MATCH "" -> GOTO ARG224;
    TRUE -> STOP;

STATE USEFIRST ARG224 :
    MATCH "*ack = scontroller.ack;" -> GOTO ARG225_1_13;
STATE USEFIRST ARG225_0_13 :
    MATCH "*ack = scontroller.ack;" -> GOTO ARG225_1_13;
STATE USEFIRST ARG225_1_13 :
    MATCH "*pass_token = scontroller.pass_token;" -> ASSUME {(*(pass_token)) == (0);(*(ack)) == (0);} GOTO ARG225;
    TRUE -> STOP;

STATE USEFIRST ARG225 :
    MATCH "" -> GOTO ARG226;
    TRUE -> STOP;

STATE USEFIRST ARG226 :
    MATCH "" -> GOTO ARG227;
    TRUE -> STOP;

STATE USEFIRST ARG227 :
    MATCH "arbiter(clk, &sel, active);" -> GOTO ARG228;
    TRUE -> STOP;

STATE USEFIRST ARG228 :
    MATCH "" -> ASSUME {sel == (310576129LL);(*(sel)) == (5U);active == (0);} GOTO ARG229;
    TRUE -> STOP;

STATE USEFIRST ARG229 :
    MATCH "[active == 0]" -> ASSUME {sel == (310576129LL);(*(sel)) == (5U);active == (0);} GOTO ARG249;
    TRUE -> STOP;

STATE USEFIRST ARG249 :
    MATCH "*sel = active ? sarbiter.state: X;" -> GOTO ARG250;
    TRUE -> STOP;

STATE USEFIRST ARG250 :
    MATCH "[active == 0]" -> GOTO ARG251;
    TRUE -> STOP;

STATE USEFIRST ARG251 :
    MATCH "X" -> ASSUME {__CPAchecker_TMP_0 == (3);} GOTO ARG255;
    TRUE -> STOP;

STATE USEFIRST ARG255 :
    MATCH "*sel = active ? sarbiter.state: X;" -> ASSUME {(*(sel)) == (3U);} GOTO ARG256;
    TRUE -> STOP;

STATE USEFIRST ARG256 :
    MATCH "" -> GOTO ARG257;
    TRUE -> STOP;

STATE USEFIRST ARG257 :
    MATCH "" -> GOTO ARG258;
    TRUE -> STOP;

STATE USEFIRST ARG258 :
    MATCH "active = pass_tokenA || pass_tokenB || pass_tokenC;" -> GOTO ARG259;
    TRUE -> STOP;

STATE USEFIRST ARG259 :
    MATCH "[pass_tokenA == 0]" -> GOTO ARG260;
    TRUE -> STOP;

STATE USEFIRST ARG260 :
    MATCH "[pass_tokenB == 0]" -> GOTO ARG262;
    TRUE -> STOP;

STATE USEFIRST ARG262 :
    MATCH "[pass_tokenC == 0]" -> GOTO ARG265;
    TRUE -> STOP;

STATE USEFIRST ARG265 :
    MATCH "pass_tokenA || pass_tokenB || pass_tokenC" -> ASSUME {__CPAchecker_TMP_0 == (0);} GOTO ARG270;
    TRUE -> STOP;

STATE USEFIRST ARG270 :
    MATCH "active = pass_tokenA || pass_tokenB || pass_tokenC;" -> GOTO ARG271_1_14;
STATE USEFIRST ARG271_0_14 :
    MATCH "active = pass_tokenA || pass_tokenB || pass_tokenC;" -> GOTO ARG271_1_14;
STATE USEFIRST ARG271_1_14 :
    MATCH "((\n# 156 \"cpa.c\"\n   (ackA == 1 && ackB == 1 || ackB == 1 && ackC == 1 || ackC == 1 && ackA ==1)\n# 156 \"cpa.c\" 3 4\n   ) ? (void) (0) : __assert_fail (\n# 156 \"cpa.c\"\n   \"(ackA == 1 && ackB == 1 || ackB == 1 && ackC == 1 || ackC == 1 && ackA ==1)\"\n# 156 \"cpa.c\" 3 4\n   , \"cpa.c\", 156, __PRETTY_FUNCTION__))\n# 156 \"cpa.c\"\n                                                                                      ;" -> ASSUME {active == (0);} GOTO ARG271;
    TRUE -> STOP;

STATE USEFIRST ARG271 :
    MATCH "[!(ackA == 1)]" -> GOTO ARG276;
    TRUE -> STOP;

STATE USEFIRST ARG276 :
    MATCH "[!(ackB == 1)]" -> GOTO ARG282;
    TRUE -> STOP;

STATE USEFIRST ARG282 :
    MATCH "[!(ackC == 1)]" -> GOTO ARG288;
    TRUE -> STOP;

STATE USEFIRST ARG288 :
    MATCH "__assert_fail (\n# 156 \"cpa.c\"\n   \"(ackA == 1 && ackB == 1 || ackB == 1 && ackC == 1 || ackC == 1 && ackA ==1)\"\n# 156 \"cpa.c\" 3 4\n   , \"cpa.c\", 156, __PRETTY_FUNCTION__)" -> ERROR;
    TRUE -> STOP;

STATE USEFIRST ARG290 :
    TRUE -> STOP;

END AUTOMATON
