#include <stdio.h>

int main()
{
    //1. 출력
    printf("I love apple.\n");
    /* 터미널에서 ./main(실행파일) > output.txt 명령을 통해, 
    console에 출력되던 내용을 output.txt로 redirection할 수 있다. */

    //2. 입력
    char str[100];
    scanf("%s", str);
    printf("I love %s\n", str);
    /* ./main < input.txt를 통해 input redirection도 가능하다. */

    // 3. 파이프라인
    printf("Grape");

    char str[100];
    scanf("%s",str);
    printf("I love %s\n, str");

    return 0;
}