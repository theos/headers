#import "UIKeyboardLayout.h"
#import "UIKBTree.h"
#import "UIKBScreenTraits.h"
#import "UIKeyboardTouchInfo.h"
#import "UIKeyboardTaskExecutionContext.h"
#import "UIKeyboardInputMode.h"

@interface UIKeyboardLayoutStar : UIKeyboardLayout

+ (Class)_subclassForScreenTraits:(UIKBScreenTraits *)traits;
+ (instancetype)keyboardFromFactoryWithName:(NSString *)name screen:(UIScreen *)screen;
+ (CGSize)keyboardSizeForInputMode:(UIKeyboardInputMode *)inputMode screenTraits:(UIKBScreenTraits *)traits;

@property (retain, nonatomic) UIKBTree *activeKey;

- (BOOL)touchPassesDragThreshold:(UIKeyboardTouchInfo *)touchInfo;

- (UIKeyboardTouchInfo *)infoForTouch:(UITouch *)touch;
- (UIKeyboardTouchInfo *)generateInfoForTouch:(UITouch *)touch;

- (NSInteger)stateForKey:(UIKBTree *)key;
- (NSInteger)orientation;

- (UIKBTree *)keyHitTest:(CGPoint)point;
- (UIKBTree *)keyboard;
- (UIKBTree *)keyplane;

- (NSString *)keyplaneName;
- (NSString *)initialKeyplaneNameWithKBStarName:(NSString *)kbStarName;

- (void)touchDown:(UITouch *)touch;
- (void)touchUp:(UITouch *)touch executionContext:(UIKeyboardTaskExecutionContext *)context;
- (void)touchUp:(UITouch *)touch;
- (void)completeHitTestForTouchDragged:(UIKeyboardTouchInfo *)touchInfo hitKey:(UIKBTree *)key;

@end
