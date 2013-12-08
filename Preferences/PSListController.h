#import "PSViewController.h"

@interface PSListController : PSViewController {
	NSArray *_specifiers;
}

- (NSArray *)loadSpecifiersFromPlistName:(NSString *)name target:(PSListController *)target;

@end
