#import "LSBundleProxy.h"

@interface LSPlugInKitProxy : LSBundleProxy

+ (instancetype)pluginKitProxyForIdentifier:(NSString *)identifier;
+ (instancetype)pluginKitProxyForURL:(NSURL *)url;

@property (nonatomic, readonly) LSBundleProxy *containingBundle;
@property (nonatomic, readonly) NSDictionary *infoPlist;
@property (nonatomic, readonly) NSString *originalIdentifier;
@property (nonatomic, readonly) NSString *pluginIdentifier;

@property (nonatomic, readonly) NSUUID *pluginUUID;
@property (nonatomic, readonly) NSString *protocol;
@property (nonatomic, readonly) NSDate *registrationDate;
@property (nonatomic, readonly) NSString *teamID;

@end
