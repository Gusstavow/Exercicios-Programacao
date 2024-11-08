#include <stdio.h>
#include <stdlib.h>

int main()
{

    const int n = 10;
    const int m = 20;
    int vetA[n], vetB[n], vetC[m];
    int cont = 0;

    for (int i = 0; i < n; i++)
    {
        printf("informe o %iº numeros do primeiro vetor: \n", i + 1);
        scanf("%i", &vetA[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("informe o %iº numeros do Segundo vetor: \n", i + 1);
        scanf("%i", &vetB[i]);
    }

    printf("VetA: ");
    for (int i = 0; i < n; i++)
    {
        printf("%i \t", vetA[i]);
        
    }

    printf("\n");
    printf("VetB: ");
       for (int i = 0; i < n; i++)
    {
        
        printf("%i \t", vetB[i]);
    }
     printf("\n");

    // zerar o vetor
    for (int i = 0; i < m; i++)
    {
        vetC[i] = 0;
    }
    // logica
    for (int i = 0; i < n; i++)
    {
        
        
        //printf("i = %i\n", i);
        //printf("cont = %i\n", cont);
        
            vetC[cont] = vetA[i];
            vetC[cont+1] = vetB[i];
        
            
        
        cont+=2;
    }
    printf("VetC: ");
    for (int i = 0; i < m; i++)
    {
        printf("%i \t", vetC[i]);
    }
     printf("\n");
    return 0;
}