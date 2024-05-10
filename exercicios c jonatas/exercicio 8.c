#include <stdio.h>

int main() {

float salarioFixo = 1000, comissao, salarioFinal, vendas;

    printf("O salario fixo do vendedor hojo eh: %.2f \n", salarioFixo);

    printf("O gerente vai informar o numero de vendas no mes:\n");
    scanf("%f", &vendas);

    comissao = 0.15 * vendas; 

    salarioFinal = salarioFixo + comissao;

    printf("o salario final do funcionario sera: %.2f\n", salarioFinal);


    return 0;
}