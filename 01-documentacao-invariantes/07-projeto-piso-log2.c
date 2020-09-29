#include <stdio.h>
#include <math.h>

/**
 * O piso de um numero x eh o unico inteiro i tal que i <= x < i+1.
 * Escreva uma funcao lg que receba um inteiro positivo n e calcule piso(log_2 n).
 */


/**
 * A função lg recebe um inteiro N > 0 e devolve piso(log_2 N), ou seja, devolve
 * o único inteiro i tal que 2^i <= N < 2^(i+1).
 */
int lg(int N) {
    int i, n;
    i = 0;
    n = N;
    while (n > 1) {
        // n == N / 2^i
        n = n / 2;
        i++;
    }
    return i;
}

/**
 * A funcao lg1 faz a mesma coisa que lg, mas com uso de for em vez de while.
 */
int lg1(int N) {
    int i, n;
    i = 0;
    for (n = N; n > 1; n = n/2) {
        i++;
    }
    return i;
}

/**
 * A funcao lg2 faz a mesma coisa que lg, mas com algoritmo diferente.
 * No loop, a invariante n eh igual 2^i. Quando n > N, i-1 sera o piso(log_2 N).
 */
int lg2(int N) {
    int i, n;
    i = 0;
    n = 1;
    while (n <= N) {
        n = 2 * n;
        i++;
    }
    return (i - 1);
}

/**
 * 
 */
int lg3(int N) {
    int i, n;
    i = 0;
    for (n = 2; n <= N; n = 2*n) {
        i++;
    }
    return i;
}

/**
 * A funcao lg4 retorna log_2 N quando eh inteiro, caso contrario, retorna piso(log_2 N)+1.
 */
int lg4(int N) {
    int i, n;
    i = 0;
    n = 1;
    while (n < N) {
        n = 2*n;
        i++;
    }
    return i;
}

/**
 * A funcao recebe numeros positivos N e k.
 * Devolve 1, se k eh igual a piso(log_2 N).
 * E devolve 0, caso contrario.
 */
int verifica_lg(int N, int k) {
    double log2N;
    // para obter o logaritmo na base 2, basta dividir log_e N / log_e 2 (e = numero de Euller, log_e logaritmo natural)
    log2N = log(N) / log(2); 
    if (k <= log2N && log2N < (k+1)) return 1;
    else return 0;
}

//#define B 2
//#define K 15

int main() {
    int B, K, i, N;
    printf("B = "); scanf("%d", &B);
    printf("K = "); scanf("%d", &K);
    N = 1;
    printf("        N  lg(N)  lg1(N)  lg2(N)  lg3(N)  lg4(N)  verifica_lg(N)\n\n");
    for (i = 1; i <= K; i++) {
        N = B * N;
        printf("%9d  %5d  %6d  %6d  %6d  %6d  %1d\n", N, lg(N), lg1(N), lg2(N), lg3(N), lg4(N), verifica_lg(N, lg(N)));
    }
}