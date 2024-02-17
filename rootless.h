#include <libroot/libroot.h>

#ifdef XINA_SUPPORT
_Pragma("message(\"'XINA_SUPPORT' is deprecated. libroot will now handle this for you.\")")
#endif

// compatibility header
// use libroot/libroot.h directly in the future

#define ROOT_PATH(cPath) JBROOT_PATH_CSTRING(cPath)
#define ROOT_PATH_VAR(path) JBROOT_PATH_CSTRING(path)

#define ROOT_PATH_NS(path) JBROOT_PATH_NSSTRING(path)
#define ROOT_PATH_NS_VAR(path) JBROOT_PATH_NSSTRING(path)
