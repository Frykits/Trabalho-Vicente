#include <stdio.h>

int main() {
    int matriz[3][3];
    int somaDiagonalSecundaria = 0;

    // Leitura dos elementos da matriz
    printf("Digite os elementos da matriz 3x3:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matriz[i][j]);
            if (i + j == 2) {
                somaDiagonalSecundaria += matriz[i][j];
            }
        }
    }

    // Impressão dos elementos exceto a diagonal principal
    printf("Elementos exceto a diagonal principal:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i != j) {
                printf("%d ", matriz[i][j]);
            } else {
                printf("  "); // Espaço em branco no lugar da diagonal principal
            }
        }
        printf("\n");
    }

    // Impressão da soma dos elementos da diagonal secundária
    printf("Soma dos elementos da diagonal secundária: %d\n", somaDiagonalSecundaria);

    return 0;
}