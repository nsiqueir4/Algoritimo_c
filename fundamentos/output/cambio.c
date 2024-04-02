#include <stdio.h>

int main()
{
    //declaração de váriaveis
float dolar = 4.98;
float reais = 0;
//pergunta
printf("\n quantos reais voce quer converter?");
scanf("%f", &reais);

//script de calculo
float divisao = reais/dolar;

printf("\n em dolars, deu: %.2f", divisao);

    return 0;
}
