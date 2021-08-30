#include <stdio.h>

int main()
{
    int x = 1, y = 2, z;
    
    x > y + 2; // statement
    x > (y + 2); // compiler

    x = y > 2; // statement
    x = (y > 2); // compiler
    
    z = x > y; // statement
    z = (x > y); // compiler

    x != y == z; // statement
    (x != y) == z; // compiler

    return 0;
}