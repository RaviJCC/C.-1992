#include <stdio.h>
#include <stdlib.h>

int main() {
    int vetor[5] = {1, 4, 5, 6, 9};

    for (int i = 0; i < 5; i++) {
        if (i % 2 != 0) {
            printf("Este numero: %i foi multiplicado por 5 por estar em uma posicao impar no vetor:\n", vetor[i]);
            vetor[i] *= 5;
            printf("novo resultado num: %i\nposicao: %i\n", vetor[i], i);
        }
    }

    return 0;
}