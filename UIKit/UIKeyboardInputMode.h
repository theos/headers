#import <Foundation/Foundation.h>

@interface UIKeyboardInputMode : NSObject

+ (instancetype)keyboardInputModeWithIdentifier:(NSString *)identifier;

@property (retain, nonatomic) NSString *identifier;
@property (nonatomic, assign) NSString *normalizedIdentifier;
@property (nonatomic, assign) NSString *primaryLanguage;

- (NSString *)displayName;

- (BOOL)isExtensionInputMode;
- (BOOL)defaultLayoutIsASCIICapable;

@end
