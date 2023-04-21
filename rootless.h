#ifdef XINA_SUPPORT // Only define this for rootful compilations that need support for xina
#define ROOT_PATH(cPath) [[NSFileManager defaultManager] fileExistsAtPath:@"/var/LIY"] ? "/var/jb" cPath : cPath
#define ROOT_PATH_NS(path) ([[NSFileManager defaultManager] fileExistsAtPath:@"/var/LIY"] ? [@"/var/jb" stringByAppendingPathComponent:path] : path )
#define ROOT_PATH_NS_VAR ROOT_PATH_NS
#define ROOT_PATH_VAR(cPath)(ROOT_PATH_NS([NSString stringWithUTF8String:cPath]).fileSystemRepresentation)
#else
#define ROOT_PATH(cPath) THEOS_PACKAGE_INSTALL_PREFIX cPath
#define ROOT_PATH_NS(path) @THEOS_PACKAGE_INSTALL_PREFIX path
#define ROOT_PATH_NS_VAR(path) [@THEOS_PACKAGE_INSTALL_PREFIX stringByAppendingPathComponent:path]
#define ROOT_PATH_VAR(cPath) ROOT_PATH_NS_VAR(@cPath).fileSystemRepresentation
#endif