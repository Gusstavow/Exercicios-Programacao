#include <stdio.h>
#include <stdlib.h>

int main()
{
    int row = 4, col = 6;
    int mat[row][col];
    int qtd10a30 = 0, sumM10Par = 0, sumCol4 = 0;
    float mediaRow3 = 0.0f;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("num: \n");
            scanf("%i", &mat[i][j]);

            if (mat[i][j] >= 10 && mat[i][j] <= 30)
            {
                qtd10a30++;
            }
            if (mat[i][j] > 10 && mat[i][j] % 2 == 0)
            {
                sumM10Par += mat[i][j];
            }
            switch(i){
                case 0:
                sumCol4 = mat[0][3];
                break;

                case 2:
                mediaRow3 += mat[i][j];
                break;

            }

            if (j == 3)
            {
                sumCol4 += mat[i][j];
            }

           
        }
    }
    mediaRow3 /= col;
     for(int i =0; i < row; i++){
        for(int j =0; j < col; j++){
            printf("%i\t", mat[i][j]);

     
        }
        printf("\n");
    }

    printf("quantidade entre 10 e 30: %i \n", qtd10a30);
    printf("soma dos numeros mairoes que 10 e pares: %i \n", sumM10Par);
    printf("sum of numbers in forth column: %i \n", sumCol4);
    printf("avarage matriz numbers there are in third row: %.2f \n", mediaRow3);
    return 0;
}