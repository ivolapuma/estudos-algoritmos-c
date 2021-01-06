#include <stdio.h>

/**
 * Exibe na tela os elementos de um vetor de inteiros.
 */
int Mostra(int v[], int n) {
    printf("v[]={");
    for (int i = 0; i < n; i++) {
        if (i > 0) printf(",");
        printf("%d", v[i]);
    }
    printf("}");
    return 0;
}

/**
 * Insere y entre as posicoes k-1 e k do vetor v[0..n-1] e devolve o novo valor de n.
 * Supoe que 0 <= k <= n.
 * Nao deve ser chamada quando n = N (tamanho maximo do vetor).
 */
int Insere(int k, int y, int v[], int n) {
    int j;
    for (j = n; j > k; j--) {
        v[j] = v[j-1];
    }
    v[k] = y;
    return n+1;
}

/**
 * Versao recursiva da funcao Insere.
 */
int InsereR(int k, int y, int v[], int n) {
    //printf("\n%d %d %d", k, y, n);
    if (k == n) v[k] = y;
    else {
        v[n] = v[n-1];
        InsereR(k, y, v, n-1);
    }
    return n+1;
}

/**
 * Variante da versao recursiva da funcao Insere (Exercicio 3.4.1).
 * Nao funciona. 
 * Nao retorna n+1 corretamente.
 * So funciona quando k = n.
 */
int InsereR2(int k, int y, int v[], int n) {
    //printf("\n%d %d %d", k, y, n);
    if (k == n)  {
        v[k] = y;
        return n+1;
    } else {
        v[n] = v[n-1];
        InsereR(k, y, v, n-1);
    }
}

/**
 * Variante da versao recursiva da funcao Insere (Exercicio 3.4.2).
 * Funciona. Mesmo desempenho da versao Insere original.
 */
int InsereR3(int k, int y, int v[], int n) {
    //printf("\n%d %d %d", k, y, n);
    if (k == n) {
        v[k] = y;
        return n+1;
    } else {
        int z = v[k];
        v[k] = y;
        return InsereR(k+1, z, v, n);
    }
}

int TesteInsere() {

    printf("\nTeste Insere");

    // N = 100 (tamanho maximo do vetor)
    int v[100] = {1, 10, 2, 0, 5, 1000, 100, -1, -10, -100, 555, 666, 777};
    int n = 13;

    printf("\n");
    Mostra(v, n);

    n = Insere(7, 999, v, n);
    printf("\n");
    Mostra(v, n);

    n = Insere(n, -500, v, n);
    printf("\n");
    Mostra(v, n);

    n = Insere(0, 123, v, n);
    printf("\n");
    Mostra(v, n);

    printf("\n");

}

int TesteInsereR() {

    printf("\nTeste InsereR");

    // N = 100 (tamanho maximo do vetor)
    int v[100] = {1, 10, 2, 0, 5, 1000, 100, -1, -10, -100, 555, 666, 777};
    int n = 13;

    printf("\n");
    Mostra(v, n);

    n = InsereR(7, 999, v, n);
    printf("\n");
    Mostra(v, n);

    n = InsereR(n, -500, v, n);
    printf("\n");
    Mostra(v, n);

    n = InsereR(0, 123, v, n);
    printf("\n");
    Mostra(v, n);

    printf("\n");

}

int TesteInsereR2() {

    printf("\nTeste InsereR2");

    // N = 100 (tamanho maximo do vetor)
    int v[100] = {1, 10, 2, 0, 5, 1000, 100, -1, -10, -100, 555, 666, 777};
    int n = 13;

    printf("\n");
    Mostra(v, n);

    n = InsereR2(7, 999, v, n);
    printf("\n");
    Mostra(v, n);

    n = InsereR2(n, -500, v, n);
    printf("\n");
    Mostra(v, n);

    n = InsereR2(0, 123, v, n);
    printf("\n");
    Mostra(v, n);

    printf("\n");

}

int TesteInsereR3() {

    printf("\nTeste InsereR3");

    // N = 100 (tamanho maximo do vetor)
    int v[100] = {1, 10, 2, 0, 5, 1000, 100, -1, -10, -100, 555, 666, 777};
    int n = 13;

    printf("\n");
    Mostra(v, n);

    n = InsereR3(7, 999, v, n);
    printf("\n");
    Mostra(v, n);

    n = InsereR3(n, -500, v, n);
    printf("\n");
    Mostra(v, n);

    n = InsereR3(0, 123, v, n);
    printf("\n");
    Mostra(v, n);

    printf("\n");

}

int main() {
    TesteInsere();
    TesteInsereR();
    TesteInsereR2();
    TesteInsereR3();
}