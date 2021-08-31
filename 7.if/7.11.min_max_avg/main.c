#include <stdio.h>
#include <float.h>

int main()
{
    double d;
    double min = DBL_MAX, max = -DBL_MAX, sum = 0.0, avg = 0.0;
    int cnt = 0;

    while(1)
    {
        if(scanf("%lf",&d) != 1)
            break;
        
        min = min > d ? d : min;
        max = max < d ? d : max;
        
        sum += d;
        cnt++;
    }
    cnt > 0 ? avg = sum / cnt : 0;

    printf("min : %lf, max : %lf, avg : %lf", min, max, avg);

    return 0;
}