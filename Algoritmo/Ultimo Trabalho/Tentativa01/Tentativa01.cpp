#include <stdio.h>

main()
{
  int i, codigo[15], estoque[15];
  char nome[15][60];

  for (i = 0; i < 15; i++)
  {
    printf("Digite o codigo do produto: ");
    scanf("%d", &codigo[i]);
  }
  for (i = 0; i < 15; i++)
  {
    printf("\n%d\n", codigo[i]);
  }
}
