#include <stdio.h>
#include <float.h>

int main()
{
    // round-off errors (ex1)
    float a, b;
    a = 1000.0f + 1.0f;
    b = a - 1000.0f;
    printf("%f\n",b);

    a = 1.0e20f + 1.0f;
    b = a - 1.0e20f;
    printf("%f\n",b);

    // round-off orrers (ex2)
    a = a + 0.01f;
    printf("%f\n",a);

    // overflow
    float max = 3.402823466e+38F;
    printf("%f\n", max);
    max = max + 1.01f;
    printf("%f\n", max);

    // underflow


    return 0;
}