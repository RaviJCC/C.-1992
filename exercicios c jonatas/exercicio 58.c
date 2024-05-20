#include <stdio.h>
#include <stdlib.h>

int main() {
    int vetA[10] = {4, 12, 2, 17, 7, 11, 777, 12, 116, 7};
    int vetB[10];

    printf("o vetor inverso de A em B:\n");

    for (int i = 0; i < 10; i++) {
        vetB[i] = vetA[9 - i];
        printf("%i, ", vetB[i]);
    }

    return 0;
}