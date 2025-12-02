#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int num, resp;

    printf("Digite um numero: ");
    scanf("%d", &num);

    if(num % 5 == 0){
        printf("O numero digitado é multiplo de 5");
    }else{
        printf("O numero não é multiplo de 5");
    }

     system("pause");
    return 0;
} 