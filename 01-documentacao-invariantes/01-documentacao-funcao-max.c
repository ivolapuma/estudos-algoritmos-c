#include <stdio.h>

/**
 * A funcao abaixo recebe um inteiro n >= 1 e um vetor v e devolve o valor de um elemento maximo
 * de v[0..n-1].
 */
int Max(int v[], int n) {
    int j;
    int x = v[0];
    for (j = 1; j < n; j++) {
        if (x < v[j]) x = v[j];
    }
    return x;
}

int main() {
    int v[] = {0, 1, 5, 2, 3, 4};
    int max = Max(v, 6);
    printf("max=%i\n", max);
}