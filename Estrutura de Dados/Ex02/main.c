#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 5;
    printf("Tipo inteiro\n");
    printf("Conteudo %d\n", x);
    //  Impress�o do endere�o
    printf("Endere�o %p\n", &x);
    // Impress�o da quantidade de bytes ocupada
    printf("Qtd bytes: %d\n\n\n", sizeof(x));

    float y = 6.5;
    printf("Tipo real float\n");
    printf("Conteudo %f\n", y);
    //  Impress�o do endere�o
    printf("Endere�o %p\n", &y);
    // Impress�o da quantidade de bytes ocupada
    printf("Qtd bytes: %d\n\n\n", sizeof(y));

    double z = 7.689245275;
    printf("Tipo real double\n");
    printf("Conteudo %.9f\n", z);
    //  Impress�o do endere�o
    printf("Endere�o %p\n", &z);
    // Impress�o da quantidade de bytes ocupada
    printf("Qtd bytes: %d\n\n\n", sizeof(z));

    char c = 'A';
    printf("Tipo caractere\n");
    printf("Conteudo %c\n", c);
    //  Impress�o do endere�o
    printf("Endere�o %p\n", &c);
    // Impress�o da quantidade de bytes ocupada
    printf("Qtd bytes: %d\n\n\n", sizeof(c));

    double e = 666.66;
    printf("Tipo real double\n");
    printf("Conteudo %.9f\n", e);
    //  Impress�o do endere�o
    printf("Endere�o %p\n", &e);
    // Impress�o da quantidade de bytes ocupada
    printf("Qtd bytes: %d\n\n\n", sizeof(e));

    int d = 18;
    printf("Tipo inteiro\n");
    printf("Conteudo %d\n", d);
    //  Impress�o do endere�o
    printf("Endere�o %p\n", &d);
    // Impress�o da quantidade de bytes ocupada
    printf("Qtd bytes: %d\n\n\n", sizeof(d));



    return 0;
}
