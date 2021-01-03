#include <stdio.h>

/**
 * Funcao recebe um inteiro x e um vetor de inteiros v[0..n-1], com n >= 0 
 * e devolve k no intervalo 0..n-1 tal que v[k] == x.
 * Se tal k nao existe, devolve n.
 * Conforme exercicio proposto 3.1.5.
 */
int Busca(int x, int v[], int n) {
    int k = 0;
    v[n] = x; // a "sentinela"?!
    while (v[k] != x) {
        k++; // k eh o invariante: contem a posicao do vetor a ser lido
    }
    return k;
}

/**
 * Funcao principal
 */
int main() {
    int v[] = {1, 10, 2, 0, 5, 1000, 100, -1, -10, -100, 555, 666, 777};
    int n = 13;
    int x;
    int k;

    x = 100;
    k = Busca(x, v, n);
    printf("\nPosicao de %d em v[] = %d", x, k);

    x = -100;
    k = Busca(x, v, n);
    printf("\nPosicao de %d em v[] = %d", x, k);

    x = -200;
    k = Busca(x, v, n);
    printf("\nPosicao de %d em v[] = %d", x, k);

    x = -2;
    k = Busca(x, v, n);
    printf("\nPosicao de %d em v[] = %d", x, k);

    x = 777;
    k = Busca(x, v, n);
    printf("\nPosicao de %d em v[] = %d", x, k);
}
