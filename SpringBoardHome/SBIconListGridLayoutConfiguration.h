#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <SpringBoard/SBIconImageInfo.h>

API_AVAILABLE(ios(13.0))
@interface SBIconListGridLayoutConfiguration : NSObject

@property (assign, nonatomic) NSUInteger numberOfLandscapeRows;
@property (assign, nonatomic) NSUInteger numberOfLandscapeColumns;
@property (assign, nonatomic) NSUInteger numberOfPortraitRows;
@property (assign, nonatomic) NSUInteger numberOfPortraitColumns;

@property (assign, nonatomic) UIEdgeInsets portraitLayoutInsets;
@property (assign, nonatomic) UIEdgeInsets landscapeLayoutInsets;

@property (assign, nonatomic) SBIconImageInfo iconImageInfo;

@end