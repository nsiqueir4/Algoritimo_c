#include <stdio.h>

int main()
{
    //variaveis
    float nota1 = 0;
    float nota2 = 0;
    
    printf("\n qual a sua primeira nota?");
    scanf("%f", &nota1);

    printf("\n qual a sua segunda nota?");
    scanf("%f", &nota2);

    //script
    float media =(nota1 + nota2) /2;
    printf("\n nota: %.2f", media);
    //saida
    if (media>= 6.0)
    {
        printf("\n aprovado");
    } else {
        printf("\n reprovado");
    }
    

    return 0;
}
