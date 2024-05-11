int main() {
    int qtd;
    int num;
    int soma = 0;
    float media;  
    
    printf("Escolha a quantidade de numeros que serao usados:\n");
    scanf("%i", &qtd);

    printf("Escolha numeros inteiros positivos:\n");

    for (int inicio = 1; inicio <= qtd; inicio++) {
        scanf("%i", &num);
        if (num < 0) {
            printf("Numero digitado invalido\n");
            break; 
        } else {
            soma += num;
        }  
    }  

    printf("\nSoma dos numeros digitados: %i\n", soma);
    media = (float)soma / qtd;  
    printf("A media dos numeros digitados: %.2f\n", media); 

    return 0;
}