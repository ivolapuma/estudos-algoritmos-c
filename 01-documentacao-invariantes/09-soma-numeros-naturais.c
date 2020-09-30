#include <stdio.h>

int soma_1os_naturais(int n);
int soma_naturais(int de, int ate);
int soma_naturais_com_PA(int de, int ate);

int main() {
    int n;
    printf("\nSoma dos n primeiros numeros naturais\n");
    printf("n = "); scanf("%d", &n);
    printf("soma = %d\n", soma_1os_naturais(n));
    printf("soma = %d\n", soma_naturais(0, n));
    printf("soma = %d\n", soma_naturais_com_PA(0, n));
}

/**
 * Devolve a soma dos n 1os numeros naturais.
 */
int soma_1os_naturais(int n) {
    int soma = 0;
    for (int i = 0; i <= n; i++) soma += i;
    return soma;
}

/**
 * Devolve a soma dos numeros naturais contidos entre os parametros de e ate.
 */
int soma_naturais(int de, int ate) {
    int soma = 0;
    for (int i = de; i <= ate; i++) soma += i;
    return soma;
}

/**
 * Devolve a soma dos numeros naturais contidos entre os parametros de e ate, usando a formula de soma da Progressao Aritmetica.
 */
int soma_naturais_com_PA(int de, int ate) {
    return ((de + ate) * ((ate - de) + 1)) / 2;
}