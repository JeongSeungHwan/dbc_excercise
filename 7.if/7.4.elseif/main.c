#include <stdio.h>

int main()
{
    const int i_12 = 12000000;
    const int i_46 = 46000000;
    const int i_88 = 88000000;
    const int i_150 = 150000000;
    const int i_300 = 300000000;
    const int i_500 = 500000000;

    const float t_12 = 0.06;
    const float t_46 = 0.15; 
    const float t_88 = 0.24; 
    const float t_150 = 0.35; 
    const float t_300 = 0.38;
    const float t_500 = 0.40;
    const float t_over = 0.42;

    int income;
    double tax;

    printf("Put income : ");
    scanf("%d", &income);

    if (income < i_12)
        tax = income * t_12;
    else if (income < i_46)
    {
        tax = i_12 * t_12;
        tax += (income - i_12) * t_46;
    }
    else if (income < i_88)
    {
        tax = i_12 * t_12;
        tax += (i_46 - i_12) * t_46;
        tax += (income - i_46) * t_88;
    }
    else if (income < i_150)
    {
        tax = i_12 * t_12;
        tax += (i_46 - i_12) * t_46;
        tax += (i_88 - i_46) * t_88;
        tax += (income - i_88) * t_150;
    }
    else if (income < i_300)
    {
        tax = i_12 * t_12;
        tax += (i_46 - i_12) * t_46;
        tax += (i_88 - i_46) * t_88;
        tax += (i_150 - i_88) * t_150;
        tax += (income - i_150) * t_300;
    }
    else if (income < i_500)
    {
        tax = i_12 * t_12;
        tax += (i_46 - i_12) * t_46;
        tax += (i_88 - i_46) * t_88;
        tax += (i_150 - i_88) * t_150;
        tax += (i_300 - i_150) * t_300;
        tax += (income - i_300) * t_500;
    }
    else
    {
        tax = i_12 * t_12;
        tax += (i_46 - i_12) * t_46;
        tax += (i_88 - i_46) * t_88;
        tax += (i_150 - i_88) * t_150;
        tax += (i_300 - i_150) * t_300;
        tax += (i_500 - i_300) * t_500;
        tax += (income - i_500) * t_over;
    }
    
    printf("your tax is %lf", tax);   

    return 0;

}