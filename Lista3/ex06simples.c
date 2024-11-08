#include <stdio.h>
#include <stdlib.h>

const int n = 3;
void printMatriz();
void printEx();

int main()
{
    float mat[n][3], avgSal = 0.0f, avgChld = 0.0f, avgSal20_30 = 0.0f;
    int qtdChld15_25 = 0, qtd = 0;
    ;
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        // salario
        j = 0;
        printf("Informe o salario da %i ª pessoa: \n", i + 1);
        scanf("%f", &mat[i][j]);
        avgSal += mat[i][j];

        // idade
        // j == 1
        j++;
        printf("informe a idade da %i ª pessoa: \n", i + 1);
        scanf("%f", &mat[i][j]);
        if (mat[i][j] > 20 && mat[i][j] < 30)
        {
            avgSal20_30 += mat[i][j - 1];
            qtd++;
        }

        // filhos
        j++;
        printf("informe o numero de filhos da %i ª pessoa: \n", i + 1);
        scanf("%f", &mat[i][j]);
        avgChld += mat[i][j];

        // j -1 pegar os dados da coluna 1 (j == 2 (j -1 = 1) ou seja a coluna das idades)
        if (mat[i][j - 1] > 15 && mat[i][j - 1] < 25)
        {
            qtdChld15_25 += mat[i][j];
        }
    }
    // media de salario da populacao;
    avgSal /= n;
    // media de filhos
    avgChld /= n;
    // media dos salario entre 20 e 30 anos
    if(avgSal20_30 > 0){
        avgSal20_30 /= qtd;
    }
    

    printMatriz(mat);

    //printEx(avgSal, avgChld, qtdChld15_25, avgSal20_30);

    printf("A média de salário da população: %.2f\n", avgSal);
    printf("A média do número de filhos: %.2f\n", avgChld);
    printf("A quantidade de filhos das pessoas que tem idade entre 15 a 25 anos: %i\n", qtdChld15_25);
    printf("A média de salário de pessoas que tem idade entre 20 a 30 ano: %.2f\n", avgSal20_30);

    return 0;
}

// void printEx(float avgS, float avgC, int qtdCh, float avgSA)
// {
//     printf("A média de salário da população: %.2f\n", avgS);
//     printf("A média do número de filhos: %.2f\n", avgC);
//     printf("A quantidade de filhos das pessoas que tem idade entre 15 a 25 anos: %i\n", qtdCh);
//      printf("A média de salário de pessoas que tem idade entre 20 a 30 ano: %.2f\n", avgSA);
// }

void printMatriz(float mtz[][n])
{

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (j == 0)
            {
                printf("%.2f \t", mtz[i][j]);
            }
            else
            {
                printf("%.0f \t", mtz[i][j]);
            }
        }
        printf("\n");
    }
}