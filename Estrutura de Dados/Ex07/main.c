#include <stdio.h>
#include <stdlib.h>

int hour(int min) {
    int horas = min/60;
    int minutos = min%60;
    printf("%.2d:%.2d h\n", horas, minutos);
}

int main()
{
    hour(1019);
    return 0;
}
