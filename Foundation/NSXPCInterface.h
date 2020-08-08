@interface NSXPCInterface : NSObject

+ (id)interfaceWithProtocol:(id)arg1;

@property (retain, nonatomic) Protocol *protocol;

- (void)setClasses:(NSSet *)classes forSelector:(SEL)selector argumentIndex:(NSUInteger)index ofReply:(BOOL)reply;

@end
