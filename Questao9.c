#include <stdio.h>

int main() {
    char nome[100];
    int matricula;
    double nota1, nota2, nota3;
    double media_aluno;
    double media_turma = 0.0;
    int quantidade_alunos = 0;

    while (1) {
        printf("Digite o nome do aluno (ou '0' para sair): ");
        scanf("%s", nome);
        if (nome[0] == '0') {
            break;
        }

        printf("Digite a matrícula do aluno: ");
        scanf("%d", &matricula);

        printf("Digite as notas do aluno (nota1 nota2 nota3): ");
        scanf("%lf %lf %lf", &nota1, &nota2, &nota3);

        media_aluno = (nota1 + nota2 + nota3) / 3.0;
        printf("Nome: %s, Matrícula: %d\n", nome, matricula);
        printf("Notas: Nota1: %.2lf, Nota2: %.2lf, Nota3: %.2lf\n", nota1, nota2, nota3);
        printf("Média do aluno: %.2lf\n", media_aluno);

        if (media_aluno >= 7.0) {
            printf("Situação: Aprovado\n");
        } else {
            printf("Situação: Reprovado\n");
        }

        media_turma += media_aluno;
        quantidade_alunos++;
    }

    if (quantidade_alunos > 0) {
        double media_global = media_turma / quantidade_alunos;
        printf("Média de notas da turma: %.2lf\n", media_global);
        printf("Média global da turma: %.2lf\n", media_turma);
    } else {
        printf("Nenhum aluno inserido.\n");
    }

    return 0;
}