#include "kernel/types.h"
#include "user/user.h"

int
main(int argc, char* argv[])
{
    if(argc != 2)
    {
        printf("no argument or too many arguments.\n");
        exit(1);
    }
    // printf("[sleep %d] started\n", getpid());
    sleep(atoi(argv[1]));
    // printf("[sleep %d] finished\n", getpid());
    exit(0);
}