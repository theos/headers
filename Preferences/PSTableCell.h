@class PSSpecifier;

@interface PSTableCell : UITableViewCell

- (instancetype)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString *)reuseIdentifier specifier:(PSSpecifier *)specifier;

- (void)refreshCellContentsWithSpecifier:(PSSpecifier *)specifier;

@property (nonatomic, retain) PSSpecifier *specifier;
@property (nonatomic, retain) id target;
@property SEL action;

@property BOOL cellEnabled;

@end
