#include <stdio.h>
#include <stdlib.h>

int main(){
char nome[20];

printf("Inofrme o nome: \n");

fgets(nome, sizeof(nome), stdin);

printf("TEste : %s \n", nome);
printf("TEste : %c \n", nome[2]);


    return 0;


}
