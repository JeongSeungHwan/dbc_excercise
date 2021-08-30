#include <stdio.h>

int main()
{
    float n1 = 3.14;
    double n2 = 1.234;
    int n3 = 1024;

    printf("%f %f %d\n", n1, n2, n3);

    printf("%d %d %d\n", n1, n2, n3);
    printf("%lld %lld %d\n", n1, n2, n3);
    
    return 0;

}