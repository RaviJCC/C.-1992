#include <stdio.h>

int main() {

    int resultado = 0;
    int num = 7;

    printf("tabuada do 7\n");

    for(int i = 1; i <= 10; i++) {
        resultado = num * i;
        printf("%i x %i = %i \n", num, i, resultado);

    }

    return 0;
}