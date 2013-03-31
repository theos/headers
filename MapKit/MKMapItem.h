#import "MKPlacemark.h"

@interface MKMapItem : NSObject
@property(retain) MKPlacemark *placemark;
@property BOOL isCurrentLocation;
@end
