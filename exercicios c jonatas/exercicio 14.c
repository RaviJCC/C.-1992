#include <stdio.h>

int main() {

int a;

printf("digite um valor\n");
scanf("%i", &a);

if (a < 0) {
    printf("o valor eh negativo");
} else {
    printf("valor positivo");
}

    return 0;
}