#include <stdio.h>

/**
 * Recebe: 
 * k (base da potencia),
 * n (expoente) e
 * kt (valor transitorio da potencia) que deve ser informado com mesmo valor de k.
 * Retorna k^n, usando recursividade.
 */
int potenciaR(int k, int n, int kt) {
    if (n == 0) return 1;
    if (n == 1) return kt;
    return potenciaR(k, n-1, kt*k);
    // a funcao executa aproximadamente n-1 vezes
}

/**
 * Recebe os inteiros k e n e retorna o valor de k^n.
 */
int potencia(int k, int n) {
    return potenciaR(k, n, k);
}

int main() {
    printf("\nExponenciacao"); 
    int k, n;
    printf("\nDigite k e n, tal que k^n: "); scanf("%d %d", &k, &n);
    printf("potencia(%d, %d) = %d\n", k, n, potencia(k, n));
}