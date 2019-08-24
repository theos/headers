#import <Foundation/Foundation.h>

@interface AFPreferences : NSObject

+ (instancetype)sharedPreferences;

@property BOOL streamingDictationEnabled;
@property BOOL dictationIsEnabled;

@property (retain, nonatomic) NSString *languageCode;

- (void)synchronize;

- (void)_setDictationIsEnabledLocal:(BOOL)enabled;

@end
