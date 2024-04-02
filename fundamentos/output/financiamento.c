#include <stdio.h>

int main()
{
    //declaração de variaveis 
    int valor_casa = 300000;
    int tempo = 0;

    //perguntas
    printf("\n o valor do imovel e 300.000");

    printf("\n quantos anos voce deseja parcelar?");
    scanf("%d", &tempo);

    //script
    float parcelas = tempo*12;
    float parcelas_finais = valor_casa/parcelas;

    printf("\n cada parcela sera: %.2f", parcelas_finais);

    return 0;
}
