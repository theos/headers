@interface NavigationManager : NSObject

+ (instancetype)shared;
- (void)openRedditThreadUrl:(NSString *)url;

@end
