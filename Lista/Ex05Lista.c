#include <stdlib.h>
#include <stdio.h>

int main()
{
    int n[10];
    int qtdPrimos = 0;
    int somaMult5 = 0;
    int somaImpM10 =0, qtd = 0;
    float mediaImpM10 = 0;
    int div = 0;

    for (int i = 0; i < 10; i++)
    {
        printf(" informe um numero: \n");
        scanf("%i", &n[i]);

        div =0;
        for (int j = 1; j <= n[i]; j++)
        {
            if (n[i] % j == 0)
            {
                div++;
            }
            if(div > 2){
                break;
            }

          
        }
          if(div ==2){
                qtdPrimos++;

            }

        if(n[i] % 5== 0){
            somaMult5+= n[i];

        }

        if(n[i] % 2 != 0 && n[i] > 10){
            somaImpM10+=n[i];
            qtd++;

        }
    }
    if(somaImpM10 > 0){
        mediaImpM10 = (float)somaImpM10 / (float)qtd;

    }

    printf("Qtd pritmso %i \n", qtdPrimos);
    printf("Soma dos mult de 5 : %i \n", somaMult5);
    printf("media: %.2f \n", mediaImpM10);

    return 0;
}