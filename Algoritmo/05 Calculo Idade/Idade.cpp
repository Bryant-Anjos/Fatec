#include <stdio.h>

main()
{
	// declaração das variáveis
	int anoNasc = 1988, anoAtual = 2018, idadeAnos, idadeMeses, idadeSemanas, idadeDias;
	
	// cálculo das idades em anos, meses, semanas e dias
	idadeAnos = anoAtual - anoNasc;
	idadeMeses = idadeAnos * 12;	
	idadeDias = idadeAnos * 365;	
	idadeSemanas = idadeDias / 7;
	
	// saída de dados
	printf("\n Ano de Nascimento = %d \n", anoNasc);
	printf("\n Ano Atual = %d \n", anoAtual);
	printf("\n Idade em Anos = %d \n", idadeAnos);
	printf("\n Idade em Meses = %d \n", idadeMeses);
	printf("\n Idade em Semanas = %d \n\n", idadeSemanas);
	printf("\n Idade em Dias = %d \n", idadeDias);
	
}