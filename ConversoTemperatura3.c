#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    
    float f, temp;

    printf("Digitar a temperatura em Celsius: ");
    scanf(" %f", &temp);

         f = 9 * temp / 5 + 32;
      printf("Temperatura equivalente em Fahrenheit: %f", f);
   


     system("pause");
    return 0;
}