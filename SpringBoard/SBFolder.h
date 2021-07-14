#import <Foundation/Foundation.h>

@class SBApplicationIcon;

@interface SBFolder : NSObject

@property (nonatomic, retain, readonly) NSArray <SBApplicationIcon *> *allIcons;

@end
