#include <stdlib.h>
#include <stdio.h>

int main()
{
    const int n = 5;
    int idades[n];
    float alturas[n], media[2] = {0,0};
    float menorAlt = 0.0f, soma = 0.0f, soma180cm = 0.0f;
    int iMenAlt = 0, maiorIdade = 0, qtdPeIdaMaiorAvg = 0, qtdPeMr180cm = 0;;

    for (int i = 0; i < n; i++)
    {
        printf("Informe a idade da %iª pessoa: \n", i + 1);
        scanf("%i", &idades[i]);

        printf("Informe a altura da %iª pessoa \n", i + 1);
        scanf("%f", &alturas[i]);
        if (i == 0)
        {
            menorAlt = alturas[i];
            maiorIdade = idades[i];
        }
        else if (alturas[i] < menorAlt)
        {
            menorAlt = alturas[i];
            iMenAlt = i;
        }

        if (idades[i] > maiorIdade)
        {
            maiorIdade = idades[i];
        }

        if (alturas[i] > 1.80)
        {
            qtdPeMr180cm++;
            soma180cm += idades[i];
        }
        soma+= idades[i];
    }

if(soma180cm >  0){
    media[0] = soma180cm / qtdPeMr180cm;

}
if(soma > 0){
    media[1] = soma / n;

}

    for(int i = 0; i <  n; i++){
        if(idades[i] > media[1]){
            qtdPeIdaMaiorAvg++;

        }

    }

    printf("A menor altura:%.2f e a idade dessa pessoa:%i \n", alturas[iMenAlt], idades[iMenAlt]);
    printf("A média das idades das pessoas com mais de 1,80: %.2f \n", media[0]);
    printf("A maior idade: %i\n", maiorIdade);
    printf("Media de todas as idades: %.2f\n", media[1]);
    printf("a quantidade de pessoas com idade maior que a média: %i\n", qtdPeIdaMaiorAvg);
    return 0;
}