#include <stdio.h>
#include <stdlib.h>

int main()
{
    const int linha = 3, coluna = 5;
    int mat[linha][coluna];
    int menorNum = 0, soma3 = 0, maiorNum = 0, qtd = linha * coluna;
    float media = 0.0f;

    for (int i = 0; i < linha; i++)
    {

        for (int j = 0; j < coluna; j++)
        {
            printf("Informe os numeros da matriz: \n");
            scanf("%i", &mat[i][j]);
            media += mat[i][j];
            if (mat[i][j] % 3 == 0)
            {
                soma3 += mat[i][j];
            }
            // logica maior numero da terceira coluna e menor numeor da matriz
            if (i == 0)
            {
                maiorNum = mat[0][2];
                menorNum = mat[0][0];
                //printf("teste\n");
            }
             else if ( menorNum > mat[i][j])
            {
                menorNum = mat[i][j];
            }

            if (j == 2 && mat[i][j] > maiorNum)
            {
                maiorNum = mat[i][j];
            }
        }
    }

    for (int i = 0; i < linha; i++)
    {
        for (int j = 0; j < coluna; j++)
        {
            printf("%i\t", mat[i][j]);
        }
        printf("\n");
    }
    if (qtd > 0)
    {
        media /= qtd;
    }
    printf("menor numero: %i\n", menorNum);
    printf("soma dos numeros multiplos de 3 da matriz: %i \n", soma3);
    printf("maior numero da 3ª coluna da matriz: %i \n", maiorNum);
    printf("media dos numeros d matriz: %.2f", media);

    return 0;
}