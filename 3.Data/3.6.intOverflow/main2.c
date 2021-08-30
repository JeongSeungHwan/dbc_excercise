#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

int main()
{
    unsigned int u_max = UINT_MAX;

    //u_max to binary representation
    char buffer[33];
    //_itoa(u_max, buffer, 2);

    //print decimal and binary
    printf("decimal: %u\n", u_max);
    printf("binary: %s\n", buffer);

    return 0;
}