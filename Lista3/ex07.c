#include <stdio.h>
#include <stdlib.h>
#include <string.h>
const int nAluno = 5, nNota = 4;
int indGrtAvg = 0;
float calcMedia();

int main()
{

    int mat[nAluno][nNota];
    char aluno[nAluno][20];

    for (int i = 0; i < nAluno; i++)
    {
        printf("Informe o nome do %i aluno: \n", i + 1);
        fgets(aluno[i], sizeof(aluno[i]), stdin);
        aluno[i][strcspn(aluno[i], "\n")] = "\0";
        fflush(stdin);
    }
    for (int i = 0; i < nAluno; i++)
    {

        for (int j = 0; j < nNota; j++)
        {
            printf("informe a %i nota do aluno %s: \n", j + 1, aluno[i]);
            scanf("%i", &mat[i][j]);
        }
    }

    for (int i = 0; i < nAluno; i++)
    {
        printf("media do aluno %s ", aluno[i]);
        printf(": %.2f \n", calcMedia(mat, i));
    }
    printf("===================================\n");
    printf("maior media %.2f do aluno: %s \n", calcMedia(mat, indGrtAvg), aluno[indGrtAvg]);

    return 0;
}

float calcMedia(int mtz[nAluno][nNota], int ind)
{
    float avg[nAluno];
    float bufffer = 0.0f;
    // zerar a variavel soma
    for (int i = 0; i < nAluno; i++)
    {
        avg[i] = 0;
    }

    for (int i = 0; i < nAluno; i++)
    {
        for (int j = 0; j < nNota; j++)
        {
            avg[i] += mtz[i][j];
        }

        avg[i] /= nNota;
        // maior media
        if (i == 0)
        {
            bufffer = avg[i];
            indGrtAvg = i;
        }
        else if (avg[i] > bufffer)
        {
            bufffer = avg[i];
            indGrtAvg = i;
        }
    }

    return avg[ind];
}