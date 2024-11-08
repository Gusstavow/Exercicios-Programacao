#include <stdlib.h>
#include <stdio.h>

int main()
{

    const int n = 5;
    const float percentagem = 0.10f;
    char nome[n][20];
    float totalVendas[n];
    float vlrReceber[n];
    float brutoVds = 0.0f, media = 0.0f;
    int qtdVMrAvg = 0;
    int indMCo = 0;
    float maiorCo = 0.0f;

    for (int i = 0; i < n; i++)
    {
        printf("Informe o nome do vendedor: \n");
        scanf("%s", &nome[i]);
        printf("Infome o total de vendas do vendedor: \n");
        scanf("%f", &totalVendas[i]);
        vlrReceber[i] = totalVendas[i] * percentagem;
        brutoVds += totalVendas[i];

        if (i == 0)
        {
            maiorCo = vlrReceber[i];
            indMCo = i;
        }
        else if (vlrReceber[i] > maiorCo)
        {
            maiorCo = vlrReceber[i];
            indMCo = i;
        }
    }

    if (brutoVds > 0)
    {
        media = brutoVds / n;
    }

    for (int i = 0; i < n; i++)
    {
        printf("Nome: %s == Valor a receber: %.2f \n", nome[i], vlrReceber[i]);

        if (totalVendas[i] > media)
        {
            qtdVMrAvg++;
        }
    }

    printf("Total bruto vendidos pelo(s) %i vendedor(es): %.2f \n", n, brutoVds);
    printf("Media do total de vendas: %.2f \n", media);
    printf("Quantidade de vendores que venderam acima da media das vendas: %i \n", qtdVMrAvg);
    printf("Maior valor de comissao - Nome: %s === Valor: %.2f \n", nome[indMCo], vlrReceber[indMCo]);

    return 0;
}