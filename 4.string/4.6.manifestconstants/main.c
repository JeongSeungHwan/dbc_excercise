#include <stdio.h>
#include <limits.h>
#include <float.h>

#define PI 3.141592 //manifest constants, symbolic constants

int main()
{
    printf("PI is %f\n",PI);
    printf("Biggest int : %i\n",INT_MAX);
    printf("One byte in this system is %d bits\n",CHAR_BIT);
    printf("Smallest normal float %e\n", FLT_MIN);

    return 0;
}