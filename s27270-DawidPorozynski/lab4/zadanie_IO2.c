#include <stdio.h>

int main() {
    int byteCount = 0;
    int byte;
 

    FILE* file = fopen("zadanie1.c", "rb"); 
    if (file == NULL) {
        
        printf("Nie udalo sie otworzyc pliku.\n");
        return 1;
    }

    printf("Loading file: cwiczenie1.c\n");
    
    while ((byte = fgetc(file)) != EOF) {
        if (byteCount % 16 == 0) {
            printf("%08x: ", byteCount); 
        }
        printf("%02x ", byte);
        byteCount++;
        
        if (byteCount % 4 == 0) {
            printf(" "); 
        }
        if (byteCount % 16 == 0) {
            printf("\n"); 
        }
    }

    fclose(file);
    return 0;
}
