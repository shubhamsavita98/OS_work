/****************************************************
* Description: exec() system call in unix/linux
	       current process is replaced by new 
	       process and pid remains same as
	       current process.
* run commands:
*	gcc exec_sys1.c -o <name_of_executable1>
	gcc exec_sys2.c -o <name_of_executable2>

*	./<name_of_executable1>
*
****************************************************/


#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>


int main(int argc, char *argv[]){

	printf("Process ID of exec_sys1: %d\n", getpid());
	char *args[] = {"array","of","strings","double","pointer", NULL};
	execv("./exec2", args); 
	/*replace the content of one process 
	with another process using exec() system call.*/
	printf("exiting exec_sys1....\n");
	return 0;

}
