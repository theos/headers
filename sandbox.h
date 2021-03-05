#include_next <sandbox.h>
#include <mach/message.h>

// courtesy of clang
// https://github.com/applesrc/clang/blob/bb8f644/src/projects/compiler-rt/lib/sanitizer_common/sanitizer_mac_spi.cc

enum sandbox_filter_type {
	SANDBOX_FILTER_NONE,
	SANDBOX_FILTER_PATH,
	SANDBOX_FILTER_GLOBAL_NAME,
	SANDBOX_FILTER_LOCAL_NAME,
	SANDBOX_FILTER_APPLEEVENT_DESTINATION,
	SANDBOX_FILTER_RIGHT_NAME,
	SANDBOX_FILTER_PREFERENCE_DOMAIN,
	SANDBOX_FILTER_KEXT_BUNDLE_ID,
	SANDBOX_FILTER_INFO_TYPE,
	SANDBOX_FILTER_NOTIFICATION
};

typedef struct sandbox_profile {
    char *builtin;
    unsigned char *data;
    size_t size;
} * sandbox_profile_t;

typedef struct sandbox_params {
    const char **params;
    size_t size;
    size_t available;
} * sandbox_params_t;

extern const enum sandbox_filter_type SANDBOX_CHECK_NO_REPORT;
extern const enum sandbox_filter_type SANDBOX_CHECK_CANONICAL;

int sandbox_check(pid_t pid, const char *operation, enum sandbox_filter_type type, ...);
int sandbox_check_by_audit_token(audit_token_t, const char *operation, enum sandbox_filter_type, ...);
int sandbox_container_path_for_audit_token(char *buffer, size_t bufsize);
int sandbox_container_path_for_pid(pid_t, char *buffer, size_t bufsize);
int sandbox_extension_release(int64_t extension_handle);
int sandbox_init_with_parameters(const char *profile, uint64_t flags, const char *const parameters[], char **errorbuf);
int sandbox_apply(sandbox_profile_t);
int sandbox_set_param(sandbox_params_t, const char *key, const char *value);

char *sandbox_extension_issue_file(const char *extension_class, const char *path, uint32_t flags);
char *sandbox_extension_issue_file_to_process(const char *extension_class, const char *path, uint32_t flags, audit_token_t);
char *sandbox_extension_issue_mach(const char *ext, const char *name, int reserved, uint32_t flags);
char *sandbox_extension_issue_generic(const char *extension_class, uint32_t flags);
