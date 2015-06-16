#import <Preferences/PSSliderTableCell.h>
#import <Preferences/PSDiscreteSlider.h>

/**
 * The `HBDiscreteSliderTableCell` class in `libcepheiprefs` is a subclass of
 * the standard slider cell, which displays a vertical line at every whole
 * number. Additionally, when dragging the slider, it jumps to these lines
 * so the user's preference will always be a whole number.
 *
 * Requires iOS 7.0 or later. Superclass is dynamically changed at runtime to
 * not break iOS 5 and 6, which do not have the PSSliderTableCell class.
 *
 * ### Specifier Parameters
 * All parameters specific to
 * [PSSliderCell](http://iphonedevwiki.net/index.php/Preferences_specifier_plist#PSSliderCell)
 * are applicable here. There are no custom parameters.
 *
 * ### Example Usage
 *	<dict>
 *		<key>cellClass</key>
 *		<string>HBDiscreteSliderTableCell</string>
 *		<key>default</key>
 *		<real>5</real>
 *		<key>defaults</key>
 *		<string>ws.hbang.libcephei.demo</string>
 *		<key>key</key>
 *		<string>Discrete</string>
 *		<key>label</key>
 *		<string>Discrete</string>
 *		<key>max</key>
 *		<real>15</real>
 *		<key>min</key>
 *		<real>1</real>
 *	</dict>
 */

@interface HBDiscreteSliderTableCell : PSControlTableCell

@property (nonatomic, retain) PSDiscreteSlider *control;

@end
