#include <stdio.h>

int main()
{
    char ch;

    // ch = getchar();
    // putchar(ch);

    //while (ch != '\n') // Use '\n' to find the end of a sentence
    while ((ch = getchar()) != '\n')
        putchar(ch);

    return 0;
}
