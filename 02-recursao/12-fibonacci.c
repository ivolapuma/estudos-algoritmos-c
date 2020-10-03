#include <stdio.h>
#include <math.h>

/**
 * Considerando a série de Fibonacci, em que os dois primeiros numeros são 0 e 1 e, a partir do terceiro, 
 * o número é obtido da soma dos dois números anteriores.
 * 
 * Sendo assim, a série fica {0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, ...}.
 * 
 * Esta função recebe um inteiro P que representa a posição do número na série de Fibonacci, sendo que
 * a primeira posição é 0.
 * 
 * Exemplo: 
 * fibonacci(0), retorna 0.
 * fibonacci(1), retorna 1.
 * fibonacci(2), retorna 1.
 * fibonacci(3), retorna 2.
 * fibonacci(P), retorna fibonacci(P-1) + fibonacci(P-2).
 */
double fibonacci(int P) {
    if (P == 0) return 0;
    else if (P == 1) return 1;
    else return fibonacci(P-1) + fibonacci(P-2);
}

/**
 * Versão iterativa da função fibonacci(P).
 */
double fibonacci_I(int P) {
    if (P == 0) return 0;
    else if (P == 1) return 1;
    else {
        double Fn;
        double Fn2 = 0;
        double Fn1 = 1;
        for (int i = 2; i <= P; i++) {
            Fn = Fn1 + Fn2;
            Fn2 = Fn1;
            Fn1 = Fn;
        }
        return Fn;
    }
}

/**
 * Versao da função fibonacci(P) com base em funcao exponencial da razao áurea (PHI).
 * fibonacci_PHI(P) = round(PHI^P / sqrt(5))
 */
double fibonacci_PHI(int P) {
    const double SQRT_5 = sqrt(5);
    const double PHI = (1.0 + SQRT_5) / 2.0;
    return round(pow(PHI, P) / SQRT_5);
}

int main() {
    int P;
    printf("\nPosicao da serie Fibonacci: "); scanf("%d", &P);
    //printf("fibonacci  (%d)   = %lf\n", P, fibonacci(P));
    printf("fibonacci_I(%d)   = %lf\n", P, fibonacci_I(P));
    printf("fibonacci_PHI(%d) = %lf\n", P, fibonacci_PHI(P));
}