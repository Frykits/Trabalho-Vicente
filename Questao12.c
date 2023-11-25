#include <stdio.h>

int main() {
    int numero;
    int soma_pares = 0;
    int produto_impares = 1;
    int soma_total = 0;

    while (1) {
        printf("Digite um número inteiro positivo (ou 0 para sair): ");
        scanf("%d", &numero);

        if (numero == 0) {
            break;
        }

        if (numero < 0) {
            printf("Número negativo. Por favor, digite um número positivo.\n");
            continue;
        }

        soma_total += numero;

        if (numero % 2 == 0) {
            soma_pares += numero;
        } else {
            produto_impares *= numero;
        }
    }

    printf("Soma dos números pares: %d\n", soma_pares);
    printf("Produto dos números ímpares: %d\n", produto_impares);
    printf("Soma de todos os números lidos: %d\n", soma_total);

    return 0;
}