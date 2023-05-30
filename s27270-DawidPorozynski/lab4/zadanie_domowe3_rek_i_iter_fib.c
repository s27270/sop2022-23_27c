#include <stdio.h>


int fibonacciRek(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacciRek(n - 1) + fibonacciRek(n - 2);
}


int fibonacciIt(int n) {
    int fib1 = 0, fib2 = 1, i, fibN;
    if (n == 0) {
        return fib1;
    }
    for (i = 2; i <= n; i++) {
        fibN = fib1 + fib2;
        fib1 = fib2;
        fib2 = fibN;
    }
    return fib2;
}

int main() {

    int i=0;
    int n = 10;  
    printf("n = %d:\n", n);
    printf("Rekurencja:\n");
    for ( i = 0; i <= n; i++) {
        printf("%d ", fibonacciRek(i));
    }
    printf("\niteracja:\n");
    for ( i = 0; i <= n; i++) {
        
        printf("%d ", fibonacciIt(i));
    }
    printf("\n");
    return 0;
}