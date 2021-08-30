#include <stdio.h>

int main()
{
    const int num_rows = 5;
    const char first_char = 'A';
    const char last_char = 'K';

    for (int i = 0; i < num_rows; i++)
    {
        for(char letter = first_char; letter <= last_char; letter++)
            printf("%c ",letter);
        printf("\n");
    }

    return 0;
}