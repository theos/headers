#import <Foundation/NSObject.h>
#import <Foundation/NSArray.h>
#import <Foundation/NSString.h>

@class IMPerson;

@interface IMServiceImpl : NSObject

+ (instancetype)iMessageService;

- (NSArray <IMPerson *> *)imABPeopleWithScreenName:(NSString *)screenName;
- (NSArray <IMPerson *> *)imABPeopleWithScreenName:(NSString *)screenName countryCode:(NSString *)countryCode identifier:(NSString *)identifier;

@end
