#include <stdio.h>

int main() {
    int numero;
    int quantidadeMaiorQue100 = 0;
    int quantidadeMenorQue10 = 0;
    int quantidadeIgual20403040 = 0;
    int totalNumerosLidos = 0;

    while (1) {
        printf("Digite um número (0 para encerrar): ");
        scanf("%d", &numero);

        if (numero == 0) {
            break;
        }

        totalNumerosLidos++;

        if (numero > 100) {
            quantidadeMaiorQue100++;
            printf("%d é maior que 100.\n", numero);
        } else if (numero < 10) {
            quantidadeMenorQue10++;
            printf("%d é menor que 10.\n", numero);
        } else if (numero == 20 || numero == 30 || numero == 40) {
            quantidadeIgual20403040++;
            printf("%d é igual a 20, 30 ou 40.\n", numero);
        }
    }

    printf("Total de números lidos: %d\n", totalNumerosLidos);
    printf("Quantidade de números maiores que 100: %d\n", quantidadeMaiorQue100);
    printf("Quantidade de números menores que 10: %d\n", quantidadeMenorQue10);
    printf("Quantidade de números iguais a 20, 30 ou 40: %d\n", quantidadeIgual20403040);

    return 0;
}