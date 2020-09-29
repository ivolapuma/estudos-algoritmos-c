#include <stdio.h>
#include <math.h>

/**
 * Devolve o logaritmo de N na base x.
 */
double log_x(double N, double x) {
    return log(N) / log(x);
}

int main() {
    double N, x;
    printf("N = "); scanf("%lf", &N);
    printf("x = "); scanf("%lf", &x);
    printf("log_x N = %.20lf", log_x(N, x));
}