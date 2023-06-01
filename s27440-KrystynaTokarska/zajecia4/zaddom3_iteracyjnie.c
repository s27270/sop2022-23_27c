#include <stdio.h>
#include <stdlib.h>

/* Jako argument skryptu nalezy podac numer wyrazu ciagu
fibonacciego, ktory chcemy zobaczyc. przyjmuje, ze pierwszy
i drugi wyraz ciagu sa rowne 1. */

int main(int argc, char** argv){
	if (argc != 2){
		printf("Podano zla ilosc argumentow.\n");
		return 1;
	}
	int n = atoi(argv[1]);
	if (n == 1 || n == 2){
		printf("%d wyraz ciagu fibonacciego to 1\n", n);
		return 0;
	}
	int i = 0;
	int a1 = 1;
	int a2 = 1;
	int wyraz = 0;
	for (;i < n-2; i++){
		wyraz = a1 + a2;
		a1 = a2;
		a2 = wyraz;
	}
	printf("%d wyraz ciagu fibonacciego to %d\n", n, wyraz);
	return 0;
}

