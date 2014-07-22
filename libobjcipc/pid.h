#include <unistd.h>
#include <sys/sysctl.h>
#include <pwd.h>

static inline int pidForProcess(NSString *name) {
	
    // Thanks to http://stackoverflow.com/questions/6610705/how-to-get-process-id-in-iphone-or-ipad
    // Faster than ps,grep,etc
    
    int pid = 0;
    
    int mib[4] = {CTL_KERN, KERN_PROC, KERN_PROC_ALL, 0};
    size_t miblen = 4;
    
    size_t size;
    int st = sysctl(mib, miblen, NULL, &size, NULL, 0);
    
    struct kinfo_proc * process = NULL;
    struct kinfo_proc * newprocess = NULL;
    
    do {
        
        size += size / 10;
        newprocess = realloc(process, size);
        
        if (!newprocess)
        {
            if (process){
                free(process);
            }
            return 0;
        }
        
        process = newprocess;
        st = sysctl(mib, miblen, process, &size, NULL, 0);
        
    } while (st == -1 && errno == ENOMEM);
    
    if (st == 0)
    {
        
        if (size % sizeof(struct kinfo_proc) == 0)
        {
            int nprocess = size / sizeof(struct kinfo_proc);
            
            if (nprocess)
            {
                for (int i = nprocess - 1; i >= 0; i--)
                {
                    NSString * processName = [[NSString alloc] initWithFormat:@"%s", process[i].kp_proc.p_comm];
                    
                    if ([processName rangeOfString:name].location != NSNotFound)
                    {
                        pid = process[i].kp_proc.p_pid;
                    }
                }
                
                free(process);
            }
        }
    }
    
    return pid;
}