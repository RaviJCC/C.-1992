#include <stdio.h>
#include <stdlib.h>

int main() {
  
  float media, soma = 0, qtd = 0;

    float vetor[10] = {1, 4, 5, 6, 9, 12, 18, 22, 10, 2};

    for(int i = 0; i < 10; i++) {
        soma = soma + vetor[i];
        qtd++;
    }

    media = soma / qtd;

    printf("a media eh: %.2f", media);

    return 0;
}