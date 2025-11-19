#include <stdio.h>

/*

nCr = n! / r!(n-r)!

*/

int main()
{

    int n =5, r=3, resultsN = 1, resultsR = 1, resutlsNR = 1, nr, formula;



    for (int i = 1; i <= n; i++)
    {
        resultsN = resultsN * i;
    }
    for (int j = 1; j <= r; j++)
    {
        resultsR = resultsR * j;
    }
    printf("n!: %d\n", resultsN);
    printf("r!: %d\n", resultsR);
    nr = n - r;
    printf("nr: %d\n", nr);
    for (int y = 1; y <= nr; y++)
    {
        resutlsNR = resutlsNR * y;
    }

    printf("nr!: %d\n", resutlsNR);
    formula = resultsN / (resultsR * resutlsNR);
    printf("nCr = %d\n", formula);

    return 0;
}
