#include <stdio.h>

int main() {
   
   float preco, maca, qtd;

    printf("diga a quantidade de macas que deseja: ");
    scanf("%f", &qtd);

    if(qtd < 12) {
        preco = 0.30;
        maca = preco * qtd;
        printf("a quantidade de macas compradas foi: %.2f e o preco total foi %.2f ", qtd, maca);
    } else if (qtd >= 12) {
        preco = 0.25;
        maca = preco * qtd;
        printf("a quantidade de macas compradas foi: %.2f e o preco total foi %.2f ", qtd, maca);
    }

    return 0;
}