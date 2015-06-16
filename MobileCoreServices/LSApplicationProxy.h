@interface LSApplicationProxy : NSObject

+ (instancetype)applicationProxyForIdentifier:(NSString *)identifier;

@property (nonatomic, retain) NSString *applicationIdentifier;
@property (nonatomic, retain) NSString *localizedName;

@end
