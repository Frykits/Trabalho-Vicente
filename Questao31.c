#include <stdio.h>
#include <math.h>

int main() {
    int array[] = {2, 4, 35, 50, 23, 17, 9, 12, 27, 5, 14, 2, 3, 4, 1, 2, 5, 6, 8, 9};
    int tamanho = sizeof(array) / sizeof(array[0]);

    // 1) Encontre o maior valor no array
    int maior = array[0];
    for (int i = 1; i < tamanho; i++) {
        if (array[i] > maior) {
            maior = array[i];
        }
    }
    printf("Maior valor: %d\n", maior);

    // 2) Calcule a média dos valores
    int soma = 0;
    for (int i = 0; i < tamanho; i++) {
        soma += array[i];
    }
    float media = (float)soma / tamanho;
    printf("Média dos valores: %.2f\n", media);

    // 3) Encontre e imprima o subconjunto de valores primos
    printf("Subconjunto de valores primos: ");
    for (int i = 0; i < tamanho; i++) {
        int valor = array[i];
        int primo = 1; // Assume que o valor é primo até que seja provado o contrário
        if (valor <= 1) {
            primo = 0; // 0 e 1 não são primos
        } else {
            for (int j = 2; j * j <= valor; j++) {
                if (valor % j == 0) {
                    primo = 0;
                    break;
                }
            }
        }
        if (primo) {
            printf("%d ", valor);
        }
    }
    printf("\n");

    // 4) Calcule a média ponderada do array com base no seu endereço
    float mediaPonderada = 0.0;
    for (int i = 0; i < tamanho; i++) {
        mediaPonderada += (float)(i + 1) * array[i];
    }
    mediaPonderada /= (float)tamanho;
    printf("Média ponderada: %.2f\n", mediaPonderada);

    // 5) Normalize todos os elementos pelo maior número
    printf("Array normalizado pelo maior número: ");
    for (int i = 0; i < tamanho; i++) {
        float valorNormalizado = (float)array[i] / maior;
        printf("%.2f ", valorNormalizado);
    }
    printf("\n");

    return 0;
}
