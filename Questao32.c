#include <stdio.h>

int main() {
    int numeros[100]; // Array para armazenar números fornecidos pelo usuário
    int pares[100];   // Array para armazenar números pares
    int impares[100]; // Array para armazenar números ímpares
    int num_numeros = 0; // Número de números fornecidos pelo usuário
    int num_pares = 0;   // Número de números pares
    int num_impares = 0; // Número de números ímpares

    printf("Digite números inteiros positivos (0 para encerrar a entrada):\n");

    // Ler números e separá-los em pares e ímpares
    while (1) {
        int numero;
        scanf("%d", &numero);

        if (numero == 0) {
            break; // Encerra a entrada quando 0 é fornecido
        }

        numeros[num_numeros] = numero;
        num_numeros++;

        if (numero % 2 == 0) {
            pares[num_pares] = numero;
            num_pares++;
        } else {
            impares[num_impares] = numero;
            num_impares++;
        }
    }

    printf("Array de números inteiros positivos fornecidos: ");
    for (int i = 0; i < num_numeros; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    printf("Array de números pares: ");
    for (int i = 0; i < num_pares; i++) {
        printf("%d ", pares[i]);
    }
    printf("\n");

    printf("Array de números ímpares: ");
    for (int i = 0; i < num_impares; i++) {
        printf("%d ", impares[i]);
    }
    printf("\n");

    return 0;
}
