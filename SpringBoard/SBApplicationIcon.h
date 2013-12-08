@class SBApplication;

typedef enum {
	SBApplicationIconFormatSmall, // 29x29
	SBApplicationIconFormatSpotlight, // 29x29 / 50x50
	SBApplicationIconFormatDefault, // 59x62 / 74x78
	SBApplicationIconFormatGameCenter, // 44x45 / 74x78
	SBApplicationIconFormatDefaultGrayscale, // 59x62 / 74x78
	SBApplicationIconFormatDocumentFull, // 31x37 / 64x64
	SBApplicationIconFormatDocumentSmall, // 31x37 / 64x64
	SBApplicationIconFormatSquareBig, // 104x104 / 145x148
	SBApplicationIconFormatSquareSmall, // 71x71 / 92x94
	SBApplicationIconFormatTiny, // 20x20
	SBApplicationIconFormatDocument, // 31x37 / 320x320
	SBApplicationIconFormatDocumentLarge, // 31x37 / 320x320
} SBApplicationIconFormat;

@interface SBApplicationIcon : NSObject

- (instancetype)initWithApplication:(SBApplication *)application;
- (UIImage *)getIconImage:(SBApplicationIconFormat)image;

@end
