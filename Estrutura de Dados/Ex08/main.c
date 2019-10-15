#include <stdio.h>
#include <stdlib.h>

int procA(int valor) { // Fun��o para receber um valor por c�pia
    return ++valor; // Retorna o valor do par�metro com um pr� incremento
}

int procB(int* valor) { // Fun��o para receber um valor por simula��o de refer�ncia
    int* x = valor; // Vari�vel declarada recebe o ponteiro do do par�metro
    return ++*x; // Retorna o pr� incremento do valor no endere�o do ponteiro
}

int main()
{
    printf("---------ProcA e ProcB--------\n");
    printf("Digite um parametro inteiro para ser passado por copia e por simulacao de referencia: ");
    scanf("%d", &valor);
    printf("\no valor digitado foi: %d\n\n", valor);
    printf("Valor retornado pela funcao de passagem por copia: %d\n\n", procA(valor)); // Executa o procedimento procA() e escreve o valor retornado
    printf("O valor que foi digitado apos a passagem por copia: %d\n\n", valor);
    printf("Valor retornado pela funcao de passagem por simulacao de referencia: %d\n\n", procB(&valor)); // Executa o procedimento procB() enviando um endere�o como par�metro e escreve o valor retornado
    printf("O valor que foi digitado apos a passagem por simulacao de referencia: %d\n\n", valor);
    printf("-------------------------------\n\n");
    return 0;
}
