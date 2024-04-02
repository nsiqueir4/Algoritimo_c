#include <stdio.h>

int main()
{
    //variaveis
    int idade = 0;

    printf("\n qual a sua idade?");
    scanf("%d", &idade);

    //processo
    if (idade>=18)
    {
        printf("\n ja pode trampar:)");

    }else {
        printf("\n nao pode trampar:(");
    }
    
    return 0;
}
