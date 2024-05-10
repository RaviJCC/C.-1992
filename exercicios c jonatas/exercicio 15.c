#include <stdio.h>

int main() {

int num;

printf("digite um numero para saber se eh par ou impar\n");
scanf("%i", &num);

if (num % 2 == 0) {
    printf("numero eh par");
} else {
    printf("numero eh impar");
}

    return 0;
}