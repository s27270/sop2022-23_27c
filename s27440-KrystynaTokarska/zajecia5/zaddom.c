#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main() {
	printf("Pierwszy proces wyswietla tylko swoje pid. Kolejne wyswietlaja pid i ppid\n");
	/* poczatek drzewa*/
	printf("%d \\ \n", getpid());
	pid_t pid;
	/* tworzenie 2 procesów dzieci*/
	int i = 0;
	for (; i < 2; i++) {
		pid = fork();
		/* błąd podczas tworzenia procesu*/
		 if (pid < 0) {
			printf("Błąd podczas tworzenia procesu dziecka\n");
			return 1;
		} else if (pid == 0) {
			if (i == 0){
				sleep(1);
				printf("\t \\ %d %d \\ \n", getpid(), getppid());
			} else {
				printf("\t|\\ %d %d \\ \n", getpid(), getppid());
			}
			/* tworzenie 2 procesów dzieci dla procesu dziecka*/
			int j = 0;
			for (; j < 2; j++) {
				pid = fork();
				if (pid < 0) {
					printf("Błąd podczas tworzenia procesu dziecka\n");
					return 1;
				} else if (pid == 0) {
					if (i == 0){
						if (j == 0){
							printf("\t \t \t   \\ %d %d \n", getpid(), getppid());
						} else {
							printf("\t \t \t  |\\ %d %d \n", getpid(), getppid());
						}
					} else {
						if (j == 0){
							printf("\t| \t \t   \\ %d %d \n", getpid(), getppid());
						} else {
							printf("\t| \t \t  |\\ %d %d \n", getpid(), getppid());
						}
					}
					return 0;
				}
			}
			/* czekanie na zakonczenie pracy procesow wnukow*/
			for (j = 0; j < 2; j++) {
				wait(NULL);
			}
			return 0;
		}
	}
	/* czekanie na zakonczenie pracy procesow dzieci*/
	for (i = 0; i < 2; i++) {
		wait(NULL);
	}

	return 0;
}
