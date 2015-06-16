#import <Preferences/PSTableCell.h>
#import <Preferences/PSHeaderFooterView.h>

/**
 * The `HBPackageNameHeaderCell` class in `libcepheiprefs` displays a header
 * containing the package's icon, name, version number, and author. It can be
 * displayed in a subtle condensed design, or, by default, a tall header that
 * might be displayed at the top of a preference bundle's root list controller,
 * for instance.
 *
 * ### Specifier Parameters
 * <table>
 * <tr>
 * <th>condensed</th> <td>Optional. When true, displays an icon, the package
 * name and version in one line, and on another displays the author name.
 * When false, displays a large package name, and on two lines in small font
 * the package version and author. The default is false.</td>
 * </tr>
 * <tr>
 * <th>icon</th> <td>Optional. The file name of the icon to use within the
 * current preference bundle. Only used in condensed mode. To not show an icon,
 * don't set this value.</td>
 * </tr>
 * <tr>
 * <th>packageIdentifier</th> <td>Reqired. The package identifier to retrieve
 * the required information from.</td>
 * </tr>
 * <tr>
 * <th>showAuthor</th> <td>Optional. Whether to show the `Author` field of the
 * package. The default is true.</td>
 * </tr>
 * <tr>
 * <th>showVersion</th> <td>Optional. Whether to show the `Version` field of
 * the package. The default is true.</td>
 * </tr>
 * </table>
 *
 * ### Example Usage
 * 	<!-- Standard size: -->
 * 	<dict>
 * 		<key>cell</key>
 * 		<string>PSGroupCell</string>
 * 		<key>headerCellClass</key>
 * 		<string>HBPackageNameHeaderCell</string>
 * 		<key>packageIdentifier</key>
 * 		<string>ws.hbang.common</string>
 * 	</dict>
 *
 * 	<!-- Condensed size: -->
 * 	<dict>
 * 		<key>cell</key>
 * 		<string>PSGroupCell</string>
 * 		<key>condensed</key>
 * 		<true/>
 * 		<key>headerCellClass</key>
 * 		<string>HBPackageNameHeaderCell</string>
 * 		<key>icon</key>
 * 		<string>icon.png</string>
 * 		<key>packageIdentifier</key>
 * 		<string>ws.hbang.common</string>
 * 	</dict>
 */

@interface HBPackageNameHeaderCell : PSTableCell <PSHeaderFooterView>

@end
