#include<stdio.h>

/* czesc 2 (wyswietlanie w terminalu) robilam na
zajeciach*/

int main(){
	int a;
	int wynik = 0;
	do{
		a=0;
		printf("Podaj liczbe: ");
		scanf("%d",&a);
		wynik += a;
	}while(a != 0);
	printf("Wynik to: %d\n",wynik);
	return wynik;
}
