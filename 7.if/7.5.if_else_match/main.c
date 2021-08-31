#include <stdio.h>

int main()
{
    int number;

    scanf("%d", &number);

    if (number > 5)
    {
        if (number < 10)
            printf("Larger than 5 smaller than 10\n");
    }
    else
        printf("Less than or equal to 5");

    return 0;
}