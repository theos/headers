@class SBApplication;

#if __IPHONE_7_0
typedef NS_ENUM(NSUInteger, SBApplicationIconFormat) {
												// iphone  ipad
	SBApplicationIconFormatSmall,				// 29x29   29x29
	SBApplicationIconFormatSpotlight,			// 40x40   40x40
	SBApplicationIconFormatDefault,				// 62x62   78x78
	SBApplicationIconFormatGameCenter,			// 42x42   78x78
	SBApplicationIconFormatDocumentFull,		// 37x48   37x48
	SBApplicationIconFormatDocumentSmall,		// 37x48   37z48
	SBApplicationIconFormatSquareBig,			// 82x82   128x128
	SBApplicationIconFormatSquareDefault,		// 62x62   78x78
	SBApplicationIconFormatTiny,				// 20x20   20x20
	SBApplicationIconFormatDocument,			// 37x48   247x320
	SBApplicationIconFormatDocumentLarge,		// 37x48   247x320
	SBApplicationIconFormatUnknownGradient,		// 300x150 300x150
	SBApplicationIconFormatSquareGameCenter,	// 42x42   42x42
	SBApplicationIconFormatUnknownDefault,		// 62x62   78x78

	/*
	 todo: find out what UnknownGradient and UnknownDefault are for.
	 UnknownGradient is a static gradient on iphone, and half of the
	 icon on ipad. UnknownDefault is the same thing as Default.
	*/
};
#else
typedef NS_ENUM(NSUInteger, SBApplicationIconFormat) {
												// iphone  ipad
	SBApplicationIconFormatSmall,				// 29x29   29x29
	SBApplicationIconFormatSpotlight,			// 29x29   50x50
	SBApplicationIconFormatDefault,				// 59x62   74x78
	SBApplicationIconFormatGameCenter,			// 44x45   74x78
	SBApplicationIconFormatDefaultGrayscale,	// 59x62   74x78
	SBApplicationIconFormatDocumentFull,		// 31x37   64x64
	SBApplicationIconFormatDocumentSmall,		// 31x37   64x64
	SBApplicationIconFormatSquareBig,			// 104x104 145x148
	SBApplicationIconFormatSquareSmall,			// 71x71   92x94
	SBApplicationIconFormatTiny,				// 20x20   20x20
	SBApplicationIconFormatDocument,			// 31x37   320x320
	SBApplicationIconFormatDocumentLarge,		// 31x37   320x320
};
#endif

@interface SBApplicationIcon : NSObject

- (instancetype)initWithApplication:(SBApplication *)application;

- (UIImage *)getIconImage:(SBApplicationIconFormat)image;

@end
