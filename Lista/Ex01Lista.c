#include <stdlib.h>
#include <stdio.h>

int main(){

    int op;
    printf("Informe um numero de 1 a 12: \n");
    scanf("%i", &op);

    switch(op){
        case 1:
        printf("Janeiro!\n");
        break;

        case 2:
        printf("Fevereiro!\n");
        break;

        case 3:
        printf("março!\n");
        break;

         case 4:
        printf("Abril!\n");
        break;

         case 5:
        printf("Maio!\n");
        break;

         case 6:
        printf("Junho!\n");
        break;

         case 7:
        printf("Julho!\n");
        break;

         case 8:
        printf("Agosto!\n");
        break;

         case 9:
        printf("Setembro!\n");
        break;

         case 10:
        printf("Outubro!\n");
        break;

         case 11:
        printf("Novembro!\n");
        break;

         case 12:
        printf("Dezembro!\n");
        break;


    }

    return 0;
}