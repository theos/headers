#import <Foundation/Foundation.h>
#import <QuartzCore/QuartzCore.h>

API_AVAILABLE(ios(6.0))
@interface CAPackage : NSObject

@property (readonly) CALayer *rootLayer;
@property (getter=isGeometryFlipped, readonly) BOOL geometryFlipped;

+ (instancetype)packageWithContentsOfURL:(NSURL *)url type:(id)type options:(id)options error:(NSError **)error;

@end