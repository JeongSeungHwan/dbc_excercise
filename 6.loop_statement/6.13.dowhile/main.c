#include <stdio.h>

int main()
{
    const int secret_num = 0;
    int input;

    // printf("Enter secret code : ");
    // scanf("%d", &input);

    // while (input != secret_num)
    // {
    //     printf("Enter secret code : ");
    //     scanf("%d", &input);
    // }

    do
    { 
        printf("Enter secret code : ");
        scanf("%d", &input);
    } while (input != secret_num);

    printf("correct");

    return 0;
}