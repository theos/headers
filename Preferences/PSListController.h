#import "PSViewController.h"

@class PSRootController, PSSpecifier;

@interface PSListController : PSViewController <UITableViewDelegate, UITableViewDataSource> {
	NSArray *_specifiers;
}

- (NSArray *)loadSpecifiersFromPlistName:(NSString *)name target:(PSListController *)target;

- (PSSpecifier *)specifierForID:(NSString *)identifier;
- (NSIndexPath *)indexPathForSpecifier:(PSSpecifier *)specifier;
- (void)reloadSpecifier:(PSSpecifier *)specifier;

@property (nonatomic, retain) UITableView *view;
@property (nonatomic, retain) UITableView *table; // 3.0 - 6.0
@property (nonatomic, retain) UITableView *tableView;

@property (nonatomic, retain) NSArray *specifiers;

@property (nonatomic, retain) PSRootController *rootController;
@property (nonatomic, retain) PSRootController *parentController;

@end
