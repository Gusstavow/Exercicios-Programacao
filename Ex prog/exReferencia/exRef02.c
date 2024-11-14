#include <stdio.h>
#include <stdlib.h>
#include <math.h>

const int n = 3;

void Media(float notas[], float *avg);
float DesvioPadrao(float notas[], float avg);


int main()
{
    float notas[n];
    float media = 0.0f;

    for (int i = 0; i < n; i++)
    {
        printf("Informe as notas: \n");
        scanf("%f", &notas[i]);
    }

    Media(notas, &media);
    printf("%.2f, teste media por referencia: \n", media);
    printf("%.4f , teste desvio padrao: \n", DesvioPadrao(notas, media));

    return 0;
}

float DesvioPadrao(float notas[], float avg)
{
    float dp = 0.0f, soma = 0.0f;

    for (int i = 0; i < n; i++)
    {
        dp += pow((notas[i] - avg), 2)/n;
        
    }
    dp = sqrt(dp);
    

    return dp;
}

void Media(float notas[], float *avg)
{
    *avg = 0.0f;
    for (int i = 0; i < n; i++)
    {
        *avg += notas[i];
    }
    *avg /= n;
}


