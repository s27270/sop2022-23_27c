#include <stdio.h>
#include <stdlib.h>

struct wezel{
	int dane;
	struct wezel* poprzedni;
	struct wezel* nastepny
};

void drukuj_liste(struct wezel* poczatek){
	printf("Elementy listy od poczatku: \n");
	while (poczatek != NULL){
		printf("%d ", poczatek->dane);
		poczatek = poczatek->nastepny;
	}
	printf("\n");
}

void dodaj_przod(struct wezel **poczatek, int wartosc){
	struct wezel *nowy_wezel = malloc(sizeof(struct wezel));
	if (nowy_wezel == NULL){
		printf("Nie udalo sie zarezerwowac pamieci na nowy element\n");
	}
	nowy_wezel->dane = wartosc;
	nowy_wezel->poprzedni = NULL;
	nowy_wezel->nastepny = *poczatek;

	if (*poczatek != NULL){
		(*poczatek)->poprzedni = nowy_wezel;
	}
	*poczatek = nowy_wezel;
}

void dodaj_tyl(struct wezel **poczatek, int wartosc){
	struct wezel *nowy_wezel = malloc(sizeof(struct wezel));
	if (nowy_wezel == NULL){
		printf("Nie udalo zarezerwowac pamieci na nowy element\n");
	}
	nowy_wezel->dane = wartosc;
	nowy_wezel->nastepny = NULL;

	if(*poczatek == NULL){
		*poczatek = nowy_wezel;
		nowy_wezel->poprzedni = NULL;
		return;
	}

	struct wezel *ostatni = *poczatek;
	while (ostatni->nastepny != NULL){
		ostatni = ostatni->nastepny;
	}
	ostatni->nastepny = nowy_wezel;
	nowy_wezel->poprzedni = ostatni;
}

void usun_przod(struct wezel **poczatek){
	if (*poczatek == NULL){
		printf("Lista jest pusta.\n");
		return;
	}
	struct wezel *tmp = *poczatek;
	*poczatek = (*poczatek)->nastepny;
	if (*poczatek != NULL){
		(*poczatek)->poprzedni = NULL;
	}
	free(tmp);
}

void usun_tyl(struct wezel **poczatek){
	if (*poczatek == NULL){
		printf("Lista jest pusta.\n");
		return;
	}
/*	if((*poczatek)->nastepny == NULL){
		free(*poczatek);
		*poczatek = NULL;
		return;
	}*/
	struct wezel *tmp = *poczatek;
	while(tmp->nastepny != NULL){
		tmp = tmp->nastepny;
	}
	if (tmp->poprzedni != NULL){
		tmp->poprzedni->nastepny = NULL;
	} else {
		*poczatek = NULL;
	}
	free(tmp);
}

int main(){
	struct wezel *lista = NULL;
	dodaj_przod(&lista,2);
	dodaj_tyl(&lista,5);
	dodaj_przod(&lista,10);
	dodaj_tyl(&lista,1);
	drukuj_liste(lista);
	printf("Usuwam jeden element z przodu i jeden z tylu\n");
	usun_przod(&lista);
	usun_tyl(&lista);
	drukuj_liste(lista);
	return 0;
}
