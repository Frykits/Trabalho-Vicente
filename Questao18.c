//Questão 18

#include <stdio.h>
#include <math.h>

int main(void){

int i, k;
float conta;
float soma= 0;

for(i= 1, k= 3; i<= 6, k<= 7; i++, k++){

    conta = pow(2, 3*i + k) / (i*k + 1) * (k);
    soma = soma + conta;
    
 printf(" O resultado quando i era %d e k era %d foi:" "%1.f\n", i, k, conta);
}

 i= 6;
 k= 7;
    conta = pow(2, 3*i + k) * (k) / (i*k + 1);
    soma = soma + conta;
    
   printf(" O resultado quando i era %d e k era %d foi:" "%1.f\n", i, k, conta);
   printf(" O resultado da expressão foi:" "%1.f\n", soma);
}