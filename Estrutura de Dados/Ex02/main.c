#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 5;
    printf("Tipo inteiro\n");
    printf("Conteudo %d\n", x);
    //  Impressão do endereço
    printf("Endereço %p\n", &x);
    // Impressão da quantidade de bytes ocupada
    printf("Qtd bytes: %d\n\n\n", sizeof(x));

    float y = 6.5;
    printf("Tipo real float\n");
    printf("Conteudo %f\n", y);
    //  Impressão do endereço
    printf("Endereço %p\n", &y);
    // Impressão da quantidade de bytes ocupada
    printf("Qtd bytes: %d\n\n\n", sizeof(y));

    double z = 7.689245275;
    printf("Tipo real double\n");
    printf("Conteudo %.9f\n", z);
    //  Impressão do endereço
    printf("Endereço %p\n", &z);
    // Impressão da quantidade de bytes ocupada
    printf("Qtd bytes: %d\n\n\n", sizeof(z));

    char c = 'A';
    printf("Tipo caractere\n");
    printf("Conteudo %c\n", c);
    //  Impressão do endereço
    printf("Endereço %p\n", &c);
    // Impressão da quantidade de bytes ocupada
    printf("Qtd bytes: %d\n\n\n", sizeof(c));

    double e = 666.66;
    printf("Tipo real double\n");
    printf("Conteudo %.9f\n", e);
    //  Impressão do endereço
    printf("Endereço %p\n", &e);
    // Impressão da quantidade de bytes ocupada
    printf("Qtd bytes: %d\n\n\n", sizeof(e));

    int d = 18;
    printf("Tipo inteiro\n");
    printf("Conteudo %d\n", d);
    //  Impressão do endereço
    printf("Endereço %p\n", &d);
    // Impressão da quantidade de bytes ocupada
    printf("Qtd bytes: %d\n\n\n", sizeof(d));



    return 0;
}
