#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num[10], fat[10];

    // for para a entrada de 10 numeros
    for (int i = 0; i < 10; i++)
    {
        fat[i] = 1;
        printf("numero: \n");
        scanf("%i", &num[i]);
        // FOR PARA A LOGICA DO FATORIAL
        for (int j = 1; j <= num[i]; j++)
        {
            fat[i] = fat[i] * j;
        }
    }

    for (int i = 0; i < 10; i++)
    {
        printf("O fatorial de %i eh igual a: %i \n", num[i], fat[i]);
    }

    return 0;
}