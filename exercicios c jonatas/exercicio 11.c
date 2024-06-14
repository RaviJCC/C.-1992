#include <stdio.h>

int main() {
    float valorCompra, valorPago, Troco;
    int notas200, notas100, notas50, notas25, notas10, notas5, notas2;
    int moedas1, moedas50, moedas25, moedas10, moedas5, moedas1Centavo;
    float trocoRestante;
    
    printf("digite o valor da compra\n ");
    scanf("%f", &valorCompra);
    printf("digite o valor pago pelo cliente\n ");
    scanf("%f", &valorPago);
    
    
    Troco = valorPago - valorCompra;
    trocoRestante = Troco;
    
    printf("moedas sobra: %.2f\n", trocoRestante);
    
    notas200 = Troco / 200;
    trocoRestante = trocoRestante - (notas200 * 200);
    
    notas100 = Troco / 100;
    trocoRestante = trocoRestante - (notas100 * 100);
    
    notas50 = Troco / 50;
    trocoRestante = trocoRestante - (notas50 * 50);
    
    notas25 = Troco / 25;
    trocoRestante = trocoRestante - (notas25 * 25);

    notas10 = Troco / 10;
    trocoRestante = trocoRestante - (notas10 * 10);

    notas5 = Troco / 5;
    trocoRestante = trocoRestante - (notas5 * 5);
    
    notas2 = Troco / 2;
    trocoRestante = trocoRestante - (notas2 * 2);

    moedas1 = Troco / 1;
    trocoRestante = trocoRestante - moedas1;

    trocoRestante = trocoRestante * 100;
    
    printf("moedas sobra: %.2f\n", trocoRestante);
    
    moedas50 = Troco / 50;
    trocoRestante = (int)trocoRestante % 50;
    
    moedas25 = Troco / 25;
    trocoRestante = (int)trocoRestante % 25;

    moedas10 = Troco / 10;
    trocoRestante = (int)trocoRestante % 10;

    moedas5 = Troco / 5;
    trocoRestante = (int)trocoRestante % 5;

    moedas1Centavo = trocoRestante;

    printf("troco\n:");
    printf("notas de 200: %d\n", notas200);
    printf("notas de 100: %d\n", notas100);
    printf("notas de 50: %d\n", notas50);
    printf("notas de 25: %d\n", notas25);
    printf("notas de 10: %d\n", notas10);
    printf("notas de 5: %d\n", notas5);
    printf("notas de 2: %d\n", notas2);
    printf("moedas de 1: %d\n", moedas1);
    printf("moedas de .50: %d\n", moedas50);
    printf("moedas de .25: %d\n", moedas25);
    printf("moedas de .10: %d\n", moedas10);
    printf("moedas de .5: %d\n", moedas5);
    printf("moedas de 0.01: %d\n", moedas1Centavo);
    
    
    return 0;
}
