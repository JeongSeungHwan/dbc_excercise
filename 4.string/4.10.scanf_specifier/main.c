#include <stdio.h>
#include <inttypes.h>

int main()
{
    // int i;
    // float f;
    // char str[30];
    // scanf("%d %f %s", &i, &f, str); //Note % is absent in front of str
    // printf("%d %f %s",i, f, str);

    // char c;
    // scanf("%c", &c);
    // printf("%i\n", c);

    // unsigned int i;
    // scanf("%i", &i);
    // printf("%i", i);

    // double d = 0.0;
    // scanf("%lf", &d);
    // printf("%f", d);

    // int i;
    // scanf("%i", &i);
    // printf("%i\n", i);

    // int j,k;
    // int i = scanf("%d %d", &j, &k);
    // printf("%d", i);

    int i;
    scanf("%*d%*d%d", &i);
    printf("%d", i);

    return 0;
}