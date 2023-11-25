#include <stdio.h>

int main() {
    int numero;
    int soma = 0;
    int quantidadeNumerosLidos = 0;

    while (1) {
        printf("Digite um número (0 para encerrar): ");
        scanf("%d", &numero);

        if (numero == 0) {
            break;
        }

        quantidadeNumerosLidos++;
        soma += numero;
    }

    printf("Total de números lidos: %d\n", quantidadeNumerosLidos);
    printf("Soma dos números lidos: %d\n", soma);

    return 0;
}