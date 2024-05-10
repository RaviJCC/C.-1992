#include <stdio.h>

int main() {

int a, num;

printf("escolha o valor de a e sabera o seu antecessor e sucessor\n");
scanf("%i", &a);

num = a + 1;

printf("sucessor: %i \n", num);

num = a - 1;

printf("antecessor: %i \n", num);


    return 0;
}