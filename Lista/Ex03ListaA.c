#include <stdlib.h>
#include <stdio.h>

int main()
{

    int num = 0, somaPar = 0, somaPrimo = 0, qtdNum10e20 = 0;
    int div;

    for (int i = 0; i < 10; i++)
    {
        printf("Informe um numero: \n");
        scanf("%i", &num);

        if (num % 2 == 0)
        {
            // numero par
            somaPar += num;
        }
        if (num >= 10 && num <=20)
        {
            qtdNum10e20++;
        }
        div = 0;
        for (int j = 1; j <= num; j++)
        {
            if (num % j == 0)
            {
                div++;
            }
            if (div > 2)
            {
                break;
            }
        }
        if (div == 2 || num == 1)
        {
            printf("Primo! \n");
            somaPrimo += num;
        }
    }

    printf("soma Par: %i \n", somaPar);
    printf("soma Primos : %i \n", somaPrimo);
    printf("quantidade de numeros entre 10 e 20: %i\n", qtdNum10e20);

    return 0;
}