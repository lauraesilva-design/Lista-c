#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int nota1;

    printf("Digite sua nota: ");
    scanf("%d", &nota1);

    if(nota1 >= 6){
        printf("Você passou de ano");
    }else{
        printf("Você não passou de ano");
    }
     system("pause");
    return 0;
}
