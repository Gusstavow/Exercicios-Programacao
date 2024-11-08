#include <stdio.h>
#include <stdlib.h>


 int main(){
  char str1[2][20], str2[10];
 // int i = 0, achou=2;
 int j = 0;
//  printf("Digite a 1ª string: \n");
//  scanf("%s", &str1);
//  printf("Digite a 2ª string: \n");
//  scanf("%s", &str2);
//  for (i=0; str1[i] == str2[i];i++){
//  if (str1[i] == 0 ){
//  achou= 1;
//  }
//  }
//  if (achou == 1){
//  printf("\n As strings são iguais");
//  }else{
//  printf("\n As strings são diferentes");
//  }



printf("Palavra 1 : \n");
//fgets(str1, sizeof(str1), stdin);
scanf("%s", str1[0]);

printf("Palavra 2: \n");

scanf("%s", str1[1]);
int cont[2];

 for(int i = 0; i < 2; i++){
    cont[i] = 0;

 }
for(int i = 0; i < 2; i++){

while(str1[i][j] != '\0'){
    printf("teste %i\n", j+1);
    printf("%c\n", str1[j]);
    
    j++;
    cont[i]++;

}
j = 0;
}

for(int i = 0; i < 2; i++){
printf("A palavra i %s tem %i letras ===== %i\n", str1, cont[i]);
}

 return 0;
 }
