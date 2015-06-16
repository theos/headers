#import <Preferences/PSListItemsController.h>

/**
 * The `HBListItemsController` class in `libcepheiprefs` provides a subclass of
 * `PSListItemsController` which will ensure that the tint color from previous
 * view controllers is also applied to this class which is not typically
 * subclassed. Set this as the value of `detail` where you would typically put
 * `PSListItemsController`.
 *
 * ### Example Usage
 * 	<dict>
 * 		<key>cell</key>
 * 		<string>PSLinkListCell</string>
 * 		<key>default</key>
 * 		<integer>0</integer>
 * 		<key>defaults</key>
 * 		<string>ws.hbang.libcephei.demo</string>
 * 		<key>detail</key>
 * 		<string>HBListItemsController</string>
 * 		<key>key</key>
 * 		<string>Region</string>
 * 		<key>label</key>
 * 		<string>Region</string>
 * 		<key>validTitles</key>
 * 		<array>
 * 			<string>Worldwide</string>
 * 			<string>Australia</string>
 * 			...
 * 		</array>
 * 		<key>validValues</key>
 * 		<array>
 * 			<integer>0</integer>
 * 			<integer>1</integer>
 * 			...
 * 		</array>
 * 	</dict>
 */

@interface HBListItemsController : PSListItemsController

@end
