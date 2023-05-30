#include <stdio.h>

int maximum(int a, int b) {
    return a > b ? a : b;
}

int minimum(int a, int b) {
    return a < b ? a : b;
}

int suma(int a, int b) {
    return a + b;
}

int main() {
    int i,v;
    int (*functions[3])(int, int) = {maximum, minimum, suma};

    int functionId, elementCount;
    printf("Wybierz funkcje (0 - maksimum, 1 - minimum, 2 - suma): ");
    scanf("%d", &functionId);

    printf("Podaj liczbe elementow ciagu: ");
    scanf("%d", &elementCount);

    
    printf("Podaj pierwszy element: ");
    scanf("%d", &v);

    for ( i = 1; i < elementCount; i++) {
        int element;
        printf("Podaj %d element ciagu: ", i + 1);
        scanf("%d", &element);

        v = functions[functionId](v, element);
    }

    printf("Wynik: %d\n", v);

    return 0;
}