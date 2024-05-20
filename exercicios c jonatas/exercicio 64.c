#include <stdio.h>
#include <stdlib.h>

int main() {
    int matriz[3][3] = {
        {12, 15, 32},
        {21, 42, 34},
        {6, 64, 11}
    };

    int maiorSoma = 0;
    int linhaMaiorSoma = 0;
    int somaLinha = 0;

    printf("Imprimindo a matriz:\n");
    for (int i = 0; i < 3; i++) {
            somaLinha = 0; 
        for (int j = 0; j < 3; j++) {
            printf("|%i| ", matriz[i][j]);
            somaLinha += matriz[i][j];
        }
        printf("\n");
        if (somaLinha > maiorSoma) {
            maiorSoma = somaLinha;
            linhaMaiorSoma = i;
        }
    }

    printf("\n");
    printf("Linha com a maior soma: %i\n", linhaMaiorSoma);
    printf("Soma da maior linha: %i\n", maiorSoma);

    return 0;
}