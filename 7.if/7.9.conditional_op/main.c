#include <stdio.h>
#include <stdbool.h>

int main()
{
    int number;
    bool is_even;

    scanf("%d", &number);

    is_even = (number % 2 == 0) ? true : false;

    is_even ? printf("Even") : printf("Odd");

    return 0;
}