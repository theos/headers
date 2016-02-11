@class IMPerson;

@interface IMHandle : NSObject

@property (nonatomic, retain, readonly) NSString *ID;

@property (nonatomic, retain) IMPerson *person;

@property (nonatomic, retain) NSString *_displayNameWithAbbreviation;

@end
