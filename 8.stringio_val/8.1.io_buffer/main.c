#include <stdio.h>
#include <conio.h> //just windows, _getch(), _getche()

// 버퍼를 사용하는 이유 : 효율을 위한 일괄 처리
// 

int main() // do not use buffer example
{
    char c;

    while ((c = _getche()) != '.') // e means echo
        putchar(c);

    // out : hheelloo.

    while ((c = _getch() != '.'))
        putchar(c);
    
    // out : hello

    return 0;
}