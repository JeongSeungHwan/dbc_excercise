# include <stdio.h>
# include <stdlib.h>

struct MyStruct
{
    int i;
    float f;
};

int main()
{
    /* 1. size of basic types */

    int a = 0;
    unsigned int int_size1 = sizeof a;
    unsigned int int_size2 = sizeof(int);
    unsigned int int_size3 = sizeof(a);

    size_t int_size4 = sizeof(a);
    size_t float_size = sizeof(float);
    
    printf("Size of a = %u\n",int_size1);
    printf("Size of int = %u\n",int_size2);
    printf("Size of a = %u\n",int_size3);
    printf("Size of a in size_t = %zu\n",int_size4);
    printf("Size of float = %zu\n",float_size);

    // return 0;

    /* 2. size of arrays */

    int int_arr[30];
    int *int_ptr = NULL; 
    int_ptr = (int*)malloc(sizeof(int) * 30);
//    long long *int_malloc = (int*)malloc(sizeof(int) * 30);

    printf("Size of array = %zu bytes\n", sizeof(int_arr));
    printf("Size of pointer = %zu bytes\n", sizeof(int_ptr));
//    printf("%llu\n", int_malloc);

    /* 3. sizeof character array */
    
    char char_a = 'a';
    char string[10];

    size_t size_char = sizeof(char);
    size_t size_str = sizeof(char[10]);

    printf("Size of single char is %lu bytes. \n", sizeof(char_a));
    printf("Size of srting type is %lu bytes. \n", sizeof(string));

    printf("Size of single char is %zu bytes. \n", size_char);
    printf("Size of srting type is %zu bytes. \n", size_str);

    /* 4. sizeof  structure */

    printf("Size of Structure is %zu bytes\n", sizeof(struct MyStruct));
    
    return 0;
}