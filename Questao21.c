#include <stdio.h>
#include <stdlib.h>

int comparacao(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main() {
    int numeros[100];  // Suponha que a sequência tenha no máximo 100 números
    int numero;
    int i = 0;

    printf("Digite uma sequência de números (0 para terminar):\n");

    // Lê os números até encontrar 0 ou atingir o limite
    do {
        scanf("%d", &numero);
        numeros[i] = numero;
        i++;
    } while (numero != 0 && i < 100);

    if (i == 1) {
        printf("Apenas um número lido: %d\n", numeros[0]);
        return 0;
    }

    // Ordena os números em ordem crescente
    qsort(numeros, i, sizeof(int), comparacao);

    printf("Números em ordem crescente:\n");
    for (int j = 0; j < i; j++) {
        printf("%d ", numeros[j]);
    }
    printf("\n");

    printf("Números em ordem decrescente:\n");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d ", numeros[j]);
    }
    printf("\n");

    return 0;
}
