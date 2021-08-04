#import <Foundation/Foundation.h>

@interface SBWiFiManager : NSObject

+ (instancetype)sharedInstance;

- (NSInteger)signalStrengthBars;

- (NSString *)currentNetworkName;

- (NSArray *)knownNetworks;

@end
