#include <stdio.h>
#include <stdlib.h>

int main()
{
	float nota1, nota2, peso1, peso2, mediaPonderada;
	
	printf("Digite a sua primeira nota: ");
	scanf("%f", &nota1);
	printf("Digite a sua segunda nota: ");
	scanf("%f", &nota2);
	printf("Digite o peso da sua primeira nota: ");
	scanf("%f", &peso1); 
	printf("Digite o peso da sua segunda nota: ");
	scanf("%f", &peso2);
	
	mediaPonderada = (nota1*peso1 + nota2*peso2) / (peso1+peso2);
	
	printf("\n Sua media ponderada eh = %.2f \n\n", mediaPonderada);
	
	return 0;
}