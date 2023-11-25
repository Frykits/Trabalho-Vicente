#include <stdio.h>

int main() {
    double totalGasto;
    int opcaoPagamento;

    printf("Digite o total gasto pelo cliente: R$ ");
    scanf("%lf", &totalGasto);

    printf("Opções de pagamento:\n");
    printf("1) À vista com 10%% de desconto\n");
    printf("2) Em duas vezes (preço de etiqueta)\n");
    printf("3) De 3 até 10 vezes com 3%% de juros ao mês (somente em compras acima de R$ 100)\n");
    printf("Escolha a opção de pagamento (1/2/3): ");
    scanf("%d", &opcaoPagamento);

    double valorTotalPrestacoes;

    switch (opcaoPagamento) {
        case 1:
            valorTotalPrestacoes = totalGasto * 0.9; // 10% de desconto
            printf("O valor total com 10%% de desconto é: R$ %.2lf\n", valorTotalPrestacoes);
            break;
        case 2:
            valorTotalPrestacoes = totalGasto; // Preço de etiqueta em duas vezes
            printf("O valor total em duas vezes é: R$ %.2lf\n", valorTotalPrestacoes);
            break;
        case 3:
            if (totalGasto > 100) {
                int numeroParcelas;
                printf("Quantas parcelas (3 a 10): ");
                scanf("%d", &numeroParcelas);

                if (numeroParcelas >= 3 && numeroParcelas <= 10) {
                    double taxaJuros = 0.03; // 3% de juros ao mês
                    valorTotalPrestacoes = totalGasto * pow(1 + taxaJuros, numeroParcelas);
                    valorTotalPrestacoes /= numeroParcelas;
                    printf("O valor total em %d parcelas com 3%% de juros ao mês é: R$ %.2lf\n", numeroParcelas, valorTotalPrestacoes);
                } else {
                    printf("Número de parcelas inválido.\n");
                }
            } else {
                printf("Opção de parcelamento indisponível para compras abaixo de R$ 100.\n");
            }
            break;
        default:
            printf("Opção de pagamento inválida.\n");
            break;
    }

    return 0;
}
