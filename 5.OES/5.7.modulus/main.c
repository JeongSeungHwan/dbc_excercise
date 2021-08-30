#include <stdio.h>

int main()
{
    int input_seconds = 0;
    int hour = 0, minute = 0, second = 0;

    printf("Input seconds : ");
    scanf("%i", &input_seconds);

    while (input_seconds >= 0)
    {
        hour = input_seconds / 3600;
        minute = input_seconds % 3600 / 60 ;
        second = input_seconds % 60;

        printf("This is %i hours %i minutes %i seconds\n", hour, minute, second);
        
        printf("Input seconds : ");
        scanf("%i", &input_seconds);
    }
    
    return 0;
}