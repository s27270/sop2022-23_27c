#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>

int main(){
	int ilosc_procesow = 10;
	int i = 0;
	pid_t parent = getpid();
	for (; i < ilosc_procesow; i++){
		pid_t a = 0;
		a = fork();
		/* rodzic czeka na dziecko */
		if (a == 0){
			printf("pid: %d\tppid: %d\n", getpid(), getppid());
			sleep(2);
			break;
		}
	}
	if (parent == getpid()){
		waitpid(-1, NULL, 0);
		printf("%d Rodzic zakonczyl czekanie na dzieci\n", getpid());
	}
	return 0;
}

