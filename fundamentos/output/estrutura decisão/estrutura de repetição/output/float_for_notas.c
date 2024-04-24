#include <stdio.h>

int main()
{
    float notas[3];

//coletando as notas
   for (int i=0; i<3; i++) {
    printf("Digite a nota: ");
    scanf("%f", &notas[i]);
    }

    //exibindo notas
    for (int z=0; z<3; z++) {
        printf("A nota eh %.2f \n", notas[z]);
    }

    return 0;
}
