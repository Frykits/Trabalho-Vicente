#include <stdio.h>

int main() {
    int numero;

    while (1) {
        printf("Digite um número inteiro positivo (ou 0 para sair): ");
        scanf("%d", &numero);

        if (numero == 0) {
            break;
        }

        if (numero < 0) {
            printf("Número negativo. Por favor, digite um número positivo.\n");
            continue;
        }

        if (numero == 1) {
            printf("O número é ímpar.\n");
        } else {
            int eh_par = 0;
            int eh_impar = 0;

            while (numero >= 2) {
                numero -= 2;
                if (numero == 1) {
                    eh_impar = 1;
                    break;
                } else if (numero == 0) {
                    eh_par = 1;
                    break;
                }
            }

            if (eh_par) {
                printf("O número é par.\n");
            } else if (eh_impar) {
                printf("O número é ímpar.\n");
            }
        }
    }

    return 0;
}