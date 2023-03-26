#ifdef THEOS_PACKAGE_INSTALL_PREFIX
#define ROOT_PATH(cPath) THEOS_PACKAGE_INSTALL_PREFIX cPath
#define ROOT_PATH_NS(path) @THEOS_PACKAGE_INSTALL_PREFIX path
#define ROOT_PATH_NS_VAR(path) [@THEOS_PACKAGE_INSTALL_PREFIX stringByAppendingPathComponent:path]
#define ROOT_PATH_VAR(cPath) ROOT_PATH_NS_VAR(@cPath).fileSystemRepresentation
#else
#define ROOT_PATH(cPath) cPath
#define ROOT_PATH_NS(path) path
#define ROOT_PATH_NS_VAR(path) path
#define ROOT_PATH_VAR(cPath) cPath
#endif