#include <stdio.h>

int main() {
    int num, soma_quadrados = 0, produto_cubos = 1;

    while (1) {
        printf("Digite um número (0 para sair): ");
        scanf("%d", &num);

        if (num == 0) {
            break;  // Sair do loop se o número for zero
        }

        if (num > 200) {
            printf("Número maior que 200: %d\n", num);
        }

        soma_quadrados += num * num;
        produto_cubos *= num * num * num;
    }

    printf("Soma dos quadrados: %d\n", soma_quadrados);
    printf("Produto dos cubos: %d\n", produto_cubos);

    return 0;
}
