#include <stdio.h>
#include <math.h>

int main () {

    int fim = 30;
    int quadrado = 0;

    printf("numeros quadrados de 15 a 30:\n");

    for(int inicio = 15; inicio <= fim; inicio++) {
            quadrado = pow(inicio, 2);
            printf("%i^2 = %i \n", inicio, quadrado);
        }

    return 0;
}