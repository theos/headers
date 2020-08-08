#import <Foundation/Foundation.h>

@interface NSExtension : NSObject

@property (setter=_setExtensionBundle:, nonatomic, retain) NSBundle *_extensionBundle;

@property (copy) NSString *identifier;

@end
