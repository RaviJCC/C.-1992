#include <stdio.h>
#include <stdlib.h>

int main() {

    int maior = 0, posicaoL = 0, posicaoC = 0;

    // a primeira linha e coluna em matriz comeca em 0 assim como vetor //

    int matriz[4][5] = {{1, 2, 3, 6, 22},
                        {2, 3, 4, 13, 4},
                        {6, 8, 11, 2, 1},
                        {7, 21, 5, 8, 9}
    };

    // primeira linha e segunda coluna, i e j para indicar linha e coluna//

        for(int i = 0; i < 4; i++) {
            for(int j=0; j < 5; j++) {
                 printf("|%i| ", matriz[i][j]);
                if(matriz[i][j] > maior) {
                    maior = matriz[i][j];
                    posicaoL = i;
                    posicaoC = j;
                }

            }
                printf("\n");
        } 

        printf("maior elemento da matriz: %i na linha: %i e coluna: %i ", maior, posicaoL, posicaoC);

    return 0;
}