#include <stdio.h>

int main() {
    int numero, menor = 0;
    int soma_maiores_10 = 0;
    long long produto_maiores_200 = 1; // Usamos long long para evitar estouro

    while (1) {
        printf("Digite um número (ou 0 para sair): ");
        scanf("%d", &numero);

        if (numero == 0) {
            break;
        }

        if (numero < menor || menor == 0) {
            menor = numero;
        }

        if (numero > 10) {
            soma_maiores_10 += numero;
        }

        if (numero > 200) {
            produto_maiores_200 *= numero;
        }
    }

    if (menor != 0) {
        printf("O menor número lido é: %d\n", menor);
    } else {
        printf("Nenhum número foi lido.\n");
    }

    printf("Soma dos números maiores que 10: %d\n", soma_maiores_10);
    printf("Produto dos números maiores que 200: %lld\n", produto_maiores_200);

    return 0;
}