#include <stdio.h>

main()
{
  float salario, IRRF, INSS;
  int funcionario;

  for (funcionario = 1; funcionario <= 100; funcionario++)
  {
    printf("Digite o salario bruto do funcionario %d: ", funcionario);
    scanf("%f",&salario);

    if (salario > 1903.98)
    {
      if (salario > 2826.66)
      {
        if (salario > 3751.06)
        {
          if (salario > 4664.68)
          {
            IRRF = salario*0.275;
          }
          else
          {
            IRRF = salario*0.225;
          }
        }
        else
        {
          IRRF = salario*0.15;
        }
      }
      else
      {
        IRRF = salario*0.075;
      }
    }
    else
    {
      IRRF = 0;
    }

    if (salario <= 5645.80)
    {
      if (salario < 2822.91)
      {
        if (salario < 1693.73)
        {
          INSS = salario * 0.08;
        }
        else
        {
          INSS = salario * 0.09;
        }
        INSS = salario * 0.11;
      }
      else
      {
        INSS = 0;
      }
    }

    salario = salario - (IRRF + INSS);

    printf("\nO salario liquido do funcionario %d eh de RS %.2f \n\n", funcionario, salario);
  }
}
