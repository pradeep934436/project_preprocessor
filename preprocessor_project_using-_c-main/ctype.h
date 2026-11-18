# 0 "1.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "1.c"
# 1 "C:/gcc/include/ctype.h" 1 3
# 9 "C:/gcc/include/ctype.h" 3
# 1 "C:/gcc/include/corecrt_wctype.h" 1 3
# 9 "C:/gcc/include/corecrt_wctype.h" 3
# 1 "C:/gcc/include/corecrt.h" 1 3
# 10 "C:/gcc/include/corecrt.h" 3
# 1 "C:/gcc/include/_mingw.h" 1 3
# 10 "C:/gcc/include/_mingw.h" 3
# 1 "C:/gcc/include/_mingw_mac.h" 1 3
# 108 "C:/gcc/include/_mingw_mac.h" 3
             
# 117 "C:/gcc/include/_mingw_mac.h" 3
             
# 326 "C:/gcc/include/_mingw_mac.h" 3
       
# 405 "C:/gcc/include/_mingw_mac.h" 3
       
# 11 "C:/gcc/include/_mingw.h" 2 3
# 1 "C:/gcc/include/_mingw_secapi.h" 1 3
# 12 "C:/gcc/include/_mingw.h" 2 3
# 306 "C:/gcc/include/_mingw.h" 3
# 1 "C:/gcc/include/vadefs.h" 1 3
# 9 "C:/gcc/include/vadefs.h" 3
# 1 "C:/gcc/include/_mingw.h" 1 3
# 10 "C:/gcc/include/vadefs.h" 2 3




#pragma pack(push,_CRT_PACKING)
# 24 "C:/gcc/include/vadefs.h" 3
  
# 24 "C:/gcc/include/vadefs.h" 3
 typedef __builtin_va_list __gnuc_va_list;






  typedef __gnuc_va_list va_list;
# 103 "C:/gcc/include/vadefs.h" 3
#pragma pack(pop)
# 307 "C:/gcc/include/_mingw.h" 2 3
# 604 "C:/gcc/include/_mingw.h" 3
void __attribute__((__cdecl__)) __debugbreak(void);
extern __inline__ __attribute__((__always_inline__,__gnu_inline__)) void __attribute__((__cdecl__)) __debugbreak(void)
{



  __asm__ __volatile__("int {$}3":);





}
# 625 "C:/gcc/include/_mingw.h" 3
void __attribute__((__cdecl__)) __attribute__ ((__noreturn__)) __fastfail(unsigned int _Code);
extern __inline__ __attribute__((__always_inline__,__gnu_inline__)) void __attribute__((__cdecl__)) __attribute__ ((__noreturn__)) __fastfail(unsigned int _Code)
{




  __asm__ __volatile__("int {$}0x29"::"c"(_Code));






  __builtin_unreachable();
}
# 665 "C:/gcc/include/_mingw.h" 3
const char *__mingw_get_crt_info (void);
# 11 "C:/gcc/include/corecrt.h" 2 3




#pragma pack(push,_CRT_PACKING)
# 35 "C:/gcc/include/corecrt.h" 3
__extension__ typedef unsigned long long size_t;
# 45 "C:/gcc/include/corecrt.h" 3
__extension__ typedef long long ssize_t;






typedef size_t rsize_t;
# 62 "C:/gcc/include/corecrt.h" 3
__extension__ typedef long long intptr_t;
# 75 "C:/gcc/include/corecrt.h" 3
__extension__ typedef unsigned long long uintptr_t;
# 88 "C:/gcc/include/corecrt.h" 3
__extension__ typedef long long ptrdiff_t;
# 98 "C:/gcc/include/corecrt.h" 3
typedef unsigned short wchar_t;







typedef unsigned short wint_t;
typedef unsigned short wctype_t;





typedef int errno_t;




typedef long __time32_t;




__extension__ typedef long long __time64_t;
# 138 "C:/gcc/include/corecrt.h" 3
typedef __time64_t time_t;
# 157 "C:/gcc/include/corecrt.h" 3
__attribute__ ((__dllimport__)) void __attribute__((__cdecl__)) _invalid_parameter_noinfo(void);
__attribute__ ((__dllimport__)) __attribute__ ((__noreturn__)) void __attribute__((__cdecl__)) _invalid_parameter_noinfo_noreturn(void);
__attribute__ ((__dllimport__)) __attribute__ ((__noreturn__)) void __attribute__((__cdecl__)) _invoke_watson(const wchar_t *expression, const wchar_t *function_name, const wchar_t *file_name, unsigned int line_number, long long unsigned int reserved);
# 437 "C:/gcc/include/corecrt.h" 3
struct threadlocaleinfostruct;
struct threadmbcinfostruct;
typedef struct threadlocaleinfostruct *pthreadlocinfo;
typedef struct threadmbcinfostruct *pthreadmbcinfo;
struct __lc_time_data;

typedef struct localeinfo_struct {
  pthreadlocinfo locinfo;
  pthreadmbcinfo mbcinfo;
} _locale_tstruct,*_locale_t;



typedef struct tagLC_ID {
  unsigned short wLanguage;
  unsigned short wCountry;
  unsigned short wCodePage;
} LC_ID,*LPLC_ID;




typedef struct threadlocaleinfostruct {

  const unsigned short *_locale_pctype;
  int _locale_mb_cur_max;
  unsigned int _locale_lc_codepage;
# 489 "C:/gcc/include/corecrt.h" 3
} threadlocinfo;
# 508 "C:/gcc/include/corecrt.h" 3
#pragma pack(pop)
# 10 "C:/gcc/include/corecrt_wctype.h" 2 3
# 20 "C:/gcc/include/corecrt_wctype.h" 3
__attribute__ ((__dllimport__)) const unsigned short* __attribute__((__cdecl__)) __pctype_func(void);
__attribute__ ((__dllimport__)) const wctype_t * __attribute__((__cdecl__)) __pwctype_func(void);
# 38 "C:/gcc/include/corecrt_wctype.h" 3
extern __attribute__ ((__dllimport__)) const unsigned short *_wctype;
# 59 "C:/gcc/include/corecrt_wctype.h" 3
__attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) iswctype(wint_t _C,wctype_t _Type);

__attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) iswalnum(wint_t _C);
__attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) iswalpha(wint_t _C);
__attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) iswblank(wint_t _C);
__attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) iswcntrl(wint_t _C);
__attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) iswdigit(wint_t _C);
__attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) iswgraph(wint_t _C);
__attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) iswlower(wint_t _C);
__attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) iswprint(wint_t _C);
__attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) iswpunct(wint_t _C);
__attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) iswspace(wint_t _C);
__attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) iswupper(wint_t _C);
__attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) iswxdigit(wint_t _C);

__attribute__ ((__dllimport__)) wint_t __attribute__((__cdecl__)) towlower(wint_t _C);
__attribute__ ((__dllimport__)) wint_t __attribute__((__cdecl__)) towupper(wint_t _C);
# 100 "C:/gcc/include/corecrt_wctype.h" 3
__attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _iswctype_l(wint_t _C,wctype_t _Type,_locale_t _Locale);

__attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _iswalnum_l(wint_t _C,_locale_t _Locale);
__attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _iswalpha_l(wint_t _C,_locale_t _Locale);
__attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _iswblank_l(wint_t _C,_locale_t _Locale);
__attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _iswcntrl_l(wint_t _C,_locale_t _Locale);
__attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _iswdigit_l(wint_t _C,_locale_t _Locale);
__attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _iswgraph_l(wint_t _C,_locale_t _Locale);
__attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _iswlower_l(wint_t _C,_locale_t _Locale);
__attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _iswprint_l(wint_t _C,_locale_t _Locale);
__attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _iswpunct_l(wint_t _C,_locale_t _Locale);
__attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _iswspace_l(wint_t _C,_locale_t _Locale);
__attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _iswupper_l(wint_t _C,_locale_t _Locale);
__attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _iswxdigit_l(wint_t _C,_locale_t _Locale);

__attribute__ ((__dllimport__)) wint_t __attribute__((__cdecl__)) _towlower_l(wint_t _C,_locale_t _Locale);
__attribute__ ((__dllimport__)) wint_t __attribute__((__cdecl__)) _towupper_l(wint_t _C,_locale_t _Locale);
# 138 "C:/gcc/include/corecrt_wctype.h" 3
__attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) __iswcsym(wint_t _C);
__attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) __iswcsymf(wint_t _C);
__attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) iswascii(wint_t _C);



__attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) is_wctype(wint_t _C,wctype_t _Type);
__attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) isleadbyte(int _C);
# 162 "C:/gcc/include/corecrt_wctype.h" 3
__attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _iswcsym_l(wint_t _C,_locale_t _Locale);
__attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _iswcsymf_l(wint_t _C,_locale_t _Locale);
# 175 "C:/gcc/include/corecrt_wctype.h" 3
__attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _isleadbyte_l(int _C,_locale_t _Locale);
# 10 "C:/gcc/include/ctype.h" 2 3
# 22 "C:/gcc/include/ctype.h" 3
__attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) ___mb_cur_max_func(void);
# 31 "C:/gcc/include/ctype.h" 3
__attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) isalnum(int _C);
__attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) isalpha(int _C);
__attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) isblank(int _C);
__attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) iscntrl(int _C);
__attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) isdigit(int _C);
__attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) isgraph(int _C);
__attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) islower(int _C);
__attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) isprint(int _C);
__attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) ispunct(int _C);
__attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) isspace(int _C);
__attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) isupper(int _C);
__attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) isxdigit(int _C);

__attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) tolower(int _C);
__attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) toupper(int _C);
# 59 "C:/gcc/include/ctype.h" 3
__attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _isalnum_l(int _C,_locale_t _Locale);
__attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _isalpha_l(int _C,_locale_t _Locale);
__attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _isblank_l(int _C,_locale_t _Locale);
__attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _iscntrl_l(int _C,_locale_t _Locale);
__attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _isdigit_l(int _C,_locale_t _Locale);
__attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _isgraph_l(int _C,_locale_t _Locale);
__attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _islower_l(int _C,_locale_t _Locale);
__attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _isprint_l(int _C,_locale_t _Locale);
__attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _ispunct_l(int _C,_locale_t _Locale);
__attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _isspace_l(int _C,_locale_t _Locale);
__attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _isupper_l(int _C,_locale_t _Locale);
__attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _isxdigit_l(int _C,_locale_t _Locale);

__attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _tolower_l(int _C,_locale_t _Locale);
__attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _toupper_l(int _C,_locale_t _Locale);
# 103 "C:/gcc/include/ctype.h" 3
__attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) __isascii(int _C);
__attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) __toascii(int _C);
__attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _tolower(int _C);
__attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _toupper(int _C);
# 129 "C:/gcc/include/ctype.h" 3
__attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _isctype(int _C,int _Type);

__attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) __iscsym(int _C);
__attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) __iscsymf(int _C);
# 166 "C:/gcc/include/ctype.h" 3
int __attribute__((__cdecl__)) _iscsym_l(wint_t _C, _locale_t _Locale);
int __attribute__((__cdecl__)) _iscsymf_l(wint_t _C, _locale_t _Locale);
# 177 "C:/gcc/include/ctype.h" 3
__attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _isctype_l(int _C,int _Type,_locale_t _Locale);
# 2 "1.c" 2

# 2 "1.c"