#include <stdio.h>

int main() {
    float massaInicial, massaFinal = 0.5;
    int tempo = 0;

    printf("Digite a massa inicial em gramas de um elemento: ");
    scanf("%f", &massaInicial);
    printf("Massa inicial: %.2f gramas\n", massaInicial);

    while (massaInicial > massaFinal) {
        massaInicial /= 2; 
        tempo += 50;  
    }
    
    printf("Massa final do elemento: %.2f gramas\n", massaInicial);
    printf("Tempo necessario: %i segundos\n", tempo);

    return 0;
}