#include <stdlib.h>
#include <stdio.h>

int main()
{
    const int qtd = 5;
    char nome[qtd][20];
    float valor[qtd];

    int qtdMe10 = 0, qtdMaiorAvg = 0, soma = 0, idcMaior = 0;
    float avg = 0.0f, maiorVa = 0.0f;

    for (int i = 0; i < qtd; i++)
    {

        printf("Informe o nome do produto: \n");
        scanf("%s", &nome[i]);

        printf("Informe o valor do produto: \n");
        scanf("%f", &valor[i]);
        soma += valor[i];
    }

    if (soma > 0)
    {
        avg = soma / qtd;
    }
    for (int i = 0; i < qtd; i++)
    {
        if (i == 0)
        {
            maiorVa = valor[i];
            idcMaior = i;
        }
        else if (valor[i] > maiorVa)
        {
            maiorVa = valor[i];
            idcMaior = i;
        }

        if (valor[i] < 10)
        {
            qtdMe10++;
        }

        if (valor[i] > avg)
        {
            qtdMaiorAvg++;
        }
    }

    printf("qtd produtos valor abaixo de 10 reais: %i\n", qtdMe10);
    printf("Media dos valores dos produtos: %.2f \n", avg);
    printf("quantidade de produtos que valor acima da media: %i \n", qtdMaiorAvg);
    printf("Maior valor: %.2f --- nome do produto: %s  \n", maiorVa, nome[idcMaior]);
    printf("===================================\n");
    for (int i = 0; i < qtd; i++)
    {

        printf("Nome: %s ----- Valor:R$ %.2f \n", nome[i], valor[i]);
    }

    return 0;
}