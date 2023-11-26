#import <Foundation/NSObject.h>
#import <Foundation/NSString.h>

@class CKMadridEntity;

// 5.x

@interface CKMadridService : NSObject

- (CKMadridEntity *)copyEntityForAddressString:(NSString *)addressString;

@end
