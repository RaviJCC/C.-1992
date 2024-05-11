#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int fatorial = 1;
    int num;

    printf("escolha o numero e tera o fatorial ");
    scanf("%i", &num);

    if (num < 0) {
        printf("fatorial inexistente");
    }else if(num == 0) {
        printf("%i", fatorial);
    }else {
        for(int i = 1; i <= num; i++) {
        fatorial = fatorial * i;
        }
        printf("%i", fatorial);
    }
    
    return 0;
}