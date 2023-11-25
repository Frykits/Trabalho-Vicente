#include <stdio.h>
#include <math.h>

int main() {
    int i;
    double termo, soma = 0, produto = 1;

    printf("a) Cada termo impar calculado em separado:\n");
    for (i = 1; i <= 8; i++) {
        termo = (pow(4, i) / (i - 5)) + pow(i, i);
        if (i % 2 == 1) {
            printf("Termo %d: %.2lf\n", i, termo);
        }
        soma += termo;
        produto *= termo;
    }

    printf("\nb) A diferenca entre cada termo e seu sucessor:\n");
    for (i = 1; i < 8; i++) {
        termo = (pow(4, i) / (i - 5)) + pow(i, i);
        double termo_sucessor = (pow(4, i + 1) / (i + 1 - 5)) + pow(i + 1, i + 1);
        printf("Diferenca entre Termo %d e Termo %d: %.2lf\n", i, i + 1, termo_sucessor - termo);
    }

    printf("\nc) O produto de todos os termos calculados: %.2lf\n", produto);
    printf("d) A soma de todos os termos calculados: %.2lf\n", soma);

    return 0;
}