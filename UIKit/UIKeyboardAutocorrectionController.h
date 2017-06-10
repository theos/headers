// TODO: move all TI* classes

@interface TIKeyboardCandidate : NSObject
@end

@interface TIKeyboardCandidateSingle : TIKeyboardCandidate

@property(assign, nonatomic) NSString *candidate;
@property(assign, nonatomic) NSString *input;

@end

@interface TIZephyrCandidate : TIKeyboardCandidateSingle
@end

@interface TIAutocorrectionList : NSObject

+ (TIAutocorrectionList *)listWithAutocorrection:(TIZephyrCandidate *)autocorrection predictions:(NSArray *)predictions;
- (TIAutocorrectionList *)autocorrection;
- (NSArray *)predictions;

@end

@interface UIKeyboardAutocorrectionController : NSObject

@property BOOL needsAutocorrection;
@property BOOL deferredAutocorrection;
@property BOOL requestedAutocorrection;

@property(retain, nonatomic) TIAutocorrectionList *autocorrectionList;

- (void)updateSuggestionViews;
- (void)clearAutocorrection;
- (void)setNeedsAutocorrection;

@end
