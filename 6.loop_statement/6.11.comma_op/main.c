#include <stdio.h>

int main()
{
    // for (int n = 1, nsqr = n * n; n < 10; n++, nsqr = n * n)
    //     printf("%d %d\n",n, nsqr);

    int x, y, z;
    
    z = x = 1, y = 2; // 1, 2, 1
    printf("x=%d, y=%d, z=%d \n", x, y, z);

    z = (x = 1), (y = 2); // 1, 2, 1
    printf("x=%d, y=%d, z=%d \n", x, y, z);

    z = ((x = 1), (y = 2)); // 1, 2, 1, 2
    printf("x=%d, y=%d, z=%d", x, y, z);
    
    return 0;
}