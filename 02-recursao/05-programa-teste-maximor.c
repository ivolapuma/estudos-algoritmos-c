#include <stdio.h>

int maximoR(int v[], int n) {
    if (n == 1) return v[0];
    else {
        int x;
        x = maximoR(v, n-1);
        if (x > v[n-1]) return x;
        else return v[n-1];
    }
}

int verifica_maximoR(int v[], int n) {
    int maximo = v[0];
    for (int i = 1; i < n; i++) {
        if (v[i] > maximo) maximo = v[i];
    }
    return maximo;
}

int * le_vetor_inteiros(int tamanho) {
    static int vetor[100];
    printf("digite valores do vetor de tamanho %d\n", tamanho);
    for (int i = 0; i < tamanho; i++) {
        printf("posicao %d = ", i);
        scanf("%d", &vetor[i]);
    }
    return vetor;
}

void exibe_vetor(int vetor[], int tamanho) {
    printf("{");
    for (int i = 0; i < tamanho; i++) {
        if (i == 0) printf("%d", vetor[i]);
        else printf(",%d", vetor[i]);
    }
    printf("}");
}

int main() {
    int tamanho;
    printf("tamanho do vetor = "); scanf("%d", &tamanho);
    int *xs = le_vetor_inteiros(tamanho);
    exibe_vetor(xs, tamanho);
    printf("\n");
    printf("maximoR = (%d) | elemento_maximo = (%d)", maximoR(xs, tamanho), verifica_maximoR(xs, tamanho));
}