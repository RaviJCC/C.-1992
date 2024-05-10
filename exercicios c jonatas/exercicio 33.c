#include <stdio.h>

int main () {

    int fim = 73;
    float media = 0;
    int contador = 0;

    printf("numeros pares de 13 a 73:\n");

    for(int inicio = 13; inicio <= fim; inicio++) {
        if(inicio % 2 == 0) {
            printf("%i, ", inicio);
            contador++;
            media += inicio;
        }
    } 

    media = media / contador;

    printf("a media aritimetica eh: %.2f", media);

    return 0;
}