/*Write C program to implement UNIX ystem calls and file management.*/
//---------------------------fork---------------------
#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
int main()
{
	int id,childid;
	id=getpid();
	if((childid=fork())>0)
	{
		printf("\n i am in the parent process %d",id);
		printf("\n i am in the parent process %d",getpid());
		printf("\n i am in the parent process %d\n",getppid());
	}
	else{
		printf("\n i am in the child process %d",id);
		printf("\n i am in the child process %d",getpid());
		printf("\n i am in the child process %d\n",getppid());
	}
}