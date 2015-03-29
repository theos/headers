@interface NavigationManager : NSObject

+ (instancetype)shared;

- (void)openRedditThreadUrl:(NSString *)url;
- (void)showPostsForSubreddit:(NSString *)subreddit title:(NSString *)title animated:(BOOL)animated;

@end
