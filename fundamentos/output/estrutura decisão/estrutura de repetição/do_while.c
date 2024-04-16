#include <stdio.h>

int main()
{
    //realiza soma dos numeros até que o usuario decida quando parar
    int soma = 0;
    int parar = 0; //0->continua, 1_>parar

    do
    {
        int numero = 0;
        printf("Digite um numero: ");
        scanf("%d", &numero);

        soma += numero;

        printf("digite 0 para continuar e 1 para parar");
        scanf("%d", &parar);
    } while (parar == 0);
    printf("A soma dos numeros e: %d", soma);

    return 0;
}
