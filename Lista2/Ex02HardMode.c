#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()

{
    char cor[10][10] = {"rosa", "amarelo", "azul", "vermelho", "cinza", "branco", "verde", "preto", "roxo", "laranja"};
    char verCor[10];
    int tArray = sizeof(cor) / sizeof(cor[0]);

    int cont, g, fim;
    do
    {

        printf("Informe uma cor: \n");
        scanf("%s", &verCor);

        for (int i = 0; i < strlen(verCor); i++)
        {
            verCor[i] = tolower(verCor[i]);
        }
        fim = strcmp("fim", verCor);

        for (int i = 0; i < tArray; i++)
        {
            cont = 0;

            for (int j = 0; j < strlen(cor[i]); j++)
            {

                // printf("teste for J verCor[j] %i \n", j);
                if (cor[i][j] == verCor[j])
                {

                    cont++;
                }
            }
            if (cont == strlen(cor[i]))
            {
                printf("===================\n\n");
                //printf("Cor encontrada:  no indice %i \n", i);
                printf("a cor %s foi encontrada no indice: %i\n", cor[i], i);
                printf("===================\n\n");
                // for (int t = 0; t < strlen(cor[i]); t++)
                // {
                //     // char buffer[strlen(cor[i])];
                //     // buffer[t] = cor[i][t];

                //     // printf("buffer no for:  %s \n", buffer);
                // }
                break;
            }else if (cont < strlen(cor[i]) && i == tArray - 1)
            {
                printf("Cor nao encontrada!\n");
                break;
            }
        }
    } while (fim != 0);

    //printf("buffer:  %s \n", p);
    //printf("teste cont: %i \n", cont);
    //printf("teste cor indice 9:  %s \n", cor[9]);
    //printf("teste strlen(cor[9]) :  %i \n", strlen(cor[9]));
    //printf("teste cor[i][j] :  %c \n", cor[0][0]);
    //printf("teste verCor :  %c \n", verCor[0]);
    //printf("======teste sizeof - 1===== :  %i \n", tArray - 1);

    return 0;
}