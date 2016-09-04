#import <Foundation/NSObject.h>

@protocol BSXPCCoding <NSObject>
@required
-(id)initWithXPCDictionary:(id)arg1;
-(void)encodeWithXPCDictionary:(id)arg1;
@end