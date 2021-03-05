// Copyright (c) 2020-2021 Lars Fröder

// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:

// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.

#import <Foundation/Foundation.h>

#ifdef __cplusplus
extern "C" {
#endif

// wrapper around to MSHookMessageEx to support hooking applied methods, accessed by theos directly if libundirect_hookoverwrite.h is included
void libundirect_MSHookMessageEx(Class _class, SEL message, IMP hook, IMP *old);

// readds a direct method back to the class, requiring the pointer to it
void libundirect_rebind(void* directPtr, Class _class, SEL selector, const char* format);

// find a direct method by searching for unique memory bytes
void* libundirect_find(NSString* imageName, unsigned char* bytesToSearch, size_t byteCount, unsigned char startByte);

// selectors that failed to be added
NSArray* libundirect_failedSelectors();

#ifdef __cplusplus
}
#endif

// macros to readd setters and getters for ivars, these can't be hooked as the application still calls the original direct getters and setters
// mainly useful to get existing code to just work without having to change everything to use the ivar instead
// can only be used from xmi files
#define LIBUNDIRECT_CLASS_ADD_GETTER(classname, type, ivarname, gettername) %hook classname %new - (type)gettername { return [self valueForKey:[NSString stringWithUTF8String:#ivarname]]; } %end
#define LIBUNDIRECT_CLASS_ADD_SETTER(classname, type, ivarname, settername) %hook classname %new - (void)settername:(type)toset { [self setValue:toset forKey:[NSString stringWithUTF8String:#ivarname]]; } %end