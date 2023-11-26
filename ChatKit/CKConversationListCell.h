#import <UIKit/UITableViewCell.h>
#import <UIKit/UILabel.h>

@class CKConversation;

@interface CKConversationListCell : UITableViewCell {
		UILabel *_summaryLabel;
}

@property (nonatomic, retain) CKConversation *conversation;

@end
