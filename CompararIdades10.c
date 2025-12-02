#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int idade1, idade2;

    printf("Digite a primeira idade: ");
    scanf(" %d", &idade1);

    printf("Digite a segunda idade: ");
    scanf(" %d", &idade2);

    if(idade1 > idade2){
        printf("A PRIMEIRA IDADE É maior QUE Á SEGUNDA");
    }else if(idade1 == idade2){
        printf("AS DUAS IDADES SÃO IGUAIS");
    }else{
        printf("A PRIMEIRA IDADE É MENOR QUE Á SEGUNDA");
    }

     system("pause");
    return 0;
}
