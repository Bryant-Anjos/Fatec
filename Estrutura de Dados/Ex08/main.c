#include <stdio.h>
#include <stdlib.h>

int procA(int valor) { // Função para receber um valor por cópia
    return ++valor; // Retorna o valor do parâmetro com um pré incremento
}

int procB(int* valor) { // Função para receber um valor por simulação de referência
    int* x = valor; // Variável declarada recebe o ponteiro do do parâmetro
    return ++*x; // Retorna o pré incremento do valor no endereço do ponteiro
}

int main()
{
    printf("---------ProcA e ProcB--------\n");
    printf("Digite um parametro inteiro para ser passado por copia e por simulacao de referencia: ");
    scanf("%d", &valor);
    printf("\no valor digitado foi: %d\n\n", valor);
    printf("Valor retornado pela funcao de passagem por copia: %d\n\n", procA(valor)); // Executa o procedimento procA() e escreve o valor retornado
    printf("O valor que foi digitado apos a passagem por copia: %d\n\n", valor);
    printf("Valor retornado pela funcao de passagem por simulacao de referencia: %d\n\n", procB(&valor)); // Executa o procedimento procB() enviando um endereço como parâmetro e escreve o valor retornado
    printf("O valor que foi digitado apos a passagem por simulacao de referencia: %d\n\n", valor);
    printf("-------------------------------\n\n");
    return 0;
}
