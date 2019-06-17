#import "LSResourceProxy.h"

@interface LSBundleProxy : LSResourceProxy

+ (instancetype)bundleProxyForCurrentProcess;
+ (instancetype)bundleProxyForIdentifier:(NSString *)identifier;
+ (instancetype)bundleProxyForURL:(NSURL *)url;

@property (nonatomic, readonly) NSUUID *cacheGUID;

@property (nonatomic, copy) NSURL *appStoreReceiptURL;
@property (nonatomic, readonly) NSURL *bundleContainerURL;
@property (nonatomic, readonly) NSURL *bundleURL;
@property (nonatomic, readonly) NSURL *containerURL;
@property (nonatomic, readonly) NSURL *dataContainerURL;

@property (nonatomic, readonly) NSString *bundleExecutable;
@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) NSString *bundleType;

@property (nonatomic, readonly) NSDictionary<NSString *, NSString *> *entitlements;
@property (nonatomic, readonly) NSDictionary<NSString *, NSString *> *environmentVariables;
@property (nonatomic, readonly) NSDictionary<NSString *, NSURL *> *groupContainerURLs;

@property (nonatomic, copy) NSArray<NSUUID *> *machOUUIDs;
@property (nonatomic, readonly) NSString *signerIdentity;
@property (nonatomic, readonly) BOOL isContainerized;
@property (nonatomic, readonly) BOOL profileValidated;

@property (nonatomic, readonly) NSString *localizedShortName;

- (NSUUID *)uniqueIdentifier;

@end
