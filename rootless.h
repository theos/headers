// TODO: remove this file
#include <libroot/libroot.h>

#ifdef XINA_SUPPORT
_Pragma("message(\"'XINA_SUPPORT' is deprecated. libroot will now handle this for you.\")")
#endif

#define ROOT_PATH(cPath) _Pragma("message(\"'ROOT_PATH' is deprecated. Please import libroot.h and use 'JBROOT_PATH_CSTRING' instead.\")") JBROOT_PATH_CSTRING(cPath)
#define ROOT_PATH_VAR(path) _Pragma("message(\"'ROOT_PATH_VAR' is deprecated. Please import libroot.h and use 'JBROOT_PATH_CSTRING' instead.\")") JBROOT_PATH_CSTRING(path)

#define ROOT_PATH_NS(path) _Pragma("message(\"'ROOT_PATH_NS' is deprecated. Please import libroot.h and use 'JBROOT_PATH_NSSTRING' instead.\")") JBROOT_PATH_NSSTRING(path)
#define ROOT_PATH_NS_VAR(path) _Pragma("message(\"'ROOT_PATH_NS_VAR' is deprecated. Please import libroot.h and use 'JBROOT_PATH_NSSTRING' instead.\")") JBROOT_PATH_NSSTRING(path)
