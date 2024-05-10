#include <stdio.h>

int main() {

int a, b, tempa;

printf("leia os valores a e b e serao trocados:\n");
scanf("%i %i", &a, &b);

printf("valores de a e b: %i e %i\n", a, b);

tempa = a;

a = b;

printf("valor trocado de a = %i\n", a);

b = tempa;

printf("valor trocado de b = %i", b);

    return 0;
}