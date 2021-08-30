#include <stdio.h>

int main()
{
    const int length = 5;
    int numbers[length];
    int sum = 0;

    printf("Enter 5 numbers : ");
    
    for(int i = 0; i < length; i++)
        scanf("%d", &numbers[i]);
    
    for(int i = 0; i < length; i++)
        sum += numbers[i];

    printf("%d",sum);

    return 0;
}