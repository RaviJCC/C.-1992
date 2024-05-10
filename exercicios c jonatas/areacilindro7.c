#include <stdio.h>
#include <math.h>
#define PI 3.14159

float areatotal(float raio1, float H1) {

float areabas =  PI * raio1 * raio1;
float arealat = 2 * PI * raio1 * H1;

    ;return arealat + 2 * areabas;
}

float volumetotal(float raio2, float H2) {

 float volume = PI * raio2 * raio2 * H2;

    ;return volume;
}

int main() {

    float raio3, H3;

    printf("digite o raio do cilindro: ");
    scanf("%f", &raio3);

    printf("digite a altura do cilindro: ");
    scanf("%f", &H3);    

    float *ptr;

    ptr = &raio3;

    float area3 = areatotal(raio3, H3);
    
    float volume3 = volumetotal(raio3, H3);

    printf("a area do cilindro %.2f\n", area3);

    printf("o volume do cilindro %.2f\n", volume3);

    printf("Endereço de raio3: %p\n", &raio3);

    printf("Endereço de H3: %p\n", &H3);

    printf("valor de raio %.2f", *ptr);

    return 0;
}
