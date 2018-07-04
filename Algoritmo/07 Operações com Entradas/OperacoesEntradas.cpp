#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a, b, c, somaAB, subtraiBC, multiplicaCA;
	
	printf("\n Digite um numero: ");
	scanf("%d", &a);
	printf("\n Digite outro numero: ");
	scanf("%d", &b);
	printf("\n Digite mais um numero: ");
	scanf("%d", &c);
	
	somaAB = a+b;
	subtraiBC = b-c;
	multiplicaCA = c*a;
	
	printf("\n Soma = %d \n Subtracao = %d \n Multiplicacao = %d \n\n", somaAB, subtraiBC, multiplicaCA);
	
	return 0;
}