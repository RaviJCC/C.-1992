int main() {
    int num;
    int contadorFora = 0;
    int contadorDentro =0;

    printf("Escolha valores de 0 a 50:\n");

    for (int inicio = 1; inicio <= 10; inicio++) {
        scanf("%i", &num);

        if (num < 10 || num > 50) {
            printf("numero fora do intervalo: %i\n", num);
            contadorFora++;
        } else {
            printf("numero dentro do intervalo: %i\n", num);
            contadorDentro++;
        }
    }

    printf("Total de numeros dentro do intervalo: %i\n", contadorDentro);
    printf("Total de numeros fora do intervalo: %i\n", contadorFora);

    return 0;
}