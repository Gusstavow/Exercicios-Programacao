#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade = 0;
    float media = 0;
    int maiorIdade = 0, menorIdade = 0;
    int qtdIdadesMen10 = 0, qtd = 0;
    int soma = 0;

    printf("informe a idade: \n");
    scanf("%i", &idade);

    maiorIdade = idade;
    menorIdade = idade;
    while (idade != 0)
    {
        soma += idade;
        qtd++;
        if (idade < 10)
        {
            qtdIdadesMen10++;
        }

        if (idade > maiorIdade)
        {
            maiorIdade = idade;
        }
        else if (idade < menorIdade)
        {
            menorIdade = idade;
        }

        printf("informe a idade: \n");
        scanf("%i", &idade);
    }

    if (qtd > 0)
    {
        media = (float)soma / (float)qtd;
    }

    printf("media idades: %.2f \n", media);
    printf("maior idade : %i \n", maiorIdade);
    printf("Menor idade : %i \n", menorIdade);

    return 0;
}