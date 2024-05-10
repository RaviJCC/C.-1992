#include <stdio.h>

int main() {

float valorcompra, valorpag, troco;

printf("atendente do caixa, informe o valor da compra do cliente:\n");
scanf("%f", &valorcompra);

printf("informe o valor pago em dinheiro pelo cliente:\n");
scanf("%f", &valorpag);

if (valorpag > valorcompra) {
    troco = valorpag - valorcompra;
    printf("o troco do cliente sera de: %.2f ", troco);
} else if (valorpag < valorcompra) {
    printf("valor insuficiente");
}

    return 0;
}