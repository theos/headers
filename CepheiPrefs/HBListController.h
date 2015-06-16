#import <Preferences/PSListController.h>

/**
 * The `HBListController` class in `libcepheiprefs` provides a list controller
 * with various conveniences such as a unique tint color for the list
 * controllers within a preference bundle, and bug fixes for common issues
 * within the Settings app and Preferences framework. In particular,
 * a bug with the list controller's content disappearing after closing the
 * Settings app and opening it again is worked around, as well as an issue on
 * iOS 7 where in some cases a cell may stay highlighted after being tapped.
 *
 * It includes two class methods you can override to return the name of a
 * Preferences specifier property list, and a tint color for the interactable
 * elements within the list controller.
 */

@interface HBListController : PSListController

/**
 * @name Constants
 */

/**
 * The property list that contains Preference framework specifiers to display
 * as the content of the list controller. Override this method to return the
 * file name of a property list inside your preference bundle, omitting the
 * file extension.
 *
 * If you use this method and override the `specifiers` method, ensure you call
 * the super method with `[super specifiers];` first in your `specifiers`
 * implementation.
 *
 * @returns By default, nil.
 */
+ (NSString *)hb_specifierPlist;

/**
 * The tint color to use for interactable elements within the list controller.
 * Override this method to return a UIColor to use.
 *
 * A nil value will cause no modification of the tint to occur.
 *
 * @returns By default, nil.
 */
+ (UIColor *)hb_tintColor;

@end
