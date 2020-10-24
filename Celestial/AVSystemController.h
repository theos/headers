#import <Foundation/Foundation.h>
#include <sys/cdefs.h>

typedef NSString *AVSystemControllerKey;

FOUNDATION_EXPORT AVSystemControllerKey const AVSystemController_ActiveAudioRouteDidChangeNotification;
FOUNDATION_EXPORT AVSystemControllerKey const AVSystemController_ActiveInputRouteForPlayAndRecordNoBluetoothDidChangeNotification;
FOUNDATION_EXPORT AVSystemControllerKey const AVSystemController_CallIsActiveDidChangeNotification;
FOUNDATION_EXPORT AVSystemControllerKey const AVSystemController_CarPlayIsConnectedDidChangeNotification;
FOUNDATION_EXPORT AVSystemControllerKey const AVSystemController_CurrentRouteHasVolumeControlDidChangeNotification;
FOUNDATION_EXPORT AVSystemControllerKey const AVSystemController_EUVolumeLimitDidChangeNotification;
FOUNDATION_EXPORT AVSystemControllerKey const AVSystemController_EUVolumeLimitEnforcedDidChangeNotification;
FOUNDATION_EXPORT AVSystemControllerKey const AVSystemController_EffectiveVolumeDidChangeNotification;
FOUNDATION_EXPORT AVSystemControllerKey const AVSystemController_ExternalScreenDidChangeNotification;
FOUNDATION_EXPORT AVSystemControllerKey const AVSystemController_FullMuteDidChangeNotification;
FOUNDATION_EXPORT AVSystemControllerKey const AVSystemController_HeadphoneJackIsConnectedDidChangeNotification;
FOUNDATION_EXPORT AVSystemControllerKey const AVSystemController_MutedDidChangeNotification;
FOUNDATION_EXPORT AVSystemControllerKey const AVSystemController_NowPlayingAppDidChangeNotification;
FOUNDATION_EXPORT AVSystemControllerKey const AVSystemController_NowPlayingAppIsPlayingDidChangeNotification;
FOUNDATION_EXPORT AVSystemControllerKey const AVSystemController_NowPlayingAppPIDDidChangeNotification;
FOUNDATION_EXPORT AVSystemControllerKey const AVSystemController_PickableRoutesDidChangeNotification;
FOUNDATION_EXPORT AVSystemControllerKey const AVSystemController_PortStatusDidChangeNotification;
FOUNDATION_EXPORT AVSystemControllerKey const AVSystemController_PreferredExternalRouteDidChangeNotification;
FOUNDATION_EXPORT AVSystemControllerKey const AVSystemController_RecordingStateDidChangeNotification;
FOUNDATION_EXPORT AVSystemControllerKey const AVSystemController_ServerConnectionDiedNotification;
FOUNDATION_EXPORT AVSystemControllerKey const AVSystemController_SoftMuteDidChangeNotification;
FOUNDATION_EXPORT AVSystemControllerKey const AVSystemController_SomeClientIsPlayingDidChangeNotification;
FOUNDATION_EXPORT AVSystemControllerKey const AVSystemController_SystemHasAudioInputDeviceDidChangeNotification;
FOUNDATION_EXPORT AVSystemControllerKey const AVSystemController_SystemHasAudioInputDeviceExcludingBluetoothDidChangeNotification;
FOUNDATION_EXPORT AVSystemControllerKey const AVSystemController_SystemVolumeDidChangeNotification;
FOUNDATION_EXPORT AVSystemControllerKey const AVSystemController_UnusuallyMutedAudioIsPlayingNotification;
FOUNDATION_EXPORT AVSystemControllerKey const AVSystemController_UplinkMuteDidChangeNotification;
FOUNDATION_EXPORT AVSystemControllerKey const AVSystemController_VibeIntensityDidChangeNotification;

/* these attributes can be reliably accessed from any process */
/* comments on the right of an attribute represent the corresponding value type */
FOUNDATION_EXPORT AVSystemControllerKey const AVSystemController_ActiveAudioRouteAttribute;
FOUNDATION_EXPORT AVSystemControllerKey const AVSystemController_ActiveInputRouteForPlayAndRecordNoBluetoothAttribute; /* NSString */
FOUNDATION_EXPORT AVSystemControllerKey const AVSystemController_AllowAppToInitiatePlaybackTemporarilyAttribute;
FOUNDATION_EXPORT AVSystemControllerKey const AVSystemController_AppWantsVolumeChangesAttribute;                       /* NSNumber, BOOL */
FOUNDATION_EXPORT AVSystemControllerKey const AVSystemController_AudioIsPlayingSomewhereAttribute;                     /* NSNumber, BOOL */
FOUNDATION_EXPORT AVSystemControllerKey const AVSystemController_CanBeNowPlayingAppAttribute;                          /* NSNumber, BOOL */
FOUNDATION_EXPORT AVSystemControllerKey const AVSystemController_CarPlayIsConnectedAttribute;                          /* NSNumber, BOOL */
FOUNDATION_EXPORT AVSystemControllerKey const AVSystemController_CurrentExternalScreenAttribute;                       /* NSString */
FOUNDATION_EXPORT AVSystemControllerKey const AVSystemController_CurrentlyActiveCategoryAttribute;                     /* NSString */
FOUNDATION_EXPORT AVSystemControllerKey const AVSystemController_CurrentlyActiveModeAttribute;                         /* NSString */
FOUNDATION_EXPORT AVSystemControllerKey const AVSystemController_DisableAutoPauseOnHeadphoneJackDisconnectAttribute;   /* NSNumber, BOOL */
FOUNDATION_EXPORT AVSystemControllerKey const AVSystemController_DiscoveryModeAttribute;                               /* NSString */
FOUNDATION_EXPORT AVSystemControllerKey const AVSystemController_DownlinkMuteAttribute;                                /* NSNumber, BOOL */
FOUNDATION_EXPORT AVSystemControllerKey const AVSystemController_EUVolumeLimitAttribute;                               /* NSNumber, float */
FOUNDATION_EXPORT AVSystemControllerKey const AVSystemController_EUVolumeLimitEnforcedAttribute;                       /* NSNumber, BOOL */
FOUNDATION_EXPORT AVSystemControllerKey const AVSystemController_FullMuteAttribute;                                    /* NSNumber, BOOL */
FOUNDATION_EXPORT AVSystemControllerKey const AVSystemController_HeadphoneJackHasInputAttribute;                       /* NSNumber, BOOL */
FOUNDATION_EXPORT AVSystemControllerKey const AVSystemController_HeadphoneJackIsConnectedAttribute;                    /* NSNumber, BOOL */
FOUNDATION_EXPORT AVSystemControllerKey const AVSystemController_HeadphoneVolumeLimitAttribute;                        /* NSNumber, float */
FOUNDATION_EXPORT AVSystemControllerKey const AVSystemController_IAmTheiPodAppAttribute;
FOUNDATION_EXPORT AVSystemControllerKey const AVSystemController_IsSomeoneRecordingAttribute;                          /* NSNumber, int */
FOUNDATION_EXPORT AVSystemControllerKey const AVSystemController_NowPlayingAppDisplayIDAttribute;                      /* NSString */
FOUNDATION_EXPORT AVSystemControllerKey const AVSystemController_NowPlayingAppIsInterruptedAttribute;
FOUNDATION_EXPORT AVSystemControllerKey const AVSystemController_NowPlayingAppIsPlayingAttribute;                      /* NSNumber, BOOL */
FOUNDATION_EXPORT AVSystemControllerKey const AVSystemController_NowPlayingAppPIDAttribute;                            /* NSNumber, pid_t */
FOUNDATION_EXPORT AVSystemControllerKey const AVSystemController_NowPlayingAppShouldPlayOnCarPlayConnectAttribute;     /* NSNumber, BOOL */
FOUNDATION_EXPORT AVSystemControllerKey const AVSystemController_ParentalVolumeCappedToEUVolumeLimitAttribute;         /* NSNumber, BOOL */
FOUNDATION_EXPORT AVSystemControllerKey const AVSystemController_PickableRoutesAttribute;
FOUNDATION_EXPORT AVSystemControllerKey const AVSystemController_PickedRouteAttribute;
FOUNDATION_EXPORT AVSystemControllerKey const AVSystemController_RouteAwayFromAirPlayAttribute;
FOUNDATION_EXPORT AVSystemControllerKey const AVSystemController_RouteAwayFromWirelessRouteAttribute;
FOUNDATION_EXPORT AVSystemControllerKey const AVSystemController_ShouldIgnorePlayCommandsFromAccessoryAttribute;       /* NSNumber, BOOL */
FOUNDATION_EXPORT AVSystemControllerKey const AVSystemController_SomeClientIsPlayingLongFormAudioAttribute;            /* NSNumber, BOOL */
FOUNDATION_EXPORT AVSystemControllerKey const AVSystemController_SystemHasAudioInputDeviceExcludingBluetoothAttribute; /* NSNumber, BOOL */
FOUNDATION_EXPORT AVSystemControllerKey const AVSystemController_SystemSoundVolumeMultiplierAttribute;                 /* NSNumber, float */
FOUNDATION_EXPORT AVSystemControllerKey const AVSystemController_UplinkMuteAttribute;                                  /* NSNumber, BOOL */

@interface AVSystemController : NSObject

+ (instancetype)sharedAVSystemController;

- (id)attributeForKey:(AVSystemControllerKey)key;
- (BOOL)setAttribute:(id)value forKey:(AVSystemControllerKey)key error:(NSError **)error;

- (BOOL)setVolumeTo:(float)volume forCategory:(NSString *)category;
- (BOOL)getVolume:(float *)volume forCategory:(NSString *)category;

- (BOOL)allowUserToExceedEUVolumeLimit;

@end
