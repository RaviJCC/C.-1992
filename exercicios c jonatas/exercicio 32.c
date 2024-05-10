#include <stdio.h>

int main() {
    int num, maior = 1, pos = 20;

    printf("Digite 20 numeros para saber o maior:\n ");

    for(int i = 1; i <= 20; i++) {
    printf("numeros restantes a digitar: %i : ", pos);    
    scanf("%i", &num);
    pos--;

    if (num > maior) {
        maior = num;

    } 
 
}

    printf("O maior numero digitado foi: %i\n", maior);

    return 0;
}