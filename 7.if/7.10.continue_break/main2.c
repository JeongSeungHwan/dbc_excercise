#include <stdio.h>

int main()
{
    while(1)
    {
        char c = getchar();

        if (c == '\n')
            break;
        
        putchar(c);
    }

    return 0;
}