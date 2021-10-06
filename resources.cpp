#include <gio/gio.h>

#if defined (__ELF__) && ( __GNUC__ > 2 || (__GNUC__ == 2 && __GNUC_MINOR__ >= 6))
# define SECTION __attribute__ ((section (".gresource.resources"), aligned (8)))
#else
# define SECTION
#endif

#ifdef _MSC_VER
static const SECTION union { const guint8 data[765]; const double alignment; void * const ptr;}  resources_resource_data = { {
  0107, 0126, 0141, 0162, 0151, 0141, 0156, 0164, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 
  0030, 0000, 0000, 0000, 0220, 0000, 0000, 0000, 0000, 0000, 0000, 0050, 0004, 0000, 0000, 0000, 
  0000, 0000, 0000, 0000, 0001, 0000, 0000, 0000, 0001, 0000, 0000, 0000, 0003, 0000, 0000, 0000, 
  0324, 0265, 0002, 0000, 0377, 0377, 0377, 0377, 0220, 0000, 0000, 0000, 0001, 0000, 0114, 0000, 
  0224, 0000, 0000, 0000, 0230, 0000, 0000, 0000, 0312, 0114, 0014, 0251, 0003, 0000, 0000, 0000, 
  0230, 0000, 0000, 0000, 0023, 0000, 0166, 0000, 0260, 0000, 0000, 0000, 0344, 0002, 0000, 0000, 
  0132, 0233, 0152, 0022, 0000, 0000, 0000, 0000, 0344, 0002, 0000, 0000, 0007, 0000, 0114, 0000, 
  0354, 0002, 0000, 0000, 0360, 0002, 0000, 0000, 0027, 0046, 0367, 0240, 0002, 0000, 0000, 0000, 
  0360, 0002, 0000, 0000, 0007, 0000, 0114, 0000, 0370, 0002, 0000, 0000, 0374, 0002, 0000, 0000, 
  0057, 0000, 0000, 0000, 0002, 0000, 0000, 0000, 0165, 0151, 0055, 0155, 0141, 0151, 0156, 0167, 
  0151, 0156, 0144, 0157, 0167, 0056, 0147, 0154, 0141, 0144, 0145, 0000, 0000, 0000, 0000, 0000, 
  0217, 0022, 0000, 0000, 0001, 0000, 0000, 0000, 0170, 0332, 0355, 0230, 0121, 0157, 0332, 0060, 
  0020, 0307, 0337, 0373, 0051, 0074, 0277, 0116, 0041, 0045, 0331, 0244, 0152, 0112, 0122, 0165, 
  0322, 0332, 0227, 0076, 0114, 0133, 0047, 0155, 0117, 0225, 0343, 0034, 0324, 0303, 0261, 0063, 
  0333, 0141, 0360, 0355, 0147, 0312, 0020, 0210, 0030, 0210, 0223, 0015, 0104, 0325, 0067, 0216, 
  0334, 0305, 0367, 0273, 0373, 0137, 0354, 0044, 0271, 0236, 0225, 0034, 0115, 0101, 0151, 0046, 
  0105, 0212, 0207, 0203, 0113, 0214, 0100, 0120, 0131, 0060, 0061, 0116, 0361, 0267, 0207, 0333, 
  0340, 0012, 0137, 0147, 0027, 0311, 0233, 0040, 0100, 0167, 0040, 0100, 0021, 0003, 0005, 0372, 
  0315, 0314, 0023, 0032, 0163, 0122, 0000, 0212, 0007, 0361, 0325, 0040, 0102, 0101, 0140, 0235, 
  0230, 0060, 0240, 0106, 0204, 0102, 0166, 0201, 0120, 0242, 0340, 0127, 0315, 0024, 0150, 0304, 
  0131, 0236, 0342, 0261, 0231, 0274, 0305, 0353, 0205, 0342, 0101, 0364, 0016, 0207, 0317, 0176, 
  0062, 0377, 0011, 0324, 0040, 0312, 0211, 0326, 0051, 0276, 0063, 0223, 0217, 0162, 0206, 0021, 
  0053, 0122, 0134, 0076, 0226, 0204, 0211, 0334, 0232, 0013, 0107, 0353, 0132, 0051, 0131, 0201, 
  0062, 0163, 0044, 0110, 0011, 0051, 0236, 0062, 0315, 0162, 0016, 0070, 0173, 0120, 0065, 0044, 
  0341, 0352, 0252, 0333, 0231, 0022, 0021, 0214, 0044, 0255, 0065, 0316, 0156, 0011, 0327, 0007, 
  0375, 0165, 0105, 0250, 0055, 0002, 0316, 0336, 0037, 0362, 0314, 0211, 0006, 0316, 0004, 0004, 
  0225, 0324, 0314, 0130, 0074, 0234, 0031, 0131, 0065, 0242, 0350, 0023, 0343, 0305, 0362, 0367, 
  0056, 0352, 0325, 0125, 0117, 0324, 0056, 0270, 0256, 0030, 0251, 0030, 0010, 0103, 0226, 0010, 
  0266, 0125, 0206, 0121, 0302, 0333, 0004, 0356, 0256, 0125, 0367, 0172, 0065, 0153, 0326, 0246, 
  0156, 0235, 0152, 0327, 0265, 0176, 0356, 0024, 0335, 0151, 0336, 0223, 0034, 0370, 0112, 0326, 
  0174, 0141, 0074, 0016, 0361, 0166, 0130, 0307, 0334, 0373, 0344, 0357, 0212, 0345, 0313, 0134, 
  0215, 0042, 0102, 0163, 0142, 0210, 0115, 0040, 0305, 0163, 0260, 0267, 0102, 0350, 0373, 0007, 
  0264, 0373, 0126, 0111, 0270, 0344, 0156, 0374, 0157, 0365, 0061, 0261, 0002, 0071, 0274, 0064, 
  0314, 0052, 0042, 0212, 0016, 0071, 0217, 0030, 0347, 0376, 0125, 0132, 0053, 0360, 0162, 0037, 
  0225, 0063, 0375, 0044, 0164, 0264, 0276, 0255, 0034, 0076, 0011, 0243, 0346, 0053, 0071, 0300, 
  0302, 0070, 0232, 0034, 0366, 0207, 0236, 0161, 0013, 0207, 0307, 0155, 0241, 0143, 0242, 0243, 
  0163, 0234, 0350, 0037, 0057, 0164, 0242, 0243, 0223, 0117, 0164, 0364, 0072, 0321, 0375, 0132, 
  0030, 0377, 0213, 0026, 0272, 0370, 0335, 0354, 0235, 0270, 0375, 0231, 0275, 0067, 0041, 0007, 
  0153, 0203, 0263, 0325, 0121, 0251, 0066, 0306, 0056, 0363, 0127, 0243, 0371, 0263, 0325, 0330, 
  0166, 0332, 0077, 0072, 0156, 0212, 0002, 0175, 0226, 0366, 0320, 0337, 0026, 0264, 0357, 0101, 
  0314, 0047, 0114, 0001, 0005, 0066, 0005, 0035, 0024, 0060, 0042, 0065, 0067, 0373, 0242, 0317, 
  0110, 0041, 0303, 0377, 0253, 0220, 0173, 0246, 0315, 0306, 0353, 0027, 0267, 0146, 0176, 0312, 
  0363, 0165, 0377, 0316, 0370, 0344, 0324, 0247, 0061, 0321, 0011, 0106, 0067, 0352, 0074, 0272, 
  0137, 0240, 0224, 0123, 0100, 0137, 0201, 0333, 0145, 0340, 0165, 0214, 0217, 0075, 0306, 0161, 
  0127, 0265, 0154, 0063, 0066, 0371, 0274, 0331, 0374, 0270, 0274, 0066, 0257, 0055, 0236, 0015, 
  0226, 0065, 0107, 0022, 0156, 0174, 0066, 0372, 0003, 0156, 0216, 0142, 0200, 0000, 0050, 0165, 
  0165, 0141, 0171, 0051, 0165, 0156, 0151, 0161, 0165, 0145, 0057, 0000, 0003, 0000, 0000, 0000, 
  0160, 0162, 0145, 0146, 0151, 0170, 0057, 0000, 0001, 0000, 0000, 0000
} };
#else /* _MSC_VER */
static const SECTION union { const guint8 data[765]; const double alignment; void * const ptr;}  resources_resource_data = {
  "\107\126\141\162\151\141\156\164\000\000\000\000\000\000\000\000"
  "\030\000\000\000\220\000\000\000\000\000\000\050\004\000\000\000"
  "\000\000\000\000\001\000\000\000\001\000\000\000\003\000\000\000"
  "\324\265\002\000\377\377\377\377\220\000\000\000\001\000\114\000"
  "\224\000\000\000\230\000\000\000\312\114\014\251\003\000\000\000"
  "\230\000\000\000\023\000\166\000\260\000\000\000\344\002\000\000"
  "\132\233\152\022\000\000\000\000\344\002\000\000\007\000\114\000"
  "\354\002\000\000\360\002\000\000\027\046\367\240\002\000\000\000"
  "\360\002\000\000\007\000\114\000\370\002\000\000\374\002\000\000"
  "\057\000\000\000\002\000\000\000\165\151\055\155\141\151\156\167"
  "\151\156\144\157\167\056\147\154\141\144\145\000\000\000\000\000"
  "\217\022\000\000\001\000\000\000\170\332\355\230\121\157\332\060"
  "\020\307\337\373\051\074\277\116\041\045\331\244\152\112\122\165"
  "\322\332\227\076\114\133\047\155\117\225\343\034\324\303\261\063"
  "\333\141\360\355\147\312\020\210\030\210\223\015\104\325\067\216"
  "\334\305\367\273\373\137\354\044\271\236\225\034\115\101\151\046"
  "\105\212\207\203\113\214\100\120\131\060\061\116\361\267\207\333"
  "\340\012\137\147\027\311\233\040\100\167\040\100\021\003\005\372"
  "\315\314\023\032\163\122\000\212\007\361\325\040\102\101\140\235"
  "\230\060\240\106\204\102\166\201\120\242\340\127\315\024\150\304"
  "\131\236\342\261\231\274\305\353\205\342\101\364\016\207\317\176"
  "\062\377\011\324\040\312\211\326\051\276\063\223\217\162\206\021"
  "\053\122\134\076\226\204\211\334\232\013\107\353\132\051\131\201"
  "\062\163\044\110\011\051\236\062\315\162\016\070\173\120\065\044"
  "\341\352\252\333\231\022\021\214\044\255\065\316\156\011\327\007"
  "\375\165\105\250\055\002\316\336\037\362\314\211\006\316\004\004"
  "\225\324\314\130\074\234\031\131\065\242\350\023\343\305\362\367"
  "\056\352\325\125\117\324\056\270\256\030\251\030\010\103\226\010"
  "\266\125\206\121\302\333\004\356\256\125\367\172\065\153\326\246"
  "\156\235\152\327\265\176\356\024\335\151\336\223\034\370\112\326"
  "\174\141\074\016\361\166\130\307\334\373\344\357\212\345\313\134"
  "\215\042\102\163\142\210\115\040\305\163\260\267\102\350\373\007"
  "\264\373\126\111\270\344\156\374\157\365\061\261\002\071\274\064"
  "\314\052\042\212\016\071\217\030\347\376\125\132\053\360\162\037"
  "\225\063\375\044\164\264\276\255\034\076\011\243\346\053\071\300"
  "\302\070\232\034\366\207\236\161\013\207\307\155\241\143\242\243"
  "\163\234\350\037\057\164\242\243\223\117\164\364\072\321\375\132"
  "\030\377\213\026\272\370\335\354\235\270\375\231\275\067\041\007"
  "\153\203\263\325\121\251\066\306\056\363\127\243\371\263\325\330"
  "\166\332\077\072\156\212\002\175\226\366\320\337\026\264\357\101"
  "\314\047\114\001\005\066\005\035\024\060\042\065\067\373\242\317"
  "\110\041\303\377\253\220\173\246\315\306\353\027\267\146\176\312"
  "\363\165\377\316\370\344\324\247\061\321\011\106\067\352\074\272"
  "\137\240\224\123\100\137\201\333\145\340\165\214\217\075\306\161"
  "\127\265\154\063\066\371\274\331\374\270\274\066\257\055\236\015"
  "\226\065\107\022\156\174\066\372\003\156\216\142\200\000\050\165"
  "\165\141\171\051\165\156\151\161\165\145\057\000\003\000\000\000"
  "\160\162\145\146\151\170\057\000\001\000\000\000" };
#endif /* !_MSC_VER */

static GStaticResource static_resource = { resources_resource_data.data, sizeof (resources_resource_data.data) - 1 /* nul terminator */, NULL, NULL, NULL };

G_MODULE_EXPORT
GResource *resources_get_resource (void);
GResource *resources_get_resource (void)
{
  return g_static_resource_get_resource (&static_resource);
}
/*
  If G_HAS_CONSTRUCTORS is true then the compiler support *both* constructors and
  destructors, in a usable way, including e.g. on library unload. If not you're on
  your own.

  Some compilers need #pragma to handle this, which does not work with macros,
  so the way you need to use this is (for constructors):

  #ifdef G_DEFINE_CONSTRUCTOR_NEEDS_PRAGMA
  #pragma G_DEFINE_CONSTRUCTOR_PRAGMA_ARGS(my_constructor)
  #endif
  G_DEFINE_CONSTRUCTOR(my_constructor)
  static void my_constructor(void) {
   ...
  }

*/

#ifndef __GTK_DOC_IGNORE__

#if  __GNUC__ > 2 || (__GNUC__ == 2 && __GNUC_MINOR__ >= 7)

#define G_HAS_CONSTRUCTORS 1

#define G_DEFINE_CONSTRUCTOR(_func) static void __attribute__((constructor)) _func (void);
#define G_DEFINE_DESTRUCTOR(_func) static void __attribute__((destructor)) _func (void);

#elif defined (_MSC_VER) && (_MSC_VER >= 1500)
/* Visual studio 2008 and later has _Pragma */

#include <stdlib.h>

#define G_HAS_CONSTRUCTORS 1

/* We do some weird things to avoid the constructors being optimized
 * away on VS2015 if WholeProgramOptimization is enabled. First we
 * make a reference to the array from the wrapper to make sure its
 * references. Then we use a pragma to make sure the wrapper function
 * symbol is always included at the link stage. Also, the symbols
 * need to be extern (but not dllexport), even though they are not
 * really used from another object file.
 */

/* We need to account for differences between the mangling of symbols
 * for x86 and x64/ARM/ARM64 programs, as symbols on x86 are prefixed
 * with an underscore but symbols on x64/ARM/ARM64 are not.
 */
#ifdef _M_IX86
#define G_MSVC_SYMBOL_PREFIX "_"
#else
#define G_MSVC_SYMBOL_PREFIX ""
#endif

#define G_DEFINE_CONSTRUCTOR(_func) G_MSVC_CTOR (_func, G_MSVC_SYMBOL_PREFIX)
#define G_DEFINE_DESTRUCTOR(_func) G_MSVC_DTOR (_func, G_MSVC_SYMBOL_PREFIX)

#define G_MSVC_CTOR(_func,_sym_prefix) \
  static void _func(void); \
  extern int (* _array ## _func)(void);              \
  int _func ## _wrapper(void) { _func(); g_slist_find (NULL,  _array ## _func); return 0; } \
  __pragma(comment(linker,"/include:" _sym_prefix # _func "_wrapper")) \
  __pragma(section(".CRT$XCU",read)) \
  __declspec(allocate(".CRT$XCU")) int (* _array ## _func)(void) = _func ## _wrapper;

#define G_MSVC_DTOR(_func,_sym_prefix) \
  static void _func(void); \
  extern int (* _array ## _func)(void);              \
  int _func ## _constructor(void) { atexit (_func); g_slist_find (NULL,  _array ## _func); return 0; } \
   __pragma(comment(linker,"/include:" _sym_prefix # _func "_constructor")) \
  __pragma(section(".CRT$XCU",read)) \
  __declspec(allocate(".CRT$XCU")) int (* _array ## _func)(void) = _func ## _constructor;

#elif defined (_MSC_VER)

#define G_HAS_CONSTRUCTORS 1

/* Pre Visual studio 2008 must use #pragma section */
#define G_DEFINE_CONSTRUCTOR_NEEDS_PRAGMA 1
#define G_DEFINE_DESTRUCTOR_NEEDS_PRAGMA 1

#define G_DEFINE_CONSTRUCTOR_PRAGMA_ARGS(_func) \
  section(".CRT$XCU",read)
#define G_DEFINE_CONSTRUCTOR(_func) \
  static void _func(void); \
  static int _func ## _wrapper(void) { _func(); return 0; } \
  __declspec(allocate(".CRT$XCU")) static int (*p)(void) = _func ## _wrapper;

#define G_DEFINE_DESTRUCTOR_PRAGMA_ARGS(_func) \
  section(".CRT$XCU",read)
#define G_DEFINE_DESTRUCTOR(_func) \
  static void _func(void); \
  static int _func ## _constructor(void) { atexit (_func); return 0; } \
  __declspec(allocate(".CRT$XCU")) static int (* _array ## _func)(void) = _func ## _constructor;

#elif defined(__SUNPRO_C)

/* This is not tested, but i believe it should work, based on:
 * http://opensource.apple.com/source/OpenSSL098/OpenSSL098-35/src/fips/fips_premain.c
 */

#define G_HAS_CONSTRUCTORS 1

#define G_DEFINE_CONSTRUCTOR_NEEDS_PRAGMA 1
#define G_DEFINE_DESTRUCTOR_NEEDS_PRAGMA 1

#define G_DEFINE_CONSTRUCTOR_PRAGMA_ARGS(_func) \
  init(_func)
#define G_DEFINE_CONSTRUCTOR(_func) \
  static void _func(void);

#define G_DEFINE_DESTRUCTOR_PRAGMA_ARGS(_func) \
  fini(_func)
#define G_DEFINE_DESTRUCTOR(_func) \
  static void _func(void);

#else

/* constructors not supported for this compiler */

#endif

#endif /* __GTK_DOC_IGNORE__ */

#ifdef G_HAS_CONSTRUCTORS

#ifdef G_DEFINE_CONSTRUCTOR_NEEDS_PRAGMA
#pragma G_DEFINE_CONSTRUCTOR_PRAGMA_ARGS(resourcesresource_constructor)
#endif
G_DEFINE_CONSTRUCTOR(resourcesresource_constructor)
#ifdef G_DEFINE_DESTRUCTOR_NEEDS_PRAGMA
#pragma G_DEFINE_DESTRUCTOR_PRAGMA_ARGS(resourcesresource_destructor)
#endif
G_DEFINE_DESTRUCTOR(resourcesresource_destructor)

#else
#warning "Constructor not supported on this compiler, linking in resources will not work"
#endif

static void resourcesresource_constructor (void)
{
  g_static_resource_init (&static_resource);
}

static void resourcesresource_destructor (void)
{
  g_static_resource_fini (&static_resource);
}
