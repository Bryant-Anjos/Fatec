#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

int main()
{
    // Declaração de Variáveis
    int varInt;
    float varFloat;
    double varDouble;
    char varChar;
    typedef struct{
        char name[12];
        int idade;
        double peso;
    }Estrutura;
    Estrutura e1;

    // Declaração de ponteiros
    int* pontInt = &varInt;
    float* pontFloat = &varFloat;
    double* pontDouble = &varDouble;
    char* pontChar = &varChar;
    Estrutura* pontE1 = &e1;

    printf("VARIAVEL INT\nMemoria ocupada: %d bytes\nEndereco variavel: %p\nEndereco ponteiro: %p\n\n", sizeof(varInt), &varInt, &pontInt);
    printf("VARIAVEL FLOAT\nMemoria ocupada: %d bytes\nEndereco variavel: %p\nEndereco ponteiro: %p\n\n", sizeof(varFloat), &varFloat, &pontFloat);
    printf("VARIAVEL DOUBLE\nMemoria ocupada: %d bytes\nEndereco variavel: %p\nEndereco ponteiro: %p\n\n", sizeof(varDouble), &varDouble, &pontDouble);
    printf("VARIAVEL CHAR\nMemoria ocupada: %d bytes\nEndereco variavel: %p\nEndereco ponteiro: %p\n\n", sizeof(varChar), &varChar, &pontChar);
    printf("STRUCT ESTRUTURA\nMemoria ocupada: %d bytes\nEndereco variavel: %p\nEndereco ponteiro: %p\n\n", sizeof(e1), &e1, &pontE1);

    printf("CHAR ESTRUTURA\nMemoria ocupada: %d bytes\nEndereco variavel: %p\nEndereco ponteiro: %p\n\n", sizeof(e1.name), &e1.name, &pontE1);
    printf("INT ESTRUTURA\nMemoria ocupada: %d bytes\nEndereco variavel: %p\nEndereco ponteiro: %p\n\n", sizeof(e1.idade), &e1.idade, &pontE1);
    printf("DOUBLE ESTRUTURA\nMemoria ocupada: %d bytes\nEndereco variavel: %p\nEndereco ponteiro: %p\n\n", sizeof(e1.peso), &e1.peso, &pontE1);
    return 0;
}
