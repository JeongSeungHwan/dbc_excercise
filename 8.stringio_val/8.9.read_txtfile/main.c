#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c;
    FILE *file = NULL; //FILE = 포인터 변수
    char file_name[] = "my_file.txt";

    file = fopen(file_name, "r"); // stream(통로)을 열어준다. r = 읽다. w = 쓰다.
    if (file == NULL) //file이 없을 때
    {
        printf("Failed to open file. \n");
        exit(1);
    }

    while ((c = getc(file)) != EOF)
        putchar(c);
    fclose(file); // file stream을 닫는다.

    return 0;
}