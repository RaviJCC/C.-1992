#include <stdio.h>

int main() {

float media, mediaDois, totalmedia, somaMedia;

media = (7 + 8 + 9) / 3;

printf("a primeira media eh: %.2f\n", media);

mediaDois = (4 + 5 + 6) / 3;

printf("a segunda media eh: %.2f\n", mediaDois);

somaMedia = media + mediaDois;

printf("a soma das medias eh: %.2f\n", somaMedia);

totalmedia = (media + mediaDois) / 2;

printf("a media das medias eh: %.2f\n", totalmedia);

    return 0;
}