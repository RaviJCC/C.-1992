#include <stdio.h>

int main () {

    int num;
    int contador = 0;

    for(int inicio = 1; inicio <= 5; inicio++) {
            printf("escolha um numero de 100 a 200:\n");
            scanf("%i", &num);
            if(num < 100 || num > 200) {
                printf("numero digitado fora da lista\n");
                break;
            } else {
                printf("voce digitou o numero dentro da lista: %i\n", num);
                contador++;
            }
        } 

            printf("total de numeros digitados: %i", contador);
            
    return 0;
}