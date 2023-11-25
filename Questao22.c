#include <stdio.h>

int main() {
    int numeros[100];  // Suponha que a sequência tenha no máximo 100 números
    int numero;
    int i = 0;
    int soma = 0;

    printf("Digite uma sequência de números (0 para terminar):\n");

    // Lê os números e calcula a soma
    do {
        scanf("%d", &numero);
        if (numero != 0) {
            numeros[i] = numero;
            soma += numero;
            i++;
        }
    } while (numero != 0 && i < 100);

    if (i == 0) {
        printf("Nenhum número foi lido. Encerrando o programa.\n");
        return 0;
    }

    // Calcula a média
    double media = (double)soma / i;

    printf("Soma de cada número com a média:\n");
    for (int j = 0; j < i; j++) {
        printf("%d + %.2lf = %.2lf\n", numeros[j], media, numeros[j] + media);
    }

    return 0;
}
