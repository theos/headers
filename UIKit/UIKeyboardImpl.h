#import "UIKeyboardTaskQueue.h"
#import "UIKeyboardAutocorrectionController.h"
#import "UIKeyboardTaskExecutionContext.h"

@protocol textInputDelegate
- (NSString *)text;
@end

@interface UIKeyboardImpl : UIView
+ (instancetype)activeInstance;
+ (instancetype)sharedInstance;
+ (UIWindow *)keyboardWindow; NS_AVAILABLE(10_0)
+ (CGSize)sizeForInterfaceOrientation:(NSInteger)orientation;
+ (CGSize)defaultSizeForInterfaceOrientation:(NSInteger)orientation;
+ (CGSize)_defaultSizeForInterfaceOrientation:(NSInteger)orientation;
+ (CGSize)keyboardSizeForInterfaceOrientation:(NSInteger)orientation;
+ (UIScreen *)keyboardScreen;
+ (Class)layoutClassForCurrentInputMode;
+ (BOOL)isSplit;
+ (id)orientationKeyForOrientation:(NSInteger)orientation; NS_AVAILABLE(7_0, 7_0) // ?

@property(retain, nonatomic) UIKeyboardTaskQueue *taskQueue;
@property(retain, nonatomic) id changedDelegate;

- (UIKeyboardAutocorrectionController *)autocorrectionController;
- (UIKeyboardLayoutStar *)_layout;

- (NSInteger)interfaceOrientation;

- (id <textInputDelegate>)inputDelegate;
- (id <textInputDelegate>)asynchronousInputDelegate;
- (id)delegate;

- (BOOL)acceptInputString:(NSString *)input;

- (void)addInputString:(NSString *)input;
- (void)addInputString:(NSString *)input fromVariantKey:(NSInteger)key;
- (void)addInputString:(NSString *)input withFlags:(unsigned)flags executionContext:(UIKeyboardTaskExecutionContext *)executionContext;
- (void)setChanged;
- (void)callChanged;
- (void)setInputMode:(NSString *)inputMode userInitiated:(BOOL)userInitiated;
- (void)recomputeActiveInputModesWithExtensions:(BOOL)includeExtensions;
- (void)defaultsDidChange;

@end
