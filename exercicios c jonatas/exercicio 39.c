#include <stdio.h>

int main () {

    int x = 1, y = 1, z;
    int num;

    printf("escolha quantos numeros da sequencia de fibonnaci voce quer mostar\n");
    scanf("%i", &num);
    
    for(int i = 1; i <= num; i++) {
        z = x + y;
        printf("%i ", x);
        x = y;
        y = z;
    }
    return 0;
}