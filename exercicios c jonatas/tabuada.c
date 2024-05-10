#include <stdio.h>
#include <math.h>

int main(){

    int resultado = 0;

    for(int num = 1; num <= 10; num++) {
        printf("tabuada do: %i\n\n", num);
        for(int i = 1; i <= 10; i++) {
            resultado = num * i;
            printf("%i x %i = %i\n", num, i, resultado);
        }
         printf("\n");
    }   

    return 0;
}