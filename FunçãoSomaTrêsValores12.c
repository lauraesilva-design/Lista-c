
#include<stdio.h>
#include<stdlib.h>

int main(){

float numero1, numero2, numero3,respSoma;

printf("Digite o primeiro numero: ");
scanf("%f", &numero1);
printf("Digite o segundo numero: ");
scanf("%f", &numero2);
printf("Digite o terceiro numero: ");
scanf("%f", &numero3);

respSoma = numero1 + numero2 + numero3;
printf("Resultado da soma: %.2f", respSoma);


    
    system("pause");
   
    return 0;
}