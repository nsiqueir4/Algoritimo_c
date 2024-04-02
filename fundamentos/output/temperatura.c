#include <stdio.h>

/*
Conversão de graus celsius para fahrenheit
*/

int main()
{
    //variação de variáveis
    float celsius = 0;
   
    //script 
    printf("\n ----Qual a temperatura em fahrenheit do seu ambiente");
     printf("\n quantos graus celsius esta seu ambiente?");
     scanf("%f", &celsius);

    float fahrenheit = (celsius*1.8) + 32;

//resultado final
    printf("\n a temperatura em seu ambiente em fahrenheit e: %.2f", fahrenheit);

    return 0;
}
