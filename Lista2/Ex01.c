#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){
setlocale(LC_ALL, "Portuguese");
int idades[10], menoridade = 0, qtdPeIda20a30Anos = 0, qtdPeMaMedia = 0, soma = 0;
float media = 0.0f;
int length = sizeof(idades)/ sizeof(idades[0]);

for(int i =0; i < length; i++){
    printf("Informe a idade da Pessoa %i \n", i+1);
    scanf("%i", &idades[i]);
    soma += idades[i];

    if(i ==0){
        menoridade = idades[i];

    }else if(idades[i] < menoridade  ){
        menoridade = idades[i];

    }

    if(idades[i] >= 20 && idades[i] <= 30){
        qtdPeIda20a30Anos++;

    }

   

}

if(soma > 0){
    media = soma/length;

}

for(int i =0; i < length; i++){
    if(idades[i] > media){
        qtdPeMaMedia++;

    }
}

printf("a menor idade: %i  \n", menoridade);
printf("a média das idades: %.2f \n", media);
printf(" a quantidade de pessoas que tem idade entre 20 e 30 anos (inclusive): %i\n", qtdPeIda20a30Anos);
printf("a quantidade de pessoas com idade maior que a média: %i  \n", qtdPeMaMedia);


    return 0;
}