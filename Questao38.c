#include <stdio.h>

int main() {
    int dimensao;
    printf("Informe a dimensão da matriz tridimensional: ");
    scanf("%d", &dimensao);

    if (dimensao < 1) {
        printf("A dimensão da matriz deve ser pelo menos 1.\n");
        return 1;
    }

    int matriz[dimensao][dimensao][dimensao];

    // Preenche a matriz com valores para fins de exemplo
    int valor = 1;
    for (int i = 0; i < dimensao; i++) {
        for (int j = 0; j < dimensao; j++) {
            for (int k = 0; k < dimensao; k++) {
                matriz[i][j][k] = valor;
                valor++;
            }
        }
    }

    // Imprime a diagonal principal
    printf("Diagonal Principal:\n");
    for (int i = 0; i < dimensao; i++) {
        printf("%d ", matriz[i][i][i]);
    }
    printf("\n");

    // Calcula a soma dos elementos das arestas
    int somaArestas = 0;
    for (int i = 0; i < dimensao; i++) {
        for (int j = 0; j < dimensao; j++) {
            for (int k = 0; k < dimensao; k++) {
                if (i == 0 || j == 0 || k == 0 || i == dimensao - 1 || j == dimensao - 1 || k == dimensao - 1) {
                    somaArestas += matriz[i][j][k];
                }
            }
        }
    }

    // Imprime a soma dos elementos das arestas
    printf("Soma dos elementos das arestas: %d\n", somaArestas);

    return 0;
}