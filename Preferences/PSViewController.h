@class PSSpecifier;

@interface PSViewController : UIViewController

- (instancetype)initForContentSize:(CGSize)contentSize;

- (void)pushController:(PSViewController *)controller;

- (id)readPreferenceValue:(PSSpecifier *)specifier;
- (void)setPreferenceValue:(id)value specifier:(PSSpecifier *)specifier;

@property (nonatomic, retain) PSSpecifier *specifier;

@end
