#import "CKDetailsCell.h"
#import <UIKit/UISwitch.h>

@interface CKDetailsChatOptionsCell : CKDetailsCell

+ (NSString *)reuseIdentifier;

@property (nonatomic, retain) UISwitch *controlSwitch;

@end
