#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE* abridor;
    char texto[3][7];

    abridor = fopen("arq.txt", "w");
    fprintf(abridor, "Ola Mundo Triste");
    fclose(abridor);

    abridor = fopen("arq.txt", "r");
    fscanf(abridor, "%s %s %s", texto[1], texto[2], texto[3]);
    printf("%s %s %s", texto[1], texto[2], texto[3]);
    fclose(abridor);

    return 0;
}
