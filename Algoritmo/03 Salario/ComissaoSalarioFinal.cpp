#include <stdio.h>

// programa principal
int main(int argc, char** argv)
{
	// declara��o das vari�veis
	float salario, comissao, salarioFinal;
	
	// atribui��o do valor do sal�rio
	salario = 2300.00;
	
	// c�lculo da comiss�o e do sal�rio final
	comissao = salario * 0.04;
	salarioFinal = salario + comissao;
	
	// sa�da de resultados
	printf("\n Salario R$ %.2f", salario); // .2 entre %f define a quantidade de casas depois da v�rgula
	printf("\n Comissao R$ %.2f", comissao);
	printf("\n Salario Final R$ %.2f \n\n", salarioFinal);
	return 0;
}