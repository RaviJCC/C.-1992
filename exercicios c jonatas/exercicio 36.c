#include <stdio.h>
#include <math.h>

int main() {
    int n = 10; 
    float S = 0; 

    printf("Numeros da soma:\n");

    for (int i = 1; i <= n; i++) {
        float termo = 1.0 / i;
        S += termo;
        printf("%f", termo);
        if (i != n) {
            printf(" + ");
        } else {
            printf(" = ");
        }
    }

    printf("%.2f\n", S); 
    return 0;
}