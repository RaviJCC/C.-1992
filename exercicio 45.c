#include <stdio.h>

int main() {

    int resultado = 0;
    int num;

    printf("tabuada de um numero, escolha o numero:\n");
    scanf("%i", &num);

    for(int i = 1; i <= 10; i++) {
        resultado = num * i;
        printf("%i x %i = %i \n", num, i, resultado);

    }

    return 0;
}