#include <stdio.h>
#include <math.h>

int main() {
    int n = 50;
    float S = 0; 

    printf("Numeros da soma:\n");

    for (int i = 1; i <= n; i++) {
        float termo = (2 * i - 1) / (float) i;
        S += termo;
        printf("%.2f", termo);
        if (i != n) {
            printf(" + ");
        } else {
            printf(" = ");
        }
    }

    printf("%.2f\n", S); 
    return 0;
}