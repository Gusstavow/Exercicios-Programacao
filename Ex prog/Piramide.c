#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 0;
    printf("informe o tamnho da piramide: \n");
    scanf("%i", &n);
    for (int i = 0; i < n; i++)
    {
        printf(" ");
        
            
        
    }
    printf("$\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (j == 0)
            {
                for (int k = i; k < n-1; k++)
                {
                    printf(" ");
                }
            }

            printf("#");
        }
        printf("_");
        for (int j = 0; j <= i; j++)
        {
            printf("#");
        }

        printf("\n");
    }

    return 0;
}