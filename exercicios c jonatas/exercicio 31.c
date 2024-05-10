#include <stdio.h>

int main() {
    
    float f;
    float c;

    printf("tabela de temperatura de fahrenheit para celsius :\n");

    for(f = 50; f <= 65; f++) {
    c = (5.0 / 9.0) * (f - 32);
    printf("%.2ff | %.2fc\n ", f, c);
    }

    return 0;
}