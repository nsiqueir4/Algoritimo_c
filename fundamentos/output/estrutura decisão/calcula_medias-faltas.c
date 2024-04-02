#include <stdio.h>

int main()
{
    //variaveis
    float nota1 = 0;
    float nota2 = 0;
    int faltas =0;

    printf("\n qual a nota da sua primeira prova?");
    scanf("%f", &nota1);

    printf("\n qual a nota da sua primeira prova?");
    scanf("%f", &nota2);

    printf("\n quantas notas voce teve?");
    scanf("%d", &faltas);

    //script
    float media =(nota1 + nota2) /2;
    
    //saida
    if (media >= 6 && faltas <= 4)
    {
        printf("\n voce esta aprovado");
    }
    else if (media <=6 && faltas <=4)
    {
        printf("\n esta de recuperacao");
    }
    else if (faltas > 4)
    {
        printf("\n reprovado");
    }
    return 0;
}
