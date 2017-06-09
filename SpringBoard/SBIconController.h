@class SBDockIconListView, SBIconModel, SBRootIconListView, SBRootFolderController, SBIconContentView, SBRootFolder, SBIconListView, SBFolder;

@interface SBIconController : NSObject

+ (instancetype)sharedInstance;

- (void)getListView:(SBIconListView **)listView folder:(SBFolder *)folder relativePath:(id)path forIndexPath:(NSIndexPath *)indexPath createIfNecessary:(BOOL)create; // FIXME: What is path?

@property (nonatomic, retain) SBIconModel *model;

@property (nonatomic, retain, readonly) SBRootIconListView *currentRootIconList;
@property (nonatomic, retain, readonly) SBDockIconListView *dockListView;
@property (nonatomic, retain, readonly) SBIconContentView *contentView;

@property (nonatomic, retain, readonly) SBRootFolderController *_rootFolderController;
@property (nonatomic, retain, readonly) SBRootFolder *rootFolder;

@end
