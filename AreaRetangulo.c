#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


int main(){
setlocale(LC_ALL, "portuguese");

int altura, base, res;

fflush(stdin);
printf("informe a altura do retangulo: \n");
scanf("%d", &altura);
    printf("informe a base do retangulo: \n");
    scanf("%d", &base);

    res = (base * altura);

    printf("a area do retangulo é = %d m. \n", res);
    system("pause");
    return 0;
}
