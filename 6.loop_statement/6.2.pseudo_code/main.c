#include <stdio.h>

int main()
{

    int input,sum = 0; // sum을 0으로 초기화한다.

    printf("Enter an integer : "); // 사용자에게 안내한다.

    while(scanf("%i",&input) == 1) // 사용자에게 입력을 받고, 그 입력이 정수인 동안에는
    {
        sum = sum + input; // 그 입력을 sum에 더한다.
        printf("Enter an integer : "); // 사용자에게 안내하고, 다시 입력을 받는 단계로 돌아간다.
    }

    printf("sum = %d",sum); //sum을 출력한다.
    
    return 0;
}