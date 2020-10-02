#include <stdio.h>

/**
 * Exercicio 2.2.4 do livro.
 */
int X(int n) {
    if (n == 1 || n == 2) return n;
    else return X(n-1) + n * X(n-2);
}

int main() {
    //X(4) = 10?
    // nao, X(4) = 13
    int n;
    printf("n = "); scanf("%d", &n);
    printf("X(n) = %d\n", X(n));
}