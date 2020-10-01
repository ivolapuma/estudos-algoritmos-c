#include <stdio.h>

/**
 * Ao receber v e n >= 1, esta funcao devolve o valor de um elemento maximo do vetor v[0..n-1]
 */
int MaximoR(int v[], int n) {
    if (n == 1) return v[0];
    int x;
    x = MaximoR(v, n-1);
    if (x > v[n-1]) return x;
    else return v[n-1];
}

/**
 * Versao iterativa da funcao MaximoR (recursiva).
 */
int MaximoR_v2(int v[], int n) {
    if (n == 1) return v[0];
    else {
        int max = v[0];
        for (int i = 1; i < n; i++) {
            if (v[i] > max) max = v[i];
        }
        return max;
    }
}

int main() {
    int v[] = {1, 2, 3, 5, 55, 8, 13, 21, 34};
    int n = 9;
    printf("maximo de v[0..n]: %d %d", MaximoR(v, n), MaximoR_v2(v, n));
}