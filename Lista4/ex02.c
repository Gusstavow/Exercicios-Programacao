#include <stdio.h>
#include <stdlib.h>

const int row = 3;
const int col = 5;

int grtNumCol3();
int smllrNumber();
int sumMult3();
void print();
int main()
{

    int mat[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Informe os valores da matriz: \n");
            scanf("%i", &mat[i][j]);
        }
    }

    print(mat);

    printf("Menor numero da matriz: %i \n", smllrNumber(mat));
    printf("Soma do multiplos de 3: %i \n", sumMult3(mat));
    printf("Maior numero da terceira coluna : %i \n", grtNumCol3(mat));

    return 0;
}

int smllrNumber(int mtz[][col])
{
    int smllerNum = mtz[0][0];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (mtz[i][j] < smllerNum)
            {
                smllerNum = mtz[i][j];
            }
        }
    }
    return smllerNum;
}

int sumMult3(int mtz[][col])
{
    int sum = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (mtz[i][j] % 3 == 0)
            {
                sum += mtz[i][j];
            }
        }
    }
    return sum;
}

int grtNumCol3(int mtz[][col])
{
    int grtNum = mtz[0][0];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (mtz[i][j] > grtNum && j == 2)
            {
                grtNum = mtz[i][j];
            }
        }
    }

    return grtNum;
}

void print(int mtz[][col])
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%i \t", mtz[i][j]);
        }
        printf("\n");
    }
}
