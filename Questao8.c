#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    int soma_raizes_count = 0;
    int produto_raizes_count = 0;
    int raizes_complexas = 0;

    while (1) {
        printf("Digite os coeficientes a, b e c (ou 0 0 0 para sair): ");
        scanf("%lf %lf %lf", &a, &b, &c);

        if (a == 0 && b == 0 && c == 0) {
            break;
        }

        double discriminante = b * b - 4 * a * c;

        if (discriminante > 0) {
            double raiz1 = (-b + sqrt(discriminante)) / (2 * a);
            double raiz2 = (-b - sqrt(discriminante)) / (2 * a);

            if (raiz1 > 5 && raiz1 < 10 && raiz2 > 5 && raiz2 < 10) {
                printf("Soma das raízes: %lf\n", raiz1 + raiz2);
                soma_raizes_count++;
            }

            if (raiz1 < 2 && raiz2 < 2) {
                printf("Produto das raízes: %lf\n", raiz1 * raiz2);
                produto_raizes_count++;
            }
        } else if (discriminante == 0) {
            double raiz = -b / (2 * a);

            if (raiz > 5 && raiz < 10) {
                printf("Soma das raízes: %lf\n", raiz + raiz);
                soma_raizes_count++;
            }

            raizes_complexas++;
        } else {
            raizes_complexas++;
        }
    }

    printf("Quantidade de raízes com soma entre 5 e 10: %d\n", soma_raizes_count);
    printf("Quantidade de raízes com produto menor que 2: %d\n", produto_raizes_count);
    printf("Quantidade de raízes complexas: %d\n", raizes_complexas);

    return 0;
}