#include <stdio.h>

int main() {
    char sexo;
    int altura, peso;
    float imc;

    printf("Digite seu sexo com o caractere M ou F: ");
    scanf(" %c", &sexo);

    printf("Digite sua altura em centimetros: ");
    scanf("%i", &altura);

    printf("Digite seu peso em quilogramas: ");
    scanf("%i", &peso);

    if (sexo == 'M' || sexo == 'm') {
        imc = (float) peso / ((altura / 100.0) * (altura / 100.0));
    } else if (sexo == 'F' || sexo == 'f') {
        imc = (float) peso / ((altura / 100.0) * (altura / 100.0));
    } else {
        printf("Sexo invalido.\n");
        return 1;
    }

    printf("Seu IMC eh: %.2f\n", imc);

    return 0;
}