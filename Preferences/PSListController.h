#import "PSViewController.h"

@class PSRootController;

@interface PSListController : PSViewController {
	NSArray *_specifiers;
}

- (NSArray *)loadSpecifiersFromPlistName:(NSString *)name target:(PSListController *)target;

@property (nonatomic, retain) PSRootController *rootController;
@property (nonatomic, retain) PSRootController *parentController;

@end
