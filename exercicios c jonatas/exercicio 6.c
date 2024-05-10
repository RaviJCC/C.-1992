#include <stdio.h>
#define PI 3.14

int main() {

float raio, areacirc;

printf("digite o valor do raio do ciruclo ");
scanf("%f", &raio);

areacirc = PI * raio * raio;

printf("a area eh %.2f", areacirc);

    return 0;
}