int main() {
    int num;
    int contador = 0;

    for (int inicio = 1; inicio <= 10; inicio++) {
        printf("Escolha uma idade de 0 a 100:\n");
        scanf("%i", &num);

        if (num < 0 || num > 100) {
            printf("Idade invalida.\n");
            break;
        }

        if (num < 18) {
            printf("Idade menor que a maioridade: %i\n", num);
        } else {
            printf("Idade maior que a maioridade: %i\n", num);
            contador++;
        }
    }

    printf("Total de pessoas maior de idade: %i\n", contador);
    return 0;
}