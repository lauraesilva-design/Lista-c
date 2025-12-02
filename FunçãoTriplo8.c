#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int num, resp;

    printf("Digite um número: ");
    scanf("%d", &num);

    resp = (num * 3);

    printf("O triplo do numero digitado é %d \n", resp);

     system("pause");
    return 0;
}
