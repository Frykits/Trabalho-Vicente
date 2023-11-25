#include <stdio.h>

int main() {
    int numero, maior = 0;
    
    while (1) {
        printf("Digite um número (ou 0 para sair): ");
        scanf("%d", &numero);
        
        if (numero == 0) {
            break;
        }
        
        if (numero > maior) {
            maior = numero;
        }
    }
    
    if (maior != 0) {
        printf("O maior número lido é: %d\n", maior);
    } else {
        printf("Nenhum número foi lido.\n");
    }
    
    return 0;
}