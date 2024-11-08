#include <stdio.h>
#include <stdlib.h>
const int row = 4, col = 4;
void print();
void ordMtz();
int main()
{

    int mat[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("informe os valores da matiz: \n");
            scanf("%i", &mat[i][j]);
        }
    }

    print(mat);
    ordMtz(mat);

    return 0;
}

void print(int mtz[][col])
{
    int cont = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (cont == 0)
            {
                printf("\n Matriz Atual!\n\n");
                cont++;
            }
            printf("%i \t", mtz[i][j]);
        }
        printf("\n");
    }
}
void ordMtz(int mtz[][col])
{
    int buffer = mtz[0][1];
    int cont = 0;

    //logica ordenar matriz
    for (int i = 0; i < row; i++)
    {

        for (int j = 0; j < col; j++)
        {
            //ORDENAR MATRIZ FOR K == LINHA FOR L == COLUNA 
            for (int k = 0; k < row; k++)
            {
                for (int l = 0; l < col; l++)
                {
                    if (mtz[i][j] < mtz[k][l])
                    {
                        buffer = mtz[i][j];
                        mtz[i][j] = mtz[k][l];
                        mtz[k][l] = buffer;
                    }
                }
            }
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (cont == 0)
            {
                printf("\n Matriz Ordenada!\n\n");
                cont++;
            }
            printf("%i \t", mtz[i][j]);
        }
        printf("\n");
    }
}