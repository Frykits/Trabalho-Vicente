#include <stdio.h>

int isPrime(int num) {
    if (num <= 1) {
        return 0; // 0 e 1 não são primos
    }
    
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; // O número não é primo
        }
    }

    return 1; // O número é primo
}

int main() {
    int numero;
    int quantidadeNumerosPrimos = 0;

    while (1) {
        printf("Digite um número (0 para encerrar): ");
        scanf("%d", &numero);

        if (numero == 0) {
            break;
        }

        if (isPrime(numero)) {
            printf("%d é um número primo.\n", numero);
            quantidadeNumerosPrimos++;
        } else {
            printf("%d não é um número primo.\n", numero);
        }
    }

    printf("Quantidade de números primos encontrados: %d\n", quantidadeNumerosPrimos);

    return 0;
}