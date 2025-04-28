#include <stdio.h>

/**
 * main - prints all numbers of base 16 in lowercase
 *
 * Description: program prints all hexadecimal digits (0-9, a-f)
 * followed by a new line.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
    int i;

    for (i = 0; i < 10; i++)
    {
        putchar(i + '0');
    }

    for (i = 0; i < 6; i++)
    {
        putchar(i + 'a');
    }

    putchar('\n');

    return (0);
}

