@class SBDockIconListView, SBIconModel, SBRootIconListView, SBRootFolderController, SBIconViewMap;

@interface SBIconController : NSObject {
    SBIconModel *_iconModel;
}

+ (SBIconController *)sharedInstance;

@property (nonatomic, retain) SBIconModel *model;

@property (nonatomic, readonly) SBIconViewMap *homescreenIconViewMap;

@property (nonatomic, retain, readonly) SBRootIconListView *currentRootIconList;
@property (nonatomic, retain, readonly) SBDockIconListView *dockListView;

@property (nonatomic, retain, readonly) SBRootFolderController *_rootFolderController;

@end
