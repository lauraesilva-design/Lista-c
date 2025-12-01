#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
setlocale(LC_ALL, "portuguese");

 int preco, valor, res;

 printf("digite o peço do produto: \n");
  scanf("%d", &preco);

  valor = (preco * 0,10);

  res = (preco - valor);
    printf("o valor do produto com o desconto foi para: %d", res);
    system("pause");
    return 0;
}
