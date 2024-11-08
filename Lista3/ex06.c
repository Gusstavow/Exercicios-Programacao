#include <stdio.h>
#include <stdlib.h>

const int n = 3;
void print();

int main()
{

    float salary[n];
    int age[n], nChld[n];
    float mat[n][3];

    for (int i = 0; i < n; i++)
    {

        printf("Informe o salario da %i ª pessoa: \n", i + 1);
        scanf("%f", &salary[i]);

        printf("informe a idade da %i ª pessoa: \n", i + 1);
        scanf("%i", &age[i]);

        printf("informe o numero de filhos da %i ª pessoa: \n", i + 1);
        scanf("%i", &nChld[i]);

        for (int j = 0; j < 3; j++)
        {
            switch (j)
            {
            case 0:
                mat[i][j] = salary[i];
                break;

            case 1:
                mat[i][j] = age[i];
                break;

            case 2:
                mat[i][j] = nChld[i];
                break;
            }
        }
    }

    print(mat);

    return 0;
}

void print(float mtz[][n])
{

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%.2f \t", mtz[i][j]);
        }
        printf("\n");
    }

    printf("");
}