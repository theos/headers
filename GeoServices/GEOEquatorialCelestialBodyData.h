#import "GEOCelestialBody.h"

@interface GEOEquatorialCelestialBodyData : NSObject

@property (nonatomic, readonly) double rightAscension;
@property (nonatomic, readonly) double declination;

- (instancetype)initWithDate:(NSDate *)date body:(GEOCelestialBody)body;

@end
