@interface LSApplicationWorkspace : NSObject

+ (instancetype)defaultWorkspace;

- (NSArray *)applicationsAvailableForHandlingURLScheme:(NSString *)urlScheme;

@end
