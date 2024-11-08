#include <stdlib.h>
#include <stdio.h>

int main()
{
int num = 0, f = 1, calc = 0;
    //  for(int i =0; i < 5; i++){
    //     printf("Informe um numero: \n");
    //     scanf("%i", &num);

    // }

    printf("Informe um numero: \n");
    scanf("%i", &num);
    f = num;

    for(int i = num; i > 1; i--){
      f =f * (i -1);
       printf("Teste %i \n", f);

    }

    

    return 0;
}