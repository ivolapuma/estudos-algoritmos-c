#include <stdio.h>

void potencias(int n, int x);

int main() {
    printf("\nPotencias de numeros naturais\n");
    int n, x;
    printf("numero natural (n) = "); scanf("%d", &n);
    printf("potencias ate (x) = "); scanf("%d", &x);
    potencias(n, x);
}

/**
 * Imprime os numeros resultante das potencias de n elevados de 0 ate x, tal que :
 */
void potencias(int n, int x) {
    int N = 1;
    for (int i = 1; i <= x; i++) {
        N *= n;
        printf("n^%d = %d\n", i, N);
    }
}