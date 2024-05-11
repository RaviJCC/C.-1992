#include <stdio.h>

int main() {
    char sexo, resposta;
    int pessoas_sim_masc = 0, pessoas_nao_masc = 0, pessoas_sim_fem = 0, pessoas_nao_fem = 0;
    int total_masc = 0, total_fem = 0;
    float porcentagem_sim_masc, porcentagem_nao_masc, porcentagem_sim_fem, porcentagem_nao_fem, porcentagemtotalsim, porcentagemtotalnao;
    int total_entrevistados = 20;
    float totalsim = 0, totalnao = 0;

    for (int i = 1; i <= total_entrevistados ; i++) {
        printf("Digite o sexo do entrevistado (M/F): ");
        scanf(" %c", &sexo);
        if(sexo != 'M' && sexo != 'm' && sexo != 'F' && sexo != 'f') {
            printf("sexo invalido, programa encerrando");
            break;
        }

        printf("Digite a resposta do entrevistado (S/N): ");
        scanf(" %c", &resposta);
        if(resposta != 'S' && resposta != 's' && resposta != 'N' && resposta != 'n') {
            printf("resposta invalida, programa encerrando");
            break;
        }

        if (sexo == 'M' || sexo == 'm') {
            total_masc++;
            if (resposta == 'S' || resposta == 's') {
                pessoas_sim_masc++;
                totalsim++;
            } else if (resposta == 'N' || resposta == 'n') {
                pessoas_nao_masc++;
                totalnao++;
            }
        } else if (sexo == 'F' || sexo == 'f') {
            total_fem++;
            if (resposta == 'S' || resposta == 's') {
                pessoas_sim_fem++;
                totalsim++;
            } else if (resposta == 'N' || resposta == 'n') {
                pessoas_nao_fem++;
                totalnao++;
            }
        } else {
            printf("Sexo invalido. Digite M ou F.\n");
            i--; 
        }
    }

    porcentagem_sim_masc = (float)pessoas_sim_masc / total_masc * 100;
    porcentagem_nao_masc = (float)pessoas_nao_masc / total_masc * 100;
    porcentagem_sim_fem = (float)pessoas_sim_fem / total_fem * 100;
    porcentagem_nao_fem = (float)pessoas_nao_fem / total_fem * 100;
    porcentagemtotalsim = (float)totalsim / total_entrevistados * 100;
    porcentagemtotalnao = (float)totalnao / total_entrevistados * 100;

    printf("\nPorcentagem e total de homens que responderam sim: %.2f%%| %i\n", porcentagem_sim_masc, pessoas_sim_masc);
    printf("Porcentagem e total de homens que responderam nao: %.2f%%| %i\n", porcentagem_nao_masc, pessoas_nao_masc);
    printf("Porcentagem e total de mulheres que responderam sim: %.2f%%| %i\n", porcentagem_sim_fem, pessoas_sim_fem);
    printf("Porcentagem e total de mulheres que responderam nao: %.2f%%| %i\n", porcentagem_nao_fem, pessoas_nao_fem);
    printf("Total de pessoas entrevistadas: %i | homens: %i | mulheres: %i | porcentagem geral de sim: %.2f%% | porcentagem geral de nao: %.2f%% \n", total_entrevistados, total_masc, total_fem, porcentagemtotalsim, porcentagemtotalnao);
    return 0;
}