/****************************************************
* Description: fork() system call in unix/linux
* run commands:
*	gcc fork_sys.c -o <name_of_executable>
*	./<name_of_executable>
*
****************************************************/

#include <stdio.h>
#include <unistd.h>

int main(){

	fork(); // child process with different pid is created for this process.
	printf("Creates the child process with fork() call.\n");
	printf("Process ID: %d\n", getpid());
	
	/*
	For multiple fork() calls each creates a 
	copy of the current process with different PID.
	*/
	return 0;
}
