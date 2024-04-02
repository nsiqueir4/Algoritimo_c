#include <stdio.h>

/*
*Algorítimo que calcula o total da lista de compras
-DElcarar 3 produtos da sua lista de compras
-Calcular o total da lista
-Exibir o valor ao final
*/

int main()
{
    char Trakinas[] = "trakinas";
    char Fandangos[] = "fandangos";
    char refrigerante[] = "refrigerante";

    float valortrakinas = 2.99;
    float valorfandangos = 11.99;
    float valorrefrigerante= 7.50;

    //visor dos preços
    printf("\n Trakinas = %.2f", valortrakinas);
    printf("\n Fandangos = %.2f", valorfandangos);
    printf("\n refrigerante = %.2f", valorrefrigerante);

    //Processamento
    float total = valorrefrigerante + valorfandangos + valortrakinas;

    //saída
    printf("\n O valor total da lista e: %.2f", total);


    return 0;
}
