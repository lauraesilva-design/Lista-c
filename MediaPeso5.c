#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int peso1, peso2, resp;

    printf("Digite o primeiro peso: ");
    scanf("%d", &peso1);

    printf("Digite o segundo peso: ");
    scanf("%d", &peso2);

    resp = (peso1 + peso2)/2;
     printf("Resultado da media: %d", resp);
     system("pause");
    return 0;
}
