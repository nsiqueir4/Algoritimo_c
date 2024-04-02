#include <stdio.h>
int main()
{
    //declaração de variáveis
    int numeroMes = 0;
    printf("Digite o numero do mes:");
    scanf("%d", &numeroMes);

    //processamento
    switch (numeroMes)
    {
    case 1:
        printf("estamos no mes de Janeito");
        break;
    case 2:
        printf("Estamos do mes de Fevereiro");
        break;
    case 3:
         printf("Estamos no mes de Marco");
         break;
    case 4:
        printf("Estamos no mes de Abril");
        break;
    case 5:
        printf("Estamos no mes de maio");
        break;
    case 6:
        printf("Estamos no mes de junho");
        break;
    default:
        printf("Mes invalido");
        break;
    }
    return 0;
}
