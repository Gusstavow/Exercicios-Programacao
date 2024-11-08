#include <stdio.h>
#include <stdio.h>

int main(){

const int n = 5;
int vet[n];
int somaPrimos = 0, somaMult3 = 0;
float media = 0.0f;
int qtdImp = 0 , div =0, qtdMult3 = 0;

for(int i =0; i < n; i++){
    div = 0;
    printf("Informe um numero: \n");
    scanf("%i", &vet[i]);

    //logica primos====
    for(int j = 1; j <= vet[i]; j++){
        if(vet[i] % j == 0){
            div++;

        }
        if(div > 2){
            break;

        }

    }
    if(div == 2){
        somaPrimos+=vet[i];

    }
    //==========
    if(vet[i] % 3 == 0){
        qtdMult3++;
        somaMult3+= vet[i];

    }
    if(vet[i] % 2 != 0 && vet[i] > 10){
        printf("Teste \n");
        qtdImp++;

    }

}

if(somaMult3 > 0){
    media = somaMult3/qtdMult3;

}

printf("Soma Primos %i \n", somaPrimos);
printf("Media dos numeros multiplos de 3: %.2f \n", media);
printf("Quantidade de numeros impares e maiores que 10: %i \n", qtdImp);
    return 0;
}