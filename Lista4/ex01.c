#include <stdio.h>
#include <stdlib.h>

int perfect();
int main()
{
    int num = 0;

    printf("informe um numero: \n");
    scanf("%i", &num);

    if(perfect(num) == 1){
        printf("O numero %i é perfeito!!! \n", num);

    }else{
        printf("O numero %i NAO é perfeito!!! \n", num);
    }
    
    return 0;
}

int perfect(int n)
{
    int buffer = 0;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            buffer += i;
        }
    }

    if (buffer == n)
    {
        //perfeito
        return 1;
    }
    else
    {
        //imperfeito
        
        return 0;
    }
}