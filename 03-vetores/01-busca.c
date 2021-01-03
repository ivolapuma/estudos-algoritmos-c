#include <stdio.h>

/**
 * Funcao recebe um inteiro x e um vetor de inteiros v[0..n-1], com n >= 0 
 * e devolve k no intervalo 0..n-1 tal que v[k] == x.
 * Se tal k nao existe, devolve -1.
 */
int Busca(int x, int v[], int n) {
    int k;
    k = n - 1;
    while (k >= 0 && v[k] != x) {
        k -= 1; // k eh o invariante: contem a posicao do vetor a ser lido
    }
    return k;
}

/*
Exercicios
*/

/*
3.1.1 Qual o invariante	(veja Seção	1.2) do processo iterativo na função Busca?
*/

/**
 * 3.1.2 Analise a seguinte variante do código da função Busca.
 * 
 * Variante funciona, talvez seja menos elegante que a original.
 */
int Busca_v2(int x, int v[], int n) {
    int k;
    for (k = n-1; k >= 0; k--) {
        if (v[k] == x) return k;
    }
    return -1;
}

/**
 * 3.1.3 Critique a seguinte versão da função Busca.
 * 
 * Funciona se encontra x em v[], mas pode retornar k = n+1 imprevisivelmente, se houver "sujeira" na memoria.
 * O problema acontece pois o algoritmo tenta acessar v[n+1] ao final do loop, quando nao encontra x.
 */
int Busca_v3(int x, int v[], int n) {
    int k = 0;
    while (k < n && v[k] != x) {
        //printf("\n%d = %d ", k, v[k]);
        k += 1;        
    }
    //printf("\n%d = %d ", k, v[k]);
    //if (v[k] == x) return k; // ajustando para consertar o algoritmo
    if (k < n) return k;
    else return -1;
}

/**
 * 3.1.4 Critique a seguinte versão da função Busca.
 * 
 * Nao funciona. So funciona se x for o ultimo elemento.
 */
int Busca_v4(int x, int v[], int n) {
    int sol;
    //for (k = 0; k < n; k++) { // nao compila pois k nao esta declarado no for
    for (int k = 0; k < n; k++) {
        if (v[k] == x) sol = k;
        else sol = -1;
    }
    return sol;
}

int teste_2() {
    int v[] = {1, 10, 2, 0, 5, 1000, 100, -1, -10, -100, 555, 666, 777};
    int n = 13;
    int x;
    int k;

    x = 100;
    k = Busca_v3(x, v, n);
    printf("\nx = %d, k = %d\n\n", x, k);

    x = -2;
    k = Busca_v3(x, v, n);
    printf("\nx = %d, k = %d\n\n", x, k);
}

int teste_1() {
    int v[] = {1, 10, 2, 0, 5, 1000, 100, -1, -10, -100, 555, 666, 777};
    int n = 13;
    int x;

    x = 100;
    printf("\nBusca da posicao de %d em v[]: %d %d %d %d", 
        x,
        Busca(x, v, n),
        Busca_v2(x, v, n),
        Busca_v3(x, v, n),
        Busca_v4(x, v, n)
    );    

    x = -100;
    printf("\nBusca da posicao de %d em v[]: %d %d %d %d", 
        x,
        Busca(x, v, n),
        Busca_v2(x, v, n),
        Busca_v3(x, v, n),
        Busca_v4(x, v, n)
    );    

    x = -200;
    printf("\nBusca da posicao de %d em v[]: %d %d %d %d", 
        x,
        Busca(x, v, n),
        Busca_v2(x, v, n),
        Busca_v3(x, v, n),
        Busca_v4(x, v, n)
    );

    x = -2;
    printf("\nBusca da posicao de %d em v[]: %d %d %d %d", 
        x,
        Busca(x, v, n),
        Busca_v2(x, v, n),
        Busca_v3(x, v, n),
        Busca_v4(x, v, n)
    );

    x = 777;
    printf("\nBusca da posicao de %d em v[]: %d %d %d %d", 
        x,
        Busca(x, v, n),
        Busca_v2(x, v, n),
        Busca_v3(x, v, n),
        Busca_v4(x, v, n)
    );    

    printf("\n");
}

/**
 * Funcao principal
 */
int main() {
    teste_1();
    teste_2();
}
