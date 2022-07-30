#import <Foundation/Foundation.h>

API_AVAILABLE(ios(11.0))
@interface CCUICAPackageDescription : NSObject

@property (nonatomic, copy, readonly) NSURL *packageURL;

@property (assign, nonatomic) BOOL flipsForRightToLeftLayoutDirection;

+ (instancetype)descriptionForPackageNamed:(NSString *)name inBundle:(NSBundle *)bundle;
- (instancetype)initWithPackageName:(NSString *)name inBundle:(NSBundle *)bundle;

@end