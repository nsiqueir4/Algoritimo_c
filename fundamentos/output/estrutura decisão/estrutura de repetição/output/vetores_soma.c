#include <stdio.h>

int main()
{
    int numeros[5];

    for (int i=0; i<5; i++){
       printf("\n digite o numero: ");
       scanf("%d", &numeros[i]);
    }

    int soma =0;
    for (int z=0; z<5; z++) {
        soma += numeros[z];
    }

    printf("\n a soma do numeros eh: %d", soma);
    return 0;
}
