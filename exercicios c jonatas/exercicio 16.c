#include <stdio.h>

int main() {

int a;

printf("digite um valor\n");
scanf("%i", &a);

if (a < 0) {
    printf("o valor eh negativo: ");
    printf("%i", a);
} else {
    printf("valor positivo: ");
    printf("%i", a);
}

    return 0;
}