#import <Foundation/NSObject.h>

@class TrackDescriptor;

@interface PMRadio : NSObject

+ (instancetype)sharedRadio;

@property (nonatomic, retain) TrackDescriptor *activeTrack;

@end
