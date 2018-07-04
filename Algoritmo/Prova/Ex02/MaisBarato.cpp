#include <stdio.h>

main()
{
  int code, codeB, i;
  float price, barato = 10000000;
  for (i = 1; i < 10; i++)
  {
    printf("Digite o codigo: ");
    scanf("%d", &code);
    printf("Digite o preço: ");
    scanf("%f", &price);

    if(price < barato)
    {
      barato = price;
      codeB = code;
    }
  }
  printf("Mais barato: %d por %.2f", codeB, barato);
}
