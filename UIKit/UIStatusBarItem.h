typedef NS_ENUM(NSUInteger, UIStatusBarItemType) {
	UIStatusBarItemTypeDontKnowYetComeBackLater
};

@interface UIStatusBarItem : NSObject

- (instancetype)initWithType:(UIStatusBarItemType)type;

@end
