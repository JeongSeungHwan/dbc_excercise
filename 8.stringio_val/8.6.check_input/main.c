#include <stdio.h>

int get_long();

int main()
{

    printf("Please input an integer and press enter. \n");
    
    while(1)
    {

        long input = get_long(); // dist long or not

        if(1 < input && input < 100) // chekt the range of long
            break;
        else
            printf("It is out of range. Try again. \n");
    }

    printf("Right. The end of travel. \n");

    return 0;
}

int get_long()
{
    long input;
    char c;

    while (scanf("%ld", &input) != 1)
    {
        printf("Your input -");

        while ((c = getchar()) != '\n')
            putchar(c);

        printf(" - is not an integer. Please try again.\n");
    }

    return input;
}