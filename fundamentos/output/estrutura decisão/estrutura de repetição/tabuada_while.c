#include <stdio.h>

int main()
{
    int tabuada = 0;
    printf("Digite um numero: ");
    scanf("%d", &tabuada);

    int contador = 0;
    while (contador<=11){
        int resultado = tabuada * contador;
        printf("\n %d x %d = %d", tabuada, contador, resultado);
        contador ++;
    }
    printf("\n O numero da tabuada eh: %d", tabuada);
    return 0;
}
