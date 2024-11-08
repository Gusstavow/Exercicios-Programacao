#include <stdio.h>
#include <stdlib.h>

char nota();
int main()
{
    int num = 0;

    printf("Informe a nota do aluno: \n");
    scanf("%i", &num);

    printf("a nota %i é equivalente a: %c", num, nota(num));

    return 0;
}
char nota(int nota){
    if(nota >= 9 && nota <=10){
        return 'A';

    }else if(nota >= 7 && nota <=8,9){
        return 'B';

    }else if(nota >= 5 && nota <=6,9){
        return 'C';

    }else if(nota >= 3 && nota <=4,9){
        return 'D';

    }else if(nota >= 0 && nota <=2,9){
        return 'E';

    }

}