#import <Foundation/Foundation.h>

typedef struct BKSDisplayBrightnessTransaction *BKSDisplayBrightnessTransactionRef;

FOUNDATION_EXPORT BKSDisplayBrightnessTransactionRef BKSDisplayBrightnessTransactionCreate(CFAllocatorRef allocator);

FOUNDATION_EXPORT float BKSDisplayBrightnessGetCurrent();
FOUNDATION_EXPORT void BKSDisplayBrightnessSet(float brightness, NSInteger unknown);
