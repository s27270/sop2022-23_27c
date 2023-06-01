#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>

int main(){
	pid_t a = fork();
	/* rodzic czeka na dziecko */
	if (a > 0){
		wait(NULL);
	}	
	printf("pid: %d\tppid: %d\n", getpid(), getppid());
	return 0;
}

