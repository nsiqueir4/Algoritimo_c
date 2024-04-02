/*
Soma as duas provas e divide por 2
*/

#include <stdio.h>

int main()
{
    printf("---calcule a nota do aluno---");
    
    //declaração de variáveis
    int prova1 = 0;
    int prova2 = 0;

    printf("\n -Digite a nota da prova 1-: ");
    scanf("%d", &prova1);

    printf("\n -Digite a nota da prova 2-: ");
    scanf("%d", &prova2);

    float soma = prova1 + prova2;
    float media = soma / 2;

    printf("A media e: %.2f", media);

    return 0;
}
