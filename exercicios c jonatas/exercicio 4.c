#include <stdio.h>

int main() {

int a, b, resultado, opcao;

printf("escolha dois valores para operacao:\n");
scanf("%i %i", &a, &b);

printf("escolha uma opcao de operacao de 1 a 4: \nN1_soma\nN2_subtracao\nN3_multiplicacao\nN4_divisao\n");
scanf ("%i", &opcao);

switch (opcao) {
case 1: 
       resultado = a + b;
       printf("a soma eh %i", resultado);
    break;
case 2: 
        resultado = a - b;
        printf("a subtracao eh %i", resultado);
    break;
case 3:
        resultado = a * b;
        printf("a multiplicacao eh %i", resultado);
        break;
case 4: 
        if ( b == 0) {
        printf("nao eh possivel dividir por zero");
        break;
     } else 
        resultado = a / b;
        printf("a divisao eh %i", resultado);
        break;
default:
    printf("opcao invalida");
}


    return 0;
}