#include <stdio.h>
#include <stdlib.h>

int main(){

    int num = 0, tab = 0, tam = 0;
    printf("Informe o numero que deseja saber a tabuada: \n");
    scanf("%i", &num);

    printf("Informe ate qual numero a tabuada ira: \n");
    scanf("%i", &tam);

    printf("A tabuada do numero: %i \n", num);

    for(int i =0; i <=tam; i++){
        tab = num * i;
        printf(" %i X %i = %i\n", num,i, tab);

    }

    return 0;
}