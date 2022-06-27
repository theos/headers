@interface SparkAppList : NSObject
{
	id handler;
}
- (void)getAppList:(void(^)(NSArray*))handler;

+ (NSArray*)getAppListForIdentifier:(NSString*)identifier andKey:(NSString*)key;
+ (BOOL)doesIdentifier:(NSString*)identifier andKey:(NSString*)key containBundleIdentifier:(NSString*)bundleIdentifier;
+ (void)setAppList:(NSArray*)appList forIdentifier:(NSString*)identifier andKey:(NSString*)key;

+ (void)removeBundleID:(NSString*)bundleID forIdentifier:(NSString*)identifier andKey:(NSString*)key;
+ (void)addBundleID:(NSString*)bundleID forIdentifier:(NSString*)identifier andKey:(NSString*)key;
@end
