#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char cor[10][10] = {"amarelo", "azul", "vermelho", "cinza", "branco", "rosa", "verde", "preto", "roxo", "laranja"};
    
    char verCor[10];
    
    int comp, i, fim;

    do
    {

        printf("Informe uma cor: \n");
        scanf("%s", &verCor);

        for(int i =0; i< strlen(verCor); i++){
            verCor[i] = tolower(verCor[i]);

        }
        
        fim = strcmp("FIM", verCor);
        if (fim != 0)
        {

            for (i = 0; i < 10; i++)
            {
                
                comp = strcmp(verCor, cor[i]);

                if (comp == 0)
                {
                    printf("A cor existe! no indice: %i \n", i);
                    break;
                }
                else if (comp != 0 && i >= 9)
                {
                    printf("A cor Não existe !!! \n");
                }
            }
        }

    } while (fim != 0);

    return 0;
}