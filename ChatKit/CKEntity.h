@interface CKEntity : NSObject

+ (instancetype)copyEntityForAddressString:(NSString *)address;

@property (nonatomic, retain) NSString *name;

@end
