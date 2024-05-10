#include <stdio.h>
#include <math.h>

int main () {

int k, n, quadrado;

    printf("escolha um numero para ser elevado n potencias: k\n");
    scanf("%i", &k);

    printf("escolha ate que potencia quer elevar: n\n");
    scanf("%i", &n);

    for(int i = 1; i <= n; i++) {
    quadrado = pow(k, i);
    printf("o numero: %i^%i = %i\n", k, i, quadrado);
   }


    return 0;
}