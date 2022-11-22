#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
int main()
{
    int id, childid;
    id = getpid();
    if ((childid = fork()) > 0)
    {
        printf("\ni am in the parent process % d ", id);
        printf("\ni am in the parent process % d ", getpid());
        printf("\ni am in the parent process % d\n ", getppid());
    }
    else
    {
        printf("\ni am in child process % d ", id);
        printf("\ni am in the child process % d ", getpid());
        printf("\ni am in the child process % d ", getppid());
    }
}
