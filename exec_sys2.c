/****************************************************
* Description: exec() system call in unix/linux
	       This is the second file associated
	       with exec_sys1.c. This will replace
	       exec_sys1.c process keeping pid same.
* run commands:
*	gcc exec_sys2.c -o <name_of_executable>
*	./<name_of_executable>
*
****************************************************/

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

	printf("running in exec_sys2 now...\n");
	printf("Process ID of exec_sys2: %d\n", getpid());
	//process id of this process is same as parent process id.
	printf("exiting exec_sys2....");
	return 0;

}
