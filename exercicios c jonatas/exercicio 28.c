#include <stdio.h>

int main () {

    int fim = 100;
    int soma = 0;

    printf("soma dos numeros de 1 a 100:\n");

    for(int inicio = 1; inicio <= fim; inicio++) {
            soma = inicio + inicio;
            printf("%i + %i = %i \n", inicio, inicio, soma);
        }

    return 0;
}