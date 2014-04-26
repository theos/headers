typedef struct BKSDisplayBrightnessTransaction *BKSDisplayBrightnessTransactionRef;

#ifdef __cplusplus
extern "C" {
#endif

BKSDisplayBrightnessTransactionRef BKSDisplayBrightnessTransactionCreate(CFAllocatorRef allocator);

CGFloat BKSDisplayBrightnessGetCurrent();
void BKSDisplayBrightnessSet(CGFloat brightness, NSInteger wtfIsThis);

#ifdef __cplusplus
}
#endif
