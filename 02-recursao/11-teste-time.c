#include <stdio.h>
#include <time.h>

void teste_time() {
    int loops;
    printf("\n# loops: "); scanf("%d", &loops);
    printf("time(): %d\n", time(NULL));
    for (int i = 0; i < loops; i++);
    printf("time(): %d\n", time(NULL));
}

void teste_clock() {
    int loops;
    printf("\n# loops: "); scanf("%d", &loops);
    printf("clock(): %d\n", clock());
    for (int i = 0; i < loops; i++);
    printf("clock(): %d\n", clock());
}

int main() {
    teste_clock();
}