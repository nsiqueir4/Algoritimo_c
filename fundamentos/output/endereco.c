#include <stdio.h>
/*
Informações sobre o endereço
*/
int main()
{
    char logradouro[] = "Rua Cabo Jose Rodrigues da Cunha";
    int numero = 220;
    char CEP[] = "13406-044";
    char Bairro[] = "Pq das aguas";
    char Cidade[] = "Piracicaba";
    char estado[] = "Sao Paulo";
    
    printf("---Meu endereco---");
    printf("\n Logradouro: %s", logradouro);
    printf("\n Numero: %d", numero);
    printf("\n CEP: %d", CEP);
    printf("\n Bairro: %s", Bairro);
    printf("\n Cidade: %s", Cidade);
    printf("\n Estado: %s", estado);



    return 0;
}
