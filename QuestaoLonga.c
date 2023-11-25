#include <stdio.h>

int main() {
    int numero;
    int soma_quadrados = 0;
    int produto_concomitante = 1;
    int count_concomitante = 0;
    int soma_maiores_20_menores_100 = 0;
    int count_maiores_20_menores_100 = 0;
    int produto_maiores_4 = 1;

    while (1) {
        printf("Digite um numero (0 ou 23 para sair): ");
        scanf("%d", &numero);

        if (numero == 0 || numero == 23) {
            break;
        }

        // a) soma dos quadrados dos numeros lidos
        if (numero < 20 || numero > 100){
            int quadrado = numero * numero;
            if(quadrado > 350){
                soma_quadrados += quadrado;
            }
        }

        if(numero != 6 && numero < 105 && numero > 65){
            produto_concomitante *= numero;
            count_concomitante++;
        }

        if(numero > 20 && numero < 100){
            soma_maiores_20_menores_100 += numero;
            count_maiores_20_menores_100++;
        }

        if(numero > 4){
            produto_maiores_4 *= numero;
        }

        if(numero > 23){
            printf("Quadrado de %d: %d\n", numero, numero * numero);
        }
    }

    printf("a) Soma dos quadrado: %d\n", soma_quadrados);
    if(count_concomitante > 0){
        printf("b) Produto concomitantemente: %d\n", produto_concomitante);
    }

    if(count_maiores_20_menores_100 > 0){
        printf("c) Media dos numeros maiores que 20 e menores que 100: %.2f\n", (float)soma_maiores_20_menores_100 / count_maiores_20_menores_100);
    }

    printf("d) Produto dos numeros maiores que 4: %d\n", produto_maiores_4);

    return 0;
}