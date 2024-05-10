#include <stdio.h>

int main() {
    int N;
    int soma = 0;

    printf("Soma dos numeros de 1 a N. Digite N: ");
    scanf("%i", &N);

    printf("numeros da soma:\n");

    for (int H = 1; H <= N; H++) {
        soma += H; 
        printf("%i", H);
            if(H != N) {
              printf(" + ");
            }   else {
                  printf(" = ");
                }
    }

    printf("%i\n", soma);

    return 0;
}