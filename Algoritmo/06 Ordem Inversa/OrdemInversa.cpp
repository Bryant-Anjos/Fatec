#include <stdio.h>
#include <stdlib.h>

main()
{
	// Declaração das variáveis
	int a, b, c;
	
	printf("\n Digite um numero: ");
	scanf("%d", &a); // Entrada de dados
	printf("\n Digite outro numero: ");
	scanf("%d", &b); // Entrada de dados
	printf("\n Digite mais um numero: ");
	scanf("%d", &c); // Entrada de dados
	
	// Saída de dados
	printf("\n Ordem digitada: %d, %d, %d.", a, b, c);
	printf("\n Ordem inversa a ordem digitada: %d, %d, %d. \n\n", c, b, a);
	
	system ("pause");
	
}