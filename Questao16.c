//Questão 16

#include <stdio.h>
#include <math.h>

int main(void){

int i;
float e= 2.72;
float conta;
float soma= 0;

for(i= 1; i<= 6; i++){

    conta = pow(i, 2 * i) + pow(e, i) * sin(2 * i);
    soma = soma + conta;
    
 printf(" O resultado quando i era %d foi:" "%1.f\n", i, conta);
}


   printf(" O resultado da expressão foi:" "%1.f\n", soma);
}