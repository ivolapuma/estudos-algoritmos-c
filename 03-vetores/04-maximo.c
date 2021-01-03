#include <stdio.h>
#include <limits.h>

int Maximo(int n, int v[]) {
    int j, x;
    //x = v[0];
    // x = 0; // nao faz sentido, pois v[] pode ser composto somente por numeros negativos
    x = INT_MIN; // faz sentido, pois INT_MIN eh o menor inteiro possivel
    for (j = 1; j < n; j += 1) {
        //if (x <= v[j]) { // apesar de nao alterar o resultado, nao faz sentido, pois se x = v[j], nao precisaria realizar a operacao de reatribuir x com valor de v[j]
        if (x < v[j]) {
            x = v[j];
        }
    }
    return x;
}

int main() {
    int v[] = {1, 10, 2, 0, 5, 1000, 100, -1, -10, -100, 555, 666, 777};
    int n = 13;
    int max = Maximo(n, v);
    printf("\nMaximo de v[] = %d", max);
}