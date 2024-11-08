#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    const int n = 5;
    char nomes[n][20];
    float notas[n];
    int qtdMenor5 = 0, qtdMaiorAvg = 0, indMrNota = 0;
    float media = 0.0f, maiorNota = 0.0f, soma = 0.0f;

    for (int i = 0; i < n; i++)
    {
        printf("Informe o nome do %iª aluno: \n", i + 1);
        scanf("%s", &nomes[i]);

        printf("Informe a nota do %iª aluno: \n", i + 1);
        scanf("%f", &notas[i]);

        soma += notas[i];
    }
    if (soma > 0)
    {
        media = soma / n;
    }

    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            maiorNota = notas[i];
        }
        else if (notas[i] > maiorNota)
        {
            maiorNota = notas[i];
            indMrNota = i;
        }

        if (notas[i] < 5)
        {
            qtdMenor5++;
        }

        if (notas[i] > media)
        {
            qtdMaiorAvg++;
        }
    }

    printf("a quantidade de alunos que teve notas abaixo de 5: %i \n", qtdMenor5);
    printf("a média das notas dos alunos;: %.2f \n", media);
    printf("a quantidade de alunos que teve nota acima da média;  %i \n", qtdMaiorAvg);
    printf("a maior nota e o nome do aluno-- NOTA: %.2f-- NOME: %s \n", notas[indMrNota], nomes[indMrNota]);

    return 0;
}