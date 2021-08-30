#include <stdio.h>
#include <stdbool.h>

int main()
{
    _Bool boolean_true = (2 > 1);
    _Bool boolean_false = (1 > 2);

    printf("True is %d\n", boolean_true);
    printf("False is %d\n", boolean_false);

    bool bt = true;
    bool bf = false;

    printf("\n");
    printf("True is %i\n",bt);
    printf("False is %i\n", bf);

    return 0;

}