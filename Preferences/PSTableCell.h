@class PSSpecifier;

@interface PSTableCell : UITableViewCell

- (instancetype)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString *)reuseIdentifier specifier:(PSSpecifier *)specifier;

- (void)refreshCellContentsWithSpecifier:(PSSpecifier *)specifier;

@property (nonatomic, retain) PSSpecifier *specifier;
@property (nonatomic, retain) id target;
@property SEL action;

@property (nonatomic, retain) id cellTarget;
@property SEL cellAction;

@property BOOL cellEnabled;

@property (nonatomic, retain) UIImage *icon;

- (UIImage *)getLazyIcon;

@property (nonatomic, retain, readonly) UIImage *blankIcon;
@property (nonatomic, retain, readonly) NSString *lazyIconAppID;

@end
