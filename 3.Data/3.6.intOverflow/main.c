#include <stdio.h>
#include <limits.h>

int main()
{ 
    unsigned int i = 0b11111111111111111111111111111111;
    unsigned int u = UINT_MAX + 2;

    // printf("%lu\n", sizeof(unsigned int));
    // printf("%lu\n", sizeof(i));

    printf("%u\n",i);
    printf("%u\n",u);

    return 0;
}