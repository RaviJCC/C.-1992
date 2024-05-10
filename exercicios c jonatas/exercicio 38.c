#include <stdio.h>
#include <math.h>

int main() {
    int n = 20; 
    float S = 0; 
    float x;

    printf("Escolha o valor de X: (obs: deve ser um valor menor que 0 ou maior que 20) \n");
    scanf("%f", &x);

    printf("Numeros da soma:\n");
    
    for (int i = 1; i <= n; i++) {
            if(x > 0 && x < 20) {
            printf("valor invalido\n");
            break; }

        float termo = 1.0 / (x - i);
        S += termo;
        printf("%.2f", termo);
        if (i != n) {
              printf(" + ");
        }   else {
              printf(" = ");
            }
    }

    printf("%.2f\n", S); 
    return 0;
}