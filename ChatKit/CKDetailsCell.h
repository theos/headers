#import <UIKit/UITableViewCell.h>
#import <UIKit/UIView.h>

@interface CKDetailsCell : UITableViewCell

@property (nonatomic, retain) UIView *topSeperator;
@property (nonatomic, retain) UIView *bottomSeperator;

@property (nonatomic) BOOL indentTopSeperator;
@property (nonatomic) BOOL indentBottomSeperator;

@end
