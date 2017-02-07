@class LSApplicationProxy;

@interface LSAppLink : NSObject

@property (nonatomic, retain) NSURL *URL;
@property (nonatomic, retain) LSApplicationProxy *targetApplicationProxy;

@end
