#include <stdio.h>
#include <stdlib.h>

int main() {
    int maior = 0, posicao = 0;
    int vetor[10] = {1, 4, 5, 6, 9, 18, 22, 11, 7, 14};

    for (int i = 0; i < 10; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
            posicao = i;
        }
    }

    printf("Este numero eh o maior: %i: e ocupa essa posicao: %i\n", maior, posicao);

    return 0;
}