#include <stdio.h>
#include <stdlib.h>

int main()
{
    const int row = 3, col = 5;
    int grtNum = 0, ind[2], qtd = 0, div = 0;
    int mat[row][col];
    float avg = 0.0f;
    int qtdPri = 0;
    int primos[row * col];

    for (int i = 0; i < row; i++)
    {

        for (int j = 0; j < col; j++)
        {

            printf("informe os elementos da matriz : \n");
            scanf("%i", &mat[i][j]);

            if (i == 0)
            {
                grtNum = mat[i][j];
            }

            if (mat[i][j] > grtNum)
            {
                grtNum = mat[i][j];
                ind[0] = i;
                ind[1] = j;
            }

            if (mat[i][j] % 2 != 0)
            {
                avg += mat[i][j];
                qtd++;
            }

            div = 0;
            for (int k = 1; k <= mat[i][j]; k++)
            {

                if (mat[i][j] % k == 0)
                {
                    div++;
                }
                if (div > 2)
                {
                    break;
                }
            }

            if (div == 2)
            {
                primos[qtdPri] = mat[i][j];
                qtdPri++;
            }
        }
    }

    printf("qtd primos : %i \n", qtdPri);
    for (int i = 0; i < qtdPri; i++)
    {

        printf("num : %i \n", primos[i]);
    }

    return 0;
}