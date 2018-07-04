// PROGRAMA OPERAÇÕES
#include <stdio.h> // inclusão de bibliotecas
main() // programa principal
{
	// declaração das variáveis
	int a, b, c, somaAB, subtraiCA, multiplicaBC, somaDivisaoACB;
	
	//atribuir os valores as variáveis
	a = 9;
	b = 17;
	c = -6;
	
	// calcular operações
	somaAB = a + b;
	subtraiCA = c - a;
	multiplicaBC = b * c;
	somaDivisaoACB = a + c / b;
	
	// mostrar resultados
	printf("\n Soma = %d \n Subtracao = %d \n Multiplicacao = %d \n Soma e Divisao = %d \n\n", somaAB, subtraiCA, multiplicaBC, somaDivisaoACB);
}