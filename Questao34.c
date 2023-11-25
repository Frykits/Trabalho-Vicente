#include <stdio.h>

int main() {
    float velocidade[60]; // Vetor com os dados de velocidade
    int i;
    float maiorTempoVelocidadeConstante = 0;
    float maiorTempoSemDiminuirVelocidade = 0;
    float instanteFrenagemAbrupta = -1;
    float maiorAceleracao = 0;
    float tempoAceleracao = -1;
    int tempoVelocidadeConstante = 0;
    int tempoSemDiminuirVelocidade = 0;

    printf("Digite os dados de velocidade para 60 segundos:\n");
    for (i = 0; i < 60; i++) {
        printf("Velocidade no segundo %d: ", i + 1);
        scanf("%f", &velocidade[i]);
    }

    for (i = 0; i < 59; i++) {
        if (velocidade[i] == velocidade[i + 1]) {
            tempoVelocidadeConstante++;
        } else {
            if (tempoVelocidadeConstante > maiorTempoVelocidadeConstante) {
                maiorTempoVelocidadeConstante = tempoVelocidadeConstante;
            }
            tempoVelocidadeConstante = 0;
        }

        if (velocidade[i] <= velocidade[i + 1]) {
            float aceleracao = velocidade[i + 1] - velocidade[i];
            if (aceleracao > maiorAceleracao) {
                maiorAceleracao = aceleracao;
                tempoAceleracao = i;
            }
        }

        if (velocidade[i] > velocidade[i + 1]) {
            tempoSemDiminuirVelocidade++;
            if (tempoSemDiminuirVelocidade > maiorTempoSemDiminuirVelocidade) {
                maiorTempoSemDiminuirVelocidade = tempoSemDiminuirVelocidade;
                instanteFrenagemAbrupta = i + 1;
            }
        } else {
            tempoSemDiminuirVelocidade = 0;
        }
    }

    printf("Maior período de tempo em que o veículo se deslocou com velocidade constante: %.0f segundos.\n", maiorTempoVelocidadeConstante + 1);
    printf("Instante de tempo em que o veículo iniciou a frenagem mais abrupta: %.0f segundos.\n", instanteFrenagemAbrupta);
    printf("Maior aceleração positiva: %.2f m/s². Iniciou-se no segundo %.0f.\n", maiorAceleracao, tempoAceleracao + 1);
    printf("Maior período de tempo em que o veículo se deslocou sem diminuir a velocidade: %.0f segundos.\n", maiorTempoSemDiminuirVelocidade + 1);

    return 0;
}