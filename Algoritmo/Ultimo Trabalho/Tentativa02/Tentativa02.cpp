#include <stdio.h>

main()
{
  int i, codigo[15], estoque[15];
  char nome[15][60];

  for (i = 0; i < 3; i++)
  {
    printf("Digite o codigo do produto: ");
    scanf("%d", &codigo[i]);
  }
  for (i = 0; i < 3; i++)
  {
    printf("Digite o nome do produto: ");
    scanf("%s", nome[i]);
  }
  for (i = 0; i < 3; i++)
  {
    printf("\nCodigo: %d Cliente: %s \n", codigo[i], nome[i]);
  }
}
