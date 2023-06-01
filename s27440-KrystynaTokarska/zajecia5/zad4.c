#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>

int main(){
	int ilosc_procesow = 10;
	int i = 0;
	for (; i < ilosc_procesow; i++){		
		pid_t a = 0;
		printf("pid: %d\tppid: %d\n", getpid(), getppid());
		a = fork();
		/* rodzic czeka na dziecko */
		if (a > 0){
			wait(NULL);
			break;
		}	
	}
	return 0;
}

