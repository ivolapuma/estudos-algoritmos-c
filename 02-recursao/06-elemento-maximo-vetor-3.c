#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * Esta funcao recebe v, i e n tais que i < n e devolve o valor de um elemento maximo do vetor v[i..n-1].
 */
int MaxR(int v[], int i, int n) {
    if (i == n-1) return v[i];
    else {
        int x;
        x = MaxR(v, i+1, n);
        if (x > v[i]) return x;
        else return v[i];
    }
}

/**
 * Retorna o elemento maximo do vetor v[0..n-1].
 */
int Maximo(int v[], int n) {
    return MaxR(v, 0, n);
}

/**
 * Retorna o elemento maximo do vetor v[0..n-1], versao que usa aritmetica de enderecos.
 */
int Maximo2(int v[], int n) {
    int x;
    if (n == 1) return v[0];
    x = Maximo2(v+1, n-1);
    if (x > v[0]) return x;
    return v[0];
}

/**
 * Esta funcao recebe array, ini, size e dif, tais que ini < size e dif o valor da diferenca base, 
 * para devolver o valor da diferenca entre elemento maximo e elemento minimo do vetor array[i..n-1].
 */
int MaxMinR(int array[], int ini, int size, int dif) {
    if (ini == size-2) return abs(array[size-2] - array[size-1]);
    else {
        dif = MaxMinR(array, ini+1, size, dif);
        for (int i = ini; i < size; i++) {
            if (abs(array[ini] - array[i]) > dif) {
                dif = abs(array[ini] - array[i]);
            }
        }
        return dif;
    }
}

/**
 * Calcula diferenca entre o elemento maximo e o elemento minimo do vetor v[0..n-1].
 */
int DiferencaMaxMin(int v[], int n) {
    return MaxMinR(v, 0, n, 0);
}

/**
 * Retorna um array de inteiros aleatorios com numero de elementos igual a 'tamanho'.
 */
int * ArrayIntRand(int tamanho) {
    static int array[100];
    srand((unsigned)time(NULL)); // define a semente
    for (int i = 0; i < tamanho; i++) array[i] = rand();
    return array;
}

/**
 * Exibe na tela os elementos de 'array', que deve ter numeros de elementos 'tamanho'.
 */
void ExibeArray(int array[], int tamanho) {
    printf("{");
    for (int i = 0; i < tamanho; i++) {
        if (i == 0) printf("%d", array[i]);
        else printf(",%d", array[i]);
    }
    printf("}");
}

int main() {
    printf("\n");
    int tamanho;
    printf("Tamanho do array = "); scanf("%d", &tamanho);
    int *array = ArrayIntRand(tamanho);
    ExibeArray(array, tamanho);
    printf("\n");
    printf("Maximo(array)          = (%d)", Maximo(array, tamanho));
    printf("\n");
    printf("Maximo2(array)         = (%d)", Maximo2(array, tamanho));
    printf("\n");
    printf("DiferencaMaxMin(array) = (%d)", DiferencaMaxMin(array, tamanho));
    printf("\n");
}