#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]) {
	if (argc != 2){
		printf("Podano zla ilosc parametrow\n");
		return 1;
	}

	int n = atoi(argv[1]);
	int i = 0;
	int j = 0;
	for (i; i < n; i++){
		for (j; j < 2*n - 1; j++){
			if (j >= n - 1 - i && j <= n - 1 + i){
				printf("*");
			} else {
				printf(" ");
			}
		}
		j = 0;
		printf("\n");
	}
	return 0;
}
