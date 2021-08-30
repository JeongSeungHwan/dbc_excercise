#include <stdio.h>

int calc_pow (int base, int exp);

int main()
{
    int base, exp;

    while (scanf("%d %d", &base, &exp) == 2)
        printf("Result = %d\n", calc_pow(base, exp));

    return 0;
}

int calc_pow (int base, int exp)
{
    int i, result;

    result = 1;

    for (i = 0; i < exp; ++i)
        result = result * base;
    
    return result;
}