#include <stdio.h>

int main()
{
    char str[255];
    int i, i2;
    double d;

    scanf("%s %d %lf", str, &i, &d); // a 11 1.234
    printf("%s %d %f\n", str, i, d); // a 11 1.234
    
    scanf("%s %d %d", str, &i, &i2); // a 11 1.234
    printf("%s %d %d\n", str, i, i2); // a 11 1

    char c;
    while ((c = getchar()) != '\n') //.234\n <- character
        putchar(c); //.234
    printf("\n");

    return 0;
}