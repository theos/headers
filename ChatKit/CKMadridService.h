#import "CKMadridEntity.h"

// 5.x

@interface CKMadridService : NSObject
- (CKMadridEntity *)copyEntityForAddressString:(NSString *)addressString;
@end
