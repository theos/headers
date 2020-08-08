/*
 * Media remote framework header.
 *
 * Copyright (c) 2013-2014 Cykey (David Murray)
 * All rights reserved.
 */

#ifndef MEDIAREMOTE_H_
#define MEDIAREMOTE_H_

#include <CoreFoundation/CoreFoundation.h>
#include <sys/cdefs.h>

__BEGIN_DECLS

#pragma mark - Notifications

/*
 * These are used on the local notification center.
 */

CFStringRef kMRMediaRemoteNowPlayingInfoDidChangeNotification;
CFStringRef kMRMediaRemoteNowPlayingPlaybackQueueDidChangeNotification;
CFStringRef kMRMediaRemotePickableRoutesDidChangeNotification;
CFStringRef kMRMediaRemoteNowPlayingApplicationDidChangeNotification;
CFStringRef kMRMediaRemoteNowPlayingApplicationIsPlayingDidChangeNotification;
CFStringRef kMRMediaRemoteRouteStatusDidChangeNotification;

#pragma mark - Keys

CFStringRef kMRMediaRemoteNowPlayingApplicationPIDUserInfoKey;
CFStringRef kMRMediaRemoteNowPlayingApplicationIsPlayingUserInfoKey;
CFStringRef kMRMediaRemoteNowPlayingInfoAlbum;
CFStringRef kMRMediaRemoteNowPlayingInfoArtist;
CFStringRef kMRMediaRemoteNowPlayingInfoArtworkData;
CFStringRef kMRMediaRemoteNowPlayingInfoArtworkMIMEType;
CFStringRef kMRMediaRemoteNowPlayingInfoChapterNumber;
CFStringRef kMRMediaRemoteNowPlayingInfoComposer;
CFStringRef kMRMediaRemoteNowPlayingInfoDuration;
CFStringRef kMRMediaRemoteNowPlayingInfoElapsedTime;
CFStringRef kMRMediaRemoteNowPlayingInfoGenre;
CFStringRef kMRMediaRemoteNowPlayingInfoIsAdvertisement;
CFStringRef kMRMediaRemoteNowPlayingInfoIsBanned;
CFStringRef kMRMediaRemoteNowPlayingInfoIsInWishList;
CFStringRef kMRMediaRemoteNowPlayingInfoIsLiked;
CFStringRef kMRMediaRemoteNowPlayingInfoIsMusicApp;
CFStringRef kMRMediaRemoteNowPlayingInfoPlaybackRate;
CFStringRef kMRMediaRemoteNowPlayingInfoProhibitsSkip;
CFStringRef kMRMediaRemoteNowPlayingInfoQueueIndex;
CFStringRef kMRMediaRemoteNowPlayingInfoRadioStationIdentifier;
CFStringRef kMRMediaRemoteNowPlayingInfoRepeatMode;
CFStringRef kMRMediaRemoteNowPlayingInfoShuffleMode;
CFStringRef kMRMediaRemoteNowPlayingInfoStartTime;
CFStringRef kMRMediaRemoteNowPlayingInfoSupportsFastForward15Seconds;
CFStringRef kMRMediaRemoteNowPlayingInfoSupportsIsBanned;
CFStringRef kMRMediaRemoteNowPlayingInfoSupportsIsLiked;
CFStringRef kMRMediaRemoteNowPlayingInfoSupportsRewind15Seconds;
CFStringRef kMRMediaRemoteNowPlayingInfoTimestamp;
CFStringRef kMRMediaRemoteNowPlayingInfoTitle;
CFStringRef kMRMediaRemoteNowPlayingInfoTotalChapterCount;
CFStringRef kMRMediaRemoteNowPlayingInfoTotalDiscCount;
CFStringRef kMRMediaRemoteNowPlayingInfoTotalQueueCount;
CFStringRef kMRMediaRemoteNowPlayingInfoTotalTrackCount;
CFStringRef kMRMediaRemoteNowPlayingInfoTrackNumber;
CFStringRef kMRMediaRemoteNowPlayingInfoUniqueIdentifier;
CFStringRef kMRMediaRemoteNowPlayingInfoRadioStationIdentifier;
CFStringRef kMRMediaRemoteNowPlayingInfoRadioStationHash;
CFStringRef kMRMediaRemoteOptionMediaType;
CFStringRef kMRMediaRemoteOptionSourceID;
CFStringRef kMRMediaRemoteOptionTrackID;
CFStringRef kMRMediaRemoteOptionStationID;
CFStringRef kMRMediaRemoteOptionStationHash;
CFStringRef kMRMediaRemoteRouteDescriptionUserInfoKey;
CFStringRef kMRMediaRemoteRouteStatusUserInfoKey;

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

Boolean MRMediaRemoteSendCommand(MRMediaRemoteCommand command, NSDictionary *userInfo);

void MRMediaRemoteSetPlaybackSpeed(int speed);
void MRMediaRemoteSetElapsedTime(double elapsedTime);

void MRMediaRemoteSetNowPlayingApplicationOverrideEnabled(Boolean enabled);

void MRMediaRemoteRegisterForNowPlayingNotifications(dispatch_queue_t queue);
void MRMediaRemoteUnregisterForNowPlayingNotifications();

void MRMediaRemoteBeginRouteDiscovery();
void MRMediaRemoteEndRouteDiscovery();

CFArrayRef MRMediaRemoteCopyPickableRoutes();

typedef void (^MRMediaRemoteGetNowPlayingInfoCompletion)(CFDictionaryRef information);
typedef void (^MRMediaRemoteGetNowPlayingApplicationPIDCompletion)(int PID);
typedef void (^MRMediaRemoteGetNowPlayingApplicationIsPlayingCompletion)(Boolean isPlaying);

void MRMediaRemoteGetNowPlayingApplicationPID(dispatch_queue_t queue, MRMediaRemoteGetNowPlayingApplicationPIDCompletion completion);
void MRMediaRemoteGetNowPlayingInfo(dispatch_queue_t queue, MRMediaRemoteGetNowPlayingInfoCompletion completion);
void MRMediaRemoteGetNowPlayingApplicationIsPlaying(dispatch_queue_t queue, MRMediaRemoteGetNowPlayingApplicationIsPlayingCompletion completion);

void MRMediaRemoteKeepAlive();
void MRMediaRemoteSetElapsedTime(double time);
void MRMediaRemoteSetShuffleMode(int mode);
void MRMediaRemoteSetRepeatMode(int mode);

/*
 * The identifier can be obtained using MRMediaRemoteCopyPickableRoutes.
 * Use the 'RouteUID' or the 'RouteName' key.
 */

int MRMediaRemoteSelectSourceWithID(CFStringRef identifier);
void MRMediaRemoteSetPickedRouteWithPassword(CFStringRef route, CFStringRef password);

CFArrayRef MRMediaRemoteCopyPickableRoutesForCategory(NSString *category);
Boolean MRMediaRemotePickedRouteHasVolumeControl();
Boolean MRMediaRemoteSetCanBeNowPlayingApplication(Boolean can);
void MRMediaRemoteSetNowPlayingInfo(CFDictionaryRef information);


__END_DECLS

#endif /* MEDIAREMOTE_H_ */
