#include <stdio.h>
#include <stdlib.h>

void maior(int num1, int num2) {
    if (num1 >= num2) {
        printf("Maior numero: %d", num1);
    } else {
        printf("Maior numero: %d", num2);
    }
    if (num1 == num2) {
        printf(" --Iguais!--");
    }
    printf("\n");
}

int main()
{
    maior(10, 5);
    maior(3, 8);
    maior(4, 4);
    return 0;
}
