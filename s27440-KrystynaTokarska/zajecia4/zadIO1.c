#include<stdio.h>
#include<stdlib.h>

int main(int argc, char* argv[]){
	FILE *plik;
	if (argc == 1){
		printf("Podaj ile liczb bedziesz wprowadzal: \n");
		int n = 0;
		int nZapisane = 0;
		scanf("%d", &n);
		int* liczby = (int*) calloc(n, sizeof(int));
		while (n-- > 0){
			int liczba = 0;
			scanf("%d", &liczba);
			if (liczby != NULL){
				liczby[n] = liczba;
			nZapisane++;
			}
		}

                n = 0;
                printf("Liczby w odwrotnej kolejnosci: \n");
                while (n < nZapisane){
                        printf("%d\n", liczby[n++]);
                }

	} else if (argc == 2){
		plik = fopen(argv[1],"r");
		if (plik == NULL){
			printf("nie udalo sie otworzyc pliku\n");
			return 1;
		}

		int linieZapisane = 0;
		int linie = 0;
		fscanf(plik, "%d\r\n", &linie);
		int* liczby = (int*) calloc(linie, sizeof(int));
		while (linie-- > 0){
			int liczba = 0;
			fscanf(plik, "%d\r\n", &liczba);
			if (liczby != NULL){
				liczby[linie] = liczba;
				linieZapisane++;
			}
		}

		linie = 0;
		printf("Liczby w odwrotnej kolejnosci: \n");
		while (linie < linieZapisane){
			printf("%d\n", liczby[linie++]);
		}
		fclose(plik);
		if (liczby != NULL){
			free(liczby);
		}
	} else {
		printf("Podano za duzo argumentow\n");
	}
	return 0;
}
