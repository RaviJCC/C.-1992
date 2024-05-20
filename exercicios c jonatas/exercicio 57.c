#include <stdio.h>
#include <stdlib.h>

int main() {
    int v1[10] = {4, 12, 2, 17, 7, 11, 777, 12, 116, 7};
    int v2[10] = {35, 3, 41, 11, 88, 51, 30, 6, 99, 26};
    int v3[20];

    for (int i = 0; i < 10; i++) {
        v3[2 * i] = v1[i];
        v3[2 * i + 1] = v2[i];
    }

    printf("Novo vetor intercalado: ");
    for (int i = 0; i < 20; i++) {
        printf("%i, ", v3[i]);
    }
    printf("\n");

    return 0;
}