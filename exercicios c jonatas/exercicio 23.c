#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main () {

float a, b, c, delta, x1, x2;

printf("escolha o valor de a:");
scanf("%f", &a);
printf("escolha o valor de b:");
scanf("%f", &b);
printf("escolha o valor de c:");
scanf("%f", &c);

delta = b * b -4 * a * c;

    if(delta < 0) {
        printf("delta negativo nao possivel continuar.");
    } else if (delta == 0) {

        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);

    printf("x1 e x2 sao iguais %.2f %.2f ", x1, x2);
    
    } else if (delta > 0) {

        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);

    printf("as raizes de x1 e x2 sao diferentes: %.2f %.2f ", x1, x2);

    }

    return 0;
}