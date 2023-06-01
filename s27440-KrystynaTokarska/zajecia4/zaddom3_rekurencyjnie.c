#include <stdio.h>
#include <stdlib.h>

/* Jako argument skryptu nalezy podac numer wyrazu ciagu
fibonacciego, ktory chcemy zobaczyc. przyjmuje, ze pierwszy
i drugi wyraz ciagu sa rowne 1. */

int fibonacci(int n){
	if (n == 1 || n == 2){
		return 1;
	}
	return fibonacci(n-2) + fibonacci(n-1);
}

int main(int argc, char** argv){
	if (argc != 2){
		printf("Podano zla ilosc argumentow.\n");
		return 1;
	}
	int n = atoi(argv[1]);
	printf("%d wyraz ciagu fibonacciego to %d\n", n, fibonacci(n));
	return 0;
}
