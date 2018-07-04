#include <stdio.h>

main()
{
	// declaração das constantes 
	const float GRAMAS = 1000.0;
	
	// declaração das variáveis
	float pesoKG, pesoG;
	
	//atribuição do peso em Kg
	pesoKG = 23.5;
	
	// atribuição do valor do peso em g
	pesoG = pesoKG * GRAMAS;
	
	// mostrar os resultados
	printf("\n Peso da crianca em quilos: %.2f Kg", pesoKG);
	printf("\n Peso da crianca em gramas: %.2f g \n\n", pesoG);
}