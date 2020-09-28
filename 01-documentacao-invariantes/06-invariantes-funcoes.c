/**
 * Devolve a soma dos valores inteiros contidos num vetor v[0..n-1], onde n eh o tamanho do vetor e
 * deve ser >= 1.
 */
int soma(int n, int v[]) {
    int i;
    int x = 0;
    for (i = 0; i < n; i++) {
        x += v[i]; // x eh a soma dos valores percorridos de v
    }
    return x; 
}

/**
 * Dado um inteiro x e um vetor de inteiros v[0..n-1], onde n eh >= 1 e deve conter o tamanho
 * do vetor v, retorna qual a posicao de x no vetor v.
 */
int onde(int x, int v[], int n) {
    int j = 0; // j representa o indice de v
    while (j < n && v[j] != x) {
        j += 1; // atualiza posicao de v enquanto x nao eh encontrado
    }
    return j; // j eh a posicao de x em v ou eh igual a n, caso x nao eh encontrado
}

