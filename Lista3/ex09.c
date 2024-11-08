#include <stdio.h>
#include <stdlib.h>

const int row = 4, col = 4;
void newMtz();
void mtz();

int main()
{
    int mat[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("informe a matriz atual: \n");
            scanf("%i", &mat[i][j]);
        }
    }
    printf("\nMatriz antiga: \n");
    mtz(mat);

    printf("\n\nMatriz Nova: \n");
    newMtz(mat);

    return 0;
}

void newMtz(int mtz[][col])
{
    int buffer[row];
    int newMat[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            newMat[i][j] = mtz[i][j];
        }
    }

    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            // if (i == 1)
            // {
            //     buffer[j] = newMat[j][i];
            //     newMat[j][1] = newMat[j][0];
            //     newMat[j][0] = buffer[j];
            // }else if(i == 2){
            //     buffer[j] = newMat[j][i];
            //     newMat[j][2] = newMat[j][3];
            //     newMat[j][3] = buffer[j];
            // }

            if (i == 1 || i == 3)
            {
                buffer[j] = newMat[j][i - 1];
                newMat[j][i - 1] = newMat[j][i];
                newMat[j][i] = buffer[j];
            }
        }
    }
//imprimir matriz nova
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            printf("%i \t", newMat[i][j]);
            // printf("%i \t", buffer[j]);
        }
        printf("\n");
    }
}

void mtz(int mtz[][col])
{
    // imprimir matriz antiga
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            printf("%i \t", mtz[i][j]);
        }
        printf("\n");
    }
}