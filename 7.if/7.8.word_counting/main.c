#include<stdio.h>
#include <stdbool.h>
#include <ctype.h>

#define STOP '.'

int main ()
{
    char text;
    int count_ltr = 0;
    int count_word = 0;
    int count_line = 0;
    bool line_flag = false;
    bool word_flag = false;

    printf("Enter text : ");
    
    while ((text = getchar()) != STOP)
    {   
        if (!isspace(text))
            count_ltr++;

        if (!isspace(text) && !line_flag)
        {
            count_line++;
            line_flag = true;
        }

        if (text == '\n')
            line_flag = false;
        
        if (isspace(text) && !word_flag)
        {
            count_word++;
            word_flag = true;
        }

        if (isspace(text))
            word_flag = false;    

    }
    printf("\nletters = %d, words = %d, lines = %d", count_ltr, count_word, count_line);

    return 0;
}
