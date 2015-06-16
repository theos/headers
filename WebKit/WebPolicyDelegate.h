#if TARGET_MACOSX
#include_next <WebKit/WebPolicyDelegate.h>
#else
extern NSString *WebActionElementKey;
#endif
