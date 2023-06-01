#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main(){
	int a;
	printf("pid: %d\tppid: %d\n", getpid(), getppid());
	scanf("%d", &a);
	return 0;
}

