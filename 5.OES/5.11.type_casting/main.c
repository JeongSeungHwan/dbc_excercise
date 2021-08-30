#include <stdio.h>

int main()
{
    // /* promotions in assignements */

    short s = 64;
    int i = s;

    float f = 3.14f;
    double d = f;

    // /* demotions in assignements */

    // d = 1.25;
    // f = 1.25;
    // f = 1.123f;

    // d = f + 1.234;
    // f = f + 1.234;
    
    d = (double)3.14f;
    i = 1.6 + 1.7;
    i = (int)1.6 + (int)1.7;

    char c;

    f = i = c = 'A'; //65
    printf("%c %d %f\n", c, i, f);
    c = c + 2;
    i = f + 2 * c;
    printf("%c %d %f\n", c, i, f);
    c = 1106;
    printf("%c\n", c);
    c = 83.99;
    printf("%c\n",c);
    
    return 0;
}