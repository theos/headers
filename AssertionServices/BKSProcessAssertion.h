@interface BKSProcessAssertion : NSObject

- (instancetype)initWithBundleIdentifier:(NSString *)identifier flags:(NSUInteger)flags reason:(NSUInteger)reason name:(NSString *)name withHandler:(id)handler;

+ (NSString *)NameForReason:(NSUInteger)reason;

- (BOOL)valid;

@end
