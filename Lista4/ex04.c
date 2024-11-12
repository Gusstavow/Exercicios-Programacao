#include <stdio.h>
#include <stdlib.h>

#include <ctype.h>

float CalcMedia(int nota1, int nota2, int nota3, char let)
{
    float media = 0.0f;

    if (let == 'A')
    {
        media = (nota1 + nota2 + nota3) / 3;
    }
    else if (let == 'P')
    {
        media = (nota1 * 5 + nota2 * 3 + nota3 * 2) / (5 + 3 + 2);
    }

    return media;
}

int main()
{
    const int qtd = 3;
    char m ;
    int notas[qtd];

    printf("Informe como a media sera calculada: A -> Aritimetica || P -> Ponderada: \n");
    scanf("%c", &m);

    m = toupper(m);
    for (int i = 0; i < qtd; i++)
    {
        printf("Informe as notas do aluno: \n");
        scanf("%i", &notas[i]);
    }

    printf("Media : %.2f", CalcMedia(notas[0], notas[1], notas[2], m));

    return 0;
}
