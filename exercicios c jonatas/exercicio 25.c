#include <stdio.h>

int main () {

    int fim = 30;

    printf("numeros pares de 14 a 30:\n");

    for(int inicio = 14; inicio <= fim; inicio++) {
        if(inicio % 2 == 0) {
            printf("%i, ", inicio);
        }
    }

    return 0;
}