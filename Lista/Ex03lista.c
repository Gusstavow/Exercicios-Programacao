#include <stdlib.h>
#include <stdio.h>

int main(){
    int num[10];
    int primos = 0;
    int somaPrimos = 0;
    int media = 0;
    int multTres =0;
    int qtdNum = 0;

          
          for(int i =0; i<10; i++){
            int j = 2;
            printf("informe o numero \n");
            scanf("%i", &num[i]);

            
              

            while(num[i] % j ==1 && num[i] != j){
                j++;

                if(num[i] == j){
                printf("Primo \n");
            }

            }
            
         
        

          }
          
    return 0;
    // 1 2 3 5 7 11 13 17 19 23//
    //1,1,1,2,2,4,2,4,2,4
}