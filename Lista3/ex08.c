#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
const int row = 2, col = 6;
int grtNum = 0, sumMul_3 = 0;
float avg = 0.0f, avg_2Row = 0.0f;

void print();
void newMatz();
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int mat[row][col], newMat[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Informe os numeros da matriz: \n");
            scanf("%i", &mat[i][j]);
            avg += mat[i][j];
            if (i == 0)
            {
                grtNum = mat[i][j];
            }
            else if (mat[i][j] > grtNum)
            {
                grtNum = mat[i][j];
            }

            if (mat[i][j] % 3 == 0)
            {
                sumMul_3 += mat[i][j];
            }

            if (i == 1)
            {
                avg_2Row += mat[i][j];
            }
        }
    }
    avg /= (row * col);
    avg_2Row /= col;

  
    print(mat);

    printf("nova matriz \n");
    newMatz(mat, (int)avg);

    return 0;
}

void print(int mtz[row][col])
{
    printf("maior número da matriz: %i \n", grtNum);
    printf("soma dos números múltiplos de 3 da matriz: %i \n", sumMul_3);
    printf("média dos números da segunda linha: %.2f \n", avg_2Row);
    printf("média dos números da matriz: %.2f \n", avg);
    printf("matriz atual: \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%i \t", mtz[i][j]);
        }
        printf("\n");
    }
}

void newMatz(int mtz[][col], int mult){

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            mtz[i][j] *= mult;
            printf("%i \t", mtz[i][j]);
        }
        printf("\n");
    }

}