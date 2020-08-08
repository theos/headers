#import <Foundation/Foundation.h>
#include <sys/cdefs.h>

typedef NSString *AVSystemControllerKey;

__BEGIN_DECLS

AVSystemControllerKey const AVSystemController_ActiveAudioRouteDidChangeNotification;
AVSystemControllerKey const AVSystemController_ActiveInputRouteForPlayAndRecordNoBluetoothDidChangeNotification;
AVSystemControllerKey const AVSystemController_CallIsActiveDidChangeNotification;
AVSystemControllerKey const AVSystemController_CarPlayIsConnectedDidChangeNotification;
AVSystemControllerKey const AVSystemController_CurrentRouteHasVolumeControlDidChangeNotification;
AVSystemControllerKey const AVSystemController_EUVolumeLimitDidChangeNotification;
AVSystemControllerKey const AVSystemController_EUVolumeLimitEnforcedDidChangeNotification;
AVSystemControllerKey const AVSystemController_EffectiveVolumeDidChangeNotification;
AVSystemControllerKey const AVSystemController_ExternalScreenDidChangeNotification;
AVSystemControllerKey const AVSystemController_FullMuteDidChangeNotification;
AVSystemControllerKey const AVSystemController_HeadphoneJackIsConnectedDidChangeNotification;
AVSystemControllerKey const AVSystemController_MutedDidChangeNotification;
AVSystemControllerKey const AVSystemController_NowPlayingAppDidChangeNotification;
AVSystemControllerKey const AVSystemController_NowPlayingAppIsPlayingDidChangeNotification;
AVSystemControllerKey const AVSystemController_NowPlayingAppPIDDidChangeNotification;
AVSystemControllerKey const AVSystemController_PickableRoutesDidChangeNotification;
AVSystemControllerKey const AVSystemController_PortStatusDidChangeNotification;
AVSystemControllerKey const AVSystemController_PreferredExternalRouteDidChangeNotification;
AVSystemControllerKey const AVSystemController_RecordingStateDidChangeNotification;
AVSystemControllerKey const AVSystemController_ServerConnectionDiedNotification;
AVSystemControllerKey const AVSystemController_SoftMuteDidChangeNotification;
AVSystemControllerKey const AVSystemController_SomeClientIsPlayingDidChangeNotification;
AVSystemControllerKey const AVSystemController_SystemHasAudioInputDeviceDidChangeNotification;
AVSystemControllerKey const AVSystemController_SystemHasAudioInputDeviceExcludingBluetoothDidChangeNotification;
AVSystemControllerKey const AVSystemController_SystemVolumeDidChangeNotification;
AVSystemControllerKey const AVSystemController_UnusuallyMutedAudioIsPlayingNotification;
AVSystemControllerKey const AVSystemController_UplinkMuteDidChangeNotification;
AVSystemControllerKey const AVSystemController_VibeIntensityDidChangeNotification;

/* these attributes can be reliably accessed from any process */
/* comments on the right of an attribute represent the corresponding value type */
AVSystemControllerKey const AVSystemController_ActiveAudioRouteAttribute;
AVSystemControllerKey const AVSystemController_ActiveInputRouteForPlayAndRecordNoBluetoothAttribute; /* NSString */
AVSystemControllerKey const AVSystemController_AllowAppToInitiatePlaybackTemporarilyAttribute;
AVSystemControllerKey const AVSystemController_AppWantsVolumeChangesAttribute;                       /* NSNumber, BOOL */
AVSystemControllerKey const AVSystemController_AudioIsPlayingSomewhereAttribute;                     /* NSNumber, BOOL */
AVSystemControllerKey const AVSystemController_CanBeNowPlayingAppAttribute;                          /* NSNumber, BOOL */
AVSystemControllerKey const AVSystemController_CarPlayIsConnectedAttribute;                          /* NSNumber, BOOL */
AVSystemControllerKey const AVSystemController_CurrentExternalScreenAttribute;                       /* NSString */
AVSystemControllerKey const AVSystemController_CurrentlyActiveCategoryAttribute;                     /* NSString */
AVSystemControllerKey const AVSystemController_CurrentlyActiveModeAttribute;                         /* NSString */
AVSystemControllerKey const AVSystemController_DisableAutoPauseOnHeadphoneJackDisconnectAttribute;   /* NSNumber, BOOL */
AVSystemControllerKey const AVSystemController_DiscoveryModeAttribute;                               /* NSString */
AVSystemControllerKey const AVSystemController_DownlinkMuteAttribute;                                /* NSNumber, BOOL */
AVSystemControllerKey const AVSystemController_EUVolumeLimitAttribute;                               /* NSNumber, float */
AVSystemControllerKey const AVSystemController_EUVolumeLimitEnforcedAttribute;                       /* NSNumber, BOOL */
AVSystemControllerKey const AVSystemController_FullMuteAttribute;                                    /* NSNumber, BOOL */
AVSystemControllerKey const AVSystemController_HeadphoneJackHasInputAttribute;                       /* NSNumber, BOOL */
AVSystemControllerKey const AVSystemController_HeadphoneJackIsConnectedAttribute;                    /* NSNumber, BOOL */
AVSystemControllerKey const AVSystemController_HeadphoneVolumeLimitAttribute;                        /* NSNumber, float */
AVSystemControllerKey const AVSystemController_IAmTheiPodAppAttribute;
AVSystemControllerKey const AVSystemController_IsSomeoneRecordingAttribute;                          /* NSNumber, int */
AVSystemControllerKey const AVSystemController_NowPlayingAppDisplayIDAttribute;                      /* NSString */
AVSystemControllerKey const AVSystemController_NowPlayingAppIsInterruptedAttribute;
AVSystemControllerKey const AVSystemController_NowPlayingAppIsPlayingAttribute;                      /* NSNumber, BOOL */
AVSystemControllerKey const AVSystemController_NowPlayingAppPIDAttribute;                            /* NSNumber, pid_t */
AVSystemControllerKey const AVSystemController_NowPlayingAppShouldPlayOnCarPlayConnectAttribute;     /* NSNumber, BOOL */
AVSystemControllerKey const AVSystemController_ParentalVolumeCappedToEUVolumeLimitAttribute;         /* NSNumber, BOOL */
AVSystemControllerKey const AVSystemController_PickableRoutesAttribute;
AVSystemControllerKey const AVSystemController_PickedRouteAttribute;
AVSystemControllerKey const AVSystemController_RouteAwayFromAirPlayAttribute;
AVSystemControllerKey const AVSystemController_RouteAwayFromWirelessRouteAttribute;
AVSystemControllerKey const AVSystemController_ShouldIgnorePlayCommandsFromAccessoryAttribute;       /* NSNumber, BOOL */
AVSystemControllerKey const AVSystemController_SomeClientIsPlayingLongFormAudioAttribute;            /* NSNumber, BOOL */
AVSystemControllerKey const AVSystemController_SystemHasAudioInputDeviceExcludingBluetoothAttribute; /* NSNumber, BOOL */
AVSystemControllerKey const AVSystemController_SystemSoundVolumeMultiplierAttribute;                 /* NSNumber, float */
AVSystemControllerKey const AVSystemController_UplinkMuteAttribute;                                  /* NSNumber, BOOL */

__END_DECLS

@interface AVSystemController : NSObject

+ (instancetype)sharedAVSystemController;

- (id)attributeForKey:(AVSystemControllerKey)key;
- (BOOL)setAttribute:(id)value forKey:(AVSystemControllerKey)key error:(NSError **)error;

- (BOOL)setVolumeTo:(float)volume forCategory:(NSString *)category;
- (BOOL)getVolume:(float *)volume forCategory:(NSString *)category;

- (BOOL)allowUserToExceedEUVolumeLimit;

@end
