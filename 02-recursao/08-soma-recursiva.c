#include <stdio.h>

int somaSePositivo(int v[], int i, int n, int soma) {
    if (i == n-1) {
        if (v[i] > 0) return soma + v[i];
        else return soma;
    } else {
        soma = somaSePositivo(v, i+1, n, soma);
        if (v[i] > 0) return soma + v[i];
        else return soma;
    }
}

/**
 * Retorna a soma dos elementos positivos de v[0..n-1], somente se n > 0.
 */
int SomaPositivos(int v[], int n) {
    // se n == 0, recursividade eh infinita, logo vai devolver 0.
    if (n > 0) return somaSePositivo(v, 0, n, 0);
    else return 0;
}


/**
 * Retorna um array de inteiros lidos do teclado.
 */
int * LeArrayInteiros(int tamanho) {
    static int array[100];
    printf("Digite valores do array de tamanho %d\n", tamanho);
    for (int i = 0; i < tamanho; i++) {
        printf("posicao %d = ", i);
        scanf("%d", &array[i]);
    }
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
    int tamanho;
    printf("Tamanho do array = "); scanf("%d", &tamanho);
    int *array = LeArrayInteiros(tamanho);
    ExibeArray(array, tamanho);
    printf("\n");
    printf("SomaPositivos(array) = %d", SomaPositivos(array, tamanho));
    printf("\n");
}
