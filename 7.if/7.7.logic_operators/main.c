#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#include <iso646.h>

#define PERIOD '.'

int main()
{
    char ch;

    int count = 0;

    while ((ch = getchar()) != PERIOD)
    {
        if (ch != '\n' && ch != ' ')
            count++;
    }
    printf("%d", count);
    
    return 0;
}