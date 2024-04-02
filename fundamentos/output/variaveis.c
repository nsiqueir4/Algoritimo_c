/*
Exemplo de algorítimo com declaração de variáveis em C
*/

#include <stdio.h>

int main()
{
    int idade = 16;
    float altura = 1.65;
   char *letra = "N";
    char nome[] = "Nicolas";
    

    printf("---Meus dados pessoais---");
   printf("\n Meu Nome: %s", nome);
   printf("\n Minha letra inicial: %s", letra);
   printf("\n Minha idade: %d", idade);
printf("\n Minha altura: %.2f\n", altura);

 return 0;

}
