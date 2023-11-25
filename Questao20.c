#include <stdio.h>

int main() {
    int numeros[100];  // Uma matriz para armazenar os números (até 100 números)
    int num, i = 0;

    // Leitura da sequência de números
    do {
        printf("Digite um número (0 para sair): ");
        scanf("%d", &num);

        if (num != 0) {
            numeros[i] = num;
            i++;
        }
    } while (num != 0);

    // Imprimir números na ordem inversa da leitura
    printf("Números na ordem inversa da leitura: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d ", numeros[j]);
    }
    printf("\n");

    return 0;
}