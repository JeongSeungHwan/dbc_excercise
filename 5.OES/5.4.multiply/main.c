#include <stdio.h>

int main()
{   
    int seed_money, target_money;
    double annual_interst;
    
    printf("Input seed money : ");
    scanf("%i", &seed_money);

    printf("Input target money : ");
    scanf("%i", &target_money);
    
    printf("Input annual interest(%%) : ");
    scanf("%lf", &annual_interst);

    printf("%i, %i, %lf\n", seed_money, target_money, annual_interst);

    double fund = seed_money;
    int year = 0;

    while(fund < target_money)
    {
        fund = fund + fund * annual_interst * 0.01;
        year = year + 1;

        printf("%3i Year : %f\n", year, fund);
    }
    printf("It takes %d years\n", year);

    return 0;
}