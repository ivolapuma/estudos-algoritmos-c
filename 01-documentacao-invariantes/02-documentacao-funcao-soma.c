#include <stdio.h>

/**
 * Devolve a soma dos valores inteiros contidos num vetor v[0..n-1], onde n eh o tamanho do vetor e
 * deve ser >= 1.
 */
int soma(int n, int v[]) {
    int i, x = 0;
    for (i = 0; i < n; i++) {
        x += v[i];
    }
    return x;
}

int main() {
    int v[] = {1, 2, 3, 4};
    int s = soma(4, v);
    printf("soma = %i\n", s);
}