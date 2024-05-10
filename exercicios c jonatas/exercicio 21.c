#include <stdio.h>

int main() {
    int a, b, c;

    printf("Informe os valores de a, b e c respectivamente: ");
    scanf("%i %i %i", &a, &b, &c);

    if (a < b + c && b < a + c && c < a + b) {
        printf("Os lados formam um triangulo.\n");

        if (a == b && b == c) {
            printf("O triangulo eh equilatero, possui tres lados iguais.\n");
        } else if (a == b || b == c || a == c) {
            printf("O triangulo eh isoscele, possui dois lados iguais.\n");
        } else {
            printf("O triangulo eh escaleno, possui tres lados diferentes.\n");
        }
    } else {
        printf("Os lados nao formam um triangulo.\n");
    }

    return 0;
}