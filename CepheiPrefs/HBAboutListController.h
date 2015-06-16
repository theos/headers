#import "HBListController.h"
#import <MessageUI/MFMailComposeViewController.h>

/**
 * The `HBAboutListController` class in `libcepheiprefs` provides a list
 * controller with functions that would typically be used on an "about" page.
 * It includes two class methods you can override to provide a developer
 * website and donation URL, and a class method to provide an email address
 * so the user can send the developer an email right from the tweak's settings.
 *
 * There is a sample of an HBAboutListController implemented in the Cephei demo
 * preferences. See the Cephei readme for details.
 *
 * ### Example Usage
 * 	<dict>
 * 		<key>action</key>
 * 		<string>hb_openWebsite</string>
 * 		<key>cell</key>
 * 		<string>PSButtonCell</string>
 * 		<key>cellClass</key>
 * 		<string>HBTintedTableCell</string>
 * 		<key>label</key>
 * 		<string>Visit Website</string>
 * 	</dict>
 * 	<dict>
 * 		<key>cell</key>
 * 		<string>PSGroupCell</string>
 * 		<key>footerText</key>
 * 		<string>Experiencing issues? Send us an email and we’ll help you.</string>
 * 	</dict>
 * 	<dict>
 * 		<key>cell</key>
 * 		<string>PSGroupCell</string>
 * 	</dict>
 * 	<dict>
 * 		<key>action</key>
 * 		<string>hb_sendSupportEmail</string>
 * 		<key>cell</key>
 * 		<string>PSButtonCell</string>
 * 		<key>cellClass</key>
 * 		<string>HBTintedTableCell</string>
 * 		<key>label</key>
 * 		<string>Email Support</string>
 * 	</dict>
 * 	<dict>
 * 		<key>cell</key>
 * 		<string>PSGroupCell</string>
 * 		<key>footerText</key>
 * 		<string>If you like this tweak, please consider a donation.</string>
 * 	</dict>
 * 	<dict>
 * 		<key>cell</key>
 * 		<string>PSGroupCell</string>
 * 	</dict>
 * 	<dict>
 * 		<key>action</key>
 * 		<string>hb_openDonate</string>
 * 		<key>cell</key>
 * 		<string>PSButtonCell</string>
 * 		<key>cellClass</key>
 * 		<string>HBTintedTableCell</string>
 * 		<key>label</key>
 * 		<string>Donate</string>
 * 	</dict>
 */

@interface HBAboutListController : HBListController <MFMailComposeViewControllerDelegate>

/**
 * @name Constants
 */

/**
 * The website URL to open when tapping the "visit website" cell. Override this
 * method to return your own URL.
 *
 * @returns By default, https://www.hbang.ws/.
 */
+ (NSURL *)hb_websiteURL;

/**
 * The website URL to open when tapping the "donate" cell. Override this method
 * to return your own URL.
 *
 * @returns By default, https://www.hbang.ws/donate.
 */
+ (NSURL *)hb_donateURL;

/**
 * The email address to use in the support email composer form. Override this
 * method to return your own email address.
 *
 * @returns By default, "HASHBANG Productions Support \<support@hbang.ws\>".
 */
+ (NSString *)hb_supportEmailAddress;

/**
 * @name Preference Specifier Actions
 */

/**
 * Opens the user's browser to the URL specified by hb_websiteURL.
 */
- (void)hb_openWebsite;

/**
 * Opens the user's browser to the URL specified by hb_donateURL.
 */
- (void)hb_openDonate;

/**
 * Displays a Mail composer form, configured to send an email to the developer.
 *
 * The Mail composer is configured with the "To" field set to the developer's
 * email address - the return value of hb_supportEmailAddress - along with the
 * subject "Package x.y.z Support", the user's device model and iOS
 * version/build number in the body, and a package listing (output of
 * `dpkg -l`) attached as "dpkgl.txt".
 *
 * If `HBPackageIdentifier` is set in the Info.plist of the preference bundle,
 * this will be used to query the package version from dpkg. Otherwise, Cephei
 * queries which package the preference bundle's binary was installed from.
 */
- (void)hb_sendSupportEmail;

@end
