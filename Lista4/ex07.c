#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

const int qtd = 20;

int Contarletras(char string[qtd], char letra);
int main()
{
    char palavra[qtd], letra;

    printf("informe a palavra: \n");
    fgets(palavra, sizeof(palavra), stdin);
    palavra[strcspn(palavra, "\n")] = '\0';
    fflush(stdin);

    printf("informe a letra a ser contada: \n");
    scanf("%c", &letra);

    letra = toupper(letra);
    palavra[qtd] = strupr(palavra);
    
    printf("A palavra %s possui %i letra(s) %c: \n", palavra, Contarletras(palavra, letra), letra);
    return 0;
}

int Contarletras(char string[qtd], char letra)
{
    int count = 0;
    int qtdLetras = 0;
    while (string[count] != '\0')
    {
        if (string[count] == letra)
        {
            qtdLetras++;
        }
        count++;
        // printf("teste %i \n", count);
    }
    return qtdLetras;
}