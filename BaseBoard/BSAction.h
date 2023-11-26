#import "BSDescriptionProviding.h"
#import "BSSettingDescriptionProvider.h"
#import "BSXPCCoding.h"
#import <Foundation/Foundation.h>

@interface BSAction : NSObject <BSDescriptionProviding, BSSettingDescriptionProvider, BSXPCCoding>

@end
