#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

int main(int argc, char* argv[]) {
	if (argc != 2){
		printf("Trzeba podac dokladnie 1 argument\n");
		return 1;
	}

	FILE *plik = fopen(argv[1], "r");
	if (plik == NULL){
		printf("Nie mozna odczytac pliku.\n");
	}

	unsigned char buffer[16];
	size_t count = 0;
	size_t address = 0;

	while ((count = fread(buffer, 1, sizeof(buffer), plik)) > 0) {
		printf("%08X ", (unsigned int)address);
		size_t i = 0;
		for (i; i < count; ++i) {
			printf("%02X ", buffer[i]);
		}
		for (i = count; i < sizeof(buffer); ++i) {
			printf("   ");
		}
		printf("| ");
		for (i = 0; i < count; ++i) {
			if (buffer[i] >= 32 && buffer[i] < 127) {
				printf("%c", buffer[i]);
			} else {
				printf(".");
			}
		}
		printf("\n");
		address += count;
	}

    fclose(plik);
    return 0;
}
