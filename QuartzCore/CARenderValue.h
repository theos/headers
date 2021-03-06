#import <QuartzCore/CABase.h>
#import <QuartzCore/CAFilter.h>
#import <QuartzCore/CAAnimation.h>
#import <QuartzCore/CAValueFunction.h>
#import <QuartzCore/CAMediaTimingFunction.h>

typedef void *CARenderObjectRef;

// log CA object to stdout (or os_log)
CA_EXTERN void CARenderShow(CARenderObjectRef object);
CA_EXTERN void CARenderShowStatistics(CARenderObjectRef object);

CA_EXTERN unsigned CARenderGetGlobalFeatureFlags();
CA_EXTERN void CARenderSetGlobalFeatureFlags(unsigned flags);

CA_EXTERN CARenderObjectRef CARenderRetain(CARenderObjectRef object);
CA_EXTERN void CARenderRelease(CARenderObjectRef object);


@interface NSObject (CARenderValue)
- (CARenderObjectRef)CA_copyRenderValue;
@end

@interface NSValue (CARenderValue)
- (CARenderObjectRef)CA_copyRenderValue;
@end

@interface NSNumber (CARenderValue)
- (CARenderObjectRef)CA_copyRenderValue;
@end

@interface NSDictionary (CARenderValue)
- (CARenderObjectRef)CA_copyRenderKeyValueArray;
@end

@interface CAFilter (CARenderValue)
- (CARenderObjectRef)CA_copyRenderValue;
@end

@interface CAAnimation (CARenderValue)
- (CARenderObjectRef)CA_copyRenderValue;
@end

@interface CAValueFunction (CARenderValue)
- (CARenderObjectRef)CA_copyRenderValue;
@end

@interface CAMediaTimingFunction (CARenderValue)
- (CARenderObjectRef)CA_copyRenderValue;
@end
