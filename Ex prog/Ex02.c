#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idades[10];
    int soma = 0;
    int qtdIdaM50 = 0, qtdIda30 = 0;
    float media = 0.0f;
    float per = 0.0f;
    int qtdPeMenorM = 0;
    int tam = sizeof(idades)/ sizeof(idades[0]);

    for (int i = 0; i <tam; i++ )
    {
        printf("Informe a idade: \n");
        scanf("%i", &idades[i]);
         soma+= idades[i];

          if(idades[i] > 30){
            qtdIda30++;
            

        }
        if(idades[i] > 50){
            qtdIdaM50++;

        }
    }

 

    if(qtdIda30 > 0){
        per = (qtdIda30 * 100) / tam;
        printf("Teste 2 if \n");

    }
    if(soma > 0){
        media = soma/tam;
    }

    for( int i = 0; i <tam; i++ ){
    if(idades[i] < media){
        qtdPeMenorM++;

    }
    }
    printf("quantidade de pessoas com idade maior que 50 anos: %i \n", qtdIdaM50);
    printf("Media das idades: %.2f \n", media);
    printf("A quantidade de pessoas com idade menor que a media das pessoas: %i \n", qtdPeMenorM);

    printf("Percentagem de pessoas com idades superior a 30 anos: %.2f %% \n", per);

    return 0;
}