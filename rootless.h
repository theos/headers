#include <TargetConditionals.h>

#if TARGET_OS_IPHONE

#include <libroot/libroot.h>

#ifdef XINA_SUPPORT
_Pragma("message(\"'XINA_SUPPORT' is deprecated. libroot will now handle this for you.\")")
#endif

#define ROOT_PATH(cPath) JBROOT_PATH_CSTRING(cPath)
#define ROOT_PATH_VAR(cPath) JBROOT_PATH_CSTRING(cPath)

#define ROOT_PATH_NS(nsPath) JBROOT_PATH_NSSTRING(nsPath)
#define ROOT_PATH_NS_VAR(nsPath) JBROOT_PATH_NSSTRING(nsPath)

#else

// no libroot support

#include <sys/syslimits.h>
#include <string.h>

#define ROOT_PATH(cPath) THEOS_PACKAGE_INSTALL_PREFIX cPath
#define ROOT_PATH_NS(path) @THEOS_PACKAGE_INSTALL_PREFIX path

#define ROOT_PATH_NS_VAR(path) [@THEOS_PACKAGE_INSTALL_PREFIX stringByAppendingPathComponent:path]
#define ROOT_PATH_VAR(path) sizeof(THEOS_PACKAGE_INSTALL_PREFIX) > 1 ? ({ \
    char outPath[PATH_MAX]; \
    strlcpy(outPath, THEOS_PACKAGE_INSTALL_PREFIX, PATH_MAX); \
    strlcat(outPath, path, PATH_MAX); \
    outPath; \
}) : path

#endif
