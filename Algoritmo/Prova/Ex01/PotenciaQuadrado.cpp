#include <stdio.h>

main()
{
  int numero[10], quadrado[10], i;
  for (i = 0; i < 10; i++)
  {
    printf("Digite o numero: %d ", i+1);
    scanf("%d", &numero[i]);
    quadrado[i] = numero[i] * numero[i];
  }
  for (i = 0; i < 10; i++)
  {
  printf("\nNumero: %d - Quadrado: %d\n", numero[i], quadrado[i]);
  }
}
