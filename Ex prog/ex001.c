#include <stdio.h>
#include <stdlib.h>


int primo();

int main()
{
    int num = 0;
    printf("Informe um numero: \n");
    scanf("%i", &num);

   
    if( primo(num) == 1){
        printf("O numero %i é primo!\n", num);
    }else{
        printf("O numero %i não é primo!\n", num);
    }

    return 0;
}

int primo(int n)
{

    int div = 0;

    for (int i = 1; i <= n; i++)
    {

        if (n % i == 0)
        {
            div++;
        }

        if (div > 2)
        {
            break;
        }
    }

    if (div == 2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}