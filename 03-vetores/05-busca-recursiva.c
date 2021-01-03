#include <stdio.h>

/**
 * Recebe x, v e n >= 0 e devolve k, tal que 0 <= k < n e v[k] == x.
 * Se tal k nao existe, devolve -1.
 * Algoritmo recursivo.
 */
int BuscaR(int x, int v[], int n) {
    //printf("\nx=%d n=%d", x, n);
    if (n == 0) return -1;
    if (x == v[n-1]) return n-1;
    return BuscaR(x, v, n-1);
}

/**
 * Algoritmo eh ineficiente, pois percorre todos os elementos do vetor, mesmo se ja encontrou x.
 */
int BuscaMuitoFeio(int x, int v[], int n) {
    //printf("\nx=%d n=%d", x, n);
    if (n == 0) return 0;
    else {
        int achei;
        achei = BuscaMuitoFeio(x, v, n-1);
        if (achei || x == v[n-1]) return 1;
        else return 0;
    }
}

/**
 * Algoritmo nao funciona.
 * Se x nao existe em v[], vai extrapolar os elementos de v, acessando posicoes com n<0.
 * Vai sempre retornar 1, pois vai encontrar algum "elemento" do vetor igual a x.
 */
int UmaBusca(int x, int v[], int n) {
    //printf("\nx=%d n=%d v[n-1]=%d", x, n, v[n-1]);
    if (v[n-1] == x) return 1;
    else return UmaBusca(x, v, n-1);
}

int teste_1() {
    int v[] = {1, 10, 2, 0, 5, 1000, 100, -1, -10, -100, 555, 666, 777};
    int n = 13;
    int x;

    x = 100;
    printf("\nPosicao de %d em v[]: %d", x, BuscaR(x, v, n));
    x = 666;
    printf("\nPosicao de %d em v[]: %d", x, BuscaR(x, v, n));
    x = -2;
    printf("\nPosicao de %d em v[]: %d", x, BuscaR(x, v, n));

    printf("\n");
}

int exercicio_3_2_1() {
    int v[] = {1, 10, 2, 0, 5, 1000, 100, -1, -10, -100, 555, 666, 777};
    int n = 13;
    int x;

    x = 100;
    printf("\n%d esta em v[]? (0 ou 1): %d", x, BuscaMuitoFeio(x, v, n));
    x = 666;
    printf("\n%d esta em v[]? (0 ou 1): %d", x, BuscaMuitoFeio(x, v, n));
    x = -2;
    printf("\n%d esta em v[]? (0 ou 1): %d", x, BuscaMuitoFeio(x, v, n));

    printf("\n");
}

int exercicio_3_2_2() {
    int v[] = {1, 10, 2, 0, 5, 1000, 100, -1, -10, -100, 555, 666, 777};
    int n = 13;
    int x;

    x = 100;
    printf("\n%d esta em v[]? (0 ou 1): %d", x, UmaBusca(x, v, n));
    x = 666;
    printf("\n%d esta em v[]? (0 ou 1): %d", x, UmaBusca(x, v, n));
    x = -2;
    printf("\n%d esta em v[]? (0 ou 1): %d", x, UmaBusca(x, v, n));

    printf("\n");
}

int main() {
    teste_1();
    exercicio_3_2_1();
    exercicio_3_2_2();
}