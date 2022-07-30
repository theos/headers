#import <Foundation/Foundation.h>

@class SBDockIconListView, SBIconModel, SBRootIconListView, SBRootFolderController, SBIconViewMap, SBIconContentView, SBRootFolder, SBIconListView, SBFolder;

API_AVAILABLE(ios(3.0))  @interface SBIconController : NSObject {
	SBIconModel *_iconModel;
}

+ (instancetype)sharedInstance;

@property (nonatomic, retain) SBIconModel *model API_AVAILABLE(ios(6.0));

@property (nonatomic, readonly) SBIconViewMap *homescreenIconViewMap API_AVAILABLE(ios(6.0));

@property (nonatomic, retain, readonly) SBRootIconListView *currentRootIconList  API_AVAILABLE(ios(4.0));
@property (nonatomic, retain, readonly) SBDockIconListView *dockListView  API_AVAILABLE(ios(11.0));
@property (nonatomic, retain, readonly) SBIconContentView *contentView;

@property (nonatomic, retain, readonly) SBRootFolderController *_rootFolderController;
@property (nonatomic, retain, readonly) SBRootFolder *rootFolder API_AVAILABLE(ios(7.0));

- (BOOL)isEditing;
- (void)setIsEditing:(BOOL)editing;
- (void)setIsEditing:(BOOL)editing withFeedbackBehavior:(id)behavior API_AVAILABLE(ios(10.0));

- (void)getListView:(SBIconListView **)listView folder:(SBFolder *)folder relativePath:(id)path forIndexPath:(NSIndexPath *)indexPath createIfNecessary:(BOOL)create NS_DEPRECATED_IOS(4_0, 12_0); // FIXME: What is path?

@end
