#include <stdio.h>

void print_menu();
int select_menu(char select);
void menu_a();
void menu_b();
void menu_c();

int main()
{
    while(1)
    {
        char select;

        print_menu();

        select = getchar();
        while(getchar() != '\n') continue;
        
        if(select_menu(select) == 1)
            break;
    }

    return 0;
}

void print_menu()
{
    printf("\nEnter the letter of yout choice\n");
    printf("a. avengers \t b. beep\n");
    printf("c. count \t q. quit\n");
}

int select_menu(char select)
{
    switch (select)
    {
    case 'a':
        menu_a();
        break;
    case 'b':
        menu_b();
        break;
    case 'c':
        menu_c();
        break;
    case 'q':
        return 1;
    default:
        printf("That's wrong answer here ^^~*\n");
        break;
    }

    return 0;
}

void menu_a()
{
    printf("Avnegers assemble!\n");
}
void menu_b()
{
    printf("There is no beep in MACOS\n");
}
void menu_c()
{
    int cnt;
    printf("Counter start. Input number : ");
    scanf("%d", &cnt);

    while(getchar()!='\n') continue; // clean scanf
    
    for (int i = cnt; cnt != 0; --cnt)
        printf("%d\n",cnt);
    printf("bomb\n");
}