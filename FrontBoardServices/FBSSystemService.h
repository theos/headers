typedef void (^FBSSystemServiceResultCallback)();

@class BSAction;

@interface FBSSystemService : NSObject

+ (instancetype)sharedService;

- (void)sendActions:(NSSet <BSAction *> *)actions withResult:(FBSSystemServiceResultCallback)result;

@end
