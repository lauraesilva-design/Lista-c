#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char sexo;
    int idade;

    printf("QUAL A IDADE: \n");
    scanf("%d", &idade);
    printf("DIGITE (M) PARA MASCULINO E (F) PARA FEMININO: \n");
    scanf(" %c", &sexo);

    if (sexo == 'M'){
        if (idade >= 50){
            printf("Você tem direito ao desconto. \n");
        }
        else{
            printf("Você não tem direito ao desconto. \n");
        }
    }else{
        if (idade >= 40){
            printf("Você tem direito ao desconto. \n");
        }
        else{
            printf("Você não tem direito ao desconto. \n");
        }
    }

    system("pause");
    return 0;
}