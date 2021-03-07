#import <QuartzCore/CABase.h>

CA_EXTERN NSString *CAAtomGetString(unsigned atomNum);
CA_EXTERN unsigned CAInternAtom(NSString *atomStr);

CA_EXTERN unsigned CAGetDebugFlags();
CA_EXTERN void CASetDebugFlags(unsigned flags);
