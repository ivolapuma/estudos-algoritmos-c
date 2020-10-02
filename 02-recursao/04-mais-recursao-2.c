#include <stdio.h>

/**
 * Exercicio 2.2.5 do livro.
 */
int XX(int n) {
    printf("*");
    if (n == 0) return 0;
    else return XX(n/3 + 1) + n;
}

int main() {
    // XX so termina se n == 0?
     int n;
    printf("n = "); scanf("%d", &n);
    printf("XX(n) = %d\n", XX(n));
}