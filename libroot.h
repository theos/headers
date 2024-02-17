const char *libroot_dyn_get_root_prefix(void);
const char *libroot_dyn_get_jbroot_prefix(void);
const char *libroot_dyn_get_boot_uuid(void);
char *libroot_dyn_rootfspath(const char *path, char *resolvedPath);
char *libroot_dyn_jbrootpath(const char *path, char *resolvedPath);

#ifdef __OBJC__

#define __CONVERT_PATH_NSSTRING(converter, path) ({ \
	char tmpBuf[PATH_MAX]; \
	[NSString stringWithUTF8String:converter(path.fileSystemRepresentation, tmpBuf)]; \
})

#define JBROOT_PATH_NSSTRING(path) __CONVERT_PATH_NSSTRING(libroot_dyn_jbrootpath, path)
#define ROOTFS_PATH_NSSTRING(path) __CONVERT_PATH_NSSTRING(libroot_dyn_rootfspath, path)

#endif /* __OBJC__ */

#define __CONVERT_PATH_CSTRING(converter, path) ({ \
	static char outPath[PATH_MAX]; \
	converter(path, outPath); \
})

#define JBROOT_PATH_CSTRING(path) __CONVERT_PATH_CSTRING(libroot_dyn_jbrootpath, path)
#define ROOTFS_PATH_CSTRING(path) __CONVERT_PATH_CSTRING(libroot_dyn_rootfspath, path)

#define JBRAND libroot_dyn_get_boot_uuid()
