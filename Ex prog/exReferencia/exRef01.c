#include <stdio.h>
#include <string.h>
#include <locale.h>
void inverter_string(char *str)
{
    int i = 0;
    int j = strlen(str) - 1;
    while (i < j)
    {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
}
int main()
{
    setlocale(LC_ALL, "Portuguese");
    char texto[] = "Olá Mundo";
    printf("\n String original %s", texto);
    inverter_string(texto);
    printf("\n String invertida %s", texto);
    return 0;
}