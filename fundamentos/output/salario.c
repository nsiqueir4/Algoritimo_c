#include <stdio.h>

int main()
{
    //declaração de variáveis
    float salario_atual;
    float percentual_aumento;
    float aumento;
    float percentual_final;
    float soma;

    //script de calculo do salario
    printf("\n qual e o seu salario atual? ");
    scanf("%f", &salario_atual);

    printf("\n qual o seu percentual de aumento? ");
    scanf("%f", &percentual_aumento);

    percentual_final = percentual_aumento / 100;
    aumento = percentual_final*salario_atual;
    soma = aumento + salario_atual;


    printf("\n seu salario atual e: %.2f", soma);

    return 0;
}
