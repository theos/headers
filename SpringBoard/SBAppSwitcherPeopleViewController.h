@class ABMonogrammer;
@protocol SBAppSwitcherPeopleDataSource;

@interface SBAppSwitcherPeopleViewController : UIViewController

- (ABMonogrammer *)_monogrammerForSize:(CGFloat)size;
- (void)dataSourceChanged:(id<SBAppSwitcherPeopleDataSource>)dataSource;

@property (nonatomic, retain) id<SBAppSwitcherPeopleDataSource> activeDataSource;
@property (nonatomic, retain) id legibilitySettings;
@property CGFloat monogramSize;
@property BOOL useVerticallyCompactLayoutSize;

@end
