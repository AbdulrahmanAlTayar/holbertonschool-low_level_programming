#include <stdio.h>
#include "function_pointers.h"

void print_name_as_is(char *name)
{
    printf("Hello, my name is %s\n", name);
}

void print_name_uppercase(char *name)
{
    unsigned int i;

    printf("Hello, my uppercase name is ");
    i = 0;
    while (name[i])
    {
        if (name[i] >= 'a' && name[i] <= 'z')
            putchar(name[i] - 32);
        else
            putchar(name[i]);
        i++;
    }
    putchar('\n');
}

int main(void)
{
    print_name("Bob", print_name_as_is);
    print_name("Bob Dylan", print_name_uppercase);
    return (0);
}

