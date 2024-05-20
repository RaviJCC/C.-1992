#include <stdio.h>
#include <stdlib.h>

int main() {
    int v1[10] = {4, 6, 2, 1, 7, 8, 22, 12, 116, 7};
    int v2[10] = {32, 3, 44, 11, 125, 51, 3, 6, 99, 26};
    int v3[10];

    for (int i = 0; i < 10; i++) {
        v3[i] = v1[i] + v2[i];
        printf("%i ", v3[i]);
    }

    return 0;
}