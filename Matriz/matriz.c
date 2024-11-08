#include <stdio.h>
#include <stdlib.h>

int main()
{

    int matriz[5][6];

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            matriz[i][j] = 0;
        }
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 6; j++)
        {
           

            matriz[i][j] = matriz[i][j - 1] + 1;
        }
    }
    ///      c0  c1  c2  c3  c4  c5
    //   |   |   |   |   |   |
    /*  linha 0 - 01, 02, 03, 04, 05, 06
        linha 1 - 07, 08 ,09, 10, 11, 12
        linha 2 - 13, 14, 15, 16, 17, 18
        linha 3 - 19, 20, 21 ,22, 23, 24
        linha 4 - 25, 26, 27, 28, 29, 30

         */

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            printf("%i\t", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}