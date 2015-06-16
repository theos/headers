#if TARGET_MACOSX
#include_next <WebKit/WebPolicyDecisionListener.h>
#else
@protocol WebPolicyDecisionListener <NSObject>

- (void)download;
- (void)ignore;
- (void)use;

@end
#endif
