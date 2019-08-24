#import <CoreLocation/CoreLocation.h>

#import "GEOCelestialBody.h"

@interface GEOSolarEclipticCelestialBodyData : NSObject

@property (nonatomic, readonly) CLLocationDegrees latitude;
@property (nonatomic, readonly) CLLocationDegrees longitude;

- (instancetype)initWithDate:(NSDate *)date body:(GEOCelestialBody)body;

@end
