#include <stdio.h>

int main() {
    int num1, num2, num3, maior = 1;

    printf("Digite o primeiro numero: ");
    scanf("%i", &num1);

    printf("Digite o segundo numero: ");
    scanf("%i", &num2);

    printf("Digite o terceiro numero: ");   
    scanf("%i", &num3);

    if (num1 > maior) {
        maior = num1;

    } if (num2 > maior) {
        maior = num2;

    } if (num3 > maior) {
        maior = num3;
    }

    printf("O maior numero digitado foi: %i\n", maior);

    return 0;
}