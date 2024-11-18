#include <stdio.h>
#include <stdlib.h>
const int n = 10;

char Primo(int num);
int main()
{
    int num;
    for (int i = 0; i < n; i++)
    {
        printf("Informes os numeros :\n");
        scanf("%i", &num);

        printf("O numero %i eh Primo? : %c \n", num, Primo(num));
    }

    return 0;
}

char Primo(int num)
{
    int div = 0;

    if (num == 1)
    {
        return 'N';
    }

    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            div++;
        }

        if (div > 2)
        {
            return 'N';
        }
    }

    if (div == 2)
    {
        return 'S';
    }
}