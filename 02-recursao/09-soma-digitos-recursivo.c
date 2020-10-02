#include <stdio.h>
#include <math.h>

/**
 * Recebe n, identifica o 1o digito e retorna a soma com s.
 */
int somaProximoDigito(int n, int s) {
    if (n < 10) return s + n;
    int p = 0;
    while ((n / (int) ceil(pow(10, p))) > 0) p++;    
    int pow_10_p = (int) ceil(pow(10, p-1));
    int soma = s + (n / pow_10_p);
    int proximo = (n % pow_10_p);
    return somaProximoDigito(proximo, soma);
}

/**
 * Retorna a soma dos digitos do inteiro n.
 * Exemplo: se n = 132, retorno deve ser 6 (pois, 1 + 3 + 2).
 */
int SomaDigitos(int n) {
    return somaProximoDigito(n, 0);
}

int main() {    
    int n;
    printf("n = "); scanf("%d", &n);
    printf("Soma digitos de (%d) = %d", n, SomaDigitos(n));
    printf("\n");
}