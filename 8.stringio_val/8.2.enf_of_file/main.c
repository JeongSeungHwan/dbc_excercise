#include <stdio.h>

// End Of File = EOF

int main()
{
    int c;

    // stream : (데이터가) 흘러가다
    while ((c = getchar()) != EOF) 
        putchar(c);

    // EOF = -1, notice by os. 입력이 끝나면 getchar()은 -1을 반환
    // ctrl + z, ctrl + c(강제)로 종료 신호 전달 
    
    return 0;
}