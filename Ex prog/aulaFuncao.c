#include <stdio.h>
#include <stdlib.h>

float calcMedia();
void matriz();
void print();
void imprimir();

int main()
{

    printf("teste : %.2f \n", calcMedia(10, 5));
    print();

    int mat[3][4];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("Informe: \n");
            scanf("%i", &mat[i][j]);
        }
    }

    matriz(mat, 2);
    imprimir(4, mat, 3, 4);

    return 0;
}

void imprimir(int colM, int mtz[][colM], int row,int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%i \t", mtz[i][j]);
        }
    }
}

void matriz(int mt[][4], int num)
{
    //mt[0][3] = num;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            mt[i][j] *= num;
        }
    }
}

float calcMedia(int num1, int num2)
{
    float avg = 0.0f;

    avg = (float)(num1 + num2) / 2;
    return avg;
}

void print()
{

    printf("teste");
}