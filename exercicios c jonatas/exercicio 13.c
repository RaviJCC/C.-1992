#include <stdio.h>

int main() {

float precoFabrica, imposto, revendedor, precofinal;

    printf("informe o preco de fabrica do automovel:\n");
    scanf("%f", &precoFabrica);

    imposto = 0.45 * precoFabrica;

    revendedor = 0.28 * precoFabrica;

    precofinal = precoFabrica + imposto + revendedor;

    printf("o preco final do automovel custa: %.2f", precofinal);

    return 0;
}