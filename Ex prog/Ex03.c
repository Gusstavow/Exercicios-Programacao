#include <stdio.h>
#include <stdlib.h>

int main(){


int num[10];
int tArray = sizeof(num)/ sizeof(num[0]);
int div = 0, qtdPrimos = 0;


for(int i = 0; i < tArray; i++){
    printf("Informe o numero: \n");
    scanf("%i", &num[i]);

    div = 0;
    for(int j = 1; j <= num[i]; j++){
        if(num[i] % j == 0){
            div++;
            


        }
        if(div > 2){
            break;

        }
        

    }
    if(div == 2){
        qtdPrimos++;

    }

    


}

printf("QTantidade de primos: %i", qtdPrimos);
    return 0;
}