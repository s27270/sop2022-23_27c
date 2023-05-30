#include <stdio.h>

int main() {
    int n;
    int suma = 0;
    int i =0;
    printf("Podaj ile liczb chesz zsumowac: ");
    scanf("%d", &n);
    for ( i = 0; i < n; i++) {
        int x;
        printf("Podaj %d liczbe: ", i + 1);
        scanf("%d", &x);
        suma += x;
    }
    printf("Suma: %d\n", suma);
    
    printf("Suma podanych liczb: %d\n", suma);
    return 0;
}