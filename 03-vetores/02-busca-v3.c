#include <stdio.h>

int Busca_v3(int x, int v[], int n) {
    int k = 0;
    while (k < n && v[k] != x) {
        printf("\n%d = %d ", k, v[k]);
        k += 1;        
    }
    printf("\n%d = %d ", k, v[k]);
    if (v[k] == x) return k;
    else return -1;
}

int main() {
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