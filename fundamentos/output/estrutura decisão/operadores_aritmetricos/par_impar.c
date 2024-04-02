#include <stdio.h>
int main(int argc, char const *argv[])
{
    //variaveis
    int numero = 0;
    printf("qual o numero que voce quer ver?");
    scanf("%i", &numero);

    //processar
    if (numero % 2 == 0)
    {
        printf("par");
    }
    else{
        printf("impar");
    }
    return 0;
}
