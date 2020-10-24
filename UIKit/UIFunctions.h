#import <Foundation/Foundation.h>

// Returns the root directory for the iOS simulator
// (example: `/Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk`
// or `/` on an actual iOS device
FOUNDATION_EXPORT NSString *UISystemRootDirectory();
