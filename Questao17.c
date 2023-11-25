#include <stdio.h>
#include <math.h>

int main(void){
  int i;
  float conta;
  float soma=0;
  
  for(i=1; i <= 9; i++){
  
  conta = pow(2, 3*i + i*i) / (i+1);
  soma = soma + conta;
  
  printf("Quando i for %d o resultado será:" "%1.f\n", i, conta);
   }
  
   printf("O resultado da expressão é:" "%e", soma);
   }