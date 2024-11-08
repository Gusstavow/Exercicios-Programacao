#include <stdio.h>
#include <stdlib.h>

// const int row = 7, col = 10;
// testando com 3 linhas e 5 colunas 
#define row 3
#define col 5
int mat[row][col];
int test = 0;
// row -1 === para nao preencher a ultima linha da matriz, deixando-a  vazia para que seja preenchida com a soma das colunas

// funcao somar coluna
int sumCol(int c)
{
    int soma = 0;
    for (int i = 0; i < row - 1; i++)
    {
        soma += mat[i][c];
    }
    return soma;
}
// func imprimir a matriz com a soma na ultima linha
int print()
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i == row - 1)
            {
                mat[i][j] = sumCol(j);
            }
            printf("%i \t", mat[i][j]);
        }
        printf("\n");
    }
}

int main()
{

    // zerando a matriz
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            mat[i][j] = 0;
        }
    }

    // atribuindo valores na matriz
    for (int i = 0; i < row - 1; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("informe os numeros da matriz: ");
            scanf("%i", &mat[i][j]);
        }
    }
    print();

    for (int i = 0; i < col; i++)
    {
        printf("soma col %i matriz %i: \n", i+1, sumCol(i));
    }

    //logica bigger
    // for (int i = 0; i < col; i++)
    // {
    //     for (int j = 0; j < row - 1; j++)
    //     {
    //         test += mat[j][i];
           
    //     }
        
    //      printf("soma coluna da matriz %i: \n", test);
    //      test = 0;
    // }

    // teste

    return 0;
}