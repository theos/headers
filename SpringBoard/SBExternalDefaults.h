#import <Foundation/NSObject.h>

@class SBExternalCarrierDefaults;

@interface SBExternalDefaults : NSObject

@property (readonly, retain, nonatomic) SBExternalCarrierDefaults *carrierDefaults;

@end