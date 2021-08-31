#include <stdio.h>

int main()
{
    char ch;

    while ((ch = getchar()) != '\n')
    {
        if (ch == 'f' || ch == 'F')
            ch = 'x';
        
        putchar(ch);
    }

    return 0;
}