#import <Foundation/Foundation.h>
#include <sys/cdefs.h>

typedef NSString *AVSystemControllerKey;

__BEGIN_DECLS

extern AVSystemControllerKey const AVSystemController_ActiveAudioRouteDidChangeNotification;
extern AVSystemControllerKey const AVSystemController_ActiveInputRouteForPlayAndRecordNoBluetoothDidChangeNotification;
extern AVSystemControllerKey const AVSystemController_CallIsActiveDidChangeNotification;
extern AVSystemControllerKey const AVSystemController_CarPlayIsConnectedDidChangeNotification;
extern AVSystemControllerKey const AVSystemController_CurrentRouteHasVolumeControlDidChangeNotification;
extern AVSystemControllerKey const AVSystemController_EUVolumeLimitDidChangeNotification;
extern AVSystemControllerKey const AVSystemController_EUVolumeLimitEnforcedDidChangeNotification;
extern AVSystemControllerKey const AVSystemController_EffectiveVolumeDidChangeNotification;
extern AVSystemControllerKey const AVSystemController_ExternalScreenDidChangeNotification;
extern AVSystemControllerKey const AVSystemController_FullMuteDidChangeNotification;
extern AVSystemControllerKey const AVSystemController_HeadphoneJackIsConnectedDidChangeNotification;
extern AVSystemControllerKey const AVSystemController_MutedDidChangeNotification;
extern AVSystemControllerKey const AVSystemController_NowPlayingAppDidChangeNotification;
extern AVSystemControllerKey const AVSystemController_NowPlayingAppIsPlayingDidChangeNotification;
extern AVSystemControllerKey const AVSystemController_NowPlayingAppPIDDidChangeNotification;
extern AVSystemControllerKey const AVSystemController_PickableRoutesDidChangeNotification;
extern AVSystemControllerKey const AVSystemController_PortStatusDidChangeNotification;
extern AVSystemControllerKey const AVSystemController_PreferredExternalRouteDidChangeNotification;
extern AVSystemControllerKey const AVSystemController_RecordingStateDidChangeNotification;
extern AVSystemControllerKey const AVSystemController_ServerConnectionDiedNotification;
extern AVSystemControllerKey const AVSystemController_SoftMuteDidChangeNotification;
extern AVSystemControllerKey const AVSystemController_SomeClientIsPlayingDidChangeNotification;
extern AVSystemControllerKey const AVSystemController_SystemHasAudioInputDeviceDidChangeNotification;
extern AVSystemControllerKey const AVSystemController_SystemHasAudioInputDeviceExcludingBluetoothDidChangeNotification;
extern AVSystemControllerKey const AVSystemController_SystemVolumeDidChangeNotification;
extern AVSystemControllerKey const AVSystemController_UnusuallyMutedAudioIsPlayingNotification;
extern AVSystemControllerKey const AVSystemController_UplinkMuteDidChangeNotification;
extern AVSystemControllerKey const AVSystemController_VibeIntensityDidChangeNotification;

/* these attributes can be reliably accessed from any process */
/* comments on the right of an attribute represent the corresponding value type */
extern AVSystemControllerKey const AVSystemController_ActiveAudioRouteAttribute;
extern AVSystemControllerKey const AVSystemController_ActiveInputRouteForPlayAndRecordNoBluetoothAttribute; /* NSString */
extern AVSystemControllerKey const AVSystemController_AllowAppToInitiatePlaybackTemporarilyAttribute;
extern AVSystemControllerKey const AVSystemController_AppWantsVolumeChangesAttribute;                       /* NSNumber, BOOL */
extern AVSystemControllerKey const AVSystemController_AudioIsPlayingSomewhereAttribute;                     /* NSNumber, BOOL */
extern AVSystemControllerKey const AVSystemController_CanBeNowPlayingAppAttribute;                          /* NSNumber, BOOL */
extern AVSystemControllerKey const AVSystemController_CarPlayIsConnectedAttribute;                          /* NSNumber, BOOL */
extern AVSystemControllerKey const AVSystemController_CurrentExternalScreenAttribute;                       /* NSString */
extern AVSystemControllerKey const AVSystemController_CurrentlyActiveCategoryAttribute;                     /* NSString */
extern AVSystemControllerKey const AVSystemController_CurrentlyActiveModeAttribute;                         /* NSString */
extern AVSystemControllerKey const AVSystemController_DisableAutoPauseOnHeadphoneJackDisconnectAttribute;   /* NSNumber, BOOL */
extern AVSystemControllerKey const AVSystemController_DiscoveryModeAttribute;                               /* NSString */
extern AVSystemControllerKey const AVSystemController_DownlinkMuteAttribute;                                /* NSNumber, BOOL */
extern AVSystemControllerKey const AVSystemController_EUVolumeLimitAttribute;                               /* NSNumber, float */
extern AVSystemControllerKey const AVSystemController_EUVolumeLimitEnforcedAttribute;                       /* NSNumber, BOOL */
extern AVSystemControllerKey const AVSystemController_FullMuteAttribute;                                    /* NSNumber, BOOL */
extern AVSystemControllerKey const AVSystemController_HeadphoneJackHasInputAttribute;                       /* NSNumber, BOOL */
extern AVSystemControllerKey const AVSystemController_HeadphoneJackIsConnectedAttribute;                    /* NSNumber, BOOL */
extern AVSystemControllerKey const AVSystemController_HeadphoneVolumeLimitAttribute;                        /* NSNumber, float */
extern AVSystemControllerKey const AVSystemController_IAmTheiPodAppAttribute;
extern AVSystemControllerKey const AVSystemController_IsSomeoneRecordingAttribute;                          /* NSNumber, int */
extern AVSystemControllerKey const AVSystemController_NowPlayingAppDisplayIDAttribute;                      /* NSString */
extern AVSystemControllerKey const AVSystemController_NowPlayingAppIsInterruptedAttribute;
extern AVSystemControllerKey const AVSystemController_NowPlayingAppIsPlayingAttribute;                      /* NSNumber, BOOL */
extern AVSystemControllerKey const AVSystemController_NowPlayingAppPIDAttribute;                            /* NSNumber, pid_t */
extern AVSystemControllerKey const AVSystemController_NowPlayingAppShouldPlayOnCarPlayConnectAttribute;     /* NSNumber, BOOL */
extern AVSystemControllerKey const AVSystemController_ParentalVolumeCappedToEUVolumeLimitAttribute;         /* NSNumber, BOOL */
extern AVSystemControllerKey const AVSystemController_PickableRoutesAttribute;
extern AVSystemControllerKey const AVSystemController_PickedRouteAttribute;
extern AVSystemControllerKey const AVSystemController_RouteAwayFromAirPlayAttribute;
extern AVSystemControllerKey const AVSystemController_RouteAwayFromWirelessRouteAttribute;
extern AVSystemControllerKey const AVSystemController_ShouldIgnorePlayCommandsFromAccessoryAttribute;       /* NSNumber, BOOL */
extern AVSystemControllerKey const AVSystemController_SomeClientIsPlayingLongFormAudioAttribute;            /* NSNumber, BOOL */
extern AVSystemControllerKey const AVSystemController_SystemHasAudioInputDeviceExcludingBluetoothAttribute; /* NSNumber, BOOL */
extern AVSystemControllerKey const AVSystemController_SystemSoundVolumeMultiplierAttribute;                 /* NSNumber, float */
extern AVSystemControllerKey const AVSystemController_UplinkMuteAttribute;                                  /* NSNumber, BOOL */

__END_DECLS

@interface AVSystemController : NSObject

+ (instancetype)sharedAVSystemController;

- (id)attributeForKey:(AVSystemControllerKey)key;
- (BOOL)setAttribute:(id)value forKey:(AVSystemControllerKey)key error:(NSError **)error;

- (BOOL)setVolumeTo:(float)volume forCategory:(NSString *)category;
- (BOOL)getVolume:(float *)volume forCategory:(NSString *)category;

- (BOOL)allowUserToExceedEUVolumeLimit;

@end
