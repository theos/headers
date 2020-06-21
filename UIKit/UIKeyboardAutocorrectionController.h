#import <TextInput/TIAutocorrectionList.h>

@interface UIKeyboardAutocorrectionController : NSObject

@property (assign) BOOL needsAutocorrection;
@property (assign) BOOL deferredAutocorrection;
@property (assign) BOOL requestedAutocorrection;

@property (retain, nonatomic) TIAutocorrectionList *autocorrectionList;

- (void)updateSuggestionViews;
- (void)clearAutocorrection;
- (void)setNeedsAutocorrection;

@end
