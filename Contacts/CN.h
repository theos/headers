#import <Foundation/NSObject.h>
#import <Foundation/NSArray.h>

@class CNPropertyDescription;

@interface CN : NSObject

+ (NSArray <CNPropertyDescription *> *)allNameComponentRelatedProperties;

@end
