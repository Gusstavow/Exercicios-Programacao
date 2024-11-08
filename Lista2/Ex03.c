#include <stdlib.h>
#include <stdio.h>

int main()
{

    int vetA[5];
    int vetB[5];
    int vetC[10];

    int tArrayC = sizeof(vetC) / sizeof(vetC[0]);
    int tArrayA = sizeof(vetA) / sizeof(vetA[0]);

    int qtdPerf = 0;
    int mod = 0;
    

    for (int i = 0; i < tArrayC; i++)
    {

        if (i < tArrayA)
        {
            printf("Numeros para o primerio vetor:\n");
            scanf("%i", &vetA[i]);
            vetC[i] = vetA[i];
        }
        else
        {
            printf("Numeros para segundo vetor:\n");
            scanf("%i", &vetB[i - tArrayA]);
            vetC[i] = vetB[i - tArrayA];
        }
    }

    for (int i = 0; i < tArrayC; i++)
    {
        // Um número é perfeito quando ele é igual a soma dos seus divisores
        // exceto ele próprio. (Ex: 6 é perfeito, 6 = 1 + 2 + 3, que são seus divisores.
        for (int j = 0; j < vetC[i] - 1; j++)
        {
            //resDiv = vetC[i] / j + 1;
            mod = vetC[i] % (j + 1);
            if (mod == 0)
            {
                qtdPerf++;
            }
        }
    }
    printf("qtd perfeitos : %i", qtdPerf);

    // for (int i = 0; i < tArrayC; i++)
    // {
    //     printf("New vet: %i\n", vetC[i]);
    // }

    return 0;
}