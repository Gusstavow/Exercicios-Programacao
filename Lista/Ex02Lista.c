#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int numero[10];
    int menorNumero = 0;
    int somaParMaior10 = 0;
    int qtdImpar = 0, qtdMaior20 = 0;
    int media = 0 , soma = 0;

    int size = sizeof(numero)/ sizeof(numero[0]);

    for(int i =0; i < size ; i++){
        printf("Informe o %iª numero: \n", i+1);
        scanf("%i", &numero[i]);

        if(i > 1){
            menorNumero = numero[i];
        }else if(numero[i] > menorNumero){
            menorNumero = numero[i];

        }

        if(numero[i] %2 == 0 && numero[i] > 10){
            somaParMaior10+= numero[i];


        }
        if(numero[i]%2 == 1){
            qtdImpar++;

        }

        if(numero[i] > 20){
            soma+= numero[i];
            qtdMaior20++;


        }

    }
    if(qtdMaior20 != 0 || soma != 0){
        media = soma / qtdMaior20;

    }

    printf("Menor Numero: %i\n", menorNumero);
    printf("Soma Numeros pares e maiores que 10: %i \n", somaParMaior10);
    printf("Quantidade de numeros impares: %i \n", qtdImpar);
    printf("Media dos numeros mairoes que 20: %i \n", media);

    return 0;
}