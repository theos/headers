#import <Foundation/NSObject.h>
#import <Foundation/NSString.h>

@class IMHandle;

@interface CKEntity : NSObject

+ (instancetype)copyEntityForAddressString:(NSString *)address;

@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) IMHandle *handle;

@property BOOL foundABNameForSender;

@end
