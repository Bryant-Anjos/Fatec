// PROGRAMA OPERA��ES
#include <stdio.h> // inclus�o de bibliotecas
main() // programa principal
{
	// declara��o das vari�veis
	int a, b, c, somaAB, subtraiCA, multiplicaBC, somaDivisaoACB;
	
	//atribuir os valores as vari�veis
	a = 9;
	b = 17;
	c = -6;
	
	// calcular opera��es
	somaAB = a + b;
	subtraiCA = c - a;
	multiplicaBC = b * c;
	somaDivisaoACB = a + c / b;
	
	// mostrar resultados
	printf("\n Soma = %d \n Subtracao = %d \n Multiplicacao = %d \n Soma e Divisao = %d \n\n", somaAB, subtraiCA, multiplicaBC, somaDivisaoACB);
}