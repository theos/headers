@class MKPlacemark;

@interface MKMapItem : NSObject

@property (nonatomic, retain) MKPlacemark *placemark;
@property BOOL isCurrentLocation;

+ (NSArray *)mapItemsFromURL:(NSURL *)url options:(id *)options;

@end
