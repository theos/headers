typedef enum {
	FZMessageFlagsTypingBegan = 4096
} FZMessageFlags;

@interface FZMessage : NSObject

@property FZMessageFlags flags;
@property (nonatomic, retain) NSString *handle;
@property (nonatomic, retain) NSString *sender;
@property (nonatomic, retain) NSDate *timeRead;

@end
