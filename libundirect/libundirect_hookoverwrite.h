#ifdef __cplusplus
extern "C" {
#endif
inline void libundirect_MSHookMessageEx_wrapper(Class _class, SEL message, IMP hook, IMP *old)
{
	libundirect_MSHookMessageEx(_class, message, hook, old);
}
#define MSHookMessageEx libundirect_MSHookMessageEx_wrapper
#ifdef __cplusplus
}
#endif