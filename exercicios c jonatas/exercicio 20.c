#include <stdio.h>

int main() {
    int num1, num2, num3, temp;

    printf("Digite o primeiro numero: ");
    scanf("%i", &num1);

    printf("Digite o segundo numero: ");
    scanf("%i", &num2);

    printf("Digite o terceiro numero: ");   
    scanf("%i", &num3);

     if (num1 > num2) {
        temp = num1;
        num1 = num2;
        num2 = temp;
    }

    if (num2 > num3) {
        temp = num2;
        num2 = num3;
        num3 = temp;
    }

    if (num1 > num2) {
        temp = num1;
        num1 = num2;
        num2 = temp;
    }

    printf("Os numeros em ordem crescente sao: %i, %i, %i\n", num1, num2, num3);

    return 0;
}