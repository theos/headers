#ifndef THEOS_PACKAGE_INSTALL_PREFIX
#define THEOS_PACKAGE_INSTALL_PREFIX ""
#endif

// Function-like macros:
//   ROOT_PATH(cPath)
//     `cPath` is a C string literal such as "/Library"
//   ROOT_PATH_NS(path)
//     `path` is an NSString literal such as @"/Library"
//
// If you need to append a variable path to the install prefix (i.e. not a string literal)
// use the `THEOS_PACKAGE_INSTALL_PREFIX` directly. In Objective-C,
// `[@THEOS_PACKAGE_INSTALL_PREFIX stringByAppendingPathComponent:path]` may be used.
// In C, `strlcpy` and `strlcat` may be used to first copy `THEOS_PACKAGE_INSTALL_PREFIX`
// into a buffer, followed by the path variable.

#ifdef XINA_SUPPORT // Only define this for rootful compilations that need support for xina
#include <unistd.h> /* for access(2) */

#define ROOT_PATH(cPath) !access("/var/LIY", F_OK) ? "/var/jb" cPath : cPath
#define ROOT_PATH_NS(path) !access("/var/LIY", F_OK) ? @"/var/jb" path : path
#else
#define ROOT_PATH(cPath) THEOS_PACKAGE_INSTALL_PREFIX cPath
#define ROOT_PATH_NS(path) @THEOS_PACKAGE_INSTALL_PREFIX path
#endif
