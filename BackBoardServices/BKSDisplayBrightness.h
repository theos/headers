#include <sys/cdefs.h>

typedef struct BKSDisplayBrightnessTransaction *BKSDisplayBrightnessTransactionRef;

__BEGIN_DECLS

BKSDisplayBrightnessTransactionRef BKSDisplayBrightnessTransactionCreate(CFAllocatorRef allocator);

CGFloat BKSDisplayBrightnessGetCurrent();
void BKSDisplayBrightnessSet(CGFloat brightness, NSInteger wtfIsThis);

__END_DECLS
