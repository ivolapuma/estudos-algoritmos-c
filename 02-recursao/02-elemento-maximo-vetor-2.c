#include <stdio.h>

/**
 * Devolve o elemento maximo de v[0..n-1].
 */
int maximoR(int v[], int n) {
    printf("*");
    int x;
    if (n == 1) return v[0];
    // trecho abaixo eh desnecessario para execucao do algoritmo
    //if (n == 2) {
    //    if (v[0] < v[1]) return v[1];
    //    else return v[0];
    //}
    x = maximoR(v, n-1);
    if (x < v[n-1]) return v[n-1];
    else return x;
}

int maximoR2(int v[], int n) {
    printf("*");
    if (n == 1) return v[0];
    if (maximoR2(v, n-1) < v[n-1]) return v[n-1];
    else return maximoR2(v, n-1);
    // duas chamadas recursivas na mesma funcao torna o algoritmo mais complexo
}

int main() {
    int v[] = {1, 2, 3, 5, 55, 8, 13, 21, 34};
    int n = 9;
    printf("\nmaximoR de v[0..n]: %d\n", maximoR(v, n));
    printf("\nmaximoR2 de v[0..n]: %d\n", maximoR2(v, n));
}