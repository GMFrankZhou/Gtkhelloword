#include <gio/gio.h>

#if defined (__ELF__) && ( __GNUC__ > 2 || (__GNUC__ == 2 && __GNUC_MINOR__ >= 6))
# define SECTION __attribute__ ((section (".gresource.resources"), aligned (8)))
#else
# define SECTION
#endif

#ifdef _MSC_VER
static const SECTION union { const guint8 data[833]; const double alignment; void * const ptr;}  resources_resource_data = { {
  0107, 0126, 0141, 0162, 0151, 0141, 0156, 0164, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 
  0030, 0000, 0000, 0000, 0220, 0000, 0000, 0000, 0000, 0000, 0000, 0050, 0004, 0000, 0000, 0000, 
  0000, 0000, 0000, 0000, 0001, 0000, 0000, 0000, 0001, 0000, 0000, 0000, 0003, 0000, 0000, 0000, 
  0324, 0265, 0002, 0000, 0377, 0377, 0377, 0377, 0220, 0000, 0000, 0000, 0001, 0000, 0114, 0000, 
  0224, 0000, 0000, 0000, 0230, 0000, 0000, 0000, 0312, 0114, 0014, 0251, 0003, 0000, 0000, 0000, 
  0230, 0000, 0000, 0000, 0023, 0000, 0166, 0000, 0260, 0000, 0000, 0000, 0046, 0003, 0000, 0000, 
  0132, 0233, 0152, 0022, 0000, 0000, 0000, 0000, 0046, 0003, 0000, 0000, 0007, 0000, 0114, 0000, 
  0060, 0003, 0000, 0000, 0064, 0003, 0000, 0000, 0027, 0046, 0367, 0240, 0002, 0000, 0000, 0000, 
  0064, 0003, 0000, 0000, 0007, 0000, 0114, 0000, 0074, 0003, 0000, 0000, 0100, 0003, 0000, 0000, 
  0057, 0000, 0000, 0000, 0002, 0000, 0000, 0000, 0165, 0151, 0055, 0155, 0141, 0151, 0156, 0167, 
  0151, 0156, 0144, 0157, 0167, 0056, 0147, 0154, 0141, 0144, 0145, 0000, 0000, 0000, 0000, 0000, 
  0234, 0024, 0000, 0000, 0001, 0000, 0000, 0000, 0170, 0332, 0355, 0230, 0115, 0157, 0333, 0060, 
  0014, 0206, 0357, 0375, 0025, 0232, 0256, 0203, 0363, 0141, 0157, 0100, 0060, 0330, 0056, 0072, 
  0154, 0355, 0245, 0207, 0141, 0153, 0201, 0355, 0124, 0310, 0026, 0223, 0150, 0221, 0045, 0117, 
  0122, 0276, 0376, 0375, 0224, 0146, 0101, 0332, 0130, 0111, 0054, 0247, 0115, 0220, 0241, 0067, 
  0313, 0046, 0055, 0076, 0344, 0113, 0113, 0126, 0174, 0071, 0053, 0070, 0232, 0200, 0322, 0114, 
  0212, 0004, 0167, 0133, 0035, 0214, 0100, 0344, 0222, 0062, 0061, 0110, 0360, 0375, 0335, 0165, 
  0320, 0303, 0227, 0351, 0105, 0374, 0056, 0010, 0320, 0015, 0010, 0120, 0304, 0000, 0105, 0123, 
  0146, 0206, 0150, 0300, 0011, 0005, 0024, 0265, 0242, 0136, 0053, 0104, 0101, 0140, 0215, 0230, 
  0060, 0240, 0372, 0044, 0207, 0364, 0002, 0241, 0130, 0301, 0237, 0061, 0123, 0240, 0021, 0147, 
  0131, 0202, 0007, 0146, 0364, 0036, 0257, 0047, 0212, 0132, 0341, 0007, 0334, 0176, 0264, 0223, 
  0331, 0157, 0310, 0015, 0312, 0071, 0321, 0072, 0301, 0067, 0146, 0364, 0131, 0316, 0060, 0142, 
  0064, 0301, 0305, 0103, 0101, 0230, 0310, 0354, 0160, 0141, 0150, 0115, 0113, 0045, 0113, 0120, 
  0146, 0216, 0004, 0051, 0040, 0301, 0023, 0246, 0131, 0306, 0001, 0247, 0167, 0152, 0014, 0161, 
  0173, 0365, 0324, 0155, 0234, 0023, 0021, 0364, 0145, 0076, 0326, 0070, 0275, 0046, 0134, 0357, 
  0265, 0327, 0045, 0311, 0155, 0022, 0160, 0372, 0161, 0237, 0145, 0106, 0064, 0160, 0046, 0040, 
  0050, 0245, 0146, 0306, 0342, 0341, 0324, 0310, 0262, 0342, 0225, 0017, 0031, 0247, 0313, 0353, 
  0155, 0324, 0253, 0247, 0236, 0250, 0115, 0160, 0135, 0076, 0122, 0061, 0020, 0206, 0054, 0021, 
  0154, 0251, 0014, 0313, 0011, 0257, 0343, 0270, 0075, 0127, 0315, 0363, 0125, 0315, 0131, 0235, 
  0274, 0065, 0312, 0135, 0323, 0374, 0271, 0103, 0164, 0207, 0171, 0113, 0062, 0340, 0053, 0131, 
  0363, 0305, 0340, 0241, 0213, 0067, 0335, 0032, 0306, 0176, 0110, 0374, 0056, 0137, 0276, 0214, 
  0325, 0050, 0042, 0064, 0047, 0206, 0330, 0000, 0022, 0074, 0007, 0373, 0052, 0204, 0176, 0176, 
  0102, 0333, 0137, 0025, 0267, 0227, 0334, 0225, 0373, 0126, 0037, 0043, 0053, 0220, 0375, 0123, 
  0303, 0254, 0044, 0202, 0066, 0210, 0271, 0317, 0070, 0367, 0317, 0322, 0132, 0201, 0235, 0135, 
  0124, 0316, 0360, 0343, 0266, 0243, 0364, 0165, 0345, 0360, 0125, 0030, 0065, 0137, 0311, 0001, 
  0026, 0203, 0243, 0311, 0141, 0267, 0353, 0031, 0227, 0260, 0173, 0334, 0022, 0072, 0072, 0072, 
  0074, 0307, 0216, 0376, 0365, 0237, 0166, 0164, 0170, 0362, 0216, 0016, 0337, 0072, 0372, 0260, 
  0022, 0106, 0057, 0121, 0102, 0027, 0277, 0233, 0275, 0021, 0267, 0077, 0263, 0367, 0042, 0344, 
  0140, 0255, 0160, 0326, 0332, 0052, 0215, 0215, 0261, 0323, 0374, 0323, 0150, 0366, 0070, 0252, 
  0054, 0073, 0365, 0077, 0035, 0127, 0224, 0242, 0157, 0322, 0156, 0372, 0353, 0202, 0036, 0272, 
  0021, 0363, 0161, 0123, 0220, 0003, 0233, 0200, 0016, 0050, 0364, 0311, 0230, 0233, 0135, 0336, 
  0147, 0244, 0220, 0356, 0353, 0052, 0344, 0226, 0151, 0363, 0344, 0367, 0213, 0333, 0141, 0166, 
  0312, 0375, 0365, 0341, 0225, 0361, 0211, 0351, 0220, 0302, 0204, 0047, 0150, 0335, 0260, 0161, 
  0353, 0176, 0207, 0102, 0116, 0000, 0375, 0000, 0156, 0247, 0201, 0267, 0066, 0076, 0166, 0033, 
  0107, 0115, 0325, 0262, 0311, 0130, 0345, 0363, 0146, 0363, 0343, 0362, 0132, 0274, 0066, 0170, 
  0236, 0261, 0354, 0073, 0017, 0371, 0242, 0310, 0324, 0172, 0136, 0051, 0040, 0053, 0331, 0123, 
  0173, 0153, 0307, 0031, 0311, 0224, 0121, 0063, 0014, 0026, 0307, 0116, 0240, 0255, 0120, 0172, 
  0235, 0116, 0035, 0200, 0041, 0260, 0301, 0320, 0170, 0273, 0275, 0302, 0201, 0114, 0363, 0332, 
  0326, 0215, 0301, 0263, 0264, 0166, 0372, 0300, 0314, 0113, 0013, 0011, 0202, 0372, 0211, 0241, 
  0353, 0043, 0206, 0065, 0170, 0334, 0176, 0162, 0206, 0370, 0027, 0100, 0351, 0006, 0265, 0000, 
  0050, 0165, 0165, 0141, 0171, 0051, 0165, 0156, 0151, 0161, 0165, 0145, 0057, 0000, 0000, 0000, 
  0003, 0000, 0000, 0000, 0160, 0162, 0145, 0146, 0151, 0170, 0057, 0000, 0001, 0000, 0000, 0000
} };
#else /* _MSC_VER */
static const SECTION union { const guint8 data[833]; const double alignment; void * const ptr;}  resources_resource_data = {
  "\107\126\141\162\151\141\156\164\000\000\000\000\000\000\000\000"
  "\030\000\000\000\220\000\000\000\000\000\000\050\004\000\000\000"
  "\000\000\000\000\001\000\000\000\001\000\000\000\003\000\000\000"
  "\324\265\002\000\377\377\377\377\220\000\000\000\001\000\114\000"
  "\224\000\000\000\230\000\000\000\312\114\014\251\003\000\000\000"
  "\230\000\000\000\023\000\166\000\260\000\000\000\046\003\000\000"
  "\132\233\152\022\000\000\000\000\046\003\000\000\007\000\114\000"
  "\060\003\000\000\064\003\000\000\027\046\367\240\002\000\000\000"
  "\064\003\000\000\007\000\114\000\074\003\000\000\100\003\000\000"
  "\057\000\000\000\002\000\000\000\165\151\055\155\141\151\156\167"
  "\151\156\144\157\167\056\147\154\141\144\145\000\000\000\000\000"
  "\234\024\000\000\001\000\000\000\170\332\355\230\115\157\333\060"
  "\014\206\357\375\025\232\256\203\363\141\157\100\060\330\056\072"
  "\154\355\245\207\141\153\201\355\124\310\026\223\150\221\045\117"
  "\122\276\376\375\224\146\101\332\130\111\054\247\115\220\241\067"
  "\313\046\055\076\344\113\113\126\174\071\053\070\232\200\322\114"
  "\212\004\167\133\035\214\100\344\222\062\061\110\360\375\335\165"
  "\320\303\227\351\105\374\056\010\320\015\010\120\304\000\105\123"
  "\146\206\150\300\011\005\024\265\242\136\053\104\101\140\215\230"
  "\060\240\372\044\207\364\002\241\130\301\237\061\123\240\021\147"
  "\131\202\007\146\364\036\257\047\212\132\341\007\334\176\264\223"
  "\331\157\310\015\312\071\321\072\301\067\146\364\131\316\060\142"
  "\064\301\305\103\101\230\310\354\160\141\150\115\113\045\113\120"
  "\146\216\004\051\040\301\023\246\131\306\001\247\167\152\014\161"
  "\173\365\324\155\234\023\021\364\145\076\326\070\275\046\134\357"
  "\265\327\045\311\155\022\160\372\161\237\145\106\064\160\046\040"
  "\050\245\146\306\342\341\324\310\262\342\225\017\031\247\313\353"
  "\155\324\253\247\236\250\115\160\135\076\122\061\020\206\054\021"
  "\154\251\014\313\011\257\343\270\075\127\315\363\125\315\131\235"
  "\274\065\312\135\323\374\271\103\164\207\171\113\062\340\053\131"
  "\363\305\340\241\213\067\335\032\306\176\110\374\056\137\276\214"
  "\325\050\042\064\047\206\330\000\022\074\007\373\052\204\176\176"
  "\102\333\137\025\267\227\334\225\373\126\037\043\053\220\375\123"
  "\303\254\044\202\066\210\271\317\070\367\317\322\132\201\235\135"
  "\124\316\360\343\266\243\364\165\345\360\125\030\065\137\311\001"
  "\026\203\243\311\141\267\353\031\227\260\173\334\022\072\072\072"
  "\074\307\216\376\365\237\166\164\170\362\216\016\337\072\372\260"
  "\022\106\057\121\102\027\277\233\275\021\267\077\263\367\042\344"
  "\140\255\160\326\332\052\215\215\261\323\374\323\150\366\070\252"
  "\054\073\365\077\035\127\224\242\157\322\156\372\353\202\036\272"
  "\021\363\161\123\220\003\233\200\016\050\364\311\230\233\135\336"
  "\147\244\220\356\353\052\344\226\151\363\344\367\213\333\141\166"
  "\312\375\365\341\225\361\211\351\220\302\204\047\150\335\260\161"
  "\353\176\207\102\116\000\375\000\156\247\201\267\066\076\166\033"
  "\107\115\325\262\311\130\345\363\146\363\343\362\132\274\066\170"
  "\236\261\354\073\017\371\242\310\324\172\136\051\040\053\331\123"
  "\173\153\307\031\311\224\121\063\014\026\307\116\240\255\120\172"
  "\235\116\035\200\041\260\301\320\170\273\275\302\201\114\363\332"
  "\326\215\301\263\264\166\372\300\314\113\013\011\202\372\211\241"
  "\353\043\206\065\170\334\176\162\206\370\027\100\351\006\265\000"
  "\050\165\165\141\171\051\165\156\151\161\165\145\057\000\000\000"
  "\003\000\000\000\160\162\145\146\151\170\057\000\001\000\000\000"
  "" };
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
#pragma G_DEFINE_CONSTRUCTOR_PRAGMA_ARGS(resource_constructor)
#endif
G_DEFINE_CONSTRUCTOR(resource_constructor)
#ifdef G_DEFINE_DESTRUCTOR_NEEDS_PRAGMA
#pragma G_DEFINE_DESTRUCTOR_PRAGMA_ARGS(resource_destructor)
#endif
G_DEFINE_DESTRUCTOR(resource_destructor)

#else
#warning "Constructor not supported on this compiler, linking in resources will not work"
#endif

static void resource_constructor (void)
{
  g_static_resource_init (&static_resource);
}

static void resource_destructor (void)
{
  g_static_resource_fini (&static_resource);
}
