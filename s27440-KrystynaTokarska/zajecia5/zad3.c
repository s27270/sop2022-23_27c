#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>

int main(int argc, char** argv){
	pid_t a = 0;
	int liczba = 0;

	if (argc != 2){
		return 1;
	}

	liczba = atoi(argv[1]);
	a = fork();
	/* rodzic czeka na dziecko */
	if (a > 0){
		int i = 0;
		int suma = 0;
		for (; i <= liczba; i++){
			suma += i;
		}
		waitpid(a, NULL, 0);
		printf("Suma rodzica: %d\n", suma);
	} else if (a == 0){
		int i = 0;
		for (; i <= liczba; i++){
			if (i%2 == 1){
				printf("%d ",i);
			}
		}
		printf("\n");
	}
	return 0;
}

