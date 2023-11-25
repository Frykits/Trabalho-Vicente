#include <stdio.h>

int main() {
    int numero;
    int soma_50_150 = 0;
    int produto_5_70 = 1;
    int soma_quadrados_16 = 0;
    int produto_20_30 = 1;
    int quantidade_numeros = 0;
    int total_numeros = 0;
    double media = 0;

    while (1) {
        printf("Digite um número (0, 14 ou 99 para encerrar): ");
        scanf("%d", &numero);

        if (numero == 0 || numero == 14 || numero == 99) {
            break;
        }

        if (numero > 50 && numero < 150) {
            soma_50_150 += numero;
        }

        if (numero != 10 && numero > 5 && numero < 70) {
            produto_5_70 *= numero;
        }

        if (numero > 20 && numero < 30) {
            produto_20_30 *= numero;
        }

        if (numero > 16) {
            soma_quadrados_16 += numero * numero;
        }

        quantidade_numeros++;
        total_numeros += numero;
    }

    if (quantidade_numeros != 0) {
        media = (double)total_numeros / quantidade_numeros;
    }

    printf("Soma dos números entre 50 e 150: %d\n", soma_50_150);
    printf("Produto dos números diferentes de 10, entre 5 e 70: %d\n", produto_5_70);
    printf("Média dos números lidos: %.2lf\n", media);
    printf("Produto dos números entre 20 e 30: %d\n", produto_20_30);
    printf("Soma dos quadrados dos números maiores que 16: %d\n", soma_quadrados_16);

    return 0;
}