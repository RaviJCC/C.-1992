#include <stdio.h>

int main() {

int x = 1;
int y = 1;
int z;
int cont = 0;

do {
    z = x + y;
    printf("%i ", x);
    x = y;
    y = z;
    cont = cont + 1;

} while (cont < 15);


    return 0;
}