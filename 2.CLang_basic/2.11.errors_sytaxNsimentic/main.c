#include <stdio.h>

void something(void)
{
    printf("whynotworking");

    return;
}

int main()
{
    int n1, n2, n3, n4;

    n1 = 1;
    n2 = n1 * n1;
    n3 = n2 * n1;
    n4 = n2 * n1;

    something();

    return 0;
}
