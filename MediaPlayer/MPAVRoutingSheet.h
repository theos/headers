#import <UIKit/UIKit.h>

typedef NS_ENUM(NSUInteger, MPAVItemType) {
    MPAVItemTypeUnknown,
    MPAVItemTypeAudio,
    MPAVItemTypeVideo
};

@interface MPAVRoutingSheet : UIView

@property (nonatomic, assign, setter=setAVItemType:) MPAVItemType avItemType;
@property (nonatomic, assign) BOOL mirroringOnly;

- (instancetype)initWithAVItemType:(MPAVItemType)avItemType;
- (void)showInView:(UIView *)view withCompletionHandler:(void (^)(void))completionHandler;
- (void)dismiss;

@end
