#import <Foundation/NSObject.h>
#import <Foundation/NSArray.h>

@interface ANEMSettingsManager : NSObject

+ (instancetype)sharedManager;

@property (nonatomic, retain, readonly) NSArray <NSString *> *themeSettings;

@end
