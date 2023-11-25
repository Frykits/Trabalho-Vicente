#include <stdio.h>
#include <math.h>

int main() {
    int n;
    double resultado;

    printf("n\tS(1 + 1/n)^n\n");

    for (n = 10; n <= 100000; n += 10) {
        resultado = pow(1 + 1.0 / n, n);
        printf("%d\t%.10lf\n", n, resultado);
    }

    return 0;
}
