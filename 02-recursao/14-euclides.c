#include <stdio.h>

/**
 * Calcula o maior divisor comum dos inteiros positivos 'm' e 'n'.
 */
int Euclides(int m, int n) {
    //printf("\nm=%d n=%d", m, n);
    int r;
    do {
        r = m % n;
        m = n;
        n = r;
        //printf("\nr=%d m=%d n=%d", r, m, n);
    } while (r != 0);
    printf("\n");
    return m;
}

int calculaMDC_R(int m, int n) {
    if (m % n == 0) return n;
    return calculaMDC_R(n, (m%n));
}

/**
 * Calcula o maior divisor comum dos inteiros positivos 'm' e 'n'.
 * Com recursividade.
 */
int EuclidesR(int m, int n) {
    return calculaMDC_R(m , n);
}

int main() {
    printf("\nMaximo Divisor Comum (Euclides)"); 
    int m, n;
    printf("\nDigite m e n: "); scanf("%d %d", &m, &n);
    printf("Euclides(%d, %d)  = %d\n", m, n, Euclides(m, n));
    printf("EuclidesR(%d, %d) = %d\n", m, n, EuclidesR(m, n));
}