extern NSString *const AVSystemController_HeadphoneJackIsConnectedDidChangeNotification;
extern NSString *const AVSystemController_HeadphoneJackIsConnectedAttribute;

@interface AVSystemController : NSObject

+ (instancetype)sharedAVSystemController;

- (id)attributeForKey:(NSString *)key;
- (BOOL)setAttribute:(id)value forKey:(NSString *)key error:(NSError **)error;

@end
