#include <stdio.h>

int main()
{
   int numeros[10];
   int  maior=0, menor;
   int numero_verificado = 0;


   for (int i=0; i<10; i++){
    printf("\n Digite um numero inteiro: ");
   scanf("%d", &numeros[i]);
   }
   float soma =0;
   float media = 0;
    printf("\n Digite um numero de verificacao: ");
    scanf("%d", &numero_verificado);
   for (int z=0; z<10; z++){
    soma += numeros[z];
    media = soma/10;

       if(numeros[z]<menor){
            menor=numeros[z];
     }
        if(numeros[z]>maior){
            maior=numeros[z];
            }

    if (numero_verificado == numeros[z])
    {
        printf("\n sim ");
   }
   if (numero_verificado != numeros[z])
   {
    printf("\n nao");
   }
   }

    printf("\n a soma dos numeros eh: %.2f", soma);
    printf("\n a media aritmetica eh: %.2f", media);
    printf("\n o maior valor eh: %d", maior);
    printf("\n a menor valor eh: %d", menor);
    
    return 0;
}
