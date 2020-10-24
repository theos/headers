/*
 * Media remote framework header.
 *
 * Copyright (c) 2013-2014 Cykey (David Murray)
 * All rights reserved.
 */

#ifndef MEDIAREMOTE_H_
#define MEDIAREMOTE_H_

#include <Foundation/Foundation.h>

#pragma mark - Notifications

/*
 * These are used on the local notification center.
 */

FOUNDATION_EXPORT CFStringRef kMRMediaRemoteNowPlayingInfoDidChangeNotification;
FOUNDATION_EXPORT CFStringRef kMRMediaRemoteNowPlayingPlaybackQueueDidChangeNotification;
FOUNDATION_EXPORT CFStringRef kMRMediaRemotePickableRoutesDidChangeNotification;
FOUNDATION_EXPORT CFStringRef kMRMediaRemoteNowPlayingApplicationDidChangeNotification;
FOUNDATION_EXPORT CFStringRef kMRMediaRemoteNowPlayingApplicationIsPlayingDidChangeNotification;
FOUNDATION_EXPORT CFStringRef kMRMediaRemoteRouteStatusDidChangeNotification;

#pragma mark - Keys

FOUNDATION_EXPORT CFStringRef kMRMediaRemoteNowPlayingApplicationPIDUserInfoKey;
FOUNDATION_EXPORT CFStringRef kMRMediaRemoteNowPlayingApplicationIsPlayingUserInfoKey;
FOUNDATION_EXPORT CFStringRef kMRMediaRemoteNowPlayingInfoAlbum;
FOUNDATION_EXPORT CFStringRef kMRMediaRemoteNowPlayingInfoArtist;
FOUNDATION_EXPORT CFStringRef kMRMediaRemoteNowPlayingInfoArtworkData;
FOUNDATION_EXPORT CFStringRef kMRMediaRemoteNowPlayingInfoArtworkMIMEType;
FOUNDATION_EXPORT CFStringRef kMRMediaRemoteNowPlayingInfoChapterNumber;
FOUNDATION_EXPORT CFStringRef kMRMediaRemoteNowPlayingInfoComposer;
FOUNDATION_EXPORT CFStringRef kMRMediaRemoteNowPlayingInfoDuration;
FOUNDATION_EXPORT CFStringRef kMRMediaRemoteNowPlayingInfoElapsedTime;
FOUNDATION_EXPORT CFStringRef kMRMediaRemoteNowPlayingInfoGenre;
FOUNDATION_EXPORT CFStringRef kMRMediaRemoteNowPlayingInfoIsAdvertisement;
FOUNDATION_EXPORT CFStringRef kMRMediaRemoteNowPlayingInfoIsBanned;
FOUNDATION_EXPORT CFStringRef kMRMediaRemoteNowPlayingInfoIsInWishList;
FOUNDATION_EXPORT CFStringRef kMRMediaRemoteNowPlayingInfoIsLiked;
FOUNDATION_EXPORT CFStringRef kMRMediaRemoteNowPlayingInfoIsMusicApp;
FOUNDATION_EXPORT CFStringRef kMRMediaRemoteNowPlayingInfoPlaybackRate;
FOUNDATION_EXPORT CFStringRef kMRMediaRemoteNowPlayingInfoProhibitsSkip;
FOUNDATION_EXPORT CFStringRef kMRMediaRemoteNowPlayingInfoQueueIndex;
FOUNDATION_EXPORT CFStringRef kMRMediaRemoteNowPlayingInfoRadioStationIdentifier;
FOUNDATION_EXPORT CFStringRef kMRMediaRemoteNowPlayingInfoRepeatMode;
FOUNDATION_EXPORT CFStringRef kMRMediaRemoteNowPlayingInfoShuffleMode;
FOUNDATION_EXPORT CFStringRef kMRMediaRemoteNowPlayingInfoStartTime;
FOUNDATION_EXPORT CFStringRef kMRMediaRemoteNowPlayingInfoSupportsFastForward15Seconds;
FOUNDATION_EXPORT CFStringRef kMRMediaRemoteNowPlayingInfoSupportsIsBanned;
FOUNDATION_EXPORT CFStringRef kMRMediaRemoteNowPlayingInfoSupportsIsLiked;
FOUNDATION_EXPORT CFStringRef kMRMediaRemoteNowPlayingInfoSupportsRewind15Seconds;
FOUNDATION_EXPORT CFStringRef kMRMediaRemoteNowPlayingInfoTimestamp;
FOUNDATION_EXPORT CFStringRef kMRMediaRemoteNowPlayingInfoTitle;
FOUNDATION_EXPORT CFStringRef kMRMediaRemoteNowPlayingInfoTotalChapterCount;
FOUNDATION_EXPORT CFStringRef kMRMediaRemoteNowPlayingInfoTotalDiscCount;
FOUNDATION_EXPORT CFStringRef kMRMediaRemoteNowPlayingInfoTotalQueueCount;
FOUNDATION_EXPORT CFStringRef kMRMediaRemoteNowPlayingInfoTotalTrackCount;
FOUNDATION_EXPORT CFStringRef kMRMediaRemoteNowPlayingInfoTrackNumber;
FOUNDATION_EXPORT CFStringRef kMRMediaRemoteNowPlayingInfoUniqueIdentifier;
FOUNDATION_EXPORT CFStringRef kMRMediaRemoteNowPlayingInfoRadioStationHash;
FOUNDATION_EXPORT CFStringRef kMRMediaRemoteOptionMediaType;
FOUNDATION_EXPORT CFStringRef kMRMediaRemoteOptionSourceID;
FOUNDATION_EXPORT CFStringRef kMRMediaRemoteOptionTrackID;
FOUNDATION_EXPORT CFStringRef kMRMediaRemoteOptionStationID;
FOUNDATION_EXPORT CFStringRef kMRMediaRemoteOptionStationHash;
FOUNDATION_EXPORT CFStringRef kMRMediaRemoteRouteDescriptionUserInfoKey;
FOUNDATION_EXPORT CFStringRef kMRMediaRemoteRouteStatusUserInfoKey;

#pragma mark - API

typedef enum {
    /*
     * Use nil for userInfo.
     */
    MRMediaRemoteCommandPlay,
    MRMediaRemoteCommandPause,
    MRMediaRemoteCommandTogglePlayPause,
    MRMediaRemoteCommandStop,
    MRMediaRemoteCommandNextTrack,
    MRMediaRemoteCommandPreviousTrack,
    MRMediaRemoteCommandAdvanceShuffleMode,
    MRMediaRemoteCommandAdvanceRepeatMode,
    MRMediaRemoteCommandBeginFastForward,
    MRMediaRemoteCommandEndFastForward,
    MRMediaRemoteCommandBeginRewind,
    MRMediaRemoteCommandEndRewind,
    MRMediaRemoteCommandRewind15Seconds,
    MRMediaRemoteCommandFastForward15Seconds,
    MRMediaRemoteCommandRewind30Seconds,
    MRMediaRemoteCommandFastForward30Seconds,
    MRMediaRemoteCommandToggleRecord,
    MRMediaRemoteCommandSkipForward,
    MRMediaRemoteCommandSkipBackward,
    MRMediaRemoteCommandChangePlaybackRate,

    /*
     * Use a NSDictionary for userInfo, which contains three keys:
     * kMRMediaRemoteOptionTrackID
     * kMRMediaRemoteOptionStationID
     * kMRMediaRemoteOptionStationHash
     */
    MRMediaRemoteCommandRateTrack,
    MRMediaRemoteCommandLikeTrack,
    MRMediaRemoteCommandDislikeTrack,
    MRMediaRemoteCommandBookmarkTrack,

    /*
     * Use nil for userInfo.
     */
    MRMediaRemoteCommandSeekToPlaybackPosition,
    MRMediaRemoteCommandChangeRepeatMode,
    MRMediaRemoteCommandChangeShuffleMode,
    MRMediaRemoteCommandEnableLanguageOption,
    MRMediaRemoteCommandDisableLanguageOption
} MRMediaRemoteCommand;

FOUNDATION_EXPORT Boolean MRMediaRemoteSendCommand(MRMediaRemoteCommand command, NSDictionary *userInfo);

FOUNDATION_EXPORT void MRMediaRemoteSetPlaybackSpeed(int speed);
FOUNDATION_EXPORT void MRMediaRemoteSetElapsedTime(double elapsedTime);

FOUNDATION_EXPORT void MRMediaRemoteSetNowPlayingApplicationOverrideEnabled(Boolean enabled);

FOUNDATION_EXPORT void MRMediaRemoteRegisterForNowPlayingNotifications(dispatch_queue_t queue);
FOUNDATION_EXPORT void MRMediaRemoteUnregisterForNowPlayingNotifications();

FOUNDATION_EXPORT void MRMediaRemoteBeginRouteDiscovery();
FOUNDATION_EXPORT void MRMediaRemoteEndRouteDiscovery();

FOUNDATION_EXPORT CFArrayRef MRMediaRemoteCopyPickableRoutes();

typedef void (^MRMediaRemoteGetNowPlayingInfoCompletion)(CFDictionaryRef information);
typedef void (^MRMediaRemoteGetNowPlayingApplicationPIDCompletion)(int PID);
typedef void (^MRMediaRemoteGetNowPlayingApplicationIsPlayingCompletion)(Boolean isPlaying);

FOUNDATION_EXPORT void MRMediaRemoteGetNowPlayingApplicationPID(dispatch_queue_t queue, MRMediaRemoteGetNowPlayingApplicationPIDCompletion completion);
FOUNDATION_EXPORT void MRMediaRemoteGetNowPlayingInfo(dispatch_queue_t queue, MRMediaRemoteGetNowPlayingInfoCompletion completion);
FOUNDATION_EXPORT void MRMediaRemoteGetNowPlayingApplicationIsPlaying(dispatch_queue_t queue, MRMediaRemoteGetNowPlayingApplicationIsPlayingCompletion completion);

FOUNDATION_EXPORT void MRMediaRemoteKeepAlive();
FOUNDATION_EXPORT void MRMediaRemoteSetElapsedTime(double time);
FOUNDATION_EXPORT void MRMediaRemoteSetShuffleMode(int mode);
FOUNDATION_EXPORT void MRMediaRemoteSetRepeatMode(int mode);

/*
 * The identifier can be obtained using MRMediaRemoteCopyPickableRoutes.
 * Use the 'RouteUID' or the 'RouteName' key.
 */

FOUNDATION_EXPORT int MRMediaRemoteSelectSourceWithID(CFStringRef identifier);
FOUNDATION_EXPORT void MRMediaRemoteSetPickedRouteWithPassword(CFStringRef route, CFStringRef password);

FOUNDATION_EXPORT CFArrayRef MRMediaRemoteCopyPickableRoutesForCategory(NSString *category);
FOUNDATION_EXPORT Boolean MRMediaRemotePickedRouteHasVolumeControl();
FOUNDATION_EXPORT Boolean MRMediaRemoteSetCanBeNowPlayingApplication(Boolean can);
FOUNDATION_EXPORT void MRMediaRemoteSetNowPlayingInfo(CFDictionaryRef information);

#endif /* MEDIAREMOTE_H_ */
