#include <stdio.h>

int main() {
    int numero;
    int soma = 0;
    int produto = 1;

    while (1) {
        printf("Digite um número (0 para encerrar): ");
        scanf("%d", &numero);

        if (numero == 0) {
            break;
        }

        if (numero > 2 && numero < 100 && numero != 10 && numero != 20 && numero != 32) {
            soma += numero;
            produto *= numero;
        }
    }

    printf("Soma dos números atendendo às condições: %d\n", soma);
    printf("Produto de todos os números lidos: %d\n", produto);

    return 0;
}