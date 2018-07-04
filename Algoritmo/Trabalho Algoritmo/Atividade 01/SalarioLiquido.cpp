#include <stdio.h>

main()
{
  float bruto, liquido;
  int funcionario;

  for (funcionario = 1; funcionario <= 100; funcionario++)
  {
    printf("Digite o salario bruto do funcionario %d: ", funcionario);
    scanf("%f",&bruto);

    liquido = bruto - bruto * 0.2;

    printf("\nO salario liquido do funcionario %d eh de RS %.2f \n\n", funcionario, liquido);
  }

  return 0;
}
