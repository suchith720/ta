#include <stdio.h>
#include <sys/resource.h>

int main() {
    struct rlimit lim;
    int flag;
    flag =  getrlimit(RLIMIT_STACK,&lim);

    if( flag == 0) printf("stack size: %ld\n", lim.rlim_cur);
    else fprintf(stderr,"Error in function\n");

    flag =  getrlimit(RLIMIT_NPROC,&lim);
    if( flag == 0 ) printf("process limit: %ld\n", lim.rlim_cur);
    else fprintf(stderr,"Error in function\n");
    
    flag =  getrlimit(RLIMIT_NOFILE,&lim);
    if( flag == 0) printf("max file descriptors: %ld\n", lim.rlim_cur);
    else fprintf(stderr,"Error in function\n");

    return 0;
}
