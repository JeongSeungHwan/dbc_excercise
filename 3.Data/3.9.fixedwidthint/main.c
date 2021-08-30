#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

int main()
{
    int i;
    int32_t i32; // 32 bit integer
    int_least8_t i8; // smallest 8 bit
    int_fast8_t f8; // fastest minimum
    intmax_t imax; // biggest signed integers
    uintmax_t umax; // bigges signed integers

    // 새로운 자료형이라기보다는 기존의 자료형 중 조건에 가장 맞는 자료형의 이름만 바꿔서 사용할 수 있게 해준다.(명확하게)
    // 너비가 고정된것'처럼' 사용할 수 있게 해준다.

    i32 = 1004;

    // 고정너비 자료형을 사용하는 경우 대부분, 일반 자료형과 차이가 없지만 printf를 사용할 때
    // 해당자료형과 맞는 형식지정자가 무엇인지 알기 어려운 문제가 발생한다.
    printf("me32 = %d\n", i32);
    printf("me32 = %" "d" "\n", i32);
    printf("me32 = %" PRId32 "\n", i32);

    return 0;
}