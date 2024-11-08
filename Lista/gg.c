#include <stdlib.h>
#include <stdio.h>

int main(){
    int idade[10], peso[10], qtdPessoas = 0, soma = 0, media = 0;
    int size = sizeof(idade) / sizeof(idade[0]);
    

    for(int i = 0; i < size; i++){
        printf("Informe a idade da %iª pessoa: \n", i+1);
        scanf("%i", &idade[i]);

         printf("Informe a peso da %iª pessoa: \n", i+1);
        scanf("%i", &peso[i]);
        if(peso[i] > 90){
            qtdPessoas++;

        }
        soma+= idade[i];

    }
    media = soma /size;
    printf("Pessoas com mais de 90 quilos: %i \n", qtdPessoas);
    printf("Media: %i \n", media);

    return 0;
}