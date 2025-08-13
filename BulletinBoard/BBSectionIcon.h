#import <Foundation/NSObject.h>

@class BBSectionIconVariant;

@interface BBSectionIcon : NSObject

- (void)addVariant:(BBSectionIconVariant *)variant;
- (void)setVariants:(NSSet <BBSectionIconVariant *>*)variants;

@end
