#import "VotableElement.h"
#import <Foundation/NSString.h>

@interface Post : VotableElement

+ (instancetype)postSkeletonFromRedditUrl:(NSString *)url;

@property (nonatomic, retain) NSString *contextCommentIdent;

@end
