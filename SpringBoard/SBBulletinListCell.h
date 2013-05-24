typedef enum {
	SBBulletinListCellAccessoryStyleNone = 0,
	SBBulletinListCellAccessoryStyleDot = 1
} SBBulletinListCellAccessoryStyle;

@interface SBBulletinListCell : UITableViewCell
@property SBBulletinListCellAccessoryStyle bulletinAccessoryStyle;

- (id)initWithLinenView:(id)linenView reuseIdentifier:(NSString *)reuseIdentifier;
@end
