#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void calcDesvioPadrao(const double *notas, int numNotas, double media, double *desvioPadrao){
    double somaDosQuadrados = 0.0;
    for(int i =0; i < numNotas; i++){
        somaDosQuadrados += pow(notas[i] - media, 2);

    }
    *desvioPadrao = sqrt(somaDosQuadrados / numNotas);

}

int main(){
    int numNotas;
    printf();

    return 0;
}

