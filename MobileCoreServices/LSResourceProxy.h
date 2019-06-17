#import "_LSQueryResult.h"

@interface LSResourceProxy : _LSQueryResult

@property (nonatomic, copy) NSString *boundApplicationIdentifier;
@property (nonatomic, copy) NSURL *boundContainerURL;
@property (nonatomic, copy) NSURL *boundDataContainerURL;

@property (nonatomic, retain) NSString *localizedName;

@end
