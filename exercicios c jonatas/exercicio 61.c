#include <stdio.h>
#include <stdlib.h>

int main() {

    int vetorD[3];
    int soma = 0;

    int matriz[3][3] = {{1, 2, 3},
                        {2, 4, 4},
                        {6, 8, 11}
    };
        printf("Imprimindo a matriz:\n");
        for(int i = 0; i < 3; i++) {
            for(int j=0; j < 3; j++) {
                 printf("|%i| ", matriz[i][j]);
                }

            printf("\n");

        }

            printf("\n");
                   
        printf("Elementos da diagonal principal:\n");

            for(int i = 0; i < 3; i++) {
                    printf("|%i| ", matriz[i][i]);
                    soma = soma + matriz[i][i];
                    }

                    printf("\n");
                    printf("\n");

        printf("Soma da diagonal principal: %i ", soma);

                    printf("\n");
                    printf("\n");

        printf("Elementos da diagonal principal transferidos para o VetorD:\n");

            for (int i = 0; i < 3; i++) {
            vetorD[i] = matriz[i][i];
            printf("%i, ", vetorD[i]);
        }

    return 0;
}