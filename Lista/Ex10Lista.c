#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade = 0, maiorIdade = 0, qtdP20a30 = 0, qtd = 0, qtd5Mil = 0;
    float sal = 0.0f, mSal = 0.0f, media = 0.0f, somaSal20a30 = 0.0f, per = 0.0f;

    printf("Informe a idade: \n");
    scanf("%i", &idade);
    maiorIdade = idade;

    while (idade > 0)
    {
        qtd++;
        printf("Informe o salario %i: \n", qtd);
        scanf("%f", &sal);
        // maior slario
        if (sal > mSal)
        {
            mSal = sal;
        }
        if (idade > maiorIdade)
        {
            maiorIdade = idade;
        }

        if (idade >= 20 && idade <= 30)
        {
            somaSal20a30 += sal;
            qtdP20a30++;
        }

        if (sal > 5000)
        {
            qtd5Mil++;
        }

        printf("Informe a idade: \n");
        scanf("%i", &idade);
    }

    if(somaSal20a30 > 0){
        media = (float)somaSal20a30 / (float)qtdP20a30;
    }
    if(qtd5Mil > 0 && qtd > 0){
        per = (qtd5Mil * 100) / (float)qtd;

    }

    printf("Maior salario: %.2f -- maior idade: %i \n", mSal, maiorIdade);
    printf("Media dos salarios das pessoas com 20 a 30 anos: %.2f \n ",media );
    printf("A porcentagem que ganham mais que 5 MIL: %.2f %% \n ", per);
    

    return 0;
}