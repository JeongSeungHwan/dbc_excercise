#include <stdio.h>

int main()
{
    char ch;
    int i;

    while((ch = getchar()) != '\n')
    {
        // for (i = '0'; i <= '9'; ++i)
        if(ch >= '0' && ch <= '9')
            ch = '*';
        
        putchar(ch);
    }

    return 0;
}