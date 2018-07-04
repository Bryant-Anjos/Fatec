#include <stdio.h>
#define BK 3

main()
{
  int i, codigo[BK], estoque[BK], cliente, verCodigo, quantidade = 0, inexiste = 0;
  char nome[BK][60];

  for (i = 0; i < BK; i++)
  {
    printf("\nDigite o codigo do produto: ");
    scanf("%d", &codigo[i]);

    printf("Digite o nome do produto: ");
    scanf("%s", nome[i]);

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
        quantidade = 0;
        inexiste = 0;
        printf("\nQuantos voce quer comprar: ");
        scanf("%d", &quantidade);

        if (quantidade <= estoque[i])
        {
          estoque[i] = estoque[i] - quantidade;
          printf("\nPedido atendido. Obrigado e volte sempre.\n");
          i = BK;
        }
        else
        {
          printf("\nNao temos estoque suficiente dessa mercadoria\n");
          i = BK;
        }
      }
      inexiste = inexiste + 1;
      if(inexiste == 2)
      {
        printf("\nProduto inexistente\n");
        inexiste = 0;
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
