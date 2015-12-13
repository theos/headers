@interface CPDistributedMessagingCenter : NSObject

+ (instancetype)centerNamed:(NSString *)name;

- (void)runServerOnCurrentThread;
- (void)registerForMessageName:(NSString *)messageName target:(id)target selector:(SEL)selector;

- (id)sendMessageAndReceiveReplyName:(NSString *)messageName userInfo:(id)userInfo;
- (id)sendMessageAndReceiveReplyName:(NSString *)messageName userInfo:(id)userInfo error:(NSError **)error;

@end
