#include <stdio.h>

int main() {
    int total_habitantes, habitantes_salario_ate_mil = 0;
    float salario, total_salarios = 0, media_salario, maior_salario = 0;
    int filhos, total_filhos = 0;
    float media_filhos;
    float percentual_salario_ate_mil;

    printf("Digite o total de habitantes na cidade: ");
    scanf("%i", &total_habitantes);

    for (int i = 1; i <= total_habitantes; i++) {
        printf("Digite o salario do habitante %i: ", i);
        scanf("%f", &salario);

        printf("Digite o numero de filhos do habitante %d: ", i);
        scanf("%i", &filhos);

        total_salarios += salario;
        total_filhos += filhos;

        if (salario > maior_salario) {
            maior_salario = salario;
        }

        if (salario <= 1000) {
            habitantes_salario_ate_mil++;
        }
    }

    media_salario = total_salarios / total_habitantes;
    media_filhos = (float) total_filhos / total_habitantes;
    percentual_salario_ate_mil = (float) habitantes_salario_ate_mil / total_habitantes * 100;

    printf("\n");
    printf("a) Media do salario da populacao: R$ %.2f\n", media_salario);
    printf("b) Media do numero de filhos: %.2f\n", media_filhos);
    printf("c) Maior salario: R$ %.2f\n", maior_salario);
    printf("d) Porcentagem de pessoas com salarios ate R$1000.00: %.2f%%\n", percentual_salario_ate_mil);

    return 0;
}