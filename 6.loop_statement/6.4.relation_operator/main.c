#include <stdio.h>
#include <math.h>

int main()
{
    // int n = 0;
    // while (n++ < 5)
    //     printf("%d ", n);

    // printf("\n");

    // char c = 'A';
    // while (c != 'Z')
    //    printf("%c ", c++);
    
    const double PI = 3.141592653597921284616422821795;
    double guess = 0.0;

    printf("Input pi : ");
    scanf("%lf", &guess);
    while (fabs(guess-PI) > 0.01)
    {
        printf("Fool! Try again.\n");

        printf("Input pi : ");    
        scanf("%lf", &guess);
    }

    printf("Good!");

    return 0;
}