#include <stdio.h>

int main()
{
    const char first_letter = 'A';
    const int row_column_num = 8;

    for (int i = 0; i < row_column_num; i++)
    {
        for (char letter = first_letter; letter <= first_letter + i; letter++)
            printf("%c ",letter);
        
        printf("\n");
    }
    
    return 0;
}