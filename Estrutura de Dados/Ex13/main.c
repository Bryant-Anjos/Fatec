#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void media(float * pontMe, float * pontMa, float * pontDe) {
    float * pontMedia = pontMe;
    float * pontDesvio = pontDe;
    float * pontMediana = pontMa;

    float ** intervalo;

    int i, intervaloAux, frequencia, total = 0;
    float a, b, metade = 0, ptMedio = 0, desvioDenominador = 0, desvioDivisor = 0, freqAcumulada = 0;
    printf("Numero de intervalos: ");
    scanf("%d", &intervaloAux);

    intervalo = (float **) malloc( 3 * sizeof(float *));
    intervalo[0] = (float *) malloc( intervaloAux * sizeof(float));
    intervalo[1] = (float *) malloc( intervaloAux * sizeof(float));
    intervalo[2] = (float *) malloc( intervaloAux * sizeof(float));

    for (i = 0; i < intervaloAux; i++) {
            if (i == 0) {
                printf("\nPrimeiro Valor do Intervalo %d: ", i+1);
                scanf("%f", &a);
                intervalo[0][i] = a;
                printf("Segundo Valor do Intervalo %d: ", i+1);
                scanf("%f", &b);
                intervalo[1][i] = b;
                metade = b-a;
            } else {
                intervalo[0][i] = intervalo[0][i-1] + metade;
                intervalo[1][i] = intervalo[1][i-1] + metade;
                printf("\n");
            }
            printf("Frequencia Absoluta do Intervalo %d: ", i+1);
            scanf("%d", &frequencia);
            intervalo[2][i] = frequencia;

            ptMedio = ptMedio + ((intervalo[0][i] + intervalo[1][i])/2)*frequencia;
            total = total + frequencia;
    }

    for (i = 0; i < intervaloAux; i++) {
    /*printf("\nPrimeiro Valor: %f", intervalo[0][i]);
    printf("\nSegundo Valor: %f", intervalo[1][i]);
    printf("\nFrequencia: %f", intervalo[2][i]);*/
        desvioDenominador = (float) desvioDenominador + (pow((intervalo[0][i] + intervalo[1][i])/2 - (ptMedio/total), 2.0)) * intervalo[2][i];
    }

    for (i = 0; i < intervaloAux; i++) {
        freqAcumulada += intervalo[2][i];
        if (freqAcumulada >= total/2) {
            *pontMediana = intervalo[0][i] + (((intervalo[1][i] - intervalo[0][i]) * (((total)/2 - (freqAcumulada - intervalo[2][i]))/total)*100) / ((intervalo[2][i]/total)*100 ));
            i = intervaloAux;
        }
    }

    *pontMedia = ptMedio/total;
    *pontDesvio = (float) sqrt(desvioDenominador/total);
}

int main() {
    float resMedia, resMediana, resDesvio;
    media(&resMedia, &resMediana, &resDesvio);
    printf("\n A Media eh: %f", resMedia);
    printf("\n A Mediana eh: %f", resMediana);
    printf("\n O Desvio Padrao eh: %f\n", resDesvio);
    system("pause");
    return 0;
}
