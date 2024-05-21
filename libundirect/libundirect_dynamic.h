// Copyright (c) 2020-2022 Lars Fröder

// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:

// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.

#import <objc/objc.h>
#import <unistd.h>
#import <dlfcn.h>
#import <Foundation/NSString.h>
#import <substrate.h>
#import <libhooker/libhooker.h>
#import <rootless.h>
#define LIBUNDIRECT_PATH ROOT_PATH("/usr/lib/libundirect.dylib")

#ifdef __cplusplus
extern "C" {
#endif

// dynamic header for when you don't want to link against libundirect
// for documentation, check out the non-dynamic header

typedef enum 
{ 
    OPTION_DO_NOT_SEEK_BACK = 1 << 0
} libundirect_find_options_t;

__attribute__((unused))
static void libundirect_MSHookMessageEx(Class _class, SEL message, IMP hook, IMP *old)
{
	static void (*impl_libundirect_MSHookMessageEx)(Class, SEL, IMP, IMP *);
	if(!impl_libundirect_MSHookMessageEx)
	{
		void* handle = dlopen(LIBUNDIRECT_PATH, RTLD_LAZY);
		impl_libundirect_MSHookMessageEx = (void (*)(Class, SEL, IMP, IMP *))dlsym(handle, "libundirect_MSHookMessageEx");
	}
	if(impl_libundirect_MSHookMessageEx)
	{
		impl_libundirect_MSHookMessageEx(_class, message, hook, old);
	}
	else
	{
		MSHookMessageEx(_class, message, hook, old);
	}
}

__attribute__((unused))
static void libundirect_rebind(void* directPtr, Class _class, SEL selector, const char* format)
{
	static void (*impl_libundirect_rebind)(void*, Class, SEL, const char*);
	if(!impl_libundirect_rebind)
	{
		void* handle = dlopen(LIBUNDIRECT_PATH, RTLD_LAZY);
		impl_libundirect_rebind = (void (*)(void*, Class, SEL, const char*))dlsym(handle, "libundirect_rebind");
	}
	if(impl_libundirect_rebind)
	{
		impl_libundirect_rebind(directPtr, _class, selector, format);
	}
}

__attribute__((unused))
static void* libundirect_seek_back(void* startPtr, unsigned char toByte, unsigned int maxSearch)
{
	static void* (*impl_libundirect_seek_back)(void*, unsigned char, unsigned int);
	if(!impl_libundirect_seek_back)
	{
		void* handle = dlopen(LIBUNDIRECT_PATH, RTLD_LAZY);
		impl_libundirect_seek_back = (void* (*)(void*, unsigned char, unsigned int))dlsym(handle, "libundirect_seek_back");
	}
	if(impl_libundirect_seek_back)
	{
		return impl_libundirect_seek_back(startPtr, toByte, maxSearch);
	}
	return NULL;
}

__attribute__((unused))
static void* libundirect_find_with_options_and_mask(NSString* imageName, unsigned char* bytesToSearch, unsigned char* byteMask, size_t byteCount, unsigned char startByte, unsigned int seekbackMax, libundirect_find_options_t options)
{
	static void* (*impl_libundirect_find_with_options_and_mask)(NSString*, unsigned char*, unsigned char*, size_t, unsigned char, unsigned int, libundirect_find_options_t);
	if(!impl_libundirect_find_with_options_and_mask)
	{
		void* handle = dlopen(LIBUNDIRECT_PATH, RTLD_LAZY);
		impl_libundirect_find_with_options_and_mask = (void* (*)(NSString*, unsigned char*, unsigned char*, size_t, unsigned char, unsigned int, libundirect_find_options_t))dlsym(handle, "libundirect_find_with_options_and_mask");
	}
	if(impl_libundirect_find_with_options_and_mask)
	{
		return impl_libundirect_find_with_options_and_mask(imageName, bytesToSearch, byteMask, byteCount, startByte, seekbackMax, options);
	}
	return NULL;
}

__attribute__((unused))
static void* libundirect_find_with_options(NSString* imageName, unsigned char* bytesToSearch, size_t byteCount, unsigned char startByte, unsigned int seekbackMax, libundirect_find_options_t options)
{
	static void* (*impl_libundirect_find_with_options)(NSString*, unsigned char*, size_t, unsigned char, unsigned int, libundirect_find_options_t);
	if(!impl_libundirect_find_with_options)
	{
		void* handle = dlopen(LIBUNDIRECT_PATH, RTLD_LAZY);
		impl_libundirect_find_with_options = (void* (*)(NSString*, unsigned char*, size_t, unsigned char, unsigned int, libundirect_find_options_t))dlsym(handle, "libundirect_find_with_options");
	}
	if(impl_libundirect_find_with_options)
	{
		return impl_libundirect_find_with_options(imageName, bytesToSearch, byteCount, startByte, seekbackMax, options);
	}
	return NULL;
}

__attribute__((unused))
static void* libundirect_find(NSString* imageName, unsigned char* bytesToSearch, size_t byteCount, unsigned char startByte)
{
	static void* (*impl_libundirect_find)(NSString*, unsigned char*, size_t, unsigned char);
	if(!impl_libundirect_find)
	{
		void* handle = dlopen(LIBUNDIRECT_PATH, RTLD_LAZY);
		impl_libundirect_find = (void* (*)(NSString*, unsigned char*, size_t, unsigned char))dlsym(handle, "libundirect_find");
	}
	if(impl_libundirect_find)
	{
		return impl_libundirect_find(imageName, bytesToSearch, byteCount, startByte);
	}
	return NULL;
}

__attribute__((unused))
static void* libundirect_dsc_find(NSString* imageName, Class _class, SEL selector)
{
	static void* (*impl_libundirect_dsc_find)(NSString*, Class, SEL);
	if(!impl_libundirect_dsc_find)
	{
		void* handle = dlopen(LIBUNDIRECT_PATH, RTLD_LAZY);
		impl_libundirect_dsc_find = (void* (*)(NSString*, Class, SEL))dlsym(handle, "libundirect_dsc_find");
	}
	if(impl_libundirect_dsc_find)
	{
		return impl_libundirect_dsc_find(imageName, _class, selector);
	}
	return NULL;
}

__attribute__((unused))
static void libundirect_dsc_rebind(NSString* imageName, Class _class, SEL selector, const char* format)
{
	static void (*impl_libundirect_dsc_rebind)(NSString*, Class, SEL, const char*);
	if(!impl_libundirect_dsc_rebind)
	{
		void* handle = dlopen(LIBUNDIRECT_PATH, RTLD_LAZY);
		impl_libundirect_dsc_rebind = (void (*)(NSString*, Class, SEL, const char*))dlsym(handle, "libundirect_dsc_rebind");
	}
	if(impl_libundirect_dsc_rebind)
	{
		return impl_libundirect_dsc_rebind(imageName, _class, selector, format);
	}
}

__attribute__((unused))
static NSArray* libundirect_failedSelectors()
{
	static NSArray* (*impl_libundirect_failedSelectors)();
	if(!impl_libundirect_failedSelectors)
	{
		void* handle = dlopen(LIBUNDIRECT_PATH, RTLD_LAZY);
		impl_libundirect_failedSelectors = (NSArray* (*)(void))dlsym(handle, "libundirect_failedSelectors");
	}
	if(impl_libundirect_failedSelectors)
	{
		return impl_libundirect_failedSelectors();
	}
	return (NSArray*)nil;
}

__attribute__((unused))
static void libundirect_startBatchHooks(void)
{
	static void (*impl_libundirect_startBatchHooks)();
	if(!impl_libundirect_startBatchHooks)
	{
		void* handle = dlopen(LIBUNDIRECT_PATH, RTLD_LAZY);
		impl_libundirect_startBatchHooks = (void (*)(void))dlsym(handle, "libundirect_startBatchHooks");
	}
	if(impl_libundirect_startBatchHooks)
	{
		impl_libundirect_startBatchHooks();
	}
}

__attribute__((unused))
static void libundirect_applyBatchHooksAndAdditional(const struct LHFunctionHook* additionalHooks, NSUInteger additionalCount)
{
	static void (*impl_libundirect_applyBatchHooksAndAdditional)(const struct LHFunctionHook*, NSUInteger);
	if(!impl_libundirect_applyBatchHooksAndAdditional)
	{
		void* handle = dlopen(LIBUNDIRECT_PATH, RTLD_LAZY);
		impl_libundirect_applyBatchHooksAndAdditional = (void (*)(const struct LHFunctionHook*, NSUInteger))dlsym(handle, "libundirect_applyBatchHooksAndAdditional");
	}
	if(impl_libundirect_applyBatchHooksAndAdditional)
	{
		impl_libundirect_applyBatchHooksAndAdditional(additionalHooks, additionalCount);
	}
}

__attribute__((unused))
static void libundirect_applyBatchHooks()
{
	static void (*impl_libundirect_applyBatchHooks)();
	if(!impl_libundirect_applyBatchHooks)
	{
		void* handle = dlopen(LIBUNDIRECT_PATH, RTLD_LAZY);
		impl_libundirect_applyBatchHooks = (void (*)(void))dlsym(handle, "libundirect_failedSelectors");
	}
	if(impl_libundirect_applyBatchHooks)
	{
		return impl_libundirect_applyBatchHooks();
	}
}

#ifdef __cplusplus
}
#endif

// macros to readd setters and getters for ivars, these can't be hooked as the application still calls the original direct getters and setters
// mainly useful to get existing code to just work without having to change everything to use the ivar instead
// can only be used from xmi files
#define LIBUNDIRECT_CLASS_ADD_GETTER(classname, type, ivarname, gettername) %hook classname %new - (type)gettername { return [self valueForKey:[NSString stringWithUTF8String:#ivarname]]; } %end
#define LIBUNDIRECT_CLASS_ADD_SETTER(classname, type, ivarname, settername) %hook classname %new - (void)settername:(type)toset { [self setValue:toset forKey:[NSString stringWithUTF8String:#ivarname]]; } %end