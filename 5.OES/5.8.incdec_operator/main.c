#include <stdio.h>

int main()
{
/*     int a = 0;
    a++;
    printf("%d\n",a);

    ++a;
    printf("%d\n", a); */
    
/*     int count1 = 0;
    int count2 = 0;
    
    while (count1 < 10)
    {
        printf("%d ", ++count1);
    }
    
    printf("\n");

    while (count2 < 10)
    {
        printf("%d ", count2++);
    } */
    
/*     int i = 10, i2 = 10, j, k, l, m;
    
    j = ++i;
    k = i++;
    l = i2++;
    m = ++i2;

    printf("%d\n%d\n%d\n%d\n%d\n%d\n", j, k, i, l, m, i2); */

/*     int x, y, z;
    x = 3;
    y = 4;
    z = (x + y++) * 5;
    printf("%d %d %d",x, y, z);

    return 0; */

    int n = 1;
    printf("%d %d\n", n, n * n++);
    int x = n / 2 + 5 * (1 + n++);
    int y = n++ + n++;

    return 0;
}