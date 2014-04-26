#include <sys/cdefs.h>

__BEGIN_DECLS

CFStringRef MGCopyAnswer(CFStringRef property);

__END_DECLS

static const CFStringRef kMGProductType = CFSTR("ProductType");
static const CFStringRef kMGProductVersion = CFSTR("ProductVersion");
static const CFStringRef kMGBuildVersion = CFSTR("BuildVersion");
