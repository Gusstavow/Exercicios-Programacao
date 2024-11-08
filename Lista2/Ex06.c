#include <stdlib.h>
#include <stdio.h>

int main()
{
    const int n = 3;
    char nome[n][20];
    float peso[n];
    float menorPeso = 0.0f, media = 0.0f, soma = 0.0f;

    for (int i =0; i < n; i++)
    {
        printf("Informe o nome: \n");
        scanf("%s", &nome[i]);
        printf("Informe o peso: \n");
        scanf("%f", &peso[i]);
        soma += peso[i];
        if(i ==0){
            menorPeso = peso[i];
            
        }else if(peso[i] < menorPeso){
            menorPeso = peso[i];
            
        }
    }
    if(soma > 0){
        media = soma / n;
    }

    printf("Menor peso: %.2f \n", menorPeso);
    printf("Media: %.2f \n", media);
    printf("Pessoas com peso menor que a media: \n");

    for(int i =0; i < n; i++){
        if(peso[i] < media){
            printf("Nome: %s ===== peso: %.2f \n", nome[i], peso[i]);
        }
    }
    return 0;
}