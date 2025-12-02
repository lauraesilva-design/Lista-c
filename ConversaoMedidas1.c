
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>



int main(){
    setlocale(LC_ALL, "Portuguese");

    int resp, num;

    printf("Digite um valor em metros: ");
    scanf("%d", &num);

    resp = (num * 100);

    printf("O valor convertido para centimetros é %d", resp);

     system("pause");
    return 0;
} 
