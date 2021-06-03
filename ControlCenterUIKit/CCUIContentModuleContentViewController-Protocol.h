#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>

@protocol CCUIContentModuleContentViewController <NSObject>

@property (nonatomic, readonly) CGFloat preferredExpandedContentHeight;
@property (nonatomic, readonly) CGFloat preferredExpandedContentWidth;

@property (nonatomic, readonly) BOOL providesOwnPlatter;

@optional

- (BOOL)shouldBeginTransitionToExpandedContentModule;
- (BOOL)shouldFinishTransitionToExpandedContentModule;
- (BOOL)canDismissPresentedContent;
- (BOOL)providesOwnPlatter;

- (CGFloat)preferredExpandedContentWidth;

- (void)willResignActive;
- (void)willBecomeActive;
- (void)willTransitionToExpandedContentMode:(BOOL)willTransition;
- (void)didTransitionToExpandedContentMode:(BOOL)didTransition;
- (void)dismissPresentedContentAnimated:(BOOL)animated completion:(id)completion;
- (void)controlCenterWillPresent;
- (void)controlCenterDidDismiss;

@required
- (CGFloat)preferredExpandedContentHeight;

@end
