#import <Foundation/NSObject.h>
#import <Foundation/NSURL.h>
#import <Foundation/NSDictionary.h>

@interface FBSOpenApplicationOptions : NSObject <NSCopying>

@property (nonatomic, copy) NSDictionary *dictionary;
@property (nonatomic, retain, readonly) NSURL *url;

+ (instancetype)optionsWithDictionary:(NSDictionary *)dictionary;

@end
