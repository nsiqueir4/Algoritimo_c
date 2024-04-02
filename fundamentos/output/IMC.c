#include <stdio.h>
/*
calcular o imc de uma pessoa
*/


int main()
{
    //declaração de variaveis
    int peso = 0;
    float altura = 0;

    //perguntas
    printf("\n qual seu peso?");
    scanf("%d", &peso);

    printf("\n qual sua altura?");
    scanf("%f", &altura);

    float imc = peso/(altura*altura);

    printf("\n seu IMC e: %.2f", imc);

    if (imc<18.5);
        printf("\n voce esta em magreza");
    if (imc>18.5 && imc<25);
    printf("\n Parabens, voce esta em peso ideal!");
    
    if (imc>24.9 && imc<30);
    
        printf("\n voce esta levemente acima do peso");
    
    if (imc>29,9 && imc<35);
        printf("\n Obesidade grau I");

    if (imc>34.9 && imc<40);
    {
        printf("\n Obesidade grau II ");
    }

    if (imc>40);
    {
        printf("\n obesidade grau III ");
    }
    
    
    
    

    return 0;
}
