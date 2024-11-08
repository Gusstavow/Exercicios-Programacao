#include <stdlib.h>
#include <stdio.h>

int main()
{

    const int row = 4, col = 3;
    int mat[row][col];
    int sumP = 0, sumRow2e4 = 0, grtNum = 0, div = 0, primo = 0;
    float avg = 0.0f;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {

            printf("Informe os valores da matriz: \n");
            scanf("%i", &mat[i][j]);
            avg += mat[i][j];
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            
            switch (i)
            {
            case 0:
                grtNum = mat[i][j];
                break;
            case 1:
                sumRow2e4 += mat[i][j];

                break;
            case 3:
                sumRow2e4 += mat[i][j];

                break;
            }

            //logica maior numero
            if(mat[i][j] > grtNum){
                grtNum = mat[i][j];

            }

            // logica primo
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
                primo += mat[i][j];
            }
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("\t%i", mat[i][j]);
        }
        printf("\n");
    }
    avg /= (row * col);

    printf("soma dos elementos da 2ª e 4ª linha: %i \n", sumRow2e4);
    printf("soma primo %i \n", primo);
    printf("A media dos numeros da matriz: %.2f \n", avg);
    printf("O maior numero da matriz: %i \n", grtNum);

    return 0;
}