#import <AddressBook/AddressBook.h>

@class BBAction, BBSectionParameters, BBSectionSubtypeParameters;

typedef NS_ENUM(NSUInteger, BBBulletinAccessoryStyle) {
	BBBulletinAccessoryStyleNone,
	BBBulletinAccessoryStyleVIP = 4,
};

@interface BBBulletin : NSObject

@property (nonatomic, retain) NSString *bulletinID;
@property (nonatomic, retain) NSString *sectionID;
@property (nonatomic, retain) NSString *parentSectionID;
@property (nonatomic, retain) NSString *publisherBulletinID;
@property (nonatomic, retain) NSString *recordID;
@property BOOL showsUnreadIndicator;

@property (nonatomic, retain) NSString *title;
@property (nonatomic, retain) NSString *subtitle;
@property (nonatomic, retain) NSString *message;
@property (nonatomic, retain) NSDate *date;
@property (nonatomic, retain) NSDate *lastInterruptDate;
@property (nonatomic, retain) NSString *unlockActionLabelOverride;
@property (nonatomic, retain) NSString *section;

@property (nonatomic, retain) BBAction *defaultAction;
@property BBBulletinAccessoryStyle accessoryStyle;

@property (nonatomic, retain) NSDictionary *context;

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
@property ABRecordID addressBookRecordID;
#pragma clang diagnostic pop

- (BBSectionSubtypeParameters *)_sectionSubtypeParameters;

- (BBSectionParameters *)_sectionParameters;

@end
