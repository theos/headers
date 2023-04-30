#import <Contacts/CNContactFormatter.h>

@interface CNContactFormatter (Private)

- (NSString *)shortNameForContact:(CNContact *)contact attributes:(NSDictionary *)attributes;

@end
