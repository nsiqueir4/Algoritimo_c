#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeros[20];
    int numeroUsuario = 0;
    int pontos = 0;
    int qtdeJogadas = 0;
   
     printf("---Jogo de adivinhar números---\n");
     
     printf("Quantas jogadas deseja fazer? ");
     scanf("%d", &qtdeJogadas);
   
    // preenchendo o vetor com numeros aleatótios
    for (int i=0; i < 20; i++) {
        numeros[i] = rand () % 20;
    }
   
   
    while (qtdeJogadas >= 0) {
       
        printf("Qual é o número? ");
        scanf("%d", &numeroUsuario);
       
        for (int z=0; z < 20; z++) {
            if (numeroUsuario == numeros[z]) {
                printf("Parabéns você acertou :)\n");
                pontos++;
                break;
            } else {
                if (z == 19) {
                    pontos--;
                    printf("Você errou :(\n");
                }
               
            }
           
        }
        qtdeJogadas--;
        printf("Sua pontuação até agora é %d \n", pontos);
       
       
    }
   
    printf("Sua pontuação final é %d", pontos);
   
 
    return 0;
}
