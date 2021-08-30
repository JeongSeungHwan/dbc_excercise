#include <stdio.h>
#include <float.h>

int main()
{
    printf("%lu\n", sizeof(float));
    printf("%lu\n", sizeof(double));
    printf("%lu\n", sizeof(long double));

    float f = 123.456f;
    double d = 123.456;

    float f2 = 123.456;
    double d2 = 123.456f;

    int i = 3;
    float f3 = 3.0f;
    float d3 = 3.0;

    float f4 = 1.234e3f;

    float f5 = 0x1.1p0;
    double d5 = 1.0625e0;

    float f6 = 0xabf.11p0;
    float f7 = 0x2.ap1;
    float f8 = 0x2.ap2;
    float f9 = 0x2.ap3;

    printf("%f %F %e %E\n", f, f, f, f);
    printf("%f %F %e %E\n", d, d, d, d);
    printf("%a %A\n", f5, f5);
    printf("%a %A\n", d5, d5);
    printf("%a %f %e\n",f5, f5, f5);
    printf("%f %f %f %f\n",f6, f7, f8, f9);

    return 0;
}