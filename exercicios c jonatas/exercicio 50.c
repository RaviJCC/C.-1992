#include <stdio.h>

int main() {
    char sexo;
    int altura, maior = 1, menor = 5000;
    float mediaAltF = 0;
    int cadastro = 1, totalMulheres = 0, totalHomens = 0;
    int somaAltF = 0;

    while (cadastro != 0) {
        printf("Digite o numero da pessoa cadastrada (ou 0 para finalizar): ");
        scanf("%i", &cadastro);

        if (cadastro == 0) {
            break;
        }

        printf("Digite seu sexo com o caractere M ou F: ");
        scanf(" %c", &sexo);

        if(sexo != 'M' && sexo != 'm' && sexo != 'F' && sexo != 'f') {
            printf("sexo invalido, programa encerrando");
            break;
        }
        
        printf("Digite sua altura em centimetros: ");
        scanf("%i", &altura);

        if (altura > maior) {
            maior = altura;
        }
        if (altura < menor) {
            menor = altura;
        }

        if (sexo == 'F' || sexo == 'f') {
            totalMulheres++;
            somaAltF += altura;
        } else if (sexo == 'M' || sexo == 'm') {
            totalHomens++;
        }
    }

    if (totalMulheres > 0) {
        mediaAltF = (float)somaAltF / totalMulheres;
    }

    printf("A maior altura cadastrada foi %icm e a menor altura foi %icm\n", maior, menor);
    printf("A media de altura das mulheres foi %.2fcm\n", mediaAltF);
    printf("O numero de homens entrevistados foi %i\n", totalHomens);

    return 0;
}