#include <stdio.h>
#define BK 15

main()
{
  int i, codigo[BK], estoque[BK], cliente, verCodigo, quantidade, inexiste = 0;
  char nome[BK][60];

  for (i = 0; i < BK; i++)
  {
    printf("Digite o codigo do produto: ");
    scanf("%d", &codigo[i]);
  }
  for (i = 0; i < BK; i++)
  {
    printf("Digite o nome do produto: ");
    scanf("%s", nome[i]);
  }
  for (i = 0; i < BK; i++)
  {
    printf("Digite a quantidade de estoque do produto: ");
    scanf("%d", &estoque[i]);
  }

  printf("\nCodigo do Cliente: ");
  scanf("%d", &cliente);

while (cliente != 0)
  {
    printf("\nDigite um Codigo: ");
    scanf("%d", &verCodigo);
    for (i = 0; i < BK; i++)
    {
      if(verCodigo == codigo[i])
      {
        printf("\nQuantos voce quer comprar: ");
        scanf("%d", &quantidade);

        if (quantidade <= estoque[i])
        {
          estoque[i] = estoque[i] - quantidade;
          inexiste = 0;
          printf("\nPedido atendido. Obrigado e volte sempre.\n");
        }
        else
        {
          inexiste = 0;
          printf("\nNao temos estoque suficiente dessa mercadoria\n");
        }
      }
      inexiste = inexiste + 1;
      if(inexiste == BK)
      {
        printf("\nProduto inexistente\n");
      }
    }
    printf("\nCodigo do Cliente: ");
    scanf("%d", &cliente);
    inexiste = 0;
  }
  for (i = 0; i < BK; i++)
  {
    printf("\nCodigo: %d Produto: %s Estoque: %d \n", codigo[i], nome[i], estoque[i]);
  }
}
