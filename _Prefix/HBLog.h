#include <sys/syslog.h>

#define NSLog(...) { \
	_Pragma("message(\"NSLog is deprecated. Try HBLogDebug, HBLogInfo, and HBLogError.\")"); \
	NSLog(__VA_ARGS__); \
}

#ifdef __DEBUG__
	#define HB_LOG_FORMAT(color) "\e[1;3" #color "m[%s] \e[m\e[0;3" #color "m%s:%d\e[m \e[0;30;4" #color "m%s:\e[m %s"
#else
	#define HB_LOG_FORMAT(color) "[%s: %s:%d] %s: %s"
#endif

#define HB_LOG_INTERNAL(color, level, type, ...) syslog(level, HB_LOG_FORMAT(color), THEOS_INSTANCE_NAME, __FILE__, __LINE__, type, [NSString stringWithFormat:__VA_ARGS__].UTF8String);

#ifdef __DEBUG__
	#define HBLogDebug(...) HB_LOG_INTERNAL(6, LOG_NOTICE, "DEBUG", __VA_ARGS__)
#else
	#define HBLogDebug(...)
#endif

#define HBLogInfo(...) HB_LOG_INTERNAL(2, LOG_NOTICE, "INFO", __VA_ARGS__)
#define HBLogWarn(...) HB_LOG_INTERNAL(3, LOG_WARNING, "WARN", __VA_ARGS__)
#define HBLogError(...) HB_LOG_INTERNAL(1, LOG_ERR, "ERROR", __VA_ARGS__)
