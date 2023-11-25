#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Função para embaralhar o vetor
void shuffle(int *array, int n) {
    srand(time(NULL));

    // Inicializa o vetor com valores de 0 a n - 1
    for (int i = 0; i < n; i++) {
        array[i] = i;
    }

    // Embaralhamento
    for (int i = n - 1; i > 0; i--) {
        int j = rand() % (i + 1);
        // Troca array[i] e array[j]
        int temp = array[i];
        array[i] = array[j];
        array[j] = temp;
    }
}

int main() {
    int n = 52; // Número de elementos distintos
    int vetor[n];

    shuffle(vetor, n);

    // Exibe o vetor embaralhado
    printf("Vetor embaralhado:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", vetor[i]);
    }

    return 0;
}