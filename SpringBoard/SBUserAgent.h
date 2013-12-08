@interface SBUserAgent : NSObject

+ (instancetype)sharedUserAgent;

- (NSString *)foregroundApplicationDisplayID;

@end
