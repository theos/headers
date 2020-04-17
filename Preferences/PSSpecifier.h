#import "PSTableCell.h"
#include <sys/cdefs.h>

__BEGIN_DECLS

NSString *const PSAccessoryKey; // @"accessory"
NSString *const PSActionKey; // @"action"
NSString *const PSAdjustFontSizeToFitWidthKey; // @"adjustFontSizeToFitWidth"
NSString *const PSAlignmentKey; // @"alignment"
NSString *const PSAppGroupBundleIDKey; // @"appGroupBundleID"
NSString *const PSAutoCapsKey; // @"autoCaps"
NSString *const PSAutoCorrectionKey; // @"autoCorrection"
NSString *const PSBestGuesserKey; // @"bestGuess"
NSString *const PSBundleCustomIconPathKey; // @"icon2"
NSString *const PSBundleHasBundleIconKey; // @"hasBundleIcon"
NSString *const PSBundleHasIconKey; // @"hasIcon"
NSString *const PSBundleIconPathKey; // @"icon"
NSString *const PSBundleIsControllerKey; // @"isController"
NSString *const PSBundleOverridePrincipalClassKey; // @"overridePrincipalClass"
NSString *const PSBundlePathKey; // @"bundle"
NSString *const PSBundleTintedIconPathKey; // @"tintedIcon"
NSString *const PSButtonActionKey; // @"buttonAction"
NSString *const PSCancelKey; // @"cancel"
NSString *const PSCellClassKey; // @"cellClass"
NSString *const PSConfirmationActionKey; // @"confirmationAction"
NSString *const PSConfirmationCancelActionKey; // @"cancel"
NSString *const PSConfirmationCancelKey; // @"cancelTitle"
NSString *const PSConfirmationDestructiveKey; // @"isDestructive"
NSString *const PSConfirmationKey; // @"confirmation"
NSString *const PSConfirmationOKKey; // @"okTitle"
NSString *const PSConfirmationPromptKey; // @"prompt"
NSString *const PSConfirmationTitleKey; // @"title"
NSString *const PSContainerBundleIDKey; // @"containerBundleID"
NSString *const PSControlIsLoadingKey; // @"control-loading"
NSString *const PSControlKey; // @"control"
NSString *const PSControllerLoadActionKey; // @"loadAction"
NSString *const PSControlMaximumKey; // @"max"
NSString *const PSControlMinimumKey; // @"min"
NSString *const PSCopyableCellKey; // @"isCopyable"
NSString *const PSDataSourceClassKey; // @"dataSourceClass"
NSString *const PSDecimalKeyboardKey; // @"isDecimalPad"
NSString *const PSDefaultsKey; // @"defaults"
NSString *const PSDefaultValueKey; // @"default"
NSString *const PSDeferItemSelectionKey; // @"deferItemSelection"
NSString *const PSDeletionActionKey; // @"deletionAction"
NSString *const PSDetailControllerClassKey; // @"detail"
NSString *const PSEditableTableCellTextFieldShouldPopOnReturn; // @"textFieldShouldPopOnReturn"
NSString *const PSEditPaneClassKey; // @"pane"
NSString *const PSEmailAddressingKeyboardKey; // @"isEmailAddressing"
NSString *const PSEmailAddressKeyboardKey; // @"isEmail"
NSString *const PSEnabledKey; // @"enabled"
NSString *const PSFooterAlignmentGroupKey; // @"footerAlignment"
NSString *const PSFooterCellClassGroupKey; // @"footerCellClass"
NSString *const PSFooterTextGroupKey; // @"footerText"
NSString *const PSFooterViewKey; // @"footerView"
NSString *const PSGetterKey; // @"get"
NSString *const PSHeaderCellClassGroupKey; // @"headerCellClass"
NSString *const PSHeaderDetailTextGroupKey; // @"headerDetailText"
NSString *const PSHeaderViewKey; // @"headerView"
NSString *const PSHidesDisclosureIndicatorKey; // @"hidesDisclosureIndicator"
NSString *const PSIconImageKey; // @"iconImage"
NSString *const PSIconImageShouldFlipForRightToLeftKey; // @"iconImageShouldFlipForRightToLeft"
NSString *const PSIDKey; // @"id"
NSString *const PSIPKeyboardKey; // @"isIP"
NSString *const PSIsPerGizmoKey; // @"isPerGizmo"
NSString *const PSIsRadioGroupKey; // @"isRadioGroup"
NSString *const PSIsTopLevelKey; // @"isTopLevel"
NSString *const PSKeyboardTypeKey; // @"keyboard"
NSString *const PSKeyNameKey; // @"key"
NSString *const PSLazilyLoadedBundleKey; // @"lazy-bundle"
NSString *const PSLazyIconAppID; // @"appIDForLazyIcon"
NSString *const PSLazyIconDontUnload; // @"dontUnloadLazyIcon"
NSString *const PSLazyIconLoading; // @"useLazyIcons"
NSString *const PSLazyIconLoadingCustomQueue; // @"customIconQueue"
NSString *const PSMarginWidthKey; // @"marginWidth"
NSString *const PSNegateValueKey; // @"negate"
NSString *const PSNotifyNanoKey; // @"notifyNano"
NSString *const PSNumberKeyboardKey; // @"isNumeric"
NSString *const PSPlaceholderKey; // @"placeholder"
NSString *const PSPrioritizeValueTextDisplayKey; // @"prioritizeValueTextDisplay"
NSString *const PSRadioGroupCheckedSpecifierKey; // @"radioGroupCheckedSpecifier"
NSString *const PSRequiredCapabilitiesKey; // @"requiredCapabilities"
NSString *const PSRequiredCapabilitiesOrKey; // @"requiredCapabilitiesOr"
NSString *const PSSearchNanoApplicationsBundlePath; // @"nanoAppsBundlePath"
NSString *const PSSearchNanoInternalSettingsBundlePath; // @"nanoInternalBundlePath"
NSString *const PSSearchNanoSettingsBundlePath; // @"nanoBundlePath"
NSString *const PSSetterKey; // @"set"
NSString *const PSSetupCustomClassKey; // @"customControllerClass"
NSString *const PSShortTitlesDataSourceKey; // @"shortTitlesDataSource"
NSString *const PSShortTitlesKey; // @"shortTitles"
NSString *const PSSliderIsContinuous; // @"isContinuous"
NSString *const PSSliderIsSegmented; // @"isSegmented"
NSString *const PSSliderLeftImageKey; // @"leftImage"
NSString *const PSSliderLeftImagePromiseKey; // @"leftImagePromise"
NSString *const PSSliderRightImageKey; // @"rightImage"
NSString *const PSSliderRightImagePromiseKey; // @"rightImagePromise"
NSString *const PSSliderSegmentCount; // @"segmentCount"
NSString *const PSSliderShowValueKey; // @"showValue"
NSString *const PSSpecifierAuthenticationTokenKey; // @"authenticationToken"
NSString *const PSSpecifierPasscodeKey; // @"passcode"
NSString *const PSStaticTextMessageKey; // @"staticTextMessage"
NSString *const PSTableCellClassKey; // @"cell"
NSString *const PSTableCellHeightKey; // @"height"
NSString *const PSTableCellKey; // @"cellObject"
NSString *const PSTableCellUseEtchedAppearanceKey; // @"useEtched"
NSString *const PSTextFieldNoAutoCorrectKey; // @"noAutoCorrect"
NSString *const PSTextViewBottomMarginKey; // @"textViewBottomMargin"
NSString *const PSTitleKey; // @"label"
NSString *const PSTitlesDataSourceKey; // @"titlesDataSource"
NSString *const PSURLKeyboardKey; // @"isURL"
NSString *const PSValidTitlesKey; // @"validTitles"
NSString *const PSValidValuesKey; // @"validValues"
NSString *const PSValueChangedNotificationKey; // @"PostNotification"
NSString *const PSValueKey; // @"value"
NSString *const PSValuesDataSourceKey; // @"valuesDataSource"

__END_DECLS

@interface PSSpecifier : NSObject {
@public
	SEL action;
}

+ (instancetype)preferenceSpecifierNamed:(NSString *)identifier target:(id)target set:(SEL)set get:(SEL)get detail:(Class)detail cell:(PSCellType)cellType edit:(Class)edit;
+ (instancetype)emptyGroupSpecifier;
+ (instancetype)groupSpecifierWithName:(NSString *)name;

@property (nonatomic, retain) id target;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSString *identifier;

@property (nonatomic) PSCellType cellType;

@property (nonatomic) Class detailControllerClass;

@property (nonatomic) SEL buttonAction;
@property (nonatomic) SEL confirmationAction;
@property (nonatomic) SEL confirmationCancelAction;
@property (nonatomic) SEL controllerLoadAction;

@property (nonatomic, retain) NSMutableDictionary *properties;

- (id)propertyForKey:(NSString *)key;
- (void)setProperty:(id)property forKey:(NSString *)key;
- (void)removePropertyForKey:(NSString *)key;

@property (nonatomic, retain) NSDictionary *shortTitleDictionary;
@property (nonatomic, retain) NSDictionary *titleDictionary;

@end
