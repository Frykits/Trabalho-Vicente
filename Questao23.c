#include <stdio.h>

int main() {
    int i, j;

    for (i = 1; i <= 9; i++) {
        for (j = 1; j <= 10; j++) {
            printf("%d x %d = %d\n", i, j, i * j);
        }
        printf("\n");  // Adiciona uma linha em branco entre as tabuadas
    }

    return 0;
}