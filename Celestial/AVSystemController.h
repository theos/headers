extern NSString *const AVSystemController_ActiveAudioRouteDidChangeNotification;
extern NSString *const AVSystemController_ActiveInputRouteForPlayAndRecordNoBluetoothDidChangeNotification;
extern NSString *const AVSystemController_CallIsActiveDidChangeNotification;
extern NSString *const AVSystemController_CarPlayIsConnectedDidChangeNotification;
extern NSString *const AVSystemController_CurrentRouteHasVolumeControlDidChangeNotification;
extern NSString *const AVSystemController_EUVolumeLimitDidChangeNotification;
extern NSString *const AVSystemController_EUVolumeLimitEnforcedDidChangeNotification;
extern NSString *const AVSystemController_EffectiveVolumeDidChangeNotification;
extern NSString *const AVSystemController_ExternalScreenDidChangeNotification;
extern NSString *const AVSystemController_FullMuteDidChangeNotification;
extern NSString *const AVSystemController_HeadphoneJackIsConnectedDidChangeNotification;
extern NSString *const AVSystemController_MutedDidChangeNotification;
extern NSString *const AVSystemController_NowPlayingAppDidChangeNotification;
extern NSString *const AVSystemController_NowPlayingAppIsPlayingDidChangeNotification;
extern NSString *const AVSystemController_NowPlayingAppPIDDidChangeNotification;
extern NSString *const AVSystemController_PickableRoutesDidChangeNotification;
extern NSString *const AVSystemController_PortStatusDidChangeNotification;
extern NSString *const AVSystemController_PreferredExternalRouteDidChangeNotification;
extern NSString *const AVSystemController_RecordingStateDidChangeNotification;
extern NSString *const AVSystemController_ServerConnectionDiedNotification;
extern NSString *const AVSystemController_SoftMuteDidChangeNotification;
extern NSString *const AVSystemController_SomeClientIsPlayingDidChangeNotification;
extern NSString *const AVSystemController_SystemHasAudioInputDeviceDidChangeNotification;
extern NSString *const AVSystemController_SystemHasAudioInputDeviceExcludingBluetoothDidChangeNotification;
extern NSString *const AVSystemController_SystemVolumeDidChangeNotification;
extern NSString *const AVSystemController_UnusuallyMutedAudioIsPlayingNotification;
extern NSString *const AVSystemController_UplinkMuteDidChangeNotification;
extern NSString *const AVSystemController_VibeIntensityDidChangeNotification;

/* these attributes can be reliably accessed from any process */
/* comments on the right of an attribute represent the corresponding value type */
extern NSString *const AVSystemController_ActiveAudioRouteAttribute;
extern NSString *const AVSystemController_ActiveInputRouteForPlayAndRecordNoBluetoothAttribute; /* NSString */
extern NSString *const AVSystemController_AllowAppToInitiatePlaybackTemporarilyAttribute;
extern NSString *const AVSystemController_AppWantsVolumeChangesAttribute;                       /* NSNumber, BOOL */
extern NSString *const AVSystemController_AudioIsPlayingSomewhereAttribute;                     /* NSNumber, BOOL */
extern NSString *const AVSystemController_CanBeNowPlayingAppAttribute;                          /* NSNumber, BOOL */
extern NSString *const AVSystemController_CarPlayIsConnectedAttribute;                          /* NSNumber, BOOL */
extern NSString *const AVSystemController_CurrentExternalScreenAttribute;                       /* NSString */
extern NSString *const AVSystemController_CurrentlyActiveCategoryAttribute;                     /* NSString */
extern NSString *const AVSystemController_CurrentlyActiveModeAttribute;                         /* NSString */
extern NSString *const AVSystemController_DisableAutoPauseOnHeadphoneJackDisconnectAttribute;   /* NSNumber, BOOL */
extern NSString *const AVSystemController_DiscoveryModeAttribute;                               /* NSString */
extern NSString *const AVSystemController_DownlinkMuteAttribute;                                /* NSNumber, BOOL */
extern NSString *const AVSystemController_EUVolumeLimitAttribute;                               /* NSNumber, float */
extern NSString *const AVSystemController_EUVolumeLimitEnforcedAttribute;                       /* NSNumber, BOOL */
extern NSString *const AVSystemController_FullMuteAttribute;                                    /* NSNumber, BOOL */
extern NSString *const AVSystemController_HeadphoneJackHasInputAttribute;                       /* NSNumber, BOOL */
extern NSString *const AVSystemController_HeadphoneJackIsConnectedAttribute;                    /* NSNumber, BOOL */
extern NSString *const AVSystemController_HeadphoneVolumeLimitAttribute;                        /* NSNumber, float */
extern NSString *const AVSystemController_IAmTheiPodAppAttribute;
extern NSString *const AVSystemController_IsSomeoneRecordingAttribute;                          /* NSNumber, int */
extern NSString *const AVSystemController_NowPlayingAppDisplayIDAttribute;                      /* NSString */
extern NSString *const AVSystemController_NowPlayingAppIsInterruptedAttribute;
extern NSString *const AVSystemController_NowPlayingAppIsPlayingAttribute;                      /* NSNumber, BOOL */
extern NSString *const AVSystemController_NowPlayingAppPIDAttribute;                            /* NSNumber, pid_t */
extern NSString *const AVSystemController_NowPlayingAppShouldPlayOnCarPlayConnectAttribute;     /* NSNumber, BOOL */
extern NSString *const AVSystemController_ParentalVolumeCappedToEUVolumeLimitAttribute;         /* NSNumber, BOOL */
extern NSString *const AVSystemController_PickableRoutesAttribute;
extern NSString *const AVSystemController_PickedRouteAttribute;
extern NSString *const AVSystemController_RouteAwayFromAirPlayAttribute;
extern NSString *const AVSystemController_RouteAwayFromWirelessRouteAttribute;
extern NSString *const AVSystemController_ShouldIgnorePlayCommandsFromAccessoryAttribute;       /* NSNumber, BOOL */
extern NSString *const AVSystemController_SomeClientIsPlayingLongFormAudioAttribute;            /* NSNumber, BOOL */
extern NSString *const AVSystemController_SystemHasAudioInputDeviceExcludingBluetoothAttribute; /* NSNumber, BOOL */
extern NSString *const AVSystemController_SystemSoundVolumeMultiplierAttribute;                 /* NSNumber, float */
extern NSString *const AVSystemController_UplinkMuteAttribute;                                  /* NSNumber, BOOL */


@interface AVSystemController : NSObject

+ (instancetype)sharedAVSystemController;

- (id)attributeForKey:(NSString *)key;
- (BOOL)setAttribute:(id)value forKey:(NSString *)key error:(NSError **)error;

- (BOOL)setVolumeTo:(float)volume forCategory:(NSString *)category;
- (BOOL)getVolume:(float *)volume forCategory:(NSString *)category;

- (BOOL)allowUserToExceedEUVolumeLimit;

@end
