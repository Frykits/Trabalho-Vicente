#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char instrucao[100];
    int operando1, operando2;
    char operacao;

    while (1) {
        printf("Digite a instrução (ou 'sair' para encerrar): ");
        fgets(instrucao, sizeof(instrucao), stdin);

        if (strcmp(instrucao, "sair\n") == 0) {
            break; // Encerra o loop quando "sair" é inserido.
        }

        if (sscanf(instrucao, "%d %c %d", &operando1, &operacao, &operando2) == 3) {
            int resultado;
            switch (operacao) {
                case '+':
                    resultado = operando1 + operando2;
                    break;
                case '-':
                    resultado = operando1 - operando2;
                    break;
                case '*':
                    resultado = operando1 * operando2;
                    break;
                case '/':
                    if (operando2 != 0) {
                        resultado = operando1 / operando2;
                    } else {
                        printf("Erro: Divisão por zero.\n");
                        continue;
                    }
                    break;
                default:
                    printf("Erro: Operação inválida.\n");
                    continue;
            }
            printf("Resultado: %d\n", resultado);
        } else {
            printf("Erro: Formato da instrução inválido. Use 'operando operação operando'.\n");
        }
    }

    return 0;
}