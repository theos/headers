NSBundle *globalBundle;

#define L18N(key) [globalBundle localizedStringForKey:key value:key table:@"libhbangprefs"]
#define URL_ENCODE(string) [(NSString *)CFURLCreateStringByAddingPercentEscapes(kCFAllocatorDefault, (CFStringRef)(string), NULL, CFSTR(":/=,!$& '()*+;[]@#?"), kCFStringEncodingUTF8) autorelease]
