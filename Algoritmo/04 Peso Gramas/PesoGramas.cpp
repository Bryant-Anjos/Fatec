#include <stdio.h>

main()
{
	// declara��o das constantes 
	const float GRAMAS = 1000.0;
	
	// declara��o das vari�veis
	float pesoKG, pesoG;
	
	//atribui��o do peso em Kg
	pesoKG = 23.5;
	
	// atribui��o do valor do peso em g
	pesoG = pesoKG * GRAMAS;
	
	// mostrar os resultados
	printf("\n Peso da crianca em quilos: %.2f Kg", pesoKG);
	printf("\n Peso da crianca em gramas: %.2f g \n\n", pesoG);
}