@interface SBWiFiManager : NSObject

+ (instancetype)sharedInstance;

@property NSInteger signalStrengthBars;

- (NSString *)currentNetworkName;

- (NSArray *)knownNetworks;

@end
