#include <stdio.h>
#include <stdlib.h>

/**
 * Recebe x, v e n >= 0 e devolve k, tal que 0 <= k < n e v[k] == x.
 * Se tal k nao existe, devolve -1.
 * Algoritmo recursivo.
 */
int BuscaR(int x, int v[], int n) {
    //printf("\nx=%d n=%d", x, n);
    if (n == 0) return -1;
    if (x == v[n-1]) return n-1;
    return BuscaR(x, v, n-1);
}

/**
 * Recebe x, v e n >= 0 e devolve k, tal que 0 <= k < n e v[k] == x.
 * Se tal k nao existe, devolve -1.
 */
int Busca(int x, int v[], int n) {
    int k = n - 1;
    while (k >= 0 && v[k] != x) {
        k--;
    }
    return k;
}

int main() {
    int n;
    printf("\nDigite o numero (n) de elementos do vetor (1 a 100) : "); scanf("%d", &n);

    // gera vetor com valores aleatorios
    int v[100];
    for (int i = 0; i < n; i++) {
        v[i] = rand();
    }

    //printf("\nn=%d", n);
    //for (int i = 0; i < n; i++) {
    //    printf("\nv[%d]=%d", i, v[i]);
    //}

    printf("\nv[]={");
    for (int i = 0; i < n; i++) {
        if (i > 0) printf(",");
        printf("%d", v[i]);
    }
    printf("}");

    printf("\n");

    int x;
    //x = 100;
    //printf("\nPosicao de %d em v[]: BuscaR: %d | Busca: %d", x, BuscaR(x, v, n), Busca(x, v, n));
    //x = 11478;
    //printf("\nPosicao de %d em v[]: BuscaR: %d | Busca: %d", x, BuscaR(x, v, n), Busca(x, v, n));
    //x = -1;
    //printf("\nPosicao de %d em v[]: BuscaR: %d | Busca: %d", x, BuscaR(x, v, n), Busca(x, v, n));
    printf("\nDigite o numero (x) a ser buscado em v[]: "); scanf("%d", &x);

    printf("\nPosicao de %d em v[]: BuscaR: %d | Busca: %d", x, BuscaR(x, v, n), Busca(x, v, n));

    printf("\n");

}