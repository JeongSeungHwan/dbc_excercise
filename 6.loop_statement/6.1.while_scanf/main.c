#include <stdio.h>

int main()
{

    int input,sum ;

    printf("Enter an integer : ");

    while(scanf("%i",&input) == 1)
    {
        sum = sum + input;
        printf("Enter an integer : ");
    }

    printf("sum = %d",sum);
    
    return 0;
}