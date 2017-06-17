#import "LSBundleProxy.h"

@interface LSApplicationProxy : LSBundleProxy

+ (instancetype)applicationProxyForIdentifier:(NSString *)identifier;

@property (nonatomic, retain) NSString *applicationIdentifier;
@property (nonatomic, retain) NSString *localizedName;

@property (readonly) BOOL isInstalled;

@end
