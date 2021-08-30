#include <stdio.h>
#define PI 3.141592f

int main()
{
    float radius, area, circum;

    printf("Input radius\n");
    
    scanf("%f", &radius);

    area = PI * radius * radius;
    circum = PI * radius * 2.0f;

    printf("Area is %f\n", area);
    printf("Circumference is %f\n", circum);

    return 0;
}