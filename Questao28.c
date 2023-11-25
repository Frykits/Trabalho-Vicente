#include <stdio.h>

int main() {
    float matriz[5][3];
    float matrizTransposta[3][5];
    float soma = 0;

    // Leitura dos valores para a matriz
    printf("Digite os valores da matriz 5x3:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%f", &matriz[i][j]);
            soma += matriz[i][j];
        }
    }

    // Cálculo da média
    float media = soma / (5 * 3);

    // Cálculo da matriz transposta e a matriz com valores somados à média
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 3; j++) {
            matrizTransposta[j][i] = matriz[i][j];
            matriz[i][j] += media;
        }
    }

    // Impressão da matriz original
    printf("Matriz original:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%.2f\t", matriz[i][j]);
        }
        printf("\n");
    }

    // Impressão da matriz transposta
    printf("Matriz transposta:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%.2f\t", matrizTransposta[i][j]);
        }
        printf("\n");
    }

    // Impressão da soma de todos os elementos
    printf("Soma de todos os elementos da matriz: %.2f\n", soma);

    return 0;
}
