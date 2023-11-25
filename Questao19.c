//Questão 19

#include <stdio.h>
#include <math.h>

int main(void){

int i= 1, k=3, j=1;
float conta;
float soma= 0;

do{
    conta = pow(2, j*i + k) / (i*k + 1) * k * pow(j, i);
    printf("Quando i foi %d, k %d e j %d o resultado foi:" "%1.f\n", i, k, j, conta);
    soma = soma + conta;
    i++;
    k++;
    j++;

if(j == 4){
   do{
    conta = pow(2, j*i + k) / (i*k + 1) * k * pow(j, i);
    printf("Quando i foi %d, k %d e j %d o resultado foi:" "%1.f\n", i, k, j, conta);
    soma = soma + conta;
    i++;
    k++;
    }while(k < 7);
}



}while(j <= 4);
k--;
j--;

conta = pow(2, j*i + k) / (i*k + 1) * k * pow(j, i);
soma = soma + conta;
printf("Quando i foi %d, k %d e j %d o resultado foi:" "%1.f\n", i, k, j, conta);
printf("O resultado da expressão foi:" "%e\n", soma);
return 0;

}