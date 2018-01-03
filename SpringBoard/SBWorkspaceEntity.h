@interface SBWorkspaceEntity : NSObject

+ (instancetype)entity;

@property (nonatomic, copy) NSString *identifier;
@property (assign, nonatomic) NSInteger layoutRole;

@end
