@interface FZMessage : NSObject

@property NSUInteger flags;
@property (nonatomic, retain) NSString *handle;
@property (nonatomic, retain) NSString *sender;
@property (nonatomic, retain) NSDate *timeRead;

@end
