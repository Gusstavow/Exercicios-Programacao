#include <stdio.h>
#include <stdlib.h>

int main()
{
    const int num = 10;

    int idade = 0, peso = 0, maiorPeso = 0, qtdIda30a40 = 0, soma = 0, somaIda30a40 = 0, qtd70 = 0, qtd = 0;
    float meIda30a40 = 0, media = 0;

    for (int i = 0; i < num; i++)
    {
        printf("Informe a idade da %iª pessoa: \n", i + 1);
        scanf("%i", &idade);

        printf("Informe o peso da %iª pessoa: \n", i + 1);
        scanf("%i", &peso);

        // media
        qtd++;
        soma += idade;
        //--

        if (peso > maiorPeso)
        {
            maiorPeso = peso;
        }
        if (peso > 70)
        {
            qtd70++;
        }

        if (idade >= 30 && idade <= 40)
        {
            somaIda30a40 += idade;
            qtdIda30a40++;
        }
    }

    if (somaIda30a40 > 0 && qtdIda30a40 > 0)
    {
        meIda30a40 = (float)somaIda30a40 / (float)qtdIda30a40;
    }
    if (idade > 0)
    {
        media = (float)soma / (float)qtd;
    }

    printf("Media das idades: %.2f \n", media);
    printf("maior peso : %i \n", maiorPeso);
    printf("A media das idades das pessoa entre 30 3 40 anos : %.2f \n", meIda30a40);
    printf("Quantidade de pessoas acima de 70 quilos: %i", qtd70);

    return 0;
}