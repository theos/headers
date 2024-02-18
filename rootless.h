#include <libroot/libroot.h>

#ifdef XINA_SUPPORT
_Pragma("message(\"'XINA_SUPPORT' is deprecated. libroot will now handle this for you.\")")
#endif

#define ROOT_PATH(cPath) JBROOT_PATH_CSTRING(cPath)
#define ROOT_PATH_VAR(cPath) JBROOT_PATH_CSTRING(cPath)

#define ROOT_PATH_NS(nsPath) JBROOT_PATH_NSSTRING(nsPath)
#define ROOT_PATH_NS_VAR(nsPath) JBROOT_PATH_NSSTRING(nsPath)
