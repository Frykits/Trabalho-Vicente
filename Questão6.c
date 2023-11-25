#include <stdio.h>

int main() {
    int numero;
    int ordem = 1; // Variável para rastrear a ordem de digitação
    int produto = 1;
    int soma_quadrados = 0;

    while (1) {
        printf("Digite um número (0 para encerrar): ");
        scanf("%d", &numero);

        if (numero == 0) {
            break;
        }

        if (numero == ordem) {
            produto *= numero;
        }

        soma_quadrados += numero * numero;
        ordem++;
    }

    printf("Produto dos números com valor igual à ordem de digitação: %d\n", produto);
    printf("Soma dos quadrados de todos os números lidos: %d\n", soma_quadrados);

    return 0;
}