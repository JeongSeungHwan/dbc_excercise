#include <stdio.h>

int main()
{
    int count = 0;

    while(1)
    {           
        printf("this is %d \n", count);
        printf("Count more? [y/n]");

        char c = getchar();
        
        if(c == 'n') //n을 입력하면 종료
            break;
        else if (c == 'y') // y를 입력하면 count++
            count++;
        else // y또는 n이 재입력 요구문 출력
            printf("Incorrect input\n"); 

        while (getchar() != '\n')
            continue;
            
        printf("\n");
    }

    return 0;
}