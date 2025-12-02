#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    
    char nome[50];
    int idade;

    printf("Digite seu nome: ");
    fgets(nome, 50, stdin);

    printf("Digite sua idade: ");
    scanf(" %d", &idade);

    printf("O nome informado foi %s e a idade %d \n", nome, idade);

     system("pause");
    return 0;
}
