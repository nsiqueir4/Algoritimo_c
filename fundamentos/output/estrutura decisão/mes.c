#include <stdio.h>

int main()
{
    //declaração de variáveis
    int numeroMes = 0;

    printf("Digite o numero do mes:");
    scanf("%i", &numeroMes);

    //processamento
    if (numeroMes == 1)
    {
        printf("estamos no mes de janeiro, com muito calor");
    }
    else if (numeroMes == 2)
    {
        printf("Fevereiro, feriadão");
    }
    else if (numeroMes == 3)
    {
        printf("Março: Mes do coelhao");
    }
    else if (numeroMes == 4)
    {
        printf("Abril: comecou mentindo ja? Que feio");
    }
    else if (numeroMes == 5)
    {
        printf("Maio: Presente pra coroa");
    }
    else if (numeroMes == 6)
    {
        printf("Junho: São joãozera");
    }
    else if (numeroMes == 7)
    {
        printf("Julho: Férias e frio, tudo de bom");
    }
    else if (numeroMes == 8)
    {
        printf("Agosto: Presente pro veio");
    }
    else if (numeroMes == 9)
    {
        printf("Setembro: indenpendencia do nosso pais, chupa Portugal");
    }
    else if (numeroMes == 10)
    {
        printf("Outubro: mes da criançada");
    }
    else if (numeroMes == 11)
    {
        printf("Novembro: Proclamação da república, chupa Portugal de novo");
    }
    else if (numeroMes == 12)
    {
        printf("Desembro: Só festa bb");
    }
    else{
        printf("Invalido amigao");
    }    
    return 0;
}