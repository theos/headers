#import <Foundation/Foundation.h>

@class FBSSceneSettings;

@interface FBSSceneSettingsDiff : NSObject

+ (id)diffFromSettings:(FBSSceneSettings *)oldSettings toSettings:(FBSSceneSettings *)newSettings;

@end
