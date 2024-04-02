#include <stdio.h>

/*
Calculo de uma viagem
*/
int main(int argc, char const *argv[])
{
    //Declaração de variáveis
int kmLitroGasolina = 0;
int kmLitroEtanol = 0;
int distancia = 0;
float litrogasolina = 4.89;
float litroetanol = 3.49;


//script de combustivel
printf("\n quantos km por litro seu carro faz com gasolina? ");
scanf("%d", &kmLitroGasolina);

printf("\n quantos km por litro seu carro faz com etanol? ");
scanf("%d", &kmLitroEtanol);

printf("\n qual a distancia percorrida? ");
scanf("%d", &distancia);

float qntlitroeta = distancia/kmLitroEtanol;
float qntlitrogas = distancia/kmLitroGasolina;

float valoreta = qntlitroeta*litroetanol;
float valorgas = qntlitrogas*litrogasolina;

printf("\n voce vai pagar em etanol R$ %.2f", valoreta);
printf("\n voce vai pagar em gasolina R$ %.2f", valorgas);


    return 0;
}

