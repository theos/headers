#import <Foundation/Foundation.h>
#import "TIZephyrCandidate.h"

@interface TIAutocorrectionList : NSObject

+ (TIAutocorrectionList *)listWithAutocorrection:(TIZephyrCandidate *)autocorrection predictions:(NSArray *)predictions;
- (TIAutocorrectionList *)autocorrection;
- (NSArray *)predictions;

@end
