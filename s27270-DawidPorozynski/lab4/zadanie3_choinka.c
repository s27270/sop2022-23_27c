#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int j=0,i=0;
    int height;
    if (argc < 2) {
        fprintf(stderr, "Wysokosc musi byc wieksza od zera.", argv[0]);
        return 1;
    }

    height = atoi(argv[1]);

    for ( i = 0; i < height; i++) {
        for ( j = 0; j < height - i - 1; j++) {
            printf(" ");
        }
        for ( j = 0; j < 2 * i + 1; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
