#include <stdio.h>

int main()
{
    int i = 0, j = 0;
    int sum = 0;

    printf("Input two integers\n");
    
    scanf("%d%d", &i, &j);
    
    sum = i + j;

    printf("Value is %d + %d = %d\n", i,j,sum);

    return 0;
}