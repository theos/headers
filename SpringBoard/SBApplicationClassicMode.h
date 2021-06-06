#import <Foundation/Foundation.h>

// The number suffix, if present, represents the diagonal size of the screen, in inches
typedef NS_ENUM(NSInteger, SBApplicationClassicMode) {
    SBApplicationClassicModeNone = 0,
    SBApplicationClassicModePhone = 1,
    SBApplicationClassicModePhone4 = 2,
    SBApplicationClassicModePhone4_7 = 3,
    SBApplicationClassicModePhone5_5 = 4,
    SBApplicationClassicModePhone5_8_Zoomed = 5, // rounded
    SBApplicationClassicModePhone5_8 = 6, // rounded
    SBApplicationClassicModePhone6_1 = 7, // rounded
    SBApplicationClassicModePhone6_5 = 8, // rounded
    SBApplicationClassicModePhone6_7 = 9, // rounded
    SBApplicationClassicModePad = 10,
    SBApplicationClassicModePad_10_5 = 11,
    SBApplicationClassicModePad_12_9 = 12,
    SBApplicationClassicModePad_11 = 13 // rounded
};
