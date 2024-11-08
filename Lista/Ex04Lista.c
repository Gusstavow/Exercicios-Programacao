#include <stdlib.h>
#include <stdio.h>

int main()
{
    int idade = 0;
    float mIdadeOtimo = 0, soma = 0;
    int opcao = 0, qtdPeReg = 0, qtdPeBom = 0, qtdPeOtimo = 0;

    printf("Informe a idade: \n");
    scanf("%i", &idade);

    while (idade > 0)
    {
        printf("Digite : 3- Otimo ---- 2- Bom ------- 1- Regular \n");
        scanf("%i", &opcao);
        switch (opcao)
        {
        case 1:
            // Regular
            qtdPeReg++;
            break;

        case 2:
            // Bom
            qtdPeBom++;
            break;

        case 3:
            // otimo
            qtdPeOtimo++;
            soma += idade;
            break;

            default:
            printf("Error------\n");
            break;
            
        }
        printf("Informe a idade: \n");
        scanf("%i", &idade);
    }

    if(qtdPeOtimo > 0){
        mIdadeOtimo = (float)soma / (float)qtdPeOtimo;

    }
    printf("Media idade de pessoas otimo: %.2f \n", mIdadeOtimo);
    printf("Quantidade de Rewgular: %i \n", qtdPeReg);
    printf("Quantidade de Bom: %i \n", qtdPeBom);
    printf("Quantidade de Otimo: %i \n", qtdPeOtimo);

    return 0;
}