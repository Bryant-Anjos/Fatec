#include <stdio.h>

main()
{
  int duck, contador;
  {
    printf("Digite o numero de patinhos: ");
    scanf("%d", &duck);
  }
  for (contador = duck; contador > 0; contador--)
  {
  printf("\n%d patinhos foram passear. Alem das montanhas para brincar. A mamae gritou: Qua, qua, qua, qua. Mas so %d patinhos voltaram de la\n", contador, contador-1);
  }
  printf("\n\nA mamae patinha foi procurar. Alem das montanhas. Na beira do mar. A mamae gritou: Qua, qua, qua, qua. E %d patinhos voltaram de la\n", duck);
}
