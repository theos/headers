#import <UIKit/UIKit.h>
#import <QuartzCore/CAPackage.h>
#import "CCUICAPackageDescription.h"

API_AVAILABLE(ios(11.0))
@interface CCUICAPackageView : UIView

@property (nonatomic, retain) CAPackage *package;

@property (nonatomic, retain) CCUICAPackageDescription *packageDescription;

- (void)setStateName:(NSString *)stateName;

@end