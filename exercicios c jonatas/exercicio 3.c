#include <stdio.h>

int main() {

int x, y, quociente, resto;

printf("escolha o dividendo:\n");
scanf("%i", &x);

printf("escolha o divisor:\n");
scanf("%i", &y);

quociente = x / y;

printf("este eh o quociente: %i \n", quociente);

resto = x % y;

printf("este eh o resto: %i \n", resto);


    return 0;
}