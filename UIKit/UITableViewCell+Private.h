typedef struct {
	NSUInteger drawsSeparatorAtTopOfSection:1;
	NSUInteger drawsSeparatorAtBottomOfSection:1;
} UITableViewCellFlags;

@interface UITableViewCell (Private)

@property (setter=_setDrawsSeparatorAtTopOfSection:) BOOL _drawsSeparatorAtTopOfSection;
@property (setter=_setDrawsSeparatorAtBottomOfSection:) BOOL _drawsSeparatorAtBottomOfSection;

@end
