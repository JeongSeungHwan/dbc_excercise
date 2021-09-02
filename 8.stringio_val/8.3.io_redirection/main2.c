#include <stdio.h>

int main()
{
    // 3. 파이프라인
    //printf("Grape");

    char str[100];
    scanf("%s",str);
    printf("I love %s\n", str);

    /* | 연산자를 통해 한 프로그램의 출력결과를 바로 입력으로 받을 수 있다.
    ex) ./grape(output : "grape") | ./main2(scanf str)  >> I love grape */

    return 0;
}