#include <stdio.h>

int main() {
    int m, n;
    printf("Informe as dimensões das matrizes (m x n): ");
    scanf("%d %d", &m, &n);

    if (m > 5 || n > 5) {
        printf("As dimensões das matrizes não podem ser maiores que 5x5.\n");
        return 1;
    }

    int matrizA[5][5], matrizB[5][5];
    int somaDiagonalA = 0, somaDiagonalB = 0;

    printf("Informe os elementos da matriz A:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrizA[i][j]);
            if (i == j) {
                somaDiagonalA += matrizA[i][j];
            }
        }
    }

    printf("Informe os elementos da matriz B:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrizB[i][j]);
            if (i == j) {
                somaDiagonalB += matrizB[i][j];
            }
        }
    }

    // Soma das duas matrizes
    int matrizSoma[5][5];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            matrizSoma[i][j] = matrizA[i][j] + matrizB[i][j];
        }
    }

    // Multiplicação das duas matrizes
    int matrizProduto[5][5];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            matrizProduto[i][j] = 0;
            for (int k = 0; k < n; k++) {
                matrizProduto[i][j] += matrizA[i][k] * matrizB[k][j];
            }
        }
    }

    // Imprimir a matriz soma
    printf("Matriz Soma:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrizSoma[i][j]);
        }
        printf("\n");
    }

    // Imprimir a soma das diagonais de ambas as matrizes
    printf("Soma das diagonais de A: %d\n", somaDiagonalA);
    printf("Soma das diagonais de B: %d\n", somaDiagonalB);

    // Imprimir a matriz produto
    printf("Matriz Produto:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrizProduto[i][j]);
        }
        printf("\n");
    }

    return 0;