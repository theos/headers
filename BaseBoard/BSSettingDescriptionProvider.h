
#import <Foundation/NSObject.h>

@protocol BSSettingDescriptionProvider <NSObject>
@required
-(id)keyDescriptionForSetting:(unsigned long long)arg1;
-(id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;

@end