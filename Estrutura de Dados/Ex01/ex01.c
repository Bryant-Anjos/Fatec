#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    struct Celular {
        char nome[20];
        int codigo;
        char fabricante[20];
    };
    struct Celular c[3];
    printf("Vamos cadastrar celulares");
    int i;
    for (i = 0; i < 3; i++)
    {
        printf("\nDigite o modelo do celular 0%d: ", i+1);
        fflush(stdin);
        fgets(c[i].nome, 20, stdin);
        printf("\nDigite o codigo do celular 0%d: ", i+1);
        scanf("%d", &c[i].codigo);
        printf("\nDigite o fabricante do celular 0%d: ", i+1);
        fflush(stdin);
        fgets(c[i].fabricante, 20, stdin);
    }
    for (i = 0; i < 3; i++)
    {
        printf("\n-----CELULAR#%d-----", i+1);
        printf("\nModelo: %sCodigo: %d\nMarca: %s", c[i].nome, c[i].codigo, c[i].fabricante);
    }

    return 0;
}
