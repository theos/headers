#import <Foundation/Foundation.h>

// Research based on iOS 18.4

NS_ASSUME_NONNULL_BEGIN

// MARK: Option keys

FOUNDATION_EXPORT NSString *const OSATransformOptionPersist API_AVAILABLE(ios(14.0)); // value is an NSNumber, wrapping a BOOL
FOUNDATION_EXPORT NSString *const OSATransformOptionSymbolicate API_AVAILABLE(ios(14.0)); // value is an NSNumber, wrapper a BOOL

FOUNDATION_EXPORT NSString *const OSATransformOptionTracerURL API_AVAILABLE(ios(14.0)); // value is an NSURL
FOUNDATION_EXPORT NSString *const OSATransformOptionTracerGroup API_AVAILABLE(ios(14.0)); // value is an NSString

FOUNDATION_EXPORT NSString *const OSATransformOptionMetadata API_AVAILABLE(ios(15.0)); // as far as I can tell, the value of this key is not used- only the presence of the key is used.
FOUNDATION_EXPORT NSString *const OSATransformOptionFullReport API_AVAILABLE(ios(15.0)); // value is an NSNumber, wrapping a BOOL

// MARK: Result keys

FOUNDATION_EXPORT NSString *const OSATransformResultError API_AVAILABLE(ios(14.0)); // value is an NSError
FOUNDATION_EXPORT NSString *const OSATransformResultFileURL API_AVAILABLE(ios(14.0)); // value is an NSURL
FOUNDATION_EXPORT NSString *const OSATransformResultReport API_AVAILABLE(ios(14.0)); // value is an NSString
FOUNDATION_EXPORT NSString *const OSATransformResultRadars API_AVAILABLE(ios(14.0));
FOUNDATION_EXPORT NSString *const OSATransformResultTracerURL API_AVAILABLE(ios(14.0));
FOUNDATION_EXPORT NSString *const OSATransformResultMetadata API_AVAILABLE(ios(15.0)); // value is an NSString (which is JSON)

NS_ASSUME_NONNULL_END

API_AVAILABLE(ios(14.0))
@interface OSALegacyXform : NSObject

// technically you can pass `nil` to `url`, however you'll always get an error back.
// `url` is not validated by the method, however it is expected to be a file URL
+ (nonnull NSDictionary<NSString *, id> *)transformURL:(nonnull NSURL *)url options:(nullable NSDictionary<NSString *, id> *)options API_AVAILABLE(ios(15.0));

@end
