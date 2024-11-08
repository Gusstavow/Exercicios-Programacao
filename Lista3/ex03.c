#include <stdio.h>
#include <stdlib.h>

#include <string.h>

int main()
{
    const int seller = 5, month = 3, letters = 30;

    float sales[seller][month];
    char names[seller][letters];
    float totalValEachSeller[seller];
    float greaterVal[month];
    float totalSold = 0.0f;
    int indSeller = 0;

    for (int i = 0; i < seller; i++)
    {

        for (int j = 0; j < month; j++)
        {
            printf("Informe a %i ª valor de venda do %i º funcionario: \n", j + 1, i + 1);
            scanf("%f", &sales[i][j]);
        }
        printf("=======================\n");
    }

    for (int i = 0; i < seller; i++)
    {
        printf("Informe o nome do %i º vendedor: \n", i + 1);
        scanf("%s", &names[i]);
    }

    for (int i = 0; i < seller; i++)
    {
       
        for (int j = 0; j < month; j++)
        {
            if (i == 0)
            {
                greaterVal[i] = sales[i][j];
                for (int k = 0; k < seller; k++)
                {

                    totalValEachSeller[k] = 0;
                }
            }

            totalSold += sales[i][j];
            if (j == 0 && sales[i][j] > greaterVal[j])
            {
                greaterVal[j] = sales[i][j];
                indSeller = i;
            }
            else if (j == 1 && sales[i][j] > greaterVal[j])
            {
                greaterVal[j] = sales[i][j];
                indSeller = i;
            }
            else if (j == 2 && sales[i][j] > greaterVal[j])
            {
                greaterVal[j] = sales[i][j];
                indSeller = i;
            }
        }
    }

    for (int i = 0; i < month; i++)
    {

        printf("\tmonth %i |", i + 1);
    }
    printf("\n");

    for (int i = 0; i < seller; i++)
    {

        for (int j = 0; j < month; j++)
        {

            printf("\t%.0f\t|", sales[i][j]);
        }

        printf("- %s ", names[i]);

        printf("\n");
    }

    for (int i = 0; i < seller; i++)
    {
        for (int j = 0; j < month; j++)
        {

            switch (i)
            {
            case 0:
                totalValEachSeller[i] += sales[i][j];
                break;

            case 1:
                totalValEachSeller[i] += sales[i][j];
                break;

            case 2:
                totalValEachSeller[i] += sales[i][j];
                break;

            case 3:
                totalValEachSeller[i] += sales[i][j];
                break;
            case 4:
                totalValEachSeller[i] += sales[i][j];
                break;
            }
        }
    }

    printf("Total vendidos por todos vendedores: %.2f \n", totalSold);
    printf("Maior venda do primeiro mês: %.2f -- nome: %s \n", greaterVal[0], names[indSeller]);
    printf("Maior venda do terceiro mês: %.2f \n", greaterVal[2]);
    for (int i = 0; i < seller; i++)
    {
        printf("Total vendido por %s e valor total vendidos no(s) %i meses: R$ %.2f \n", names[i], month, totalValEachSeller[i]);
    }

    return 0;
}