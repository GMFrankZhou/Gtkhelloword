#include <gio/gio.h>

#if defined (__ELF__) && ( __GNUC__ > 2 || (__GNUC__ == 2 && __GNUC_MINOR__ >= 6))
# define SECTION __attribute__ ((section (".gresource.resources"), aligned (8)))
#else
# define SECTION
#endif

#ifdef _MSC_VER
static const SECTION union { const guint8 data[825]; const double alignment; void * const ptr;}  resources_resource_data = { {
  0107, 0126, 0141, 0162, 0151, 0141, 0156, 0164, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 
  0030, 0000, 0000, 0000, 0220, 0000, 0000, 0000, 0000, 0000, 0000, 0050, 0004, 0000, 0000, 0000, 
  0000, 0000, 0000, 0000, 0001, 0000, 0000, 0000, 0001, 0000, 0000, 0000, 0003, 0000, 0000, 0000, 
  0324, 0265, 0002, 0000, 0377, 0377, 0377, 0377, 0220, 0000, 0000, 0000, 0001, 0000, 0114, 0000, 
  0224, 0000, 0000, 0000, 0230, 0000, 0000, 0000, 0312, 0114, 0014, 0251, 0003, 0000, 0000, 0000, 
  0230, 0000, 0000, 0000, 0023, 0000, 0166, 0000, 0260, 0000, 0000, 0000, 0037, 0003, 0000, 0000, 
  0132, 0233, 0152, 0022, 0000, 0000, 0000, 0000, 0037, 0003, 0000, 0000, 0007, 0000, 0114, 0000, 
  0050, 0003, 0000, 0000, 0054, 0003, 0000, 0000, 0027, 0046, 0367, 0240, 0002, 0000, 0000, 0000, 
  0054, 0003, 0000, 0000, 0007, 0000, 0114, 0000, 0064, 0003, 0000, 0000, 0070, 0003, 0000, 0000, 
  0057, 0000, 0000, 0000, 0002, 0000, 0000, 0000, 0165, 0151, 0055, 0155, 0141, 0151, 0156, 0167, 
  0151, 0156, 0144, 0157, 0167, 0056, 0147, 0154, 0141, 0144, 0145, 0000, 0000, 0000, 0000, 0000, 
  0155, 0025, 0000, 0000, 0001, 0000, 0000, 0000, 0170, 0332, 0355, 0130, 0335, 0157, 0323, 0060, 
  0020, 0177, 0337, 0137, 0141, 0374, 0212, 0322, 0256, 0051, 0110, 0023, 0112, 0062, 0201, 0304, 
  0366, 0302, 0003, 0142, 0103, 0300, 0323, 0344, 0330, 0327, 0326, 0324, 0261, 0203, 0355, 0176, 
  0375, 0367, 0270, 0153, 0243, 0116, 0215, 0273, 0306, 0051, 0264, 0053, 0342, 0055, 0166, 0356, 
  0342, 0373, 0335, 0375, 0356, 0303, 0111, 0256, 0347, 0205, 0100, 0123, 0320, 0206, 0053, 0231, 
  0342, 0136, 0347, 0022, 0043, 0220, 0124, 0061, 0056, 0207, 0051, 0376, 0172, 0177, 0023, 0135, 
  0341, 0353, 0354, 0042, 0171, 0025, 0105, 0350, 0026, 0044, 0150, 0142, 0201, 0241, 0031, 0267, 
  0043, 0064, 0024, 0204, 0001, 0352, 0167, 0372, 0127, 0235, 0030, 0105, 0221, 0023, 0342, 0322, 
  0202, 0036, 0020, 0012, 0331, 0005, 0102, 0211, 0206, 0137, 0023, 0256, 0301, 0040, 0301, 0363, 
  0024, 0017, 0355, 0370, 0065, 0336, 0034, 0324, 0357, 0304, 0157, 0160, 0367, 0121, 0116, 0345, 
  0077, 0201, 0132, 0104, 0005, 0061, 0046, 0305, 0267, 0166, 0374, 0101, 0315, 0061, 0342, 0054, 
  0305, 0305, 0103, 0101, 0270, 0314, 0335, 0162, 0051, 0350, 0104, 0113, 0255, 0112, 0320, 0166, 
  0201, 0044, 0051, 0040, 0305, 0123, 0156, 0170, 0056, 0000, 0147, 0367, 0172, 0002, 0111, 0267, 
  0172, 0353, 0027, 0246, 0104, 0106, 0003, 0105, 0047, 0006, 0147, 0067, 0104, 0230, 0275, 0362, 
  0246, 0044, 0324, 0071, 0001, 0147, 0157, 0367, 0111, 0346, 0304, 0200, 0340, 0022, 0242, 0122, 
  0031, 0156, 0035, 0074, 0234, 0131, 0125, 0326, 0264, 0350, 0210, 0013, 0266, 0172, 0336, 0205, 
  0272, 0172, 0033, 0010, 0265, 0015, 0134, 0237, 0216, 0322, 0034, 0244, 0045, 0053, 0010, 0056, 
  0124, 0226, 0123, 0042, 0232, 0050, 0356, 0366, 0125, 0173, 0177, 0325, 0175, 0326, 0304, 0157, 
  0255, 0174, 0327, 0326, 0177, 0176, 0023, 0375, 0146, 0176, 0042, 0071, 0210, 0212, 0326, 0142, 
  0271, 0170, 0350, 0341, 0155, 0265, 0226, 0266, 0037, 0142, 0277, 0117, 0127, 0254, 0154, 0265, 
  0232, 0110, 0043, 0210, 0045, 0316, 0200, 0024, 0057, 0300, 0175, 0012, 0241, 0357, 0357, 0320, 
  0356, 0117, 0045, 0335, 0025, 0356, 0332, 0276, 0343, 0307, 0330, 0021, 0144, 0377, 0321, 0060, 
  0057, 0211, 0144, 0055, 0154, 0036, 0160, 0041, 0302, 0275, 0264, 0141, 0340, 0345, 0163, 0250, 
  0274, 0346, 0047, 0135, 0117, 0350, 0233, 0322, 0341, 0243, 0264, 0172, 0121, 0321, 0001, 0226, 
  0213, 0243, 0321, 0341, 0171, 0325, 0063, 0016, 0141, 0357, 0270, 0041, 0364, 0144, 0164, 0174, 
  0216, 0031, 0375, 0343, 0037, 0315, 0350, 0370, 0344, 0031, 0035, 0377, 0317, 0350, 0303, 0102, 
  0330, 0377, 0023, 0041, 0364, 0341, 0367, 0143, 0157, 0205, 0073, 0034, 0163, 0160, 0023, 0362, 
  0140, 0255, 0341, 0154, 0064, 0052, 0115, 0254, 0165, 0307, 0254, 0071, 0232, 0077, 0256, 0152, 
  0155, 0247, 0171, 0351, 0170, 0317, 0030, 0372, 0254, 0334, 0320, 0337, 0024, 0350, 0241, 0203, 
  0130, 0250, 0032, 0203, 0001, 0231, 0010, 0033, 0246, 0250, 0201, 0002, 0237, 0202, 0151, 0242, 
  0175, 0106, 0324, 0352, 0375, 0145, 0152, 0235, 0170, 0012, 0157, 0173, 0223, 0011, 0251, 0360, 
  0167, 0124, 0053, 0041, 0200, 0175, 0343, 0222, 0251, 0131, 0225, 0106, 0146, 0275, 0073, 0133, 
  0355, 0276, 0204, 0212, 0357, 0271, 0240, 0215, 0210, 0063, 0056, 0262, 0213, 0322, 0235, 0313, 
  0345, 0061, 0232, 0105, 0250, 0211, 0147, 0066, 0300, 0173, 0153, 0151, 0223, 0206, 0277, 0273, 
  0236, 0176, 0201, 0102, 0115, 0001, 0335, 0201, 0160, 0107, 0301, 0236, 0332, 0372, 0122, 0230, 
  0025, 0122, 0056, 0317, 0163, 0032, 0161, 0166, 0255, 0023, 0007, 0044, 0073, 0341, 0315, 0344, 
  0360, 0146, 0023, 0122, 0171, 0017, 0351, 0065, 0161, 0333, 0136, 0263, 0015, 0261, 0016, 0057, 
  0230, 0014, 0141, 0270, 0202, 0312, 0313, 0026, 0236, 0047, 0130, 0066, 0070, 0222, 0356, 0223, 
  0237, 0242, 0277, 0001, 0204, 0017, 0054, 0063, 0000, 0050, 0165, 0165, 0141, 0171, 0051, 0165, 
  0156, 0151, 0161, 0165, 0145, 0057, 0000, 0000, 0003, 0000, 0000, 0000, 0160, 0162, 0145, 0146, 
  0151, 0170, 0057, 0000, 0001, 0000, 0000, 0000
} };
#else /* _MSC_VER */
static const SECTION union { const guint8 data[825]; const double alignment; void * const ptr;}  resources_resource_data = {
  "\107\126\141\162\151\141\156\164\000\000\000\000\000\000\000\000"
  "\030\000\000\000\220\000\000\000\000\000\000\050\004\000\000\000"
  "\000\000\000\000\001\000\000\000\001\000\000\000\003\000\000\000"
  "\324\265\002\000\377\377\377\377\220\000\000\000\001\000\114\000"
  "\224\000\000\000\230\000\000\000\312\114\014\251\003\000\000\000"
  "\230\000\000\000\023\000\166\000\260\000\000\000\037\003\000\000"
  "\132\233\152\022\000\000\000\000\037\003\000\000\007\000\114\000"
  "\050\003\000\000\054\003\000\000\027\046\367\240\002\000\000\000"
  "\054\003\000\000\007\000\114\000\064\003\000\000\070\003\000\000"
  "\057\000\000\000\002\000\000\000\165\151\055\155\141\151\156\167"
  "\151\156\144\157\167\056\147\154\141\144\145\000\000\000\000\000"
  "\155\025\000\000\001\000\000\000\170\332\355\130\335\157\323\060"
  "\020\177\337\137\141\374\212\322\256\051\110\023\112\062\201\304"
  "\366\302\003\142\103\300\323\344\330\327\326\324\261\203\355\176"
  "\375\367\270\153\243\116\215\273\306\051\264\053\342\055\166\356"
  "\342\373\335\375\356\303\111\256\347\205\100\123\320\206\053\231"
  "\342\136\347\022\043\220\124\061\056\207\051\376\172\177\023\135"
  "\341\353\354\042\171\025\105\350\026\044\150\142\201\241\031\267"
  "\043\064\024\204\001\352\167\372\127\235\030\105\221\023\342\322"
  "\202\036\020\012\331\005\102\211\206\137\023\256\301\040\301\363"
  "\024\017\355\370\065\336\034\324\357\304\157\160\367\121\116\345"
  "\077\201\132\104\005\061\046\305\267\166\374\101\315\061\342\054"
  "\305\305\103\101\270\314\335\162\051\350\104\113\255\112\320\166"
  "\201\044\051\040\305\123\156\170\056\000\147\367\172\002\111\267"
  "\172\353\027\246\104\106\003\105\047\006\147\067\104\230\275\362"
  "\246\044\324\071\001\147\157\367\111\346\304\200\340\022\242\122"
  "\031\156\035\074\234\131\125\326\264\350\210\013\266\172\336\205"
  "\272\172\033\010\265\015\134\237\216\322\034\244\045\053\010\056"
  "\124\226\123\042\232\050\356\366\125\173\177\325\175\326\304\157"
  "\255\174\327\326\177\176\023\375\146\176\042\071\210\212\326\142"
  "\271\170\350\341\155\265\226\266\037\142\277\117\127\254\154\265"
  "\232\110\043\210\045\316\200\024\057\300\175\012\241\357\357\320"
  "\356\117\045\335\025\356\332\276\343\307\330\021\144\377\321\060"
  "\057\211\144\055\154\036\160\041\302\275\264\141\340\345\163\250"
  "\274\346\047\135\117\350\233\322\341\243\264\172\121\321\001\226"
  "\213\243\321\341\171\325\063\016\141\357\270\041\364\144\164\174"
  "\216\031\375\343\037\315\350\370\344\031\035\377\317\350\303\102"
  "\330\377\023\041\364\341\367\143\157\205\073\034\163\160\023\362"
  "\140\255\341\154\064\052\115\254\165\307\254\071\232\077\256\152"
  "\155\247\171\351\170\317\030\372\254\334\320\337\024\350\241\203"
  "\130\250\032\203\001\231\010\033\246\250\201\002\237\202\151\242"
  "\175\106\324\352\375\145\152\235\170\012\157\173\223\011\251\360"
  "\167\124\053\041\200\175\343\222\251\131\225\106\146\275\073\133"
  "\355\276\204\212\357\271\240\215\210\063\056\262\213\322\235\313"
  "\345\061\232\105\250\211\147\066\300\173\153\151\223\206\277\273"
  "\236\176\201\102\115\001\335\201\160\107\301\236\332\372\122\230"
  "\025\122\056\317\163\032\161\166\255\023\007\044\073\341\315\344"
  "\360\146\023\122\171\017\351\065\161\333\136\263\015\261\016\057"
  "\230\014\141\270\202\312\313\026\236\047\130\066\070\222\356\223"
  "\237\242\277\001\204\017\054\063\000\050\165\165\141\171\051\165"
  "\156\151\161\165\145\057\000\000\003\000\000\000\160\162\145\146"
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
