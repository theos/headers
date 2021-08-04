#import <Foundation/Foundation.h>
#import "PSTableCell.h"

FOUNDATION_EXPORT NSString *const PSAccessoryKey; // @"accessory"
FOUNDATION_EXPORT NSString *const PSActionKey; // @"action"
FOUNDATION_EXPORT NSString *const PSAdjustFontSizeToFitWidthKey; // @"adjustFontSizeToFitWidth"
FOUNDATION_EXPORT NSString *const PSAlignmentKey; // @"alignment"
FOUNDATION_EXPORT NSString *const PSAppGroupBundleIDKey; // @"appGroupBundleID"
FOUNDATION_EXPORT NSString *const PSAutoCapsKey; // @"autoCaps"
FOUNDATION_EXPORT NSString *const PSAutoCorrectionKey; // @"autoCorrection"
FOUNDATION_EXPORT NSString *const PSBestGuesserKey; // @"bestGuess"
FOUNDATION_EXPORT NSString *const PSBundleCustomIconPathKey; // @"icon2"
FOUNDATION_EXPORT NSString *const PSBundleHasBundleIconKey; // @"hasBundleIcon"
FOUNDATION_EXPORT NSString *const PSBundleHasIconKey; // @"hasIcon"
FOUNDATION_EXPORT NSString *const PSBundleIconPathKey; // @"icon"
FOUNDATION_EXPORT NSString *const PSBundleIsControllerKey; // @"isController"
FOUNDATION_EXPORT NSString *const PSBundleOverridePrincipalClassKey; // @"overridePrincipalClass"
FOUNDATION_EXPORT NSString *const PSBundlePathKey; // @"bundle"
FOUNDATION_EXPORT NSString *const PSBundleTintedIconPathKey; // @"tintedIcon"
FOUNDATION_EXPORT NSString *const PSButtonActionKey; // @"buttonAction"
FOUNDATION_EXPORT NSString *const PSCancelKey; // @"cancel"
FOUNDATION_EXPORT NSString *const PSCellClassKey; // @"cellClass"
FOUNDATION_EXPORT NSString *const PSConfirmationActionKey; // @"confirmationAction"
FOUNDATION_EXPORT NSString *const PSConfirmationCancelActionKey; // @"cancel"
FOUNDATION_EXPORT NSString *const PSConfirmationCancelKey; // @"cancelTitle"
FOUNDATION_EXPORT NSString *const PSConfirmationDestructiveKey; // @"isDestructive"
FOUNDATION_EXPORT NSString *const PSConfirmationKey; // @"confirmation"
FOUNDATION_EXPORT NSString *const PSConfirmationOKKey; // @"okTitle"
FOUNDATION_EXPORT NSString *const PSConfirmationPromptKey; // @"prompt"
FOUNDATION_EXPORT NSString *const PSConfirmationTitleKey; // @"title"
FOUNDATION_EXPORT NSString *const PSContainerBundleIDKey; // @"containerBundleID"
FOUNDATION_EXPORT NSString *const PSControlIsLoadingKey; // @"control-loading"
FOUNDATION_EXPORT NSString *const PSControlKey; // @"control"
FOUNDATION_EXPORT NSString *const PSControllerLoadActionKey; // @"loadAction"
FOUNDATION_EXPORT NSString *const PSControlMaximumKey; // @"max"
FOUNDATION_EXPORT NSString *const PSControlMinimumKey; // @"min"
FOUNDATION_EXPORT NSString *const PSCopyableCellKey; // @"isCopyable"
FOUNDATION_EXPORT NSString *const PSDataSourceClassKey; // @"dataSourceClass"
FOUNDATION_EXPORT NSString *const PSDecimalKeyboardKey; // @"isDecimalPad"
FOUNDATION_EXPORT NSString *const PSDefaultsKey; // @"defaults"
FOUNDATION_EXPORT NSString *const PSDefaultValueKey; // @"default"
FOUNDATION_EXPORT NSString *const PSDeferItemSelectionKey; // @"deferItemSelection"
FOUNDATION_EXPORT NSString *const PSDeletionActionKey; // @"deletionAction"
FOUNDATION_EXPORT NSString *const PSDetailControllerClassKey; // @"detail"
FOUNDATION_EXPORT NSString *const PSEditableTableCellTextFieldShouldPopOnReturn; // @"textFieldShouldPopOnReturn"
FOUNDATION_EXPORT NSString *const PSEditPaneClassKey; // @"pane"
FOUNDATION_EXPORT NSString *const PSEmailAddressingKeyboardKey; // @"isEmailAddressing"
FOUNDATION_EXPORT NSString *const PSEmailAddressKeyboardKey; // @"isEmail"
FOUNDATION_EXPORT NSString *const PSEnabledKey; // @"enabled"
FOUNDATION_EXPORT NSString *const PSFooterAlignmentGroupKey; // @"footerAlignment"
FOUNDATION_EXPORT NSString *const PSFooterCellClassGroupKey; // @"footerCellClass"
FOUNDATION_EXPORT NSString *const PSFooterTextGroupKey; // @"footerText"
FOUNDATION_EXPORT NSString *const PSFooterViewKey; // @"footerView"
FOUNDATION_EXPORT NSString *const PSGetterKey; // @"get"
FOUNDATION_EXPORT NSString *const PSHeaderCellClassGroupKey; // @"headerCellClass"
FOUNDATION_EXPORT NSString *const PSHeaderDetailTextGroupKey; // @"headerDetailText"
FOUNDATION_EXPORT NSString *const PSHeaderViewKey; // @"headerView"
FOUNDATION_EXPORT NSString *const PSHidesDisclosureIndicatorKey; // @"hidesDisclosureIndicator"
FOUNDATION_EXPORT NSString *const PSIconImageKey; // @"iconImage"
FOUNDATION_EXPORT NSString *const PSIconImageShouldFlipForRightToLeftKey; // @"iconImageShouldFlipForRightToLeft"
FOUNDATION_EXPORT NSString *const PSIDKey; // @"id"
FOUNDATION_EXPORT NSString *const PSIPKeyboardKey; // @"isIP"
FOUNDATION_EXPORT NSString *const PSIsPerGizmoKey; // @"isPerGizmo"
FOUNDATION_EXPORT NSString *const PSIsRadioGroupKey; // @"isRadioGroup"
FOUNDATION_EXPORT NSString *const PSIsTopLevelKey; // @"isTopLevel"
FOUNDATION_EXPORT NSString *const PSKeyboardTypeKey; // @"keyboard"
FOUNDATION_EXPORT NSString *const PSKeyNameKey; // @"key"
FOUNDATION_EXPORT NSString *const PSLazilyLoadedBundleKey; // @"lazy-bundle"
FOUNDATION_EXPORT NSString *const PSLazyIconAppID; // @"appIDForLazyIcon"
FOUNDATION_EXPORT NSString *const PSLazyIconDontUnload; // @"dontUnloadLazyIcon"
FOUNDATION_EXPORT NSString *const PSLazyIconLoading; // @"useLazyIcons"
FOUNDATION_EXPORT NSString *const PSLazyIconLoadingCustomQueue; // @"customIconQueue"
FOUNDATION_EXPORT NSString *const PSMarginWidthKey; // @"marginWidth"
FOUNDATION_EXPORT NSString *const PSNegateValueKey; // @"negate"
FOUNDATION_EXPORT NSString *const PSNotifyNanoKey; // @"notifyNano"
FOUNDATION_EXPORT NSString *const PSNumberKeyboardKey; // @"isNumeric"
FOUNDATION_EXPORT NSString *const PSPlaceholderKey; // @"placeholder"
FOUNDATION_EXPORT NSString *const PSPrioritizeValueTextDisplayKey; // @"prioritizeValueTextDisplay"
FOUNDATION_EXPORT NSString *const PSRadioGroupCheckedSpecifierKey; // @"radioGroupCheckedSpecifier"
FOUNDATION_EXPORT NSString *const PSRequiredCapabilitiesKey; // @"requiredCapabilities"
FOUNDATION_EXPORT NSString *const PSRequiredCapabilitiesOrKey; // @"requiredCapabilitiesOr"
FOUNDATION_EXPORT NSString *const PSSearchNanoApplicationsBundlePath; // @"nanoAppsBundlePath"
FOUNDATION_EXPORT NSString *const PSSearchNanoInternalSettingsBundlePath; // @"nanoInternalBundlePath"
FOUNDATION_EXPORT NSString *const PSSearchNanoSettingsBundlePath; // @"nanoBundlePath"
FOUNDATION_EXPORT NSString *const PSSetterKey; // @"set"
FOUNDATION_EXPORT NSString *const PSSetupCustomClassKey; // @"customControllerClass"
FOUNDATION_EXPORT NSString *const PSShortTitlesDataSourceKey; // @"shortTitlesDataSource"
FOUNDATION_EXPORT NSString *const PSShortTitlesKey; // @"shortTitles"
FOUNDATION_EXPORT NSString *const PSSliderIsContinuous; // @"isContinuous"
FOUNDATION_EXPORT NSString *const PSSliderIsSegmented; // @"isSegmented"
FOUNDATION_EXPORT NSString *const PSSliderLeftImageKey; // @"leftImage"
FOUNDATION_EXPORT NSString *const PSSliderLeftImagePromiseKey; // @"leftImagePromise"
FOUNDATION_EXPORT NSString *const PSSliderRightImageKey; // @"rightImage"
FOUNDATION_EXPORT NSString *const PSSliderRightImagePromiseKey; // @"rightImagePromise"
FOUNDATION_EXPORT NSString *const PSSliderSegmentCount; // @"segmentCount"
FOUNDATION_EXPORT NSString *const PSSliderShowValueKey; // @"showValue"
FOUNDATION_EXPORT NSString *const PSSpecifierAuthenticationTokenKey; // @"authenticationToken"
FOUNDATION_EXPORT NSString *const PSSpecifierPasscodeKey; // @"passcode"
FOUNDATION_EXPORT NSString *const PSStaticTextMessageKey; // @"staticTextMessage"
FOUNDATION_EXPORT NSString *const PSTableCellClassKey; // @"cell"
FOUNDATION_EXPORT NSString *const PSTableCellHeightKey; // @"height"
FOUNDATION_EXPORT NSString *const PSTableCellKey; // @"cellObject"
FOUNDATION_EXPORT NSString *const PSTableCellUseEtchedAppearanceKey; // @"useEtched"
FOUNDATION_EXPORT NSString *const PSTextFieldNoAutoCorrectKey; // @"noAutoCorrect"
FOUNDATION_EXPORT NSString *const PSTextViewBottomMarginKey; // @"textViewBottomMargin"
FOUNDATION_EXPORT NSString *const PSTitleKey; // @"label"
FOUNDATION_EXPORT NSString *const PSTitlesDataSourceKey; // @"titlesDataSource"
FOUNDATION_EXPORT NSString *const PSURLKeyboardKey; // @"isURL"
FOUNDATION_EXPORT NSString *const PSValidTitlesKey; // @"validTitles"
FOUNDATION_EXPORT NSString *const PSValidValuesKey; // @"validValues"
FOUNDATION_EXPORT NSString *const PSValueChangedNotificationKey; // @"PostNotification"
FOUNDATION_EXPORT NSString *const PSValueKey; // @"value"
FOUNDATION_EXPORT NSString *const PSValuesDataSourceKey; // @"valuesDataSource"

@interface PSSpecifier : NSObject {
@public
	SEL action;
}

+ (instancetype)preferenceSpecifierNamed:(NSString *)identifier target:(id)target set:(SEL)set get:(SEL)get detail:(Class)detail cell:(PSCellType)cellType edit:(Class)edit;
+ (instancetype)emptyGroupSpecifier;
+ (instancetype)groupSpecifierWithName:(NSString *)name;
+ (instancetype)groupSpecifierWithID:(NSString *)ID API_AVAILABLE(ios(8.0));

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

- (id)performGetter;
- (void)performSetterWithValue:(id)value;

@end
