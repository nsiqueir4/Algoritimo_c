#include <stdio.h>

int main()
{
    //declaração de variáveis]
    int temperatura = 0;
    printf("\n Qual a temperatura do ambiente?\n");
    scanf("%d", &temperatura);
    //processamento
    if (temperatura <= 13)
    {
        printf("esta frio");
    }
    else if (temperatura >13 && temperatura <= 25)
    {
        printf("esta agradavel");
    }
    else if (temperatura > 25 && temperatura <= 32)
    {
        printf("esta calor");
    }
    else if (temperatura > 32)
    {
        printf("esta muito calor");
    }
    
    return 0;
}
