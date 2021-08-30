#include <stdio.h>

int main()
{
    double distance_achileus = 0.0;
    double speed_achileus = 100.0;
    
    double distance_turtle = 100.0;
    double speed_turtle = 10.0;
    
    int ten_sq = 1;
    double time = 1.0;

    for (int i = 0; i < 6; i++)
    {
        distance_achileus = distance_achileus + time * speed_achileus;
        distance_turtle = distance_turtle + time * speed_turtle;

        printf("time : %.10f turtle : %.10f achileus : %.10f\n",time, distance_turtle, distance_achileus);

        ten_sq = ten_sq * 10;
        time = time / ten_sq;
    }

    return 0;
}