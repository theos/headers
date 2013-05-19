#import "MKPlacemark.h"

@interface MKMapItem : NSObject
@property(retain) MKPlacemark *placemark;
@property BOOL isCurrentLocation;

+ (NSArray *)mapItemsFromURL:(NSURL *)url options:(id *)options;
@end
