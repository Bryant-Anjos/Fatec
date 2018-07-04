#include <stdio.h>

main()
{
  int i, j, x, perfeito;

  for (i = 1; x < 4; i++)
  {
    for (j = 1; j < i; j++)
    {
      if ((i % j) == 0)
      {
        perfeito = perfeito + j;
      }
    }
    if (i == perfeito)
    {
      printf("O numero %d é perfeito \n\n", i);
      x++;
    }
    perfeito = 0;
  }
}
