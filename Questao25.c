#include <stdio.h>

int main() {
    int num;
    unsigned long long fatorial = 1;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Erro: Não é possível calcular o fatorial de um número negativo.\n");
    } else {
        for (int i = 1; i <= num; i++) {
            fatorial *= i;
        }
        printf("O fatorial de %d é %llu\n", num, fatorial);
    }

    return 0;
}