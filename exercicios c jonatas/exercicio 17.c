#include <stdio.h>

int main() {

    int a, b;

    printf("Digite o primeiro numero A: ");
    scanf("%i", &a);

    printf("Digite o segundo numero B: ");
    scanf("%i", &b);

    if (a == b) {
        printf("Os numeros sao iguais.\n");
    } else if (a > b) {
            printf("A %i eh o maior numero e eles sao diferentes.\n", a);
        } else {
            printf("B %i eh o maior numero e eles sao diferentes.\n", b);
        }
    
    return 0;
}