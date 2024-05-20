#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int matriz[4][3] = {{1, 2, 3},
                        {4, 5, 6},
                        {7, 8, 9},
                        {10, 11, 12}
    };

    int matrizTransposta[3][4];

        printf("\nMatriz:\n");
            for(int i = 0; i < 4; i++) {
                for(int j = 0; j < 3; j++) {
                printf("|%i| ", matriz[i][j]);
                }
                printf("\n");
            }

            for(int i = 0; i < 4; i++) {
                for(int j = 0; j < 3; j++) {
                    matrizTransposta[i][j] = matriz[i][j];
                }
            }
            
            printf("Matriz transposta:\n");
                for(int i = 0; i < 3; i++) {
                    for(int j = 0; j < 4; j++) {
                        printf("|%i| ", matrizTransposta[j][i]);
                    }

                    printf("\n");
        
                }

    return 0;
}

