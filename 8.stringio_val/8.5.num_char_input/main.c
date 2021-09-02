#include <stdio.h>

void display(char c, int row, int col);

int main()
{
    char c;
    int rows, cols;

    while(1)
    {
        c = getchar();

        if (c == '\n')
            break;
        
        else
        {
            scanf("%d %d", &rows, &cols);

            while(getchar() != '\n') continue;
            
            display(c, rows, cols);
        }
        
    }

    return 0;
}

void display(char c, int row, int col)
{
    int i,j;
    for(i = 0; i < row; ++i)
    {
        for(j = 0; j < col; ++j)
            putchar(c);   
        putchar('\n');
    }
}