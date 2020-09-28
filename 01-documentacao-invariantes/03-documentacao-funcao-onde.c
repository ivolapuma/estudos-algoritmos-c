#include <stdio.h>

/**
 * Dado um inteiro x e um vetor de inteiros v[0..n-1], onde n eh >= 1 e deve conter o tamanho
 * do vetor v, retorna qual a posicao de x no vetor v.
 */
int onde(int x, int v[], int n) {
    int j = 0;
    while (j < n && v[j] != x) {
        j += 1;
    }
    return j;
}

int main() {
    int v[] = {1, 2, 5, 10, 50, 100, 200};
    int posicao = onde(10, v, 7);
    printf("posicao = %i\n", posicao);
}