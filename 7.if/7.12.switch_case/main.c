#include <stdio.h>

int main()
{
    char c;

    while (1)
    {
        if ((c = getchar()) == '.')
            break;

        

        printf("I love ");
        
        switch (c)
        {
        case 'a':
            printf("apple");
            break;
        case 'b':
            printf("bear");
            break;
        case 'c':
            printf("cimchi");
            break;
        default :
            printf("nothing");
        }

        printf("\n");

        while(getchar() != '\n')
            continue;


    }
    return 0;   
}