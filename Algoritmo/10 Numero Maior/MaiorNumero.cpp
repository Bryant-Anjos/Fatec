#include <stdio.h>
#include <stdlib.h>

int main()
 {
  /* O usuário irá digitar 3 números e o programa mostrará qual é o maior */
  int num1, num2, num3;

  printf("\n Digite 3 numeros: \n Numero 1: \n");
  scanf("%d", &num1);
  printf("\n Numero 2: \n");
  scanf("%d", &num2);
  printf("\n Numero 3: \n");
  scanf("%d", &num3);

  if (num1>=num2 && num1>=num3)
  {
    printf("\n Maior Numero: %d \n", num1);
  }
  else
  {
    if (num2>=num3)
    {
      printf("\n Maior Numero: %d \n", num2);
    }
    else
    {
      printf("\n Maior Numero: %d \n", num3);
    }
  }

  system("pause");
  return 0;
}
