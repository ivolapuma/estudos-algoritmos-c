#include <stdio.h>


/**
 * Remove o elemento de indice k do vetor v[0..n-1] e devolve o novo valor de n.
 * A funcao supoe 0 <= k < n.
 */
int Remove(int k, int v[], int n) {
    int j;
    for (j = k; j < n-1; j++) {
        v[j] = v[j+1];
    }
    return n-1;
}

/**
 * Variante da funcao Remove para exercicio 3.3.1.
 * Nao funciona. Acaba copiando o valor do elemento de n-1 até a posicao k.
 */
int RemoveEx331(int k, int v[], int n) {
    int j;
    for (j = n-2; j >= k; j--) {
        v[j] = v[j+1];
    }
    return n-1;
}

/**
 * Variante da funcao Remove para exercicio 3.3.2.
 * Funciona, mas a linha v[n-1] = 0 é desnecessária.
 */
int RemoveEx332(int k, int v[], int n) {
    int j;
    for (j = k; j < n-1; j++) {
        v[j] = v[j+1];
    }
    v[n-1] = 0;
    return n-1;
}

/**
* Variante da funcao Remove para exercicio 3.3.3. 
* Funciona, mas o if (k < n-1) é desnecessário pois o for só vai rodar k for < n-1
*/
int RemoveEx333(int k, int v[], int n) {
    int j;
    if (k < n-1) {
        for (j = k; j < n-1; j++) {
            v[j] = v[j+1];
        }
    }
    return n-1;
}

/**
 * Versao recursiva da funcao Remove().
 */
int RemoveR(int k, int v[], int n) {
    //printf("\n%d %d", k, n);
    if (k == n-1) return n-1;
    else {
        v[k] = v[k+1];
        return RemoveR(k+1, v, n);
    }
}

/**
 * Variante da versao recursiva da funcao Remove().
 * Funciona e tem mesmo desempenho de RemoveR().
 */
int RemoveR2(int k, int v[], int n) {
    //printf("\n%d %d", k, n);
    if (k < n-1) {
        RemoveR2(k, v, n-1);
        v[n-2] = v[n-1];
    }
    return n-1;
}

int Mostra(int v[], int n) {
    printf("v[]={");
    for (int i = 0; i < n; i++) {
        if (i > 0) printf(",");
        printf("%d", v[i]);
    }
    printf("}");
    return 0;
}

int TesteRemove() {
    printf("\nTeste Remove");

    int v[] = {1, 10, 2, 0, 5, 1000, 100, -1, -10, -100, 555, 666, 777};
    int n = 13;

    printf("\n");
    Mostra(v, n);

    n = Remove(5, v, n);
    printf("\n");
    Mostra(v, n);

    n = Remove(n-1, v, n);
    printf("\n");
    Mostra(v, n);

    n = Remove(0, v, n);
    printf("\n");
    Mostra(v, n);

    printf("\n");    
}

int TesteRemoveR() {
    printf("\nTeste RemoveR");

    int v[] = {1, 10, 2, 0, 5, 1000, 100, -1, -10, -100, 555, 666, 777};
    int n = 13;

    printf("\n");
    Mostra(v, n);

    n = RemoveR(5, v, n);
    printf("\n");
    Mostra(v, n);

    n = RemoveR(n-1, v, n);
    printf("\n");
    Mostra(v, n);

    n = RemoveR(0, v, n);
    printf("\n");
    Mostra(v, n);

    printf("\n");    
}

int TesteRemoveR2() {
    printf("\nTeste RemoveR2");

    int v[] = {1, 10, 2, 0, 5, 1000, 100, -1, -10, -100, 555, 666, 777};
    int n = 13;

    printf("\n");
    Mostra(v, n);

    n = RemoveR2(5, v, n);
    printf("\n");
    Mostra(v, n);

    n = RemoveR2(n-1, v, n);
    printf("\n");
    Mostra(v, n);

    n = RemoveR2(0, v, n);
    printf("\n");
    Mostra(v, n);

    printf("\n");    
}

int TesteRemoveEx331() {
    printf("\nTeste RemoveEx331");

    int v[] = {1, 10, 2, 0, 5, 1000, 100, -1, -10, -100, 555, 666, 777};
    int n = 13;

    printf("\n");
    Mostra(v, n);

    n = RemoveEx331(5, v, n);
    printf("\n");
    Mostra(v, n);

    n = RemoveEx331(n-1, v, n);
    printf("\n");
    Mostra(v, n);

    n = RemoveEx331(0, v, n);
    printf("\n");
    Mostra(v, n);

    printf("\n");    
}

int TesteRemoveEx332() {
    printf("\nTeste RemoveEx332");

    int v[] = {1, 10, 2, 0, 5, 1000, 100, -1, -10, -100, 555, 666, 777};
    int n = 13;

    printf("\n");
    Mostra(v, n);

    n = RemoveEx332(5, v, n);
    printf("\n");
    Mostra(v, n);

    n = RemoveEx332(n-1, v, n);
    printf("\n");
    Mostra(v, n);

    n = RemoveEx332(0, v, n);
    printf("\n");
    Mostra(v, n);

    printf("\n");    
}

int TesteRemoveEx333() {
    printf("\nTeste RemoveEx333");

    int v[] = {1, 10, 2, 0, 5, 1000, 100, -1, -10, -100, 555, 666, 777};
    int n = 13;

    printf("\n");
    Mostra(v, n);

    n = RemoveEx333(5, v, n);
    printf("\n");
    Mostra(v, n);

    n = RemoveEx333(n-1, v, n);
    printf("\n");
    Mostra(v, n);

    n = RemoveEx333(0, v, n);
    printf("\n");
    Mostra(v, n);

    printf("\n");    
}

int main() {
    TesteRemove();
    TesteRemoveEx331();
    TesteRemoveEx332();
    TesteRemoveEx333();
    TesteRemoveR();
    TesteRemoveR2();
}