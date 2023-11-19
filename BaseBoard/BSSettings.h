#import <Foundation/NSObject.h>
#import <Foundation/NSObjCRuntime.h>
#import <Foundation/NSIndexSet.h>

typedef NS_ENUM(NSUInteger, BSSettingType) {
	BSSettingTypeThisIsAReminderToFillOutTheseEnumNames = 8
};

@interface BSSettings : NSObject

- (NSMutableIndexSet *)allSettings;

- (BOOL)boolForSetting:(BSSettingType)setting;

@end
