#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <SpringBoard/SBIconImageInfo.h>

NS_CLASS_AVAILABLE_IOS(13_0) @interface SBIconListGridlLayoutConfiguration : NSObject

@property (assign, nonatomic) NSUInteger numberOfLandscapeRows;
@property (assign, nonatomic) NSUInteger numberOfLandscapeColumns;
@property (assign, nonatomic) NSUInteger numberOfPortraitRows;
@property (assign, nonatomic) NSUInteger numberOfPortraitColumns;

@property (assign, nonatomic) UIEdgeInsets portraitLayoutInsets;                                                 //@synthesize portraitLayoutInsets=_portraitLayoutInsets - In the implementation block
@property (assign, nonatomic) UIEdgeInsets landscapeLayoutInsets;

@property (assign, nonatomic) SBIconImageInfo iconImageInfo; 

@end