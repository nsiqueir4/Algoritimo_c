#include <stdio.h>

int main()
{
  int soma = 0;
  int parar = 0;

    do
    {
      int produto = 0;
       printf(" \nquais produtos deseja comprar? \nWhopper [1] \nBig King [2] \nBK Cheddar [3] \nBK Original [4] \nRodeio duplo [5]");
      scanf("%d", &produto);

      switch (produto)
      {
      case 1:
        soma = soma + 27.90;
        break;

      case 2:
        soma = soma + 24.90;
        break;

      case 3:
        soma = soma + 24.90;
        break;

      case 4:
        soma = soma + 27.90;
        break;
      case 5:
      soma = soma + 24.90;
      break;

default:
break;
    }
        
    printf("digite 1 para continuar e 0 para parar\n");
    scanf("%d", &parar);
} while (parar = 0);
    printf("O valor a ser pago eh R$%d", soma);
    return 0;
}
