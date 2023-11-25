#include <stdio.h>
#include <string.h>

int main() {
    char frase[1000];
    char letra;

    printf("Digite uma frase (máximo de 999 caracteres): ");
    fgets(frase, sizeof(frase), stdin);
    
    printf("Digite uma letra: ");
    scanf(" %c", &letra); // Use " %c" para consumir o caractere de quebra de linha deixado pelo fgets

    int contador = 0;

    for (int i = 0; i < strlen(frase); i++) {
        if (frase[i] == letra) {
            contador++;
        }
    }

    printf("A letra '%c' aparece %d vezes na frase.\n", letra, contador);

    return 0;
}