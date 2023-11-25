#include <stdio.h>

int main() {
    int matricula;
    char nome[100];
    double horas_trabalhadas;
    double valor_hora = 35.00;
    double salario_bruto, salario_liquido;
    double inss_contribuicao = 8.5;  // 8.5% de contribuição INSS
    double sindicato_contribuicao = 1.02;  // 1.02% de contribuição sindical
    double plano_saude = 6.0;  // 6% de desconto de plano de saúde
    double total_folha = 0.0;
    double total_contribuicoes = 0.0;

    while (1) {
        printf("Digite a matrícula do funcionário (ou 0 para sair): ");
        scanf("%d", &matricula);

        if (matricula == 0) {
            break;
        }

        printf("Digite o nome do funcionário: ");
        scanf("%s", nome);

        printf("Digite o total de horas trabalhadas: ");
        scanf("%lf", &horas_trabalhadas);

        salario_bruto = horas_trabalhadas * valor_hora;
        total_contribuicoes += (salario_bruto * inss_contribuicao / 100) + (salario_bruto * sindicato_contribuicao / 100);
        salario_liquido = salario_bruto - (salario_bruto * (inss_contribuicao / 100)) - (salario_bruto * (plano_saude / 100));

        printf("Nome: %s\n", nome);
        printf("Matrícula: %d\n", matricula);
        printf("Salário Bruto: R$%.2lf\n", salario_bruto);
        printf("Salário Líquido: R$%.2lf\n", salario_liquido);
        printf("Contribuição INSS: R$%.2lf\n", salario_bruto * (inss_contribuicao / 100));
        printf("Contribuição Sindicato: R$%.2lf\n", salario_bruto * (sindicato_contribuicao / 100));
        printf("Desconto Plano de Saúde: R$%.2lf\n", salario_bruto * (plano_saude / 100));
        printf("\n");

        total_folha += salario_liquido;
    }

    printf("Total da folha de pagamento: R$%.2lf\n", total_folha);
    printf("Total das contribuições: R$%.2lf\n", total_contribuicoes);

    return 0;
}