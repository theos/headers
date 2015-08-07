@interface CKConversation : NSObject

@property (nonatomic, retain, readonly) NSString *uniqueIdentifier;

@property (readonly) BOOL _chatSupportsTypingIndicators;
@property (readonly) BOOL isGroupConversation;

@end
