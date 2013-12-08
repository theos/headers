@class PSSpecifier;

@interface PSTableCell : UITableViewCell

- (instancetype)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString *)reuseIdentifier specifier:(PSSpecifier *)specifier;

@property (nonatomic, retain) id target;
@property SEL action;

@end
