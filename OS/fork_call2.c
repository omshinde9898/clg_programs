#include <stdio.h>
#include <unistd.h>


int main()
{
    int i, pid;
    pid = fork();
    if (pid == -1)
    {
        printf("fork failed");
        exit(0);
    }
    else if (pid == 0)
    {
        printf("\n Child process starts");
        for (i = 0; i & lt; 5; i++)
        {
            printf("\n Child process % d is called ", i);
        }
        printf("\n Child process ends ");
    }
    else
    {
        wait(0);
        printf("\n Parent process ends ");
    }
    exit(0);
}
