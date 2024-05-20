#include <stdio.h>
#include <stdlib.h>

int somavetor(int v[], int n) {
    int soma = 0;
    for (int i = 0; i < n; i++) {
         soma = soma + v[i];
    }
    return soma;
 }
int main() {
    int u[] = {2, 6, 4, 5, 3, 8, 11, 14, 1, 22};
    somavetor(u, 10);
    int resultado = somavetor(u, 10);
    printf("o resultado eh %i\n", resultado);

    return 0;
}