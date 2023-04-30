#import <Contacts/CNContact.h>

@class CNEmailAddressContactPredicate, CNPhoneNumberContactPredicate, CNPhoneNumber;

@interface CNContact (Private)

+ (CNEmailAddressContactPredicate *)predicateForContactMatchingEmailAddress:(NSString *)emailAddress;
+ (CNPhoneNumberContactPredicate *)predicateForContactMatchingPhoneNumber:(CNPhoneNumber *)phoneNumber;

@end
