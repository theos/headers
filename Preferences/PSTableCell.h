#import "PSSpecifier.h"

@interface PSTableCell : UITableViewCell
- (id)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString *)reuseIdentifier specifier:(PSSpecifier *)specifier;

@property (nonatomic, retain) id target;
@property SEL action;
@end
