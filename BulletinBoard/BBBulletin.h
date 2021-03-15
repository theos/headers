#import <AddressBook/AddressBook.h>

@class BBAction, BBSectionIcon, BBSectionParameters, BBSectionSubtypeParameters;

typedef NS_ENUM(NSUInteger, BBBulletinAccessoryStyle) {
	BBBulletinAccessoryStyleNone,
	BBBulletinAccessoryStyleVIP = 4
};

typedef NS_ENUM(NSInteger, BBAttachmentMetadataType) {
	BBAttachmentMetadataTypeImage = 1
};

API_AVAILABLE(ios(5.0))  @interface BBBulletin : NSObject

@property (nonatomic, copy) NSString *bulletinID;
@property (nonatomic, copy) NSString *sectionID;
@property (nonatomic, copy) NSString *parentSectionID;
@property (nonatomic, copy) NSSet *subsectionIDs;
@property (nonatomic, copy) NSString *publisherBulletinID;
@property (nonatomic, copy) NSString *recordID;
@property (nonatomic, copy) NSString *categoryID;
@property BOOL showsUnreadIndicator;

@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, retain) BBContent *content;
@property (nonatomic, copy) NSDate *date;
@property (nonatomic, copy) NSDate *lastInterruptDate;
@property (nonatomic, copy) NSString *unlockActionLabelOverride;
@property (nonatomic, copy) NSString *section;

@property (nonatomic, copy) BBAction *defaultAction;
@property (nonatomic, copy, readonly) NSArray *supplementaryActions API_AVAILABLE(ios(8.0));
@property (nonatomic) BBBulletinAccessoryStyle accessoryStyle NS_DEPRECATED_IOS(6_0, 7_0);

@property (nonatomic, retain) BBSectionIcon *icon;

@property (nonatomic, retain) NSDictionary *context;

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
@property ABRecordID addressBookRecordID NS_DEPRECATED_IOS(7_0, 13_0);
#pragma clang diagnostic pop

@property BOOL turnsOnDisplay;

@property (nonatomic) BBAttachmentMetadataType primaryAttachmentType;

- (BBSectionSubtypeParameters *)_sectionSubtypeParameters;

- (BBSectionParameters *)_sectionParameters;

@end
