#include <stdio.h>

void ExibeArray(int array[], int tamanho) {
    printf("{");
    for (int i = 0; i < tamanho; i++) {
        if (i == 0) printf("%d", array[i]);
        else printf(",%d", array[i]);
    }
    printf("}");
}

int main() {
    int v[] = {1, 2, 3, 4, 5};
    ExibeArray(v, 5);
    printf("\n");
    ExibeArray(v+1, 5); 
    printf("\n");
    // v+1: v sera v[1..5]
    // v+i eh igual a &v[i]
}