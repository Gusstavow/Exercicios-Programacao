#include <stdio.h>
#include <stdlib.h>

int SomarDorbro(int *a, int *b){
    int soma =0;
    *a *= 2;
    //*a = 2 * *a;
    *b = 2 * *b;
    soma = *a + *b;

    return soma;
}

int main(){
    int x, y, res;

    printf("Entre c 1ª numero: \n");
    scanf("%i", &x);

        printf("Entre c 2ª numero: \n");
    scanf("%i", &y);

    res = SomarDorbro(&x, &y);
    printf("\n a soma dos numeros %i e %i : %i", x, y, res);
    return 0;
}