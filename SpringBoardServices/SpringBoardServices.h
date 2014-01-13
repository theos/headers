#ifdef __cplusplus
extern "C" {
#endif

mach_port_t SBSSpringBoardServerPort();

void SBFrontmostApplicationDisplayIdentifier(mach_port_t port, char *result);
void SBGetScreenLockStatus(mach_port_t port, BOOL *lockStatus, BOOL *passcodeEnabled);
void SBSUndimScreen();

#ifdef __cplusplus
}
#endif
