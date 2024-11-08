#include <stdio.h>
#include <stdlib.h>
//#include <string.h>
#include <ctype.h>

int main()
{
    char cor[10][10] = {"rosa", "amarelo", "azul", "vermelho", "cinza", "branco", "verde", "preto", "roxo", "laranja"};
    char verCor[10];
    int tArray = sizeof(cor) / sizeof(cor[0]);
    int cont = 0, g = 0, fim = 1, letras[tArray];
    char final[3] = {"fim"};
    
    do
    {   cont = 0;
        g = 0;
        //zerar variavel letras, todos os loops e limpar a memoria
        for (int i = 0; i < tArray; i++)
        {
            letras[i] = 0;
        }
        printf("Informe uma cor: \n");
        scanf("%s", &verCor);
 
        while (verCor[g] != '\0')
        {
            verCor[g] = tolower(verCor[g]);
            g++;
        }
        g = 0;

        //fim = strcmp("fim", verCor);
        //logica do FIM
        while(verCor[g] != '\0'){
            if(verCor[g] == final[g]){
                cont++;
             
            }else{
                break;
            }
            g++;
        }
        g = 0;

        if(cont == 3){
            fim = 0;
        }

        for (int i = 0; i < tArray; i++)
        {
            cont = 0;
            while (cor[i][g] != '\0')
            {
                letras[i]++;
                // printf("teste for J verCor[j] %i \n", j);
                if (cor[i][g] == verCor[g])
                {
                    cont++;
                }
                g++;
            }

            g = 0;

            if (cont == letras[i])
            {
                printf("===================\n\n");
                // printf("Cor encontrada:  no indice %i \n", i);
                printf("a cor %s foi encontrada no indice: %i\n", cor[i], i);
                printf("===================\n\n");
                // for (int t = 0; t < strlen(cor[i]); t++)
                // {
                //     // char buffer[strlen(cor[i])];
                //     // buffer[t] = cor[i][t];
                //     // printf("buffer no for:  %s \n", buffer);
                // }
                break;
            }
            else if (cont < letras[i] && i == tArray - 1)
            {
                printf("Cor nao encontrada!\n");
                break;
            }
        }
       
        
        
    } while (fim != 0);

    // printf("buffer:  %s \n", p);
    // printf("teste cont: %i \n", cont);
    // printf("teste cor indice 9:  %s \n", cor[9]);
    // printf("teste strlen(cor[9]) :  %i \n", strlen(cor[9]));
    //printf("teste cor[i][j] :  %c \n", cor[9][7]);
    // printf("teste verCor :  %c \n", verCor[0]);
    // printf("======teste sizeof - 1===== :  %i \n", tArray - 1);
    // for (int i = 0; i < tArray; i++)
    // {
    //     printf("teste letras[i] :  %i \n", letras[i]);
    // }

    return 0;
}