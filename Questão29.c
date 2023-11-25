// Questão 29;

#include <stdio.h>

int main() {
    char nome[50];
    int idade;
    char endereco[100]; 
    char tel[20]; 

    printf("Digite o seu nome: ");
    scanf("%s", nome);

    printf("Sua idade: ");
    scanf("%d", &idade);

    printf("Seu endereço: ");
    scanf("%s", &endereco);

    printf("E para finalizar, o seu telefone: ");
    scanf("%s", &tel);
    
    printf("Seu nome é %s, você tem %d anos, mora na %s e seu telefone é %s\n", nome, idade, endereco, tel);

    return 0;
}