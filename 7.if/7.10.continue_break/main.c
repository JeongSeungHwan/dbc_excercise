#include <stdio.h>

int main()
{
    for (int i = 0; i < 10; ++i)
    {
        if (i == 5)
            continue;
        
        printf("%d ",i);
    }

    printf("\n")
    
    for (int i = 0; i < 10; ++i)
    {
        if (i == 5)
            break;
        
        printf("%d ",i);
    }

    return 0;
}