#include <stdio.h>
#include <stdlib.h>

int main()
{

    const int n = 4;
    float vetA[n], vetB[n];
    int aux = 0;
    float div = 0.0f;

    for (int i = 0; i < n; i++)
    {
        printf("Digite o %iº Termo: \n", i + 1);
        scanf("%f", &vetA[i]);

      
        printf("\n");
    }

    for(int i = 0; i < n; i++){
          for (int j = 0; j < n-1; j++)
        {
            if(vetA[i] > vetA[j]){
                aux = vetA[j];
                vetA[j] = vetA[i];
                vetA[i] = aux;
                

            }

        }
    }
    printf("\nVetor A ordem decrescente: \n");

    for (int i = 0; i < n; i++)
    {
 vetB[i] = vetA[i] / (float)2;
       
       
        printf("%.2f \t", vetA[i]);
        
    }

printf(" \nVetor B( metade do vetor A) \n");
    for(int i = 0; i < n; i++){
         printf("%.2f \t", vetB[i]);

    }

    return 0;
}