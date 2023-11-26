#import <Foundation/NSObject.h>
#import <Foundation/NSDictionary.h>

@class BBSectionSubtypeParameters;

@interface BBSectionParameters : NSObject

@property (nonatomic, retain) BBSectionSubtypeParameters *defaultSubtypeParameters;
@property (nonatomic, retain) NSMutableDictionary <NSNumber *, BBSectionSubtypeParameters *> *allSubtypeParameters;

@end
