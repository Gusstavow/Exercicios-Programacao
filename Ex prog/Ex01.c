#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vet[10];
    int novoVet[10];
    int maiorNum = 0;
    int TamVet = sizeof(vet) / sizeof(vet[0]);

    for (int i = 0; i < TamVet; i++)
    {
        printf(" Numero %i:  \n", i + 1);
        scanf("%i", &vet[i]);
    }

    for (int i = 0; i < TamVet; i++)
    {
        if (vet[i] > maiorNum)
        {
            maiorNum = vet[i];
        }
    }

    for (int i = 0; i < TamVet; i++)
    {
        novoVet[i] = vet[i] * maiorNum;
        printf("Numeros do novo vetor: %i \n", novoVet[i]);
    }

    for (int i = 0; i < TamVet; i++)
    {

        if (i == 0)
        {
            maiorNum = novoVet[i];
        }
        else if (novoVet[i] > maiorNum)
        {
            maiorNum = novoVet[i];
        }
    }

    printf("Maior numero do novo vetor: %i \n", maiorNum);

    return 0;
}