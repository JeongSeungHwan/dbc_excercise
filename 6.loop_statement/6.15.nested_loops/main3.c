#include <stdio.h>

int main()
{
    const char first_letter = 'A';
    const char last_letter = 'G';
    
    for (int i = first_letter; i <= last_letter; i++)
    {
        for (char letter = i; letter <= last_letter; letter++)
            printf("%c " ,letter);
        printf("\n");
    }

    return 0;
}