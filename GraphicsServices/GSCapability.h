/*

GSCapability.h ... Graphics Service Capability.
 
Copyright (c) 2009, KennyTM~
All rights reserved.
 
Redistribution and use in source and binary forms, with or without modification,
are permitted provided that the following conditions are met:
 
 * Redistributions of source code must retain the above copyright notice, this
   list of conditions and the following disclaimer.
 * Redistributions in binary form must reproduce the above copyright notice, 
   this list of conditions and the following disclaimer in the documentation
   and/or other materials provided with the distribution.
 * Neither the name of the KennyTM~ nor the names of its contributors may be
   used to endorse or promote products derived from this software without
   specific prior written permission.
 
THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR
ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 
*/

#ifndef GSCAPABILITY_H
#define GSCAPABILITY_H

#include <CoreFoundation/CoreFoundation.h>
#include <Availability2.h>

__BEGIN_DECLS

/*! @brief Get the raw value of a key in the capability plist.
 The capability plist can be read from a shared memory region named "GSCapability"
 */
CFPropertyListRef _getCapability(CFStringRef capability);

CFStringRef GSGetLocalizedDeviceName();                ///< Get the localized device name (which is the "device-name-localized" capability).
CFStringRef GSGetDeviceName();                         ///< Get the device name (which is the "device-name" capability).
Boolean GSSystemHasCapability(CFStringRef capability); ///< Check if the system has the specified capability.


Boolean GSSystemCanTakePhoto(); ///< Returns if the device can take photos (i.e. have "still-camera" but not "cameraRestriction" capabilities).
#if __IPHONE_OS_VERSION_MIN_REQUIRED < __IPHONE_3_2
Boolean GSSystemHasTelephonyCapability(); ///< Returns if the device has "telephony" capability.
#endif
#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_3_2
Boolean GSSystemGetCellularDataCapability(void); ///< Returns if the device has "cellular-data" capability.
Boolean GSSystemGetTelephonyCapability(void);    ///< Returns if the device has "telephony" capability.
#endif

/// If the capability is a dictionary (e.g. the "screen-dimensions" capability), copy the value of a key in that dictionary.
CFPropertyListRef GSSystemCopySubcapability(CFStringRef capability, CFStringRef subcapability);
CFPropertyListRef GSSystemCopyCapability(CFStringRef capability); ///< Copy the value of a capability.

CFStringRef kGSCapabilityChangedNotification;

CFStringRef kGSCameraRestriction;
CFStringRef kGSInAppPurchasesRestriction;
CFStringRef kGSVolumeLimitRestriction;

CFStringRef kGSDeviceNameString;
CFStringRef kGSLocalizedDeviceNameString;

CFStringRef kGSTelephonyMaximumGeneration;

#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_3_1
CFStringRef kGSARMV6ExecutionCapability;
CFStringRef kGSARMV7ExecutionCapability;
#endif
CFStringRef kGSAccelerometerCapability;
CFStringRef kGSAccessibilityCapability;
CFStringRef kGSAppleInternalInstallCapability;
CFStringRef kGSApplicationInstallationCapability;
CFStringRef kGSAutoFocusCameraCapability;
CFStringRef kGSBluetoothCapability;
CFStringRef kGSCameraCapability;
CFStringRef kGSDelaySleepForHeadsetClickCapability;
CFStringRef kGSDisplayFCCLogosViaSoftwareCapability;
CFStringRef kGSDisplayIdentifiersCapability;
CFStringRef kGSEncodeAACCapability;
CFStringRef kGSEncryptedDataPartitionCapability;
CFStringRef kGSExplicitContentRestriction;
CFStringRef kGSGPSCapability;
CFStringRef kGSGasGaugeBatteryCapability;
CFStringRef kGSGreenTeaDeviceCapability;
CFStringRef kGSHasAllFeaturesCapability;
CFStringRef kGSInternationalSettingsCapability;
CFStringRef kGSLaunchApplicationsWhileAnimatingCapability;
CFStringRef kGSLoadThumbnailsWhileScrollingCapability;
CFStringRef kGSLocationServicesCapability;
CFStringRef kGSMMSCapability;
CFStringRef kGSMagnetometerCapability;
#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_3_1
CFStringRef kGSMarketingNameString;
#endif
CFStringRef kGSMicrophoneCapability;
CFStringRef kGSNikeIpodCapability;
CFStringRef kGSNotGreenTeaDeviceCapability;
CFStringRef kGSOpenGLES1Capability;
CFStringRef kGSOpenGLES2Capability;
#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_3_1
CFStringRef kGSPeer2PeerCapability;
#endif
CFStringRef kGSPiezoClickerCapability;
CFStringRef kGSPlatformStandAloneContactsCapability;
CFStringRef kGSProximitySensorCapability;
CFStringRef kGSRingerSwitchCapability;
CFStringRef kGSSMSCapability;
CFStringRef kGSScreenDimensionsCapability;
CFStringRef kGSSensitiveUICapability;
CFStringRef kGSTVOutSettingsCapability;
CFStringRef kGSTelephonyCapability;
CFStringRef kGSUnifiedIPodCapability;
CFStringRef kGSVideoCameraCapability;
CFStringRef kGSVoiceControlCapability;
CFStringRef kGSVolumeButtonCapability;
CFStringRef kGSWiFiCapability;
CFStringRef kGSYouTubeCapability;
CFStringRef kGSYouTubePluginCapability;
#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_3_2
CFStringRef kGS720pPlaybackCapability;
CFStringRef kGSCellularDataCapability;
CFStringRef kGSContainsCellularRadioCapability;
CFStringRef kGSDataPlanCapability;
CFStringRef kGSDisplayPortCapability;
CFStringRef kGSH264EncoderCapability;
CFStringRef kGSHideNonDefaultApplicationsCapability;
CFStringRef kGSWildcatCapability;
#endif
#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_4_0
CFStringRef kGSCameraFlashCapability;
CFStringRef kGSCanRasterizeEfficientlyCapability;
CFStringRef kGSFrontFacingCameraCapability;
CFStringRef kGSHiDPICapability;
CFStringRef kGSIOSurfaceBackedImagesCapability;
CFStringRef kGSMultitaskingCapability;
CFStringRef kGSVeniceCapability;
#endif

/// Subcapabilities
CFStringRef kGSMainScreenHeight;
CFStringRef kGSMainScreenOrientation;
CFStringRef kGSMainScreenScale;
CFStringRef kGSMainScreenWidth;

CFStringRef kGSEnforceGoogleMail;
#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_3_2
CFStringRef kGSEnforceCameraShutterClick;
#endif

__END_DECLS

#endif
