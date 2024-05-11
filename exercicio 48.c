#include <stdio.h>

int main() {
    float preco_etiqueta, total_compra = 0;
    int condicao_pagamento;
    int desconto, acrescimo;

    do {
        printf("Digite o preco da etiqueta (ou 0 para encerrar a compra): ");
        scanf("%f", &preco_etiqueta);

        if (preco_etiqueta != 0) {
            printf("Digite o codigo da condicao de pagamento (1: a vista, em dinheiro ou cheque 10* de desconto\n 2 a vista com cartao de credito 5* de desconto\n 3 parcelado em duas vezes preco normal\n 4 parcelado em 3 vezes, acrescimo de 10*\n): ");
            scanf("%d", &condicao_pagamento);

            switch (condicao_pagamento) {
                case 1:
                    desconto = 0.10 * preco_etiqueta;
                    total_compra += preco_etiqueta - desconto;
                    break;
                case 2:
                    desconto = 0.05 * preco_etiqueta;
                    total_compra += preco_etiqueta - desconto;
                    break;
                case 3:
                    total_compra += preco_etiqueta;  
                    break;
                case 4:
                    acrescimo = 0.10 * preco_etiqueta;
                    total_compra += preco_etiqueta + acrescimo;
                    break;
                default:
                    printf("Codigo de condicao de pagamento invalido.\n");
                    break;
            }
        }
    } while (preco_etiqueta != 0);

    printf("Total da compra: R$ %.2f\n", total_compra);

    return 0;
}