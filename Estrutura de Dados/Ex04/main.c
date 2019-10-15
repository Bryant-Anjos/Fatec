#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double resultado;
    printf("Raiz Quadrada: %f\n", resultado = sqrt(9.0));
    printf("Raiz Quadrada: %f\n", resultado = pow(9.0, 2.0));
    printf("Raiz Quadrada: %f\n", resultado = ceil(9.1));
    printf("Raiz Quadrada: %f\n", resultado = floor(9.9));

    double x, decimal;
    scanf("%lf", &x);
    decimal = x - floor(x);
    printf("%f\n", decimal);
    if (fabs(decimal) >= 0.5) {
        printf("%f\n", ceil(x));
    } else {
        printf("%f\n", floor(x));
    }

    return 0;
}
