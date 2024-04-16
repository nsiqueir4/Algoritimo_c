#include <stdio.h>

int main()
{
    int contador = 0;
    int soma = 0;
    while (contador <1001) {
        soma+=contador;
        contador++;
    }
     printf("O total da soma eh: %d \n", soma);
    return 0;
}