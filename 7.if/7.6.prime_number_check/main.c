#include <stdio.h>
#include <stdbool.h>

bool isPrime(int number);

int main()
{
    int number = 1;
    
    while(number > 0)
    {
        printf("Enter the number : ");
        scanf("%u", &number);

        if (isPrime(number) == true)
            printf("This is prime number\n");
        else
            printf("This is not prime number\n");
    }

    return 0;
}

bool isPrime(int number)
{
    bool prime = true;
    int i;

    for(i = 2; i < number; ++i)
    {
        if(number % i == 0)
        {
            prime = false;
            return prime;
        }
    }

    return prime;
}
