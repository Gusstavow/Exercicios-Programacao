#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// variaveis const
const int nAlunos = 5;
const int nNotas = 4;
const int carac = 20;
// prototipo das funcoes
void CalcMedia(float mt[][nNotas], float avg[]);
void PrintMedia(float avg[], char nomes[][carac]);
void PrintMat(float mat[][nNotas], char nomes[][carac]);

int main()
{

    char nomes[nAlunos][20];
    float mat[nAlunos][nNotas];
    float media[nAlunos];

    for (int i = 0; i < nAlunos; i++)
    {
        printf("Informe o nome do %i º aluno: \n ", i + 1);
        fgets(nomes[i], sizeof(nomes[i]), stdin);
        nomes[i][strcspn(nomes[i], "\n")] = '\0';
        fflush(stdin);
    }

    for (int i = 0; i < nAlunos; i++)
    {
        printf("informe as notas do aluno: %s \n", nomes[i]);
        for (int j = 0; j < nNotas; j++)
        {
            printf("Nota %i: \n", j + 1);
            scanf("%f", &mat[i][j]);
        }
    }

    CalcMedia(mat, media);
    printf("\n");
    PrintMedia(media, nomes);
    printf("\n");
    PrintMat(mat, nomes);
    printf("\n");

    return 0;
}

void CalcMedia(float mt[][nNotas], float avg[])
{

    for (int i = 0; i < nAlunos; i++)
    {

        for (int j = 0; j < nNotas; j++)
        {
            avg[i] += (mt[i][j] / nNotas);
        }
    }
}

void PrintMedia(float avg[], char nomes[][carac])
{
    for (int i = 0; i < nAlunos; i++)
    {
        printf("Media do aluno: %s --> %.2f \n", nomes[i], avg[i]);
    }
}

void PrintMat(float mat[][nNotas], char nomes[][carac])
{

    for (int i = 0; i < nNotas + 1; i++)
    {
        if (i < nNotas)
        {
            
            printf("Nota %i ", i + 1);
            printf(" -- ");
        }

        if (i == nNotas - 1)
        {
            printf("Nomes");
        }
    }

    printf("\n");
    printf("\n");

    for (int i = 0; i < nAlunos; i++)
    {
        for (int j = 0; j < nNotas; j++)
        {
            printf(" %.2f \t", mat[i][j]);
        }
        
        printf(" --- ");
        printf("%s \n", nomes[i]);
    }
}
