#include <stdio.h>
#include <stdlib.h>

int second(int horas, int minutos, int segundos) {
    return horas * 3600 + minutos * 60 + segundos;
}

int main()
{
    printf("%d\n", second(5, 32, 45));
    return 0;
}
