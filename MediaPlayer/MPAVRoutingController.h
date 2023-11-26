#import <Foundation/NSObject.h>
#import <Foundation/NSObjCRuntime.h>
#import <Foundation/NSString.h>

typedef NS_ENUM(NSInteger, MPRouteDiscoveryMode) {
    MPRouteDiscoveryModeDisabled,
    MPRouteDiscoveryModePresence,
    MPRouteDiscoveryModeDetailed,
};


@interface MPAVRoutingController : NSObject

@property (nonatomic, assign) MPRouteDiscoveryMode discoveryMode;

- (instancetype)initWithName:(NSString *)name;

@end
