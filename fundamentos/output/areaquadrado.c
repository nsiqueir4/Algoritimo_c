#include <stdio.h>

int main()
{
    //Declaração de variáveis
    float lado = 0;
    float raio = 0;
    float pi = 3.14;
    
    //Script quadrado
    printf("\n ----Calcule a area do quadrado----");
    printf("\n -digite quantos centimetros tem no lado do quadrado: ");
    scanf("%f", &lado);
    
    //multiplicação dos lados
    float areaQ = lado * lado;

    printf("\n -a area do quadrado e: %.2f", areaQ);

    //Script círculo
    printf("\n ----Calcule a area do quadrado----");
    printf("\n Qual o valor do raio? ");
    scanf("%f", &raio);
    float areaC = pi * raio * raio;
    printf("\n -A area do circulo e: %.2f", areaC);
    
    return 0;
}
