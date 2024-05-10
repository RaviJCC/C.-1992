#include <stdio.h>
#include <math.h>

int main () {

int k, n, quadrado;

    printf("escolha um numero para ser elevado a uma potencia: k\n");
    scanf("%i", &k);

    printf("escolha uma potencia: n\n");
    scanf("%i", &n);

    quadrado = pow(k, n);

    printf("o numero: %i^%i = %i", k, n, quadrado);

    return 0;
}