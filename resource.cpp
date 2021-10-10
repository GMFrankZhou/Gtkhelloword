#include <gio/gio.h>

#if defined (__ELF__) && ( __GNUC__ > 2 || (__GNUC__ == 2 && __GNUC_MINOR__ >= 6))
# define SECTION __attribute__ ((section (".gresource.resources"), aligned (8)))
#else
# define SECTION
#endif

#ifdef _MSC_VER
static const SECTION union { const guint8 data[841]; const double alignment; void * const ptr;}  resources_resource_data = { {
  0107, 0126, 0141, 0162, 0151, 0141, 0156, 0164, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 
  0030, 0000, 0000, 0000, 0220, 0000, 0000, 0000, 0000, 0000, 0000, 0050, 0004, 0000, 0000, 0000, 
  0000, 0000, 0000, 0000, 0001, 0000, 0000, 0000, 0001, 0000, 0000, 0000, 0003, 0000, 0000, 0000, 
  0324, 0265, 0002, 0000, 0377, 0377, 0377, 0377, 0220, 0000, 0000, 0000, 0001, 0000, 0114, 0000, 
  0224, 0000, 0000, 0000, 0230, 0000, 0000, 0000, 0312, 0114, 0014, 0251, 0003, 0000, 0000, 0000, 
  0230, 0000, 0000, 0000, 0023, 0000, 0166, 0000, 0260, 0000, 0000, 0000, 0061, 0003, 0000, 0000, 
  0132, 0233, 0152, 0022, 0000, 0000, 0000, 0000, 0061, 0003, 0000, 0000, 0007, 0000, 0114, 0000, 
  0070, 0003, 0000, 0000, 0074, 0003, 0000, 0000, 0027, 0046, 0367, 0240, 0002, 0000, 0000, 0000, 
  0074, 0003, 0000, 0000, 0007, 0000, 0114, 0000, 0104, 0003, 0000, 0000, 0110, 0003, 0000, 0000, 
  0057, 0000, 0000, 0000, 0002, 0000, 0000, 0000, 0165, 0151, 0055, 0155, 0141, 0151, 0156, 0167, 
  0151, 0156, 0144, 0157, 0167, 0056, 0147, 0154, 0141, 0144, 0145, 0000, 0000, 0000, 0000, 0000, 
  0206, 0025, 0000, 0000, 0001, 0000, 0000, 0000, 0170, 0332, 0355, 0130, 0335, 0157, 0332, 0060, 
  0020, 0177, 0357, 0137, 0341, 0371, 0165, 0012, 0051, 0141, 0223, 0252, 0051, 0111, 0265, 0111, 
  0153, 0137, 0366, 0060, 0255, 0235, 0272, 0075, 0125, 0216, 0175, 0200, 0207, 0261, 0063, 0333, 
  0174, 0375, 0367, 0163, 0033, 0020, 0025, 0061, 0020, 0207, 0256, 0224, 0151, 0157, 0330, 0271, 
  0263, 0357, 0167, 0367, 0273, 0017, 0223, 0136, 0316, 0307, 0002, 0115, 0101, 0033, 0256, 0144, 
  0206, 0273, 0235, 0163, 0214, 0100, 0122, 0305, 0270, 0034, 0144, 0370, 0373, 0355, 0125, 0164, 
  0201, 0057, 0363, 0263, 0364, 0115, 0024, 0241, 0153, 0220, 0240, 0211, 0005, 0206, 0146, 0334, 
  0016, 0321, 0100, 0020, 0006, 0250, 0327, 0351, 0135, 0164, 0022, 0024, 0105, 0116, 0210, 0113, 
  0013, 0272, 0117, 0050, 0344, 0147, 0010, 0245, 0032, 0176, 0117, 0270, 0006, 0203, 0004, 0057, 
  0062, 0074, 0260, 0243, 0267, 0170, 0175, 0121, 0257, 0223, 0274, 0303, 0361, 0243, 0234, 0052, 
  0176, 0001, 0265, 0210, 0012, 0142, 0114, 0206, 0257, 0355, 0350, 0223, 0232, 0143, 0304, 0131, 
  0206, 0307, 0367, 0143, 0302, 0145, 0341, 0226, 0017, 0202, 0116, 0264, 0324, 0252, 0004, 0155, 
  0027, 0110, 0222, 0061, 0144, 0170, 0312, 0015, 0057, 0004, 0340, 0374, 0126, 0117, 0040, 0215, 
  0127, 0137, 0375, 0302, 0224, 0310, 0250, 0257, 0350, 0304, 0340, 0374, 0212, 0010, 0263, 0127, 
  0336, 0224, 0204, 0072, 0047, 0340, 0374, 0375, 0076, 0311, 0202, 0030, 0020, 0134, 0102, 0124, 
  0052, 0303, 0255, 0203, 0207, 0163, 0253, 0312, 0232, 0026, 0035, 0162, 0301, 0252, 0337, 0333, 
  0120, 0257, 0276, 0006, 0102, 0155, 0003, 0327, 0247, 0243, 0064, 0007, 0151, 0111, 0005, 0301, 
  0205, 0312, 0162, 0112, 0104, 0023, 0305, 0355, 0276, 0152, 0357, 0257, 0272, 0317, 0232, 0370, 
  0255, 0225, 0357, 0332, 0372, 0317, 0157, 0242, 0337, 0314, 0057, 0244, 0000, 0261, 0242, 0265, 
  0170, 0130, 0334, 0167, 0361, 0246, 0132, 0113, 0333, 0017, 0261, 0337, 0247, 0053, 0052, 0133, 
  0255, 0046, 0322, 0010, 0142, 0211, 0063, 0040, 0303, 0013, 0160, 0107, 0041, 0364, 0343, 0003, 
  0332, 0176, 0124, 0032, 0127, 0270, 0153, 0373, 0216, 0037, 0043, 0107, 0220, 0375, 0127, 0303, 
  0274, 0044, 0222, 0265, 0260, 0271, 0317, 0205, 0010, 0367, 0322, 0232, 0201, 0347, 0273, 0120, 
  0171, 0315, 0117, 0143, 0117, 0350, 0233, 0322, 0341, 0263, 0264, 0172, 0261, 0242, 0003, 0074, 
  0054, 0136, 0214, 0016, 0273, 0125, 0117, 0070, 0204, 0335, 0227, 0015, 0241, 0047, 0243, 0223, 
  0123, 0314, 0350, 0237, 0377, 0150, 0106, 0047, 0107, 0317, 0350, 0344, 0177, 0106, 0037, 0026, 
  0302, 0336, 0163, 0204, 0320, 0207, 0337, 0217, 0275, 0025, 0356, 0160, 0314, 0301, 0115, 0310, 
  0203, 0265, 0206, 0263, 0321, 0250, 0064, 0261, 0326, 0135, 0263, 0344, 0150, 0361, 0270, 0252, 
  0265, 0235, 0346, 0245, 0343, 0043, 0143, 0350, 0253, 0162, 0103, 0177, 0123, 0240, 0207, 0016, 
  0142, 0041, 0152, 0032, 0050, 0360, 0051, 0230, 0210, 0101, 0237, 0114, 0204, 0335, 0245, 0175, 
  0102, 0014, 0351, 0376, 0145, 0206, 0034, 0171, 0230, 0156, 0373, 0040, 0011, 0051, 0324, 0067, 
  0124, 0053, 0041, 0200, 0335, 0161, 0311, 0324, 0154, 0225, 0015, 0146, 0271, 0073, 0253, 0166, 
  0137, 0103, 0341, 0366, 0274, 0263, 0206, 0304, 0031, 0027, 0331, 0105, 0351, 0356, 0345, 0162, 
  0247, 0252, 0327, 0033, 0325, 0241, 0302, 0075, 0321, 0207, 0112, 0060, 0320, 0261, 0107, 0061, 
  0366, 0373, 0361, 0331, 0272, 0110, 0050, 0350, 0023, 0233, 0354, 0275, 0105, 0266, 0311, 0044, 
  0260, 0275, 0320, 0176, 0203, 0261, 0232, 0002, 0272, 0001, 0341, 0256, 0202, 0075, 0105, 0367, 
  0265, 0160, 0065, 0244, 0000, 0237, 0346, 0230, 0342, 0354, 0132, 0246, 0042, 0110, 0166, 0304, 
  0047, 0313, 0341, 0355, 0053, 0244, 0226, 0037, 0322, 0275, 0222, 0266, 0335, 0153, 0023, 0142, 
  0035, 0136, 0060, 0031, 0302, 0160, 0005, 0225, 0227, 0015, 0074, 0117, 0260, 0254, 0161, 0244, 
  0361, 0223, 0177, 0113, 0377, 0000, 0032, 0155, 0053, 0013, 0000, 0050, 0165, 0165, 0141, 0171, 
  0051, 0165, 0156, 0151, 0161, 0165, 0145, 0057, 0003, 0000, 0000, 0000, 0160, 0162, 0145, 0146, 
  0151, 0170, 0057, 0000, 0001, 0000, 0000, 0000
} };
#else /* _MSC_VER */
static const SECTION union { const guint8 data[841]; const double alignment; void * const ptr;}  resources_resource_data = {
  "\107\126\141\162\151\141\156\164\000\000\000\000\000\000\000\000"
  "\030\000\000\000\220\000\000\000\000\000\000\050\004\000\000\000"
  "\000\000\000\000\001\000\000\000\001\000\000\000\003\000\000\000"
  "\324\265\002\000\377\377\377\377\220\000\000\000\001\000\114\000"
  "\224\000\000\000\230\000\000\000\312\114\014\251\003\000\000\000"
  "\230\000\000\000\023\000\166\000\260\000\000\000\061\003\000\000"
  "\132\233\152\022\000\000\000\000\061\003\000\000\007\000\114\000"
  "\070\003\000\000\074\003\000\000\027\046\367\240\002\000\000\000"
  "\074\003\000\000\007\000\114\000\104\003\000\000\110\003\000\000"
  "\057\000\000\000\002\000\000\000\165\151\055\155\141\151\156\167"
  "\151\156\144\157\167\056\147\154\141\144\145\000\000\000\000\000"
  "\206\025\000\000\001\000\000\000\170\332\355\130\335\157\332\060"
  "\020\177\357\137\341\371\165\012\051\141\223\252\051\111\265\111"
  "\153\137\366\060\255\235\272\075\125\216\175\200\207\261\063\333"
  "\174\375\367\163\033\020\025\061\020\207\256\224\151\157\330\271"
  "\263\357\167\367\273\017\223\136\316\307\002\115\101\033\256\144"
  "\206\273\235\163\214\100\122\305\270\034\144\370\373\355\125\164"
  "\201\057\363\263\364\115\024\241\153\220\240\211\005\206\146\334"
  "\016\321\100\020\006\250\327\351\135\164\022\024\105\116\210\113"
  "\013\272\117\050\344\147\010\245\032\176\117\270\006\203\004\057"
  "\062\074\260\243\267\170\175\121\257\223\274\303\361\243\234\052"
  "\176\001\265\210\012\142\114\206\257\355\350\223\232\143\304\131"
  "\206\307\367\143\302\145\341\226\017\202\116\264\324\252\004\155"
  "\027\110\222\061\144\170\312\015\057\004\340\374\126\117\040\215"
  "\127\137\375\302\224\310\250\257\350\304\340\374\212\010\263\127"
  "\336\224\204\072\047\340\374\375\076\311\202\030\020\134\102\124"
  "\052\303\255\203\207\163\253\312\232\026\035\162\301\252\337\333"
  "\120\257\276\006\102\155\003\327\247\243\064\007\151\111\005\301"
  "\205\312\162\112\104\023\305\355\276\152\357\257\272\317\232\370"
  "\255\225\357\332\372\317\157\242\337\314\057\244\000\261\242\265"
  "\170\130\334\167\361\246\132\113\333\017\261\337\247\053\052\133"
  "\255\046\322\010\142\211\063\040\303\013\160\107\041\364\343\003"
  "\332\176\124\032\127\270\153\373\216\037\043\107\220\375\127\303"
  "\274\044\222\265\260\271\317\205\010\367\322\232\201\347\273\120"
  "\171\315\117\143\117\350\233\322\341\263\264\172\261\242\003\074"
  "\054\136\214\016\273\125\117\070\204\335\227\015\241\047\243\223"
  "\123\314\350\237\377\150\106\047\107\317\350\344\177\106\037\026"
  "\302\336\163\204\320\207\337\217\275\025\356\160\314\301\115\310"
  "\203\265\206\263\321\250\064\261\326\135\263\344\150\361\270\252"
  "\265\235\346\245\343\043\143\350\253\162\103\177\123\240\207\016"
  "\142\041\152\032\050\360\051\230\210\101\237\114\204\335\245\175"
  "\102\014\351\376\145\206\034\171\230\156\373\040\011\051\324\067"
  "\124\053\041\200\335\161\311\324\154\225\015\146\271\073\253\166"
  "\137\103\341\366\274\263\206\304\031\027\331\105\351\356\345\162"
  "\247\252\327\033\325\241\302\075\321\207\112\060\320\261\107\061"
  "\366\373\361\331\272\110\050\350\023\233\354\275\105\266\311\044"
  "\260\275\320\176\203\261\232\002\272\001\341\256\202\075\105\367"
  "\265\160\065\244\000\237\346\230\342\354\132\246\042\110\166\304"
  "\047\313\341\355\053\244\226\037\322\275\222\266\335\153\023\142"
  "\035\136\060\031\302\160\005\225\227\015\074\117\260\254\161\244"
  "\361\223\177\113\377\000\032\155\053\013\000\050\165\165\141\171"
  "\051\165\156\151\161\165\145\057\003\000\000\000\160\162\145\146"
  "\151\170\057\000\001\000\000\000" };
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
