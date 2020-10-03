#include <stdio.h>

/**
 * A função piso_log_2 recebe um inteiro N > 0 e devolve piso(log_2 N), ou seja, devolve
 * o único inteiro i tal que 2^i <= N < 2^(i+1).
 */
int piso_log_2(int N) {
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
 * 
 */
int pisoLog2R(int N, int i) {
    if (N > 1) {
        int n = N / 2;
        return pisoLog2R(n, i+1);
    } else {
        return i;
    }
}

/**
 * A função piso_log_2 recebe um inteiro N > 0 e devolve piso(log_2 N), ou seja, devolve
 * o único inteiro i tal que 2^i <= N < 2^(i+1).
 * Algoritmo recursivo.
 */
int piso_log_2_R(int N) {
    return pisoLog2R(N, 0);
}

int main() {
    printf("\n");
    int N;
    printf("Digite N: "); scanf("%d", &N);
    printf("piso(log_2 %d)   = %d\n", N, piso_log_2(N));
    printf("piso(log_2 %d) R = %d\n", N, piso_log_2_R(N));
}
