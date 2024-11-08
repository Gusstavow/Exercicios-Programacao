#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    const int row = 5, col = 3;
    char names[row][20];
    int grades[row][col];
    float media[row];

    for (int i = 0; i < row; i++)
    {   media[i]=0;
        printf("Informe os nomes: \n");
        fgets(names[i], sizeof(names[i]), stdin);
        names[i][strcspn(names[i], "\n")] = "\0";
        fflush(stdin);
    }

    for (int i = 0; i < row; i++)
    { 
        for (int j = 0; j < col; j++)
        {  
            printf("Infome a %i º nota do aluno: %s : \n", j + 1, names[i]);
            scanf("%i", &grades[i][j]);
            media[i] += grades[i][j];
        }
    }

    for (int i = 0; i < row; i++)
    {
        
        for (int j = 0; j < col; j++)
        {
            printf("%i \t",grades[i][j]);
            if(j == 2){
                printf(" media: %.2f ---", media[i] / col);

            }
        }
        printf("notas aluno %s :", names[i]);
        printf("\n");
        printf("\n");
    }

    

    return 0;
}