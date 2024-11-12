#include <stdio.h>
#include <stdlib.h>

void Calc();
int main(){

    int numA =0, numB = 0;
    int soma = 0, prod = 0;

    printf("Informe o 1º numero: \n");
    scanf("%i", &numA);

    printf("Informe o 1º numero: \n");
    scanf("%i", &numB);

    Calc(numA, numB, &soma, &prod);

    printf("Soma %i \n",soma);
    printf("Produto %i \n",prod);
    
    return 0;
}

void Calc(int num1, int num2, int *sum, int *prd){

    *sum = num1 + num2;
    *prd = num1 * num2;

}