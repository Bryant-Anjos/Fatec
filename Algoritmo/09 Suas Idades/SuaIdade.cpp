#include <stdio.h>
#include <stdlib.h>

main()
{
	int anoNasc, anoAtual, idadeAnos, idadeMeses, idadeSemanas, idadeDias;

	printf("Qual o ano do seu Nascimento?: ");
	scanf("%d", &anoNasc);
	printf("Qual o ano atual?: ");
	scanf("%d", &anoAtual);

	system("cls");

	idadeAnos = anoAtual - anoNasc;
	idadeMeses = idadeAnos * 12;
	idadeDias = idadeAnos * 365;
	idadeSemanas = idadeDias / 7;

	printf("\n Idade = %d anos \n Idade = %d meses \n Idade = %d semanas \n Idade = %d dias \n\n", idadeAnos, idadeMeses, idadeSemanas, idadeDias);
}
