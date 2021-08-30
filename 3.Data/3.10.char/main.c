#include <stdio.h>

int main()
{
    char c = 'A';
    char d = 65;

    printf("%c %hhd\n", c, c);
    printf("%c %hhd\n", d, d);
    
    printf("%c \n",c+1);

    char a = '\a';
    printf("Bell %c \n",a); 

    float salary;

//    printf("$______\n");
//    printf("$______\b\b\b\b\b\b");
//    scanf("%f", &salary);

    printf("AB\tCDEF\n");
    printf("ABC\tDEF\n");

    return 0;
}