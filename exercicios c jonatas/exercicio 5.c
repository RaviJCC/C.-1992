#include <stdio.h>

int main() {

float x, pol;

printf("digite um valor em cm e recebera em polegadas\n");
scanf("%f", &x);

pol = x / 2.54;

printf("valor em polegadas: %.2f", pol);

    return 0;
}